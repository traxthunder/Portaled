using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct TypedPointer<T>
        where T : unmanaged
    {
        public T* data;
    }

    public unsafe struct IntrusiveHashData<K, V>
        where K : unmanaged
        where V : unmanaged
    {
        public K m_hashKey;
        public V m_hashNext;
    }

    public unsafe struct HashTableData<K, V>
        where K : unmanaged
        where V : unmanaged
    {
        public IntrusiveHashData<K, HashTableDataPointer<K, V>> m_intrusiveData;
        public BaseProperty m_data;

        public BasePropertyDesc PropertyDesc
        { 
            get { return *m_data.m_pcPropertyDesc; }
        }
    }

    public unsafe struct HashTableDataPointer<K,V>
        where K : unmanaged
        where V : unmanaged
    {
        public HashTableData<K, V>* data; 
    }

    public unsafe struct IntrusiveHashTable<K, V>
        where K : unmanaged
        where V : unmanaged
    {
        public IntPtr vfptr;

        public V* m_aInplaceBuckets; //23*4+4

        public fixed int m_aInplaceBuckets_elements[22];

        public V** m_buckets;

        public V** m_firstInterestingBucket;

        public uint m_numBuckets;

        public uint m_numElements;
    }

    public struct HashTable<K, V>
        where K : unmanaged
        where V : unmanaged
    {
        public IntPtr vfptr;
        public IntrusiveHashTable<K, TypedPointer<HashTableData<K, V>>> m_intrusiveTable;
    }

    public struct AutoGrowHashTable<K, V>
        where K : unmanaged
        where V : unmanaged
    {
        public HashTable<K, V> hashtable;
    }
}
