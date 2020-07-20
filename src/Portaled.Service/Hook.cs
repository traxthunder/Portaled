﻿using System;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Diagnostics;
using Decal.Interop.Core;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Decal.Interop.Inject;
using Portaled.Core;
using Portaled.Service;

namespace Portaled.Hook
{
    public static unsafe class Hook
    {
        public static DeviareLiteInterop.HookLib cHook;

        static Hook()
        {
            cHook = new DeviareLiteInterop.HookLib();
        }

        class Memloc
        {
            public string Key { get; set; }
            public string Value { get; set; }
            public bool MemlocIsAddr { get { return !Value.StartsWith("0x0000"); } }
        }
    }

    unsafe static class HookMain
    {
        public static class DBCache
        {
            public static class Get
            {
                static IntPtr addr = new IntPtr(0x413b80);

                [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
                public delegate IntPtr Del(uint qdid, uint type);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((qdid, type) => {
                        var result = oldDel(qdid, type);
                        PortaledLoader.Instance.WriteToChat($"DBCache::Get({qdid.ToString("X4")},{type})");
                        return result;

                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
            public static class PreFetch
            {
                static IntPtr addr = new IntPtr(0x414fe0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate float Del(void* dbCacheThis, Structures.QualifiedDataID* qdid);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbCacheThis, qdid) => {
                        PortaledLoader.Instance.WriteToChat($"DBCache::PreFetch({new IntPtr(dbCacheThis).ToInt32()}{qdid->Type}-{qdid->ID.Unknown1}");
                        return oldDel(dbCacheThis, qdid);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class DBOCache
        {
            public static class GetIfInMemory
            {
                static IntPtr addr = new IntPtr(0x416eb0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr dbocache, uint qdid, int arg3);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {

                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbocache, qdid, arg3) =>
                    {


                        if (qdid == 0x06003D44)
                        {
                            var Obj = oldDel(dbocache, qdid, arg3);
                            var tex = (Portaled.Core.ACTypes.ImgTex*)Obj.ToPointer();
                            
                            var cache = new Portaled.Core.WrappedTypes.DBOCacheEx(dbocache);
                            cache.Test(qdid);

                            //if (cache.ContainsDID(qdid))
                            //{
                            //    var dbobj = cache.GetDBObj(qdid);
                            //}
                        }

                        if (arg3 != 0)
                        {

                        }
                        DBObjManager.OnDBObjGetRequest(dbocache, qdid, 0);
                        return oldDel(dbocache, qdid, arg3);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class CLOCache
        {
            public static class Ctor
            {
                static IntPtr addr = new IntPtr(0x4fd0a0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr thisptr, IntPtr allocatorFunction, uint dbtype);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));


                public static List<IntPtr> DBOCaches = new List<IntPtr>();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((thisptr, allocatorFunction, dbtype) =>
                    {
                        DBOCaches.Add(thisptr);
                        return oldDel(thisptr, allocatorFunction, dbtype);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

        }

        public static class CSurface
        {
            public static class InitEnd
            {
                static IntPtr addr = new IntPtr(0x537140);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr csurface, int init_type);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                static List<int> textureIds = new List<int>();
                static Random r = new Random();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((surface, type) =>
                    {
                        var tex = oldDel(surface, type);
                        var obj = (Portaled.Core.ACTypes.CSurface*)surface.ToPointer();

                        //Log id
                        textureIds.Add(obj->orig_texture_id.id);
                        
                        //Replace texture with random texture that we've encountered
                        var newId = textureIds[r.Next(textureIds.Count - 1)];
                        obj->orig_texture_id.id = newId;

                        var texobj = (Portaled.Core.ACTypes.ImgTex*)tex.ToPointer();
                        return tex;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class ImgTex
        {
            public static class Serialize
            {
                static IntPtr addr = new IntPtr(0x540290);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr tex, IntPtr archive);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((tex, archive) =>
                    {
                        var texobj = (Portaled.Core.ACTypes.ImgTex*)tex.ToPointer();
                        
                        var result = oldDel(tex, archive);
                        var texobj2 = (Portaled.Core.ACTypes.ImgTex*)result.ToPointer();
                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        static bool hooked = false;
        public static void HookAll()
        {
            if (hooked)
                return;

            hooked = true;
            //  DBCache.PreFetch.H();
            DBCache.Get.H();
            DBOCache.GetIfInMemory.H();
           // CSurface.InitEnd.H();
            ImgTex.Serialize.H();
            CLOCache.Ctor.H();
        }

        
    }

    public static class Structures
    {
        public struct QualifiedDataID
        {
            public long Type { get; set; }
            public IDClass__tagDataID_32_0 ID { get; set;  }
        }

        public struct IDClass__tagDataID_32_0
        {
            public int Unknown1;
        }
    }

}