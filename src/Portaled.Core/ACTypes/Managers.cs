using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct ScriptData
    {
        public double start_time;
        public PhysicsScript* script;
        public ScriptData* next_data;
    };

    public unsafe struct MotionList
    {
        public uint motion;
        public float speed_mod;
        public MotionList* next;
    };

    public unsafe struct MotionState
    {
        public uint style;
        public uint substate;
        public float substate_mod;
        public MotionList* modifier_head;
        public MotionList* action_head;
        public MotionList* action_tail;
    };

    public unsafe struct ScriptManager
    {
        public CPhysicsObj* physobj;
        public ScriptData* curr_data;
        public ScriptData* last_data;
        public int hook_index;
        public double next_hook_time;
    };

    public unsafe struct MotionTableManager_AnimNode
    {
        public DLListData dlListData;
        public uint motion;
        public uint num_anims;
    };

    public unsafe struct MotionTableManager
    {
        public CPhysicsObj* physics_obj;
        public CMotionTable* table;
        public MotionState state;
        public int animation_counter;
        public DLList<MotionTableManager_AnimNode> pending_animations;
    };

    public struct CInputHandler
    {
        public IntPtr vfptr;
    };

    public struct IInputActionCallback
    {
        public IntPtr vfptr;
    };

    public struct Vector3
    {
        public float x;
        public float y;
        public float z;
    };
    
    public struct AC1Legacy_Vector3
    {
        public Vector3 vector;
    }

    public unsafe struct AC1Legacy_SmartArray<T>
        where T : unmanaged
    {
        public T* m_data;
        public uint m_size;
        public uint m_num;
    };

    public unsafe struct CelestialPosition
    {
        public IDClass__tagDataID_32_0 gfx_id;
        public IDClass__tagDataID_32_0 pes_id;
        public float heading;
        public float rotation;
        public AC1Legacy_Vector3 tex_velocity;
        public float transparent;
        public float luminosity;
        public float max_bright;
        public uint properties;
    };

    public unsafe struct GameSky
    {
        public AC1Legacy_SmartArray<CelestialPosition> sky_obj_pos;
        public AC1Legacy_SmartArray<TypedPointer<CPhysicsObj>> sky_obj;
        public AC1Legacy_SmartArray<uint> property_array;
        public CEnvCell* before_sky_cell;
        public CEnvCell* after_sky_cell;
    };

    public unsafe struct LScape
    {
        public uint mid_radius;
        public int mid_width;
        public CLandBlock** land_blocks;
        public CLandBlock** block_draw_list;
        public uint loaded_cell_id;
        public uint viewer_cell_id;
        public int viewer_b_xoff;
        public int viewer_b_yoff;
        public GameSky* sky;
        public CSurface* landscape_detail_surface;
        public CSurface* environment_detail_surface;
        public CSurface* building_detail_surface;
        public CSurface* object_detail_surface;
    };

    public struct PackObj
    {
        public IntPtr vfptr;
    };

    public unsafe struct Frame
    {
        public float qw;
        public float qx;
        public float qy;
        public float qz;
        public fixed float m_fl2gv[9];
        public AC1Legacy_Vector3 m_fOrigin;
    };

    public unsafe struct Position
    {
        public PackObj parent;
        public uint objcell_id;
        public Frame frame;
    };

    public enum SoundType
    {
        Sound_Invalid = 0x0,
        Sound_Speak1 = 0x1,
        Sound_Random = 0x2,
        Sound_Attack1 = 0x3,
        Sound_Attack2 = 0x4,
        Sound_Attack3 = 0x5,
        Sound_SpecialAttack1 = 0x6,
        Sound_SpecialAttack2 = 0x7,
        Sound_SpecialAttack3 = 0x8,
        Sound_Damage1 = 0x9,
        Sound_Damage2 = 0xA,
        Sound_Damage3 = 0xB,
        Sound_Wound1 = 0xC,
        Sound_Wound2 = 0xD,
        Sound_Wound3 = 0xE,
        Sound_Death1 = 0xF,
        Sound_Death2 = 0x10,
        Sound_Death3 = 0x11,
        Sound_Grunt1 = 0x12,
        Sound_Grunt2 = 0x13,
        Sound_Grunt3 = 0x14,
        Sound_Oh1 = 0x15,
        Sound_Oh2 = 0x16,
        Sound_Oh3 = 0x17,
        Sound_Heave1 = 0x18,
        Sound_Heave2 = 0x19,
        Sound_Heave3 = 0x1A,
        Sound_Knockdown1 = 0x1B,
        Sound_Knockdown2 = 0x1C,
        Sound_Knockdown3 = 0x1D,
        Sound_Swoosh1 = 0x1E,
        Sound_Swoosh2 = 0x1F,
        Sound_Swoosh3 = 0x20,
        Sound_Thump1 = 0x21,
        Sound_Smash1 = 0x22,
        Sound_Scratch1 = 0x23,
        Sound_Spear = 0x24,
        Sound_Sling = 0x25,
        Sound_Dagger = 0x26,
        Sound_ArrowWhiz1 = 0x27,
        Sound_ArrowWhiz2 = 0x28,
        Sound_CrossbowPull = 0x29,
        Sound_CrossbowRelease = 0x2A,
        Sound_BowPull = 0x2B,
        Sound_BowRelease = 0x2C,
        Sound_ThrownWeaponRelease1 = 0x2D,
        Sound_ArrowLand = 0x2E,
        Sound_Collision = 0x2F,
        Sound_HitFlesh1 = 0x30,
        Sound_HitLeather1 = 0x31,
        Sound_HitChain1 = 0x32,
        Sound_HitPlate1 = 0x33,
        Sound_HitMissile1 = 0x34,
        Sound_HitMissile2 = 0x35,
        Sound_HitMissile3 = 0x36,
        Sound_Footstep1 = 0x37,
        Sound_Footstep2 = 0x38,
        Sound_Walk1 = 0x39,
        Sound_Dance1 = 0x3A,
        Sound_Dance2 = 0x3B,
        Sound_Dance3 = 0x3C,
        Sound_Hidden1 = 0x3D,
        Sound_Hidden2 = 0x3E,
        Sound_Hidden3 = 0x3F,
        Sound_Eat1 = 0x40,
        Sound_Drink1 = 0x41,
        Sound_Open = 0x42,
        Sound_Close = 0x43,
        Sound_OpenSlam = 0x44,
        Sound_CloseSlam = 0x45,
        Sound_Ambient1 = 0x46,
        Sound_Ambient2 = 0x47,
        Sound_Ambient3 = 0x48,
        Sound_Ambient4 = 0x49,
        Sound_Ambient5 = 0x4A,
        Sound_Ambient6 = 0x4B,
        Sound_Ambient7 = 0x4C,
        Sound_Ambient8 = 0x4D,
        Sound_Waterfall = 0x4E,
        Sound_LogOut = 0x4F,
        Sound_LogIn = 0x50,
        Sound_LifestoneOn = 0x51,
        Sound_AttribUp = 0x52,
        Sound_AttribDown = 0x53,
        Sound_SkillUp = 0x54,
        Sound_SkillDown = 0x55,
        Sound_HealthUp = 0x56,
        Sound_HealthDown = 0x57,
        Sound_ShieldUp = 0x58,
        Sound_ShieldDown = 0x59,
        Sound_EnchantUp = 0x5A,
        Sound_EnchantDown = 0x5B,
        Sound_VisionUp = 0x5C,
        Sound_VisionDown = 0x5D,
        Sound_Fizzle = 0x5E,
        Sound_Launch = 0x5F,
        Sound_Explode = 0x60,
        Sound_TransUp = 0x61,
        Sound_TransDown = 0x62,
        Sound_BreatheFlaem = 0x63,
        Sound_BreatheAcid = 0x64,
        Sound_BreatheFrost = 0x65,
        Sound_BreatheLightning = 0x66,
        Sound_Create = 0x67,
        Sound_Destroy = 0x68,
        Sound_Lockpicking = 0x69,
        Sound_UI_EnterPortal = 0x6A,
        Sound_UI_ExitPortal = 0x6B,
        Sound_UI_GeneralQuery = 0x6C,
        Sound_UI_GeneralError = 0x6D,
        Sound_UI_TransientMessage = 0x6E,
        Sound_UI_IconPickUp = 0x6F,
        Sound_UI_IconSuccessfulDrop = 0x70,
        Sound_UI_IconInvalid_Drop = 0x71,
        Sound_UI_ButtonPress = 0x72,
        Sound_UI_GrabSlider = 0x73,
        Sound_UI_ReleaseSlider = 0x74,
        Sound_UI_NewTargetSelected = 0x75,
        Sound_UI_Roar = 0x76,
        Sound_UI_Bell = 0x77,
        Sound_UI_Chant1 = 0x78,
        Sound_UI_Chant2 = 0x79,
        Sound_UI_DarkWhispers1 = 0x7A,
        Sound_UI_DarkWhispers2 = 0x7B,
        Sound_UI_DarkLaugh = 0x7C,
        Sound_UI_DarkWind = 0x7D,
        Sound_UI_DarkSpeech = 0x7E,
        Sound_UI_Drums = 0x7F,
        Sound_UI_GhostSpeak = 0x80,
        Sound_UI_Breathing = 0x81,
        Sound_UI_Howl = 0x82,
        Sound_UI_LostSouls = 0x83,
        Sound_UI_Squeal = 0x84,
        Sound_UI_Thunder1 = 0x85,
        Sound_UI_Thunder2 = 0x86,
        Sound_UI_Thunder3 = 0x87,
        Sound_UI_Thunder4 = 0x88,
        Sound_UI_Thunder5 = 0x89,
        Sound_UI_Thunder6 = 0x8A,
        Sound_RaiseTrait = 0x8B,
        Sound_WieldObject = 0x8C,
        Sound_UnwieldObject = 0x8D,
        Sound_ReceiveItem = 0x8E,
        Sound_PickUpItem = 0x8F,
        Sound_DropItem = 0x90,
        Sound_ResistSpell = 0x91,
        Sound_PicklockFail = 0x92,
        Sound_LockSuccess = 0x93,
        Sound_OpenFailDueToLock = 0x94,
        Sound_TriggerActivated = 0x95,
        Sound_SpellExpire = 0x96,
        Sound_ItemManaDepleted = 0x97,
        Sound_TriggerActivated1 = 0x98,
        Sound_TriggerActivated2 = 0x99,
        Sound_TriggerActivated3 = 0x9A,
        Sound_TriggerActivated4 = 0x9B,
        Sound_TriggerActivated5 = 0x9C,
        Sound_TriggerActivated6 = 0x9D,
        Sound_TriggerActivated7 = 0x9E,
        Sound_TriggerActivated8 = 0x9F,
        Sound_TriggerActivated9 = 0xA0,
        Sound_TriggerActivated10 = 0xA1,
        Sound_TriggerActivated11 = 0xA2,
        Sound_TriggerActivated12 = 0xA3,
        Sound_TriggerActivated13 = 0xA4,
        Sound_TriggerActivated14 = 0xA5,
        Sound_TriggerActivated15 = 0xA6,
        Sound_TriggerActivated16 = 0xA7,
        Sound_TriggerActivated17 = 0xA8,
        Sound_TriggerActivated18 = 0xA9,
        Sound_TriggerActivated19 = 0xAA,
        Sound_TriggerActivated20 = 0xAB,
        Sound_TriggerActivated21 = 0xAC,
        Sound_TriggerActivated22 = 0xAD,
        Sound_TriggerActivated23 = 0xAE,
        Sound_TriggerActivated24 = 0xAF,
        Sound_TriggerActivated25 = 0xB0,
        Sound_TriggerActivated26 = 0xB1,
        Sound_TriggerActivated27 = 0xB2,
        Sound_TriggerActivated28 = 0xB3,
        Sound_TriggerActivated29 = 0xB4,
        Sound_TriggerActivated30 = 0xB5,
        Sound_TriggerActivated31 = 0xB6,
        Sound_TriggerActivated32 = 0xB7,
        Sound_TriggerActivated33 = 0xB8,
        Sound_TriggerActivated34 = 0xB9,
        Sound_TriggerActivated35 = 0xBA,
        Sound_TriggerActivated36 = 0xBB,
        Sound_TriggerActivated37 = 0xBC,
        Sound_TriggerActivated38 = 0xBD,
        Sound_TriggerActivated39 = 0xBE,
        Sound_TriggerActivated40 = 0xBF,
        Sound_TriggerActivated41 = 0xC0,
        Sound_TriggerActivated42 = 0xC1,
        Sound_TriggerActivated43 = 0xC2,
        Sound_TriggerActivated44 = 0xC3,
        Sound_TriggerActivated45 = 0xC4,
        Sound_TriggerActivated46 = 0xC5,
        Sound_TriggerActivated47 = 0xC6,
        Sound_TriggerActivated48 = 0xC7,
        Sound_TriggerActivated49 = 0xC8,
        Sound_TriggerActivated50 = 0xC9,
        Sound_HealthDownVoid = 0xCA,
        Sound_RegenDownVoid = 0xCB,
        Sound_SkillDownVoid = 0xCC,
        NUM_SOUND_TYPES = 0xCD,
        FORCE_SoundType_32_BIT = 0x7FFFFFFF,
    };

    public struct AmbientSoundDesc
    {
        public SoundType stype;
        public int is_continuous;
        public float volume;
        public float base_chance;
        public float min_rate;
        public float max_rate;
    };

    public unsafe struct AmbientSTBDesc
    {
        public IDClass__tagDataID_32_0 stb_id;
        public int stb_not_found;
        public AC1Legacy_SmartArray<TypedPointer<AmbientSoundDesc>> ambient_sounds;
        public CSoundTable* sound_table;
        public uint play_count;
    };

    public unsafe struct AmbientSound
    {
        public IntPtr vfptr;
        public int on_queue;
        public float sound_count;
        public AmbientSTBDesc* desc;
        public uint ambient_sound_id;
        public int constant_sound;
    };

    public unsafe struct DArray<T>
        where T : unmanaged
    {
        public T* data;
        public uint blocksize;
        public uint next_available;
        public uint sizeOf;
    };

    public unsafe struct AC1Legacy_PQueueArray_PQueueNode<T>
        where T : unmanaged
    {
        public T key;
        public void* data;
    }

    public unsafe struct AC1Legacy_PQueueArray<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public AC1Legacy_PQueueArray_PQueueNode<T>* A;
        public int curNumNodes;
        public int allocatedNodes;
        public int minAllocatedNodes;
    };

    public unsafe struct Ambient
    {
        public Position player_pos;
        public float total_sound_count;
        public uint num_sounds;
        public DArray<TypedPointer<AmbientSound>> sounds;
        public AC1Legacy_PQueueArray<double> sound_queue;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public unsafe struct CellManager //align 8
    {
        LScape* lscape;
        Ambient* ambient_sounds;
        public uint last_prefetch_cell_id;
        public double last_prefetch_check;
        public bool blocking_for_cells;
        public bool all_cells_available;
        public uint num_cells_waiting;
        public uint total_num_cells_waiting;
        public CObjCell* curr_cell;
        public Position load_pos;
        public int keep_lscape_loaded;
    };

    public unsafe struct CameraSet
    {
        public IntPtr refCountTemplateVfptr;
        public uint m_cRef;
        public CameraManager* cm;
        public SmartBox* sbox;
        public int looking_down;
        public int in_map_mode;
        public int mouselook_active;
        public int camera_movement_active;
        public int targeting;
        public int rot_left;
        public int rot_right;
        public int lower;
        public int raise;
        public int farther;
        public int closer;
        public float current_stiffness;
        public short mouselook_x_extent;
        public short mouselook_y_extent;
        public AC1Legacy_Vector3 lookdown_saved_offset;
        public AC1Legacy_Vector3 lookdown_saved_target_dir;
        public double m_ttLastRotate;
        public double m_ttLastRaiseOrLower;
        public double m_ttLastZoom;
        public double m_LastServerMessage;
        public double m_LastMouseMovement;
    };

    public enum CameraTarget
    {
        INVALID_TARGET = 0x0,
        LOOK_IN_DIRECTION = 0x1,
        LOOK_AT_OBJECT = 0x2,
        LOOK_AT_PIVOT = 0x4,
        ALIGN_WITH_PIVOT = 0x8,
        ALIGN_WITH_PLANE = 0x10,
        FORCE_CameraTarget_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct CameraManager
    {
        public CInputHandler inputHandler;
        public IInputActionCallback inputActionCallback;
        public float t_stiffness;
        public float r_stiffness;
        public uint pivot_object_id;
        public int pivot_part_index;
        public AC1Legacy_Vector3 pivot_offset;
        public uint target_object_id;
        public int target_part_index;
        public AC1Legacy_Vector3 target_offset;
        public AC1Legacy_Vector3 direction;
        public CameraTarget target_status;
        public AC1Legacy_Vector3 viewer_offset;
        public bool m_bAlignCameraToSlope;
        public float m_rCameraStiffness;
        public float m_rCameraAdjustmentSpeed;
        public uint m_dwPivotOffsetMovement;
        public uint m_dwCameraOffsetMovement;
        public float m_rMovementSpeed;
        public float scale;
        public double last_update_time;
        public AC1Legacy_Vector3 old_velocities1;
        public AC1Legacy_Vector3 old_velocities2;
        public AC1Legacy_Vector3 old_velocities3;
        public AC1Legacy_Vector3 old_velocities4;
        public AC1Legacy_Vector3 old_velocities5;
        public int old_velocity_num;
        public bool m_bEnabled;
        public CameraSet* m_pCurrentCameraSet;
    };

    public enum HoldKey
    {
        HoldKey_Invalid = 0x0,
        HoldKey_None = 0x1,
        HoldKey_Run = 0x2,
        Num_HoldKeys = 0x3,
        FORCE_HoldKey_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct LListData
    {
        public LListData* llist_next;
    };

    public struct ActionNode
    {
        public LListData lListData;
        public uint action;
        public float speed;
        public uint stamp;
        public int autonomous;
    };

    public unsafe struct LListBase
    {
        public LListData* head_;
        public LListData* tail_;
    };

    public struct LList<T>
        where T : unmanaged
    {
        public LListBase list;
    };

    public struct RawMotionState
    {
        public PackObj packObj;
        public LList<ActionNode> actions;
        public HoldKey current_holdkey;
        public uint current_style;
        public uint forward_command;
        public HoldKey forward_holdkey;
        public float forward_speed;
        public uint sidestep_command;
        public HoldKey sidestep_holdkey;
        public float sidestep_speed;
        public uint turn_command;
        public HoldKey turn_holdkey;
        public float turn_speed;
    };


    /* 3455 */
    public unsafe struct InterpretedMotionState
    {
        public PackObj packObj;
        public uint current_style;
        public uint forward_command;
        public float forward_speed;
        public uint sidestep_command;
        public float sidestep_speed;
        public uint turn_command;
        public float turn_speed;
        public LList<ActionNode> actions;
    };

    public struct CMotionInterp_MotionNode
    {
        public LListData llistData;
        public uint context_id;
        public uint motion;
        public uint jump_error_code;
    };

    public unsafe struct CMotionInterp
    {
        public int initted;
        public CWeenieObject* weenie_obj;
        public CPhysicsObj* physics_obj;
        public RawMotionState raw_state;
        public InterpretedMotionState interpreted_state;
        public float current_speed_factor;
        public int standing_longjump;
        public float jump_extent;
        public uint server_action_stamp;
        public float my_run_rate;
        public LList<CMotionInterp_MotionNode> pending_motions;
    };

    public enum MovementTypes_Type
    {
      Invalid = 0x0,
      RawCommand = 0x1,
      InterpretedCommand = 0x2,
      StopRawCommand = 0x3,
      StopInterpretedCommand = 0x4,
      StopCompletely = 0x5,
      MoveToObject = 0x6,
      MoveToPosition = 0x7,
      TurnToObject = 0x8,
      TurnToHeading = 0x9,
      FORCE_Type_32_BIT = 0x7FFFFFFF,
    };

    [Flags]
    public enum E9DF5898AC3667EE63853CA774377241C
    {
        can_walk = 0b00000000,
        can_run = 0b00000001,
        can_sidestep = 0b00000010,
        can_walk_backwards = 0b00000100,
        can_charge = 0b00001000,
        fail_walk = 0b00010000,
        use_final_heading = 0b00100000,
        sticky = 0b01000000,
        move_away = 0b10000000,
        move_towards = 0b100000000,
        use_spheres = 0b1000000000,
        set_hold_key = 0b10000000000,
        autonomous = 0b100000000000,
        modify_raw_state = 0b1000000000000,
        modify_interpreted_state = 0b10000000000000,
        cancel_moveto = 0b100000000000000,
        stop_completely = 0b1000000000000000,
        disable_jump_during_link = 0b1000000000000000
    };

    [StructLayout(LayoutKind.Explicit)]
    public struct E219484CD3FACC896A58537BA7B2DDF4E
    {
        [FieldOffset(0)]
        public uint bitfield;
        [FieldOffset(0)]
        public E9DF5898AC3667EE63853CA774377241C __s1;
    };

    public struct MovementParameters 
    {
        public PackObj packObj;
        public E219484CD3FACC896A58537BA7B2DDF4E ___u1;
        public float distance_to_object;
        public float min_distance;
        public float desired_heading;
        public float speed;
        public float fail_distance;
        public float walk_run_threshhold;
        public uint context_id;
        public HoldKey hold_key_to_apply;
        public uint action_stamp;
    };

    public struct MoveToManager_MovementNode
    {
        public DLListData dlListData;
        public MovementTypes_Type type;
        public float heading;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 8 )]
    public unsafe struct MoveToManager
    {
        public MovementTypes_Type movement_type;
        public Position sought_position;
        public Position current_target_position;
        public Position starting_position;
        public MovementParameters movement_params;
        public float previous_heading;
        public float previous_distance;
        public double previous_distance_time;
        public float original_distance;
        public double original_distance_time;
        public uint fail_progress_count;
        public uint sought_object_id;
        public uint top_level_object_id;
        public float sought_object_radius;
        float sought_object_height;
        public uint current_command;
        public uint aux_command;
        public int moving_away;
        public int initialized;
        public DLList<MoveToManager_MovementNode> pending_actions;
        public CPhysicsObj* physics_obj;
        public CWeenieObject* weenie_obj;
    };

    public struct NoticeHandler
    {
        public IntPtr vfptr;
    }

    public unsafe struct NoticeRegistrar
    {
        public IntPtr vfptr;
        public HashTable<uint, TypedPointer<UnmanagedList<TypedPointer<NoticeHandler>>>>* m_handlers;
    };

    public enum TSRecvMode
    {
        TSRECV_BLOCK = 0x0,
        TSRECV_LATESTONLY = 0x1,
        FORCE_TSRecvMode_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct TSBlockedEntry
    {
        public TSBlockedEntry* m_pNext;
        public uint m_stamp;
        public ReferenceCountTemplate_1048576_0* m_pObj;
    };

    public struct TSRecv
    {
        public int receivedFirstEntry_;
        public TSRecvMode mode_;
        public uint overflowLimit_;
        public uint highestStamp_;
        public TSBlockedEntry head_;
        public int numBlockedStamps_;
        public double blockedSince_;
    };

    public unsafe struct NIListElement<T>
        where T : unmanaged
    {
        public uint data_;
        public NIListElement<T>* next_;
    };

    public unsafe struct NIList<T>
        where T : unmanaged
    {
        public NIListElement<T>* head_;
        public NIListElement<T>* tail_;
    };

    public unsafe struct CWeenieObject
    {
        public LongHashData hashData;
        public NoticeRegistrar notice_registrar;
        public double update_time;
        public NIList<TypedPointer<NetBlob>>* netblob_list;
        public TSRecv blobOrdering;
    };

    public unsafe struct UI64HashData 
    {
        public HashBaseData<ulong> data;
    };

    public enum NetBlob_State
    {
        NETBLOB_FROZEN = 0x0,
        NETBLOB_SENDING = 0x1,
        NETBLOB_RECEIVING = 0x2,
        NETBLOB_RECEIVED = 0x3,
        NETBLOB_FRAGMENTED = 0x4,
        FORCE_State_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct NetBlob
    {
        public ReferenceCountTemplate_1048576_0 refTemplate;
        public PackObj packObj;
        public UI64HashData hashData;
        public NetBlob_State state_;
        public char* buf_;
        public uint bufSize_;
        public uint cMaxFragments_;
        public uint numFragments_;
        public ushort sender_;
        public ushort queueID_;
        public uint priority_;
        public NetBlob* waitNext_;
        public ulong savedNetBlobID_;
    };


    public unsafe struct InterpolationNode
    {
        public LListData llistData;
        public uint type;
        public Position p;
        public AC1Legacy_Vector3 v;
        public float extent;
    };

    public unsafe struct InterpolationManager
    {
        public LList<InterpolationNode> position_queue;
        public CPhysicsObj* physics_obj;
        public int keep_heading;
        public uint frame_counter;
        public float original_distance;
        public float progress_quantum;
        public int node_fail_counter;
        public Position blipto_position;
    };

    public unsafe struct StickyManager
    {
        public uint target_id;
        public float target_radius;
        public Position target_position;
        public CPhysicsObj* physics_obj;
        public int initialized;
        public double sticky_timeout_time;
    };

    public unsafe struct ConstraintManager
    {
        public CPhysicsObj* physics_obj;
        public int is_constrained;
        public float constraint_pos_offset;
        public Position constraint_pos;
        public float constraint_distance_start;
        public float constraint_distance_max;
    };

    public unsafe struct PositionManager
    {
        public InterpolationManager* interpolation_manager;
        public StickyManager* sticky_manager;
        public ConstraintManager* constraint_manager;
        public CPhysicsObj* physics_obj;
    };

    public unsafe struct CELLINFO
    {
        public uint cell_id;
        public CObjCell* cell;
    };

    public unsafe struct CELLARRAY
    {
        public int added_outside;
        public int do_not_load_cells;
        public uint num_cells;
        public DArray<CELLINFO> cells;
    };

    public enum DetectionType
    {
        NoChangeDetection = 0x0,
        EnteredDetection = 0x1,
        LeftDetection = 0x2,
        FORCE_DetectionType_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct DetectionInfo
    {
        public uint object_id;
        public DetectionType object_status;
    };

    public unsafe struct DetectionCylsphere
    {
        public uint context_id;
        public float radius;
        public int object_detected;
        public DetectionInfo info;
        public uint detection_type;
    };

    public unsafe struct LongNIHashData
    {
        public LongNIHashData* next;
        public void* data;
        public uint key;
    };

    public unsafe struct LongNIHash<T>
        where T : unmanaged
    {
        public LongNIHashData** buckets;
        public int table_size;
    };

    public unsafe struct OBJECTINFO
    {
        public CPhysicsObj* obj;
        public int state;
        public float scale;
        public float step_up_height;
        public float step_down_height;
        public int ethereal;
        public int step_down;
        public uint targetID;
    };

    public struct ObjectInfo
    {
        public uint object_id;
        public uint hit_location;
    };

    public struct AttackInfo
    {
        public uint attack_id;
        public int part_index;
        public float attack_radius;
        public uint waiting_for_cells;
        public uint num_objects;
        public DArray<ObjectInfo> object_list;
    };

    public unsafe struct AttackManager
    {
        public float attack_radius;
        public uint current_attack;
        public LongNIHash<AttackInfo> pending_attacks;
    };

    public enum TargetStatus
    {
        Undef_TargetStatus = 0x0,
        Ok_TargetStatus = 0x1,
        ExitWorld_TargetStatus = 0x2,
        Teleported_TargetStatus = 0x3,
        Contained_TargetStatus = 0x4,
        Parented_TargetStatus = 0x5,
        TimedOut_TargetStatus = 0x6,
        FORCE_TargetStatus_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct TargetInfo
    {
        public uint context_id;
        public uint object_id;
        public float radius;
        public double quantum;
        public Position target_position;
        public Position interpolated_position;
        public AC1Legacy_Vector3 interpolated_heading;
        public AC1Legacy_Vector3 velocity;
        public TargetStatus status;
        public double last_update_time;
    };

    public unsafe struct TargetManager
    {
        public CPhysicsObj* physobj;
        public TargetInfo* target_info;
        public LongNIHash<TargettedVoyeurInfo>* voyeur_table;
        public double last_update_time;
    };

    [StructLayout(LayoutKind.Sequential, Size = 8)]
    public struct TargettedVoyeurInfo
    {
        public uint object_id;
        public double quantum;
        public float radius;
        public Position last_sent_position;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public unsafe struct DetectionManager
    {
        public CPhysicsObj* physobj;
        public LongNIHash<DetectionInfo>* detection_objects;
        public uint num_pending_global_detect_updates;
        public CELLARRAY* cell_array;
        public double last_update_time;
        public Position last_global_update;
        public LongNIHash<DetectionCylsphere> detection_table;
        public AC1Legacy_SmartArray<uint> pending_deletions;
    };

    [StructLayout(LayoutKind.Explicit)]
    public struct E6E56156ABBED5B0767B81AF559A00DDB
    {
        [FieldOffset(0)]
        public double birthtime;
        [FieldOffset(0)]
        public double last_update_time;
    };

    public unsafe struct Particle
    {
        public E6E56156ABBED5B0767B81AF559A00DDB ___u0;
        public double lifespan;
        public double lifetime;
        public Frame start_frame;
        public AC1Legacy_Vector3 offset;
        public AC1Legacy_Vector3 a;
        public AC1Legacy_Vector3 b;
        public AC1Legacy_Vector3 c;
        public float start_scale;
        public float final_scale;
        public float start_trans;
        public float final_trans;
    };

    public unsafe struct ParticleEmitter
    {
        public uint id;
        public CPhysicsObj* parent;
        public uint part_index;
        public Frame parent_offset;
        public CPhysicsObj* physobj;
        public ParticleEmitterInfo* info;
        public Particle* particles;
        public CPhysicsPart** part_storage;
        public CPhysicsPart** parts;
        public int degraded_out;
        public float degrade_distance;
        public double creation_time;
        public int num_particles;
        public int total_emitted;
        public double last_emit_time;
        public AC1Legacy_Vector3 last_emit_offset;
        public int stopped;
        public double last_update_time;
    };

    public struct ParticleManager
    {
        public uint next_emitter_id;
        public LongNIHash<ParticleEmitter> particle_table;
    };

    public unsafe struct MovementManager
    {
        public CMotionInterp* motion_interpreter;
        public MoveToManager* moveto_manager;
        public CPhysicsObj* physics_obj;
        public CWeenieObject* weenie_obj;
    };

     /* 
        public Position viewer_sought_position;
        public CameraManager* camera_manager;
        public CellManager* cell_manager;
        public CPhysics* physics;
        public CObjectMaint* m_pObjMaint;
        public LScape* lscape;
        public Ambient* ambient_sounds;
        public CommandInterpreter* cmdinterp;
     */
}
