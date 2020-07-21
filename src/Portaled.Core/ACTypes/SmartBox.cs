using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct _iobuf
    {
        public char* _ptr;
        public int _cnt;
        public char* _base;
        public int _flag;
        public int _file;
        public int _charbuf;
        public int _bufsiz;
        public char* _tmpfname;
    };

    public unsafe struct CommandListElement
    {
        public CommandListElement* next;
        public CommandListElement* prev;
        public uint command;
        public float speed;
        public int hold_run;
    };

    public unsafe struct CommandList
    {
        public CommandListElement* head;
        public CommandListElement* mouse_command;
        public CommandListElement* current;
    };

    public unsafe struct CommandInterpreter
    {
        public IInputActionCallback actionCallback;
        public SmartBox* smartbox;
        public CPhysicsObj* player; //Look at Physics Obj
        public CommandList SubstateList;
        public CommandList TurnList;
        public CommandList SidestepList;
        public uint autonomy_level;
        public int controlled_by_server;
        public int hold_run;
        public int hold_sidestep;
        public int transient_state;
        public int enabled;
        public int auto_run;
        public int mouselook_active;
        public int mouseleft_down;
        public float autorun_speed;
        public uint action_stamp;
        public double last_sent_position_time;
        public Position last_sent_position;
        public Plane last_sent_contact_plane;
        public double time_between_position_events;
    };

    public unsafe struct LongHash<T>
        where T : unmanaged
    {
        public HashBase<uint> hashbase;
    };

    public unsafe struct CLostCell
    {
        public IntrusiveHashData<uint, LostCellPointer> hashdata;
        public uint num_objects;
        public DArray<TypedPointer<CPhysicsObj>> objects;
    };

    public unsafe struct LostCellPointer
    {
        public CLostCell* data;
    }

    public unsafe struct IDListNode
    {
        public uint id;
        public IDListNode* prev;
        public IDListNode* next;
    };

    public struct InventoryPlacement
    {
        public PackObj packObj;
        public uint iid_;
        public uint loc_;
        public uint priority_;
    };

    public unsafe struct IDList
    {
        public PackObj packObj;
        public IDListNode* first;
        public IDListNode* last;
        public IDListNode* curNode;
        public int numIDs;
        public int curNum;
    };

    public unsafe struct PackableLLNode<T>
        where T : unmanaged
    {
        public T data;
        public PackableLLNode<T>* next;
        public PackableLLNode<T>* prev;
    };

    public unsafe struct PackableList<T>
        where T : unmanaged
    {
        public PackObj packObj;
        public PackableLLNode<T>* head;
        public PackableLLNode<T>* tail;
        public uint curNum;
    };

    public unsafe struct CObjectInventory
    {
        public LongHashData hashdata;
        public IDList _itemsList;
        public IDList _containersList;
        public PackableList<InventoryPlacement> _invPlacement;
    };

    public unsafe struct HashSetData<T>
        where T : unmanaged
    {
        public IntrusiveHashData<T, HashSetDataPointer<T>> data;
    };

    public unsafe struct HashSetDataPointer<T>
        where T : unmanaged
    {
        public HashSetData<T>* data;
    }

    public unsafe struct UnmanagedHashSet<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public IntrusiveHashTable<T, TypedPointer<HashSetData<T>>> m_intrusiveTable;
    };

    public unsafe struct CObjectMaint
    {
        public Interface _interface;
        public NoticeHandler noticeHandler;
        public Turbine_RefCount m_cTurbineRefCount;
        public int is_active;
        public IntrusiveHashTable<uint, TypedPointer<CLostCell>> lost_cell_table;
        public LongHash<CPhysicsObj> object_table;
        public LongHash<CPhysicsObj> null_object_table;
        public LongHash<CWeenieObject> weenie_object_table;
        public LongHash<CWeenieObject> null_weenie_object_table;
        public UnmanagedHashSet<uint> visible_object_table;
        public HashTable<uint, double> destruction_object_table;
        public LongHash<CObjectInventory> object_inventory_table;
        public AC1Legacy_PQueueArray<double> object_destruction_queue;
    };

    public unsafe struct HashBaseIter<T>
        where T : unmanaged
    {
        public HashBase<T>* myHash_;
        public uint curBucket_;
        public HashBaseData<T>* curPtr_;
        public HashBaseData<T>* lastThisChain_;
        public int fEnd_;
    };

    public unsafe struct LongHashIter<T>
    {
        public HashBaseIter<uint> iter;
    };

    public unsafe struct CPhysics
    {
        public CObjectMaint* obj_maint;
        public SmartBox* smartbox;
        public CPhysicsObj* player;
        public LongHashIter<CPhysicsObj>* iter;
    };

    public unsafe struct SmartBox
    {
        public IntPtr vfptr;
        public int testMode;
        public Position viewer;
        public CObjCell* viewer_cell;
        public uint head_index;
        public Position viewer_sought_position;
        public CameraManager* camera_manager;
        public CellManager* cell_manager;
        public CPhysics* physics;
        public CObjectMaint* m_pObjMaint;
        public LScape* lscape;
        public Ambient* ambient_sounds;
        public CommandInterpreter* cmdinterp;
        public int creature_mode;
        public float m_fGameFOV;
        public float m_fViewDistFOV;
        public bool m_bUseViewDistance;
        public float game_ambient_level;
        public uint game_ambient_color;
        public int game_degrades_disabled;
        public int hidden;
        public int position_update_complete;
        public int waiting_for_teleport;
        public int has_been_teleported;
        public NIList<TypedPointer<NetBlob>>* in_queue;
        public NIList<TypedPointer<NetBlob>>* netblob_list;
        public _iobuf* position_and_movement_file;
        public uint player_id;
        public CPhysicsObj* player;
        public uint target_object_id;
        public void* target_callback;//public void (__cdecl* target_callback) (unsigned int, ObjectSelectStatus, tagRECT*, const float);
        public uint num_cells;
        public CEnvCell** cells;
        public uint num_objects;
        public CPhysicsObj** objects;
        //public void (__cdecl* m_renderingCallback) ();
        public void* m_renderingCallback;
    };
}
