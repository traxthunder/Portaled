using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using Portaled.Interop;
using Portaled.Service.DBObj;

namespace Portaled.Service.Managers
{
    public static class DatIOManager
    {
        static bool _initialized = false;

        internal static Portaled.Interop.DBCache _DBCache;
        internal static Portaled.Interop.AsyncCache _AsyncCache;

        public unsafe static void Initialize()
        {
            if (_initialized)
                return;

            _initialized = true;

            var cacheptr = new IntPtr(*(int*)new IntPtr(0x00837bac).ToPointer());

            _DBCache = Portaled.Interop.DBCache.__CreateInstance(cacheptr);
            _AsyncCache = _DBCache.AsyncCache;

            var caches = new Dictionary<uint, Portaled.Interop.DBOCache>();
            var cachesList = new List<DBCache>();
            for (uint i = 0; i < 200; i++)
            {
                var qdid1 = new Portaled.Interop.QualifiedDataID(0, i);
                var ocache = _AsyncCache.GetDBOCache(qdid1);
                if (ocache != null)
                {
                    SetupCache(i, ocache);
                }
            }

            StringBuilder sb = new StringBuilder();
            foreach(var cache in cachesList)
            {
                sb.AppendLine($"{cache.DBType},{cache.Allocator.ToInt32().ToString("X4")}");
            }
            var s = sb.ToString();
        }

        public static T GetByDID<T>(uint did)
            where T : DBObjEx
        {
            var cache = Caches.CacheDict[typeof(T)];
            if (cache == null)
                return null;
            var cacheex = (DBCache<T>)cache;
            var obj = cacheex.GetByDID(did);
            return obj;
        }

        private static void SetupCache(uint type, Interop.DBOCache ocache)
        {
            DBCache cache = null;
            switch (type)
            {
                case 11:
                    cache = new DBCache<DBObj.ImgTex>(ocache);
                    Caches.CacheDict[typeof(DBObj.ImgTex)] = cache;
                    Caches.ImgTex = (DBCache <DBObj.ImgTex>)cache;
                    break;
                case 12:
                    cache = new DBCache<DBObj.RenderSurface>(ocache);
                    Caches.CacheDict[typeof(DBObj.RenderSurface)] = cache;
                    Caches.RenderSurface = (DBCache<DBObj.RenderSurface>)cache;
                    break;
                case 13:
                    cache = new DBCache<DBObj.CSurface>(ocache);
                    Caches.CacheDict[typeof(DBObj.CSurface)] = cache;
                    Caches.CSurface = (DBCache<DBObj.CSurface>)cache;
                    break;
                default:
                    return;
            }
            Caches.CacheDictPtr[cache.Underlying.__Instance] = cache;
        }

        internal static class Caches
        {
            internal static Dictionary<Type, DBCache> CacheDict = new Dictionary<Type, DBCache>();
            internal static Dictionary<IntPtr, DBCache> CacheDictPtr = new Dictionary<IntPtr, DBCache>();
            internal static DBCache<Portaled.Service.DBObj.ImgTex> ImgTex;
            internal static DBCache<Portaled.Service.DBObj.CSurface> CSurface;
            internal static DBCache<Portaled.Service.DBObj.RenderSurface> RenderSurface;
        }

        internal static void OnBeforeBlockingLoadInto(AsyncCache asynccache, Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {
            if (!Caches.CacheDictPtr.TryGetValue(dbocache.__Instance, out var dbocacheex))
                return;
            dbocacheex.OnBeforeBlockingLoadIntoBase(dbobj, qdid);
        }

        internal static void OnAfterBlockingLoadInto(AsyncCache asynccache, Interop.DBObj dbobj, QualifiedDataID qdid, DBOCache dbocache)
        {
            if (!Caches.CacheDictPtr.TryGetValue(dbocache.__Instance, out var dbocacheex))
                return;
            dbocacheex.OnAfterBlockingLoadIntoBase(dbobj, qdid);
        }
    }

    public abstract class DBCache
    {
        public uint DBType { get; protected set; }
        public IntPtr Allocator { get; protected set; }
        public Portaled.Interop.DBOCache Underlying { get; protected set; }

        internal abstract void OnAfterBlockingLoadIntoBase(Interop.DBObj dbobj, QualifiedDataID qdid);
        internal abstract void OnBeforeBlockingLoadIntoBase(Interop.DBObj dbobj, QualifiedDataID qdid);
    }

    public class DBCache<T> : DBCache
        where T : Portaled.Service.DBObj.DBObjEx
    {
        public DBCache(Portaled.Interop.DBOCache internalCache)
        {
            this.Underlying = internalCache;
            this.DBType = internalCache.MDbtype;
            this.Allocator = internalCache.MPfnAllocator;
        }

        public T GetByDID(uint did)
        {
            try
            {
                var qdid = new Portaled.Interop.QualifiedDataID(did, DBType);
                var obj = DatIOManager._AsyncCache.BlockingGet(DBType, qdid);
                if (obj == null)
                    return null;
                var objEx = DBObj.DBObjEx.CreateFrom(obj, DBType);
                return (T)objEx;
            }
            catch
            {
                return null;
            }
        }

        internal virtual void OnBeforeBlockingLoadInto() { }
        internal virtual void OnAfterBlockingLoadInto() { }

        internal override void OnBeforeBlockingLoadIntoBase(Interop.DBObj dbobj, QualifiedDataID qdid)
        {
            T obj = (T)DBObjEx.CreateFrom(dbobj, qdid.Type);
            obj.OnBeforeBlockingLoadInto();
        }

        internal override void OnAfterBlockingLoadIntoBase(Interop.DBObj dbobj, QualifiedDataID qdid)
        {
            T obj = (T)DBObjEx.CreateFrom(dbobj, qdid.Type);
            obj.OnAfterBlockingLoadInto();
        }
    }
}
