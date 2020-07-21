using Portaled.Core.ACTypes;
using Portaled.Core.WrappedTypes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            //Go();
            Go2();
            
        }

        unsafe static void Go2()
        {
            CLostCell objMaint = new CLostCell();
            Portaled.Core.ACTypes.HashSetData<int> s = new Portaled.Core.ACTypes.HashSetData<int>();
            //CObjectMaint m_pObjMaint = new CObjectMaint(); ;

            var sb = new SmartBox();
            var cmdInterpPtr = new CommandInterpreter();
            var phys = new CPhysicsObj();
        }

        unsafe static void Go()
        {
            var a = new DBOCacheRaw();
            a.m_ObjTable = new AutoGrowHashTable<IDClass__tagDataID_32_0, TypedPointer<DBObj>>();

            var tbl = a.m_ObjTable.hashtable.m_intrusiveTable;
            var b = tbl.m_firstInterestingBucket;
            var tt = typeof(IntrusiveHashData<int, int>);
            var tt2 = new HashTableData<int, HashTableData<int, int>>();
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
