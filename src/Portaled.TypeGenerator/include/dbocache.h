
#ifndef DBOCACHE_H
#define DBOCACHE_H

#include "hash.h"


struct __declspec(align(4)) DBObj : Interface
{
	unsigned int m_dataCategory;
	bool m_bLoaded;
	long double m_timeStamp;
	DBObj* m_pNext;
	DBObj* m_pLast;
	DBOCache* m_pMaintainer;
	int m_numLinks;
	IDClass_tagDataID_32_0 m_DID;
	bool m_AllowedInFreeList;
};


struct DBObjTableBucket
{

};
/*
struct __cppobj IntrusiveHashList<IDClass<_tagDataID, 32, 0>, HashList<IDClass<_tagDataID, 32, 0>, bool, 1>::HashListData*, 1>
{
	IntrusiveHashTable<IDClass<_tagDataID, 32, 0>, HashList<IDClass<_tagDataID, 32, 0>, bool, 1>::HashListData*, 1> m_hash;
	DLListBase m_list;
};

struct __cppobj IntrusiveHashList<K, HashList<K, V, 1>::HashListData*, 1>
{
	IntrusiveHashTable<K, HashList<K, V, 1>::HashListData*, 1> m_hash;
	DLListBase m_list;
};
*/
struct DBObjIntrusiveHashList_HashListData
{
	
};
/*
struct __cppobj HashList<IDClass<_tagDataID,32,0>,bool,1>
{
  IntrusiveHashList<IDClass<_tagDataID,32,0>,HashList<IDClass<_tagDataID,32,0>,bool,1>::HashListData *,1> m_ihlIntrusive;
};

struct __cppobj HashList<K,V,1>
{
  IntrusiveHashList<K,HashList<K,V,1>::HashListData *,1> m_ihlIntrusive;
};

*/
/*
struct DBObjHashList
{
	IntrusiveHashList_HashListData<unsigned int, DBObjHashList*, 1> m_ihlIntrusive;
	//void* m_ihlIntrusive;
};
*/
/*
struct __cppobj IntrusiveHashData<QualifiedDataID,DBObjSaveInfo *>
{
  QualifiedDataID m_hashKey;
  DBObjSaveInfo *m_hashNext;
};


struct __cppobj IntrusiveHashData<K,V>
{
  K m_hashKey;
  V m_hashNext;
};

*/

/*
struct DBObjIntrusiveHashData
{
	unsigned int key;
	DBObjHashList* value; 
};
*/

/*
struct __cppobj IntrusiveHashListData<unsigned long,HashList<unsigned long,ActionMapValue,1>::HashListData *> 
: IntrusiveHashData<unsigned long,HashList<unsigned long,ActionMapValue,1>::HashListData *>, DLListData
{
};

struct __cppobj IntrusiveHashListData<K,V>::HashListData *>
{
	IntrusiveHashData<K,V>::HashListData *> data;
	DLListData listdata;
};

*/
/*
struct DBObjIntrusiveHashListData //wrong?
{
	DBObjIntrusiveHashData data; ////IntrusiveHashListData<K,HashList<K,V,1>
	DLListData listdata;
};
*/
/*
struct __cppobj HashList<unsigned long,ActionMapValue,1>::HashListData : IntrusiveHashListData<unsigned long,HashList<unsigned long,ActionMapValue,1>::HashListData *>
{
  ActionMapValue m_data;
};

struct __cppobj HashList<K,V,1>::HashListData 
{
	IntrusiveHashListData<K,HashList<K,V,1>::HashListData *> parent;
	V m_data;
};
*/
/*
__declspec(align(4)) struct DBOHashList_HashListData 
{
	DBObjIntrusiveHashListData data; 
	DBObj* m_data;
};
*/
//FULL TYPE = IntrusiveHashData<unsigned int,>
/*
struct IntrusiveHashData<CaseInsensitiveStringBase<PStringBase<char> >,HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *>
{
  CaseInsensitiveStringBase<PStringBase<char> > m_hashKey;
  HashTableData<CaseInsensitiveStringBase<PStringBase<char> >,unsigned long> *m_hashNext;
};


struct IntrusiveHashData<K,V>
{
  K m_hashKey;
  V m_hashNext;
};
*/


struct DBOHashTableData;

struct DBOIntrusiveHashData
{
	unsigned int m_hashKey;
	DBOHashTableData* m_hashNext;
};


/*
struct HashTableData<K,V> 
: IntrusiveHashData<K,HashTableData<K,V> *>
{
	V m_data;
};

struct HashTableData<K,V>  //K = unsigned int, V = HashTableData<unsigned int,DBObj*>*
:
{
	IntrusiveHashData<unsigned int,HashTableData<unsigned int,HashTableData<unsigned int,DBObj*>*>*>
	HashTableData<unsigned int,DBObj*>* m_data;
};
*/
//HashTableData<unsigned int, HashTableData<unsigned int, DBObj*>*>
struct DBOHashTableData
{
	DBOIntrusiveHashData intrusive_hashdata;
	DBObj* m_data;
};


/*
IntrusiveHashTable<K,HashTableData<K,V>*,1>

struct __cppobj IntrusiveHashTable<K,HashTableData<unsigned int,DBObj*> *,1>
{
  IntrusiveHashTable<K,HashTableData<unsigned int,DBObj*>*,1>Vtbl *vfptr;
  HashTableData<K,V> *m_aInplaceBuckets[23];
  HashTableData<K,V> **m_buckets;
  HashTableData<K,V> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};

struct __cppobj IntrusiveHashTable<unsigned int,HashTableData<K,V> *,1>
{
  void* vfptr
  HashTableData<unsigned int,HashTableData<unsigned int,DBObj*>*> *m_aInplaceBuckets[23];
  HashTableData<unsigned int,HashTableData<unsigned int,DBObj*>*> **m_buckets;
  HashTableData<unsigned int,HashTableData<unsigned int,DBObj*>*> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


*/
struct IntrusiveDBObjTable //*(arg1->m_ObjTable.m_intrusiveTable.m_buckets + (modu.dp.d(0:qdid, arg1->m_ObjTable.m_intrusiveTable.m_numBuckets) << 2))
{
	void* vfptr; //only has vecdeldtor
	DBOHashTableData* m_aInplaceBuckets[23];
	DBOHashTableData** m_buckets;
	DBOHashTableData** m_firstInterestingBucket;
	unsigned int m_numBuckets;
	unsigned int m_numElements;
};

//  AutoGrowHashTable<IDClass<_tagDataID,32,0>,DBObj *> m_ObjTable;

/*
HashTable<unsigned long,DBObj*,1>
{
  void* vfptr;
  IntrusiveHashTable<K,HashTableData<K,V>*,1> m_intrusiveTable;
};
*/

struct DBObjTable
{
	void* vfptr;
	IntrusiveDBObjTable m_intrusiveTable;
};


#endif
