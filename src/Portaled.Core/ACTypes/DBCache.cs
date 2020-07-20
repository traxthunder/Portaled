using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public enum E0971427BCD5BF40126DFC935D5F9371
    {
        dddIdle = 0x0,
        dddInterrogationReceved = 0x1,
        dddPatching = 0x2,
        dddEndSent = 0x3,
        dddRunTime = 0x4,
    };

    public unsafe struct MissingIteration //align 8
    {
        public IntPtr vfptr;
        public UInt64 idDatFile;
        public int idIteration;
        public SmartArray<QualifiedDataID> IDsToDownload;
        public SmartArray<QualifiedDataID> IDsToPurge;
    }

    public struct Interface
    {
        public IntPtr vfptr;
    };

    public struct AsyncCacheVtbl
    {
        /*DBObj* (__thiscall* BlockingGet) (AsyncCache*this, unsigned int, QualifiedDataID*);
        _BYTE gap4 [16];
        AsyncContext *(__thiscall* AsyncGet) (AsyncCache*this, AsyncContext* result, unsigned int, QualifiedDataID*, AsyncCacheCallback*, unsigned int);
  void (__thiscall* AsyncGetImmediate) (AsyncCache*this, AsyncContext*, unsigned int, QualifiedDataIDArray*, AsyncCacheCallback*, unsigned int);
        __declspec(align(8)) $F1026C46A91364D736E48DC9BF562217 ___u3;
        AsyncContext* (__thiscall* AsyncSave) (AsyncCache*this, AsyncContext* result, QualifiedDataID*, Cache_Pack_t*, unsigned __int64, AsyncCacheCallback*, unsigned int);
        _BYTE gap28 [8];
  $3578EF11CE7628A82DA0CA7D8F8BA153 ___u5;
  void (__thiscall* ReleaseContext) (AsyncCache*this, AsyncContext);
        DBOCache *(__thiscall* GetDBOCache) (AsyncCache*this, QualifiedDataID*);
  bool (__thiscall* IsOnDisk) (AsyncCache*this, QualifiedDataID*);
  bool (__thiscall* AreOnDisk) (AsyncCache*this, QualifiedDataIDArray*);
  void (__thiscall* UseTime) (AsyncCache*this) __declspec(align(8));
  void (__thiscall* HashAndEnqueue) (AsyncCache*this, CAsyncGetRequest*);
  void (__thiscall* EnqueueAsyncRequest) (AsyncCache*this, AsyncCache::CAsyncRequest*);
  void (__thiscall* UnhashPendingGet) (AsyncCache*this, CAsyncGetRequest*, CAsyncGetRequest*);
  void (__thiscall* FlushPendingRequests) (AsyncCache*this);
  void (__thiscall* OnRequestFinished) (AsyncCache*this, AsyncCache::CAsyncRequest*);
  void (__thiscall* OnGetRequestFinished) (AsyncCache*this, CAsyncGetRequest*);
  void (__thiscall* OnSaveRequestFinished) (AsyncCache*this, CAsyncSaveRequest*);
  void (__thiscall* OnPurgeRequestFinished) (AsyncCache*this, CAsyncPurgeRequest*);
  void (__thiscall* NotifyCallback) (AsyncCache*this, AsyncCache::CAsyncRequest*);
  void (__thiscall* OnAsyncGetFinished) (AsyncCache*this, CAsyncGetRequest*);
  void (__thiscall* CallPendingCallbacks) (AsyncCache*this);
        DBObj *(__thiscall* BlockingGetFromDisk) (AsyncCache*this, QualifiedDataID*, DBOCache*);
  bool (__thiscall* BlockingLoadInto) (AsyncCache*this, DBObj*, QualifiedDataID*, DBOCache*);
  bool (__thiscall* SerializeFromCachePack) (AsyncCache*this, DBObj*, Cache_Pack_t*);
        DBObj *(__thiscall* GetIfInMemory) (AsyncCache*this, QualifiedDataID*, DBOCache*);
        DBObj *(__thiscall* GetFreeObj) (AsyncCache*this, QualifiedDataID*, DBOCache*);
  bool (__thiscall* AsyncGetFromOtherSources) (AsyncCache*this, QualifiedDataID*, DBOCache*);
  void (__thiscall* OnAsyncGetFromOtherSourcesFailed) (AsyncCache*this, QualifiedDataID*);
  bool (__thiscall* AddObjToDBOCache) (AsyncCache*this, DBObj*, DBOCache*);
        DiskController *(__thiscall* GetDiskController) (AsyncCache*this, QualifiedDataID*, unsigned __int64);
  bool (__thiscall* LoadData) (AsyncCache*this, QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
  bool (__thiscall* SaveData) (AsyncCache*this, QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
            bool (__thiscall* PurgeData) (AsyncCache*this, QualifiedDataID*, unsigned __int64);*/
        }


    public struct Turbine_RefCount 
    {
        public IntPtr referenceCountTemplate_vfptr;
        public uint m_cRef;
    };

    public struct AsyncCacheCallback
    {
        public IntPtr vfptr;
    }

    public enum AsyncResult
    {
        AsyncResult_Unknown = 0x0,
        AsyncResult_Success = 0x1,
        AsyncResult_PartialSuccess = 0x2,
        AsyncResult_Failure = 0x3,
    };

    public struct AsyncContext
    {
        public uint m_id;
    };

    public unsafe struct AsyncCache_CCallbackHandler //align 4
    {
        public IntPtr referenceCountTemplate_vfptr;
        public uint m_cRef;
        public int m_nRequestsPending;
        public AsyncCacheCallback* m_pCallbackPlugin;
        public AsyncResult m_AccumulatedResults;
        public uint m_dwUser1;
        public SmartArray<TypedPointer<AsyncCache_CAsyncRequest>> m_TopLevelReqs;
        public AsyncContext m_hContext;
        public bool m_bContextFinished;
    };

    public unsafe struct TDynamicCircularArray<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public T* A;
        public uint first;
        public uint next;
        public uint count;
        public uint max;
        public uint growsize;
    }

    [StructLayout(LayoutKind.Sequential, Pack = 2)]
    public unsafe struct GrowBuffer //align 2
    {
        public IntPtr referenceCountTemplate_vfptr;
        public uint m_cRef;
        public char* m_data;
        public uint m_size;
        public bool m_ownsBuffer;
        public bool m_bCanResize;
        public bool m_bAllocateFromFreelist;
    };

    public unsafe struct SmartBuffer
    {
        public uint m_startOffset;
        public uint m_size;
        public GrowBuffer* m_masterBuffer;
    };

    public unsafe struct Cache_Pack_t
    {
        public int m_dwOffset;
        public uint m_iVersion;
        public SmartBuffer m_buff;
    };

    public struct FreelistDef
    {
        public bool m_bRecycle;
        public bool m_bShrink;
        public uint m_nIdealSize;
        public uint m_nMaxSize;
    };

    public unsafe struct DBOCache
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

    public unsafe struct CAsyncGetRequest
    {
        public AsyncCache_CAsyncRequest parent;
        public uint GSDIType;
        public SmartArray<TypedPointer<CAsyncGetRequest>> RequestsWaitingForMe;
        public SmartArray<TypedPointer<CAsyncGetRequest>> RequestsImWaitingFor;
        public Cache_Pack_t Buf;
        public int nGetsRemaining;
        public DBOCache* pObjCache;
        public uint m_dwGetRequestFlags;
    };

    public struct AsyncCache //Align 4
    {
        public IntPtr vfptr;
        public TDynamicCircularArray<TypedPointer<AsyncCache_CCallbackHandler>> m_PendingCallbacks;
        public AutoGrowHashTable<QualifiedDataID, TypedPointer<CAsyncGetRequest>> m_PendingGets;
        public AutoGrowHashTable<AsyncContext, TypedPointer<AsyncCache_CCallbackHandler>> m_BusyCallbacks;
        public uint dwNextCallbackHandle;
        public bool m_bCallingPendingCallbacks;
    };

    public struct IDataGraph
    {
        public IntPtr vfptr;
    };

    public unsafe struct DBCache
    {
        public Interface parent;
        public AsyncCache asyncCache;
        public Turbine_RefCount m_cTurbineRefCount;
        public IDClass__tagDataID_32_0 m_MasterMapID;
        public uint m_CurrentRegion;
        public uint m_LocalLanguage;
        public bool m_bRuntime;
        public bool m_bIsClient;
        public bool m_bIsServer;
        public IDataGraph* m_pDataGraph;
    };

    public unsafe struct PortalThread //align 2
    {
        public IntPtr vfptr;
        public void* m_hThread;
        public uint m_idThread;
        public bool m_fThreadRunning;
        public bool m_fShouldExit;
        public bool m_fThreadHasEverRun;
    };

    public unsafe struct PortalEvent
    {
        public void* eventHandle_;
    }

    public unsafe struct ListNode<T>
        where T : unmanaged
    {
        public T data;
        public ListNode<T>* next;
        public ListNode<T>* prev;
    };

    public unsafe struct UnmanagedList<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public ListNode<TypedPointer<T>>* _head;
        public ListNode<TypedPointer<T>>* _tail;
        public uint _num_elements;
    };


    public unsafe struct _LIST_ENTRY
    {
        public _LIST_ENTRY* Flink;
        public _LIST_ENTRY* Blink;
    };

    public unsafe struct _RTL_CRITICAL_SECTION_DEBUG
    {
        public ushort Type;
        public ushort CreatorBackTraceIndex;
        public _RTL_CRITICAL_SECTION* CriticalSection;
        public _LIST_ENTRY ProcessLocksList;
        public uint EntryCount;
        public uint ContentionCount;
        public fixed uint Spare[2];
    };

    public unsafe struct _RTL_CRITICAL_SECTION
    {
        public _RTL_CRITICAL_SECTION_DEBUG* DebugInfo;
        public int LockCount;
        public int RecursionCount;
        public void* OwningThread;
        public void* LockSemaphore;
        public uint SpinCount;
    };

    public unsafe struct SharedCriticalSection
    {
        public IntPtr vfptr;
        public _RTL_CRITICAL_SECTION myCritSection_;
        public uint lockHolder_;
        public int lockCount_;
    };

    public unsafe struct LFQueue<T>
        where T : unmanaged
    {
        public T* buckets_;
        public int numBuckets_;
        public int m_dwProducerBucketIndex;
        public int m_dwConsumerBucketIndex;
        public UnmanagedList<T> m_backupList;
        public int m_dwBackupListLen;
        public SharedCriticalSection m_backupListCritSec;
    }

    public enum AsyncCache_AsyncOperation
    {
      opAsyncGet = 0x0,
      opAsyncPurge = 0x1,
      opAsyncSave = 0x2,
      opAsyncCacheNextAsyncOperation = 0x3,
    };


    [StructLayout(LayoutKind.Explicit)]
    public struct E6132C438F0B638693FB2F3E0AF1DACE5
    {
        [FieldOffset(0)] public uint Op;
        [FieldOffset(0)] public AsyncCache_AsyncOperation eOp;
    }

    public unsafe struct AsyncCache_CAsyncRequest_CCallbackWrapper
    {
        public AsyncCache_CCallbackHandler* pCallbackHandler;
        public uint dwTimesFinished;
    };

    public unsafe struct AsyncCache_CAsyncRequest
    {
        public IntPtr refCountTemplatevfptr;
        public uint m_cRef;
        public AsyncResult Result;
        public E6132C438F0B638693FB2F3E0AF1DACE5 ___u2;
        public QualifiedDataID qdid;
        public SmartArray<AsyncCache_CAsyncRequest_CCallbackWrapper> m_pCallbacks;
        public DBObj* m_pObj;
    };

    public unsafe struct ThreadedCache
    {
        public DBCache parent;
        public PortalThread portalThread;
        public LFQueue<TypedPointer<AsyncCache_CAsyncRequest>> m_WorkerThreadJobQueue;
        public LFQueue<TypedPointer<AsyncCache_CAsyncRequest>> m_WorkerThreadReplyQueue;
        public PortalEvent m_evtWorkerHasJobs;
    };

    public unsafe struct CPluginPrototype
    {
        public IntPtr vfptr;
        public CPluginManager* m_pManager;
    };


    public struct CPluginManager
    {
        public SmartArray<TypedPointer<CPluginPrototype>> m_Plugins;
    };

    public unsafe struct CLCache
    {
        public ThreadedCache parent;
        public CPluginManager pluginManagerTemplate;
        public IntPtr m_DatFiles; // SmartArray<TypedPointer<DiskController>> m_DatFiles;
        public bool m_fReadOnly;
        public bool m_fEngineOnly;
        public uint m_ridDDDRegion;
        public E0971427BCD5BF40126DFC935D5F9371 m_DDDState;
        public SmartArray<MissingIteration> m_MissingIters;
        public IntPtr m_PendingDownloads; //public AutoGrowHashTable<QualifiedDataID, TypedPointer<MissingIteration>> m_PendingDownloads;
        public IntPtr m_DatFileByIDTable; //public HashTable<ulong, TypedPointer<DiskController>> m_DatFileByIDTable;
        public SmartArray<QualifiedDataID> m_EarlySaves;
        public uint m_cbEarlySaves;
        public uint m_eNameRuleLanguage;
        public IntPtr m_pNetQueue; // public NIList<TypedPointer<NetBlob>>* m_pNetQueue;
        public PStringBase_ushort m_strDatFilePath;
    };
}
