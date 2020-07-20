using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Portaled.Core.ACTypes;

namespace Portaled.Core.WrappedTypes
{
    public class DBOCacheEx
    {
        private readonly DBOCache cache;
        public DBOCacheEx(IntPtr handle)
        {
            this.cache = new DBOCache(handle);
        }

        public bool ContainsDID(uint qdid)
        {
            return cache.ContainsDID(qdid);
        }
        
        public IntPtr GetDBObj(uint qdid)
        {
            return cache.GetDBObj(qdid);
        }

        public void Test(uint qdid)
        {
            cache.Test(qdid);
        }

        private class DBOCache
        {
            public readonly IntPtr Handle;

            private unsafe DBOCacheRaw* Obj => (DBOCacheRaw*)Handle;
            public DBOCache(IntPtr handle)
            {
                this.Handle = handle;
            }

            public unsafe void Test(uint qdid)
            {
                var buckets = Obj->m_ObjTable.hashtable.m_intrusiveTable.m_buckets;
                var firstBucket = Obj->m_ObjTable.hashtable.m_intrusiveTable.m_firstInterestingBucket;
                var ptr1 = new IntPtr(firstBucket);
                var num1 = ptr1.ToInt32();
                var bucketoffset = new IntPtr((int)((qdid % num1) * 4));
                var bucketptr = (HashTableData<IDClass__tagDataID_32_0, TypedPointer<DBObj>>*)bucketoffset.ToPointer();
                var bucket = *bucketptr;

                var baseprop = bucketptr->m_data;
                var desc = baseprop.m_pcPropertyDesc;
                var val = baseprop.m_pcPropertyValue;

                var aa = 1;
            }

            internal bool ContainsDID(uint qdid)
            {
                throw new NotImplementedException();
            }

            internal unsafe IntPtr GetDBObj(uint qdid)
            { 
                //struct HashTableData_IDClass__tagDataID_32_0_DBObjptr* bucket = 
                //*(arg1->m_ObjTable.m_intrusiveTable.m_buckets +
                //(modu.dp.d(0:qdid, arg1->m_ObjTable.m_intrusiveTable.m_numBuckets) << 2))

                var buckets = Obj->m_ObjTable.hashtable.m_intrusiveTable.m_buckets;
                var firstBucket = Obj->m_ObjTable.hashtable.m_intrusiveTable.m_firstInterestingBucket;
                var ptr1 = new IntPtr(firstBucket);
                var num1 = ptr1.ToInt32();
                var bucketoffset = new IntPtr((int)((qdid % num1) * 4));
                var bucketptr = (HashTableData<IDClass__tagDataID_32_0,TypedPointer<DBObj>>*)bucketoffset.ToPointer();
                var bucket = *bucketptr;

                return IntPtr.Zero;
            }

            public struct FreelistDef
            {
                public bool m_bRecycle;
                public bool m_bShrink;
                public uint m_nIdealSize;
                public uint m_nMaxSize;
            };

            public unsafe struct DBOCacheRaw
            {
                public IntPtr vftbl;
                public AutoGrowHashTable<IDClass__tagDataID_32_0, TypedPointer<DBObj>> m_ObjTable;
                public uint m_dbtype;
                public HashTable<uint, float> m_fidelityTable;
                public bool m_fCanKeepFreeObjs;
                public bool m_fKeepFreeObjs;
                public bool m_bFreelistActive;
                public bool _unused;
                public FreelistDef m_freelistDef;
                public DBObj* m_pOldestFree;
                public DBObj* m_pYoungestFree;
                public uint m_nFree;
                public uint m_nTotalCount;
                public IntPtr m_pfnAllocator;
            };
        }
    }
}
