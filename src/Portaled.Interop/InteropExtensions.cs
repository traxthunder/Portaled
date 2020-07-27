using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Interop
{
    public unsafe partial class IntrusiveDBObjTable
    { 
        void GetIfInCache_Managed(uint qdid)
        {
            //table % MNumBuckets
            //table.Buckets[(0x0200058e % table.MNumBuckets)].MData.MDID.Id.Id == 0x0200058e
        }

        public DBOHashTableData[] Buckets //SLOW, DO NOT USE IN PRODUCTION
        {
            get
            {
                var count = this.MNumBuckets;
                var array = new DBOHashTableData[count];
                var __internal = (global::Portaled.Interop.IntrusiveDBObjTable.__Internal*)__Instance;
                var v0 = (int*)__internal->m_buckets.ToPointer();
                for (int i = 0; i < count; i++)
                {
                    var addr = v0 + i;
                    var ptr = new IntPtr(addr);
                    //Double pointer
                    var ptr2 = new IntPtr(*(uint*)ptr.ToPointer());

                    DBOHashTableData item = null;
                    if (ptr2 != IntPtr.Zero)
                        item = DBOHashTableData.__CreateInstance(ptr2);
                    array[i] = item;
                }
                return array;
            }
        }
    }


    public unsafe partial class QualifiedDataID
    { 
        public QualifiedDataID(uint id)
            : this(id, id << 24)
        {
        }
        public QualifiedDataID(uint id, uint type)
            : this()
        {
            this.ID = new IDClass_tagDataID_32_0()
            {
                Id = new IDClass32()
                {
                    Id = id
                }
            };
            this.Type = type;
        }
    }

    public unsafe partial class IntrusiveHashTableDBOCache : IDisposable
    {
        global::Portaled.Interop.IntrusiveHashTable.__Internal _internal;

        public global::System.IntPtr __Instance { get; protected set; }

        internal static readonly global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::Portaled.Interop.IntrusiveHashTableDBOCache> NativeToManagedMap = new global::System.Collections.Concurrent.ConcurrentDictionary<IntPtr, global::Portaled.Interop.IntrusiveHashTableDBOCache>();

        protected bool __ownsNativeInstance;

        internal static global::Portaled.Interop.IntrusiveHashTableDBOCache __CreateInstance(global::System.IntPtr native, bool skipVTables = false)
        {
            return new global::Portaled.Interop.IntrusiveHashTableDBOCache(native.ToPointer(), skipVTables);
        }

        internal static global::Portaled.Interop.IntrusiveHashTableDBOCache __CreateInstance(global::Portaled.Interop.IntrusiveHashTable.__Internal native, bool skipVTables = false)
        {
            return new global::Portaled.Interop.IntrusiveHashTableDBOCache(native, skipVTables);
        }
        private static void* __CopyValue(global::Portaled.Interop.IntrusiveHashTable.__Internal native)
        {
            var ret = Marshal.AllocHGlobal(sizeof(global::Portaled.Interop.IntrusiveHashTable.__Internal));
            *(global::Portaled.Interop.IntrusiveHashTable.__Internal*)ret = native;
            return ret.ToPointer();
        }

        private IntrusiveHashTableDBOCache(global::Portaled.Interop.IntrusiveHashTable.__Internal native, bool skipVTables = false)
            : this(__CopyValue(native), skipVTables)
        {
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        protected IntrusiveHashTableDBOCache(void* native, bool skipVTables = false)
        {
            if (native == null)
                return;
            __Instance = new global::System.IntPtr(native);
        }

        public IntrusiveHashTableDBOCache()
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::Portaled.Interop.IntrusiveHashTable.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
        }

        public IntrusiveHashTableDBOCache(global::Portaled.Interop.IntrusiveHashTableDBOCache _0)
        {
            __Instance = Marshal.AllocHGlobal(sizeof(global::Portaled.Interop.IntrusiveHashTable.__Internal));
            __ownsNativeInstance = true;
            NativeToManagedMap[__Instance] = this;
            *((global::Portaled.Interop.IntrusiveHashTable.__Internal*)__Instance) = *((global::Portaled.Interop.IntrusiveHashTable.__Internal*)_0.__Instance);
        }

        public void Dispose()
        {
            Dispose(disposing: true);
        }

        public virtual void Dispose(bool disposing)
        {
            if (__Instance == IntPtr.Zero)
                return;
            global::Portaled.Interop.IntrusiveHashTableDBOCache __dummy;
            NativeToManagedMap.TryRemove(__Instance, out __dummy);
            if (__ownsNativeInstance)
                Marshal.FreeHGlobal(__Instance);
            __Instance = IntPtr.Zero;
        }
    }
}
