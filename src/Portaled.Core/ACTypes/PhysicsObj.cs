using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct HashBaseData<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public HashBaseData<T>* hash_next;
        public T id;
    };

    public unsafe struct LongHashData
    {
        public HashBaseData<uint> data;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct SArray<T>
        where T : unmanaged
    {
        public Frame* data;
        public ushort sizeOf;
    };

    public unsafe struct DLListData
    {
        public DLListData* dllist_next;
        public DLListData* dllist_prev;
    };

    public unsafe struct CHILDLIST
    {
        public ushort num_objects;
        public SArray<TypedPointer<CPhysicsObj>> objects;
        public SArray<Frame> frames;
        public SArray<uint> part_numbers;
        public SArray<uint> location_ids;
    };

    public unsafe struct AnimSequenceNode
    {
        public PackObj packObj;
        public DLListData dlListData;
        public CAnimation* anim;
        public float framerate;
        public int low_frame;
        public int high_frame;
    };

    public unsafe struct DLListBase
    {
        public DLListData* head_;
        public DLListData* tail_;
    };

    public struct DLList<T>
        where T : unmanaged
    {
        public DLListBase listBase;
    };

    public unsafe struct CAnimHook
    {
        public IntPtr vfptr;
        public CAnimHook* next_hook;
        public int direction_;
    };

    public struct AFrame
    {
        public AC1Legacy_Vector3 m_fOrigin;
        public float qw;
        public float qx;
        public float qy;
        public float qz;
    };

    public unsafe struct AnimFrame
    {
        public AFrame* frame;
        public uint num_frame_hooks;
        public CAnimHook* hooks;
        public uint num_parts;
    };

    public unsafe struct CSequence
    {
        public PackObj packobj;
        public DLList<AnimSequenceNode> anim_list;
        public AnimSequenceNode* first_cyclic;
        public AC1Legacy_Vector3 velocity;
        public AC1Legacy_Vector3 omega;
        public CPhysicsObj* hook_obj;
        public double frame_number;
        public AnimSequenceNode* curr_anim;
        public AnimFrame* placement_frame;
        public uint placement_frame_id;
        public int bIsTrivial;
    };

    public unsafe struct RGBColor
    {
        public float r;
        public float g;
        public float b;
    };

    public unsafe struct LIGHTINFO
    {
        public int type;
        public Frame offset;
        public AC1Legacy_Vector3 viewerspace_location;
        public RGBColor color;
        public float intensity;
        public float falloff;
        public float cone_angle;
    };

    public unsafe struct LIGHTOBJ
    {
        public LIGHTINFO* lightinfo;
        public Frame global_offset;
        public int state;
    };

    public unsafe struct LIGHTLIST
    {
        public uint num_lights;
        public LIGHTOBJ* lightobj;
    };

    public struct _D3DCOLORVALUE
    {
        public float r;
        public float g;
        public float b;
        public float a;
    };

    public struct _D3DMATERIAL9
    {
        public _D3DCOLORVALUE Diffuse;
        public _D3DCOLORVALUE Ambient;
        public _D3DCOLORVALUE Specular;
        public _D3DCOLORVALUE Emissive;
        public float Power;
    };

    public unsafe struct CMaterial
    {
        public IntPtr refCountvfPtr;
        public uint m_cRef;
        public int has_alpha;
        public _D3DMATERIAL9 d3d_material;
    };

    public unsafe struct CPhysicsPart
    {
        public float CYpt;
        public AC1Legacy_Vector3 viewer_heading;
        public GfxObjDegradeInfo* degrades;
        public uint deg_level;
        public int deg_mode;
        public int draw_state;
        public CGfxObj** gfxobj;
        public AC1Legacy_Vector3 gfxobj_scale;
        public Position pos;
        public Position draw_pos;
        public CMaterial* material;
        public CSurface** surfaces;
        public IDClass__tagDataID_32_0 original_palette_id;
        public float curTranslucency;
        public float curDiffuse;
        public float curLuminosity;
        public Palette* shiftPal;
        public uint m_current_render_frame_num;
        public CPhysicsObj* physobj;
        public int physobj_index;
    };

    public unsafe struct CPartArray
    {
        public uint pa_state;
        public CPhysicsObj* owner;
        public CSequence sequence;
        public MotionTableManager* motion_table_manager;
        public CSetup* setup;
        public uint num_parts;
        public CPhysicsPart** parts;
        public AC1Legacy_Vector3 scale;
        public Palette** pals;
        public LIGHTLIST* lights;
        public AnimFrame* last_animframe;
    };

    public enum PScriptType
    {
        PS_Invalid = 0x0,
        PS_Test1 = 0x1,
        PS_Test2 = 0x2,
        PS_Test3 = 0x3,
        PS_Launch = 0x4,
        PS_Explode = 0x5,
        PS_AttribUpRed = 0x6,
        PS_AttribDownRed = 0x7,
        PS_AttribUpOrange = 0x8,
        PS_AttribDownOrange = 0x9,
        PS_AttribUpYellow = 0xA,
        PS_AttribDownYellow = 0xB,
        PS_AttribUpGreen = 0xC,
        PS_AttribDownGreen = 0xD,
        PS_AttribUpBlue = 0xE,
        PS_AttribDownBlue = 0xF,
        PS_AttribUpPurple = 0x10,
        PS_AttribDownPurple = 0x11,
        PS_SkillUpRed = 0x12,
        PS_SkillDownRed = 0x13,
        PS_SkillUpOrange = 0x14,
        PS_SkillDownOrange = 0x15,
        PS_SkillUpYellow = 0x16,
        PS_SkillDownYellow = 0x17,
        PS_SkillUpGreen = 0x18,
        PS_SkillDownGreen = 0x19,
        PS_SkillUpBlue = 0x1A,
        PS_SkillDownBlue = 0x1B,
        PS_SkillUpPurple = 0x1C,
        PS_SkillDownPurple = 0x1D,
        PS_SkillDownBlack = 0x1E,
        PS_HealthUpRed = 0x1F,
        PS_HealthDownRed = 0x20,
        PS_HealthUpBlue = 0x21,
        PS_HealthDownBlue = 0x22,
        PS_HealthUpYellow = 0x23,
        PS_HealthDownYellow = 0x24,
        PS_RegenUpRed = 0x25,
        PS_RegenDownREd = 0x26,
        PS_RegenUpBlue = 0x27,
        PS_RegenDownBlue = 0x28,
        PS_RegenUpYellow = 0x29,
        PS_RegenDownYellow = 0x2A,
        PS_ShieldUpRed = 0x2B,
        PS_ShieldDownRed = 0x2C,
        PS_ShieldUpOrange = 0x2D,
        PS_ShieldDownOrange = 0x2E,
        PS_ShieldUpYellow = 0x2F,
        PS_ShieldDownYellow = 0x30,
        PS_ShieldUpGreen = 0x31,
        PS_ShieldDownGreen = 0x32,
        PS_ShieldUpBlue = 0x33,
        PS_ShieldDownBlue = 0x34,
        PS_ShieldUpPurple = 0x35,
        PS_ShieldDownPurple = 0x36,
        PS_ShieldUpGrey = 0x37,
        PS_ShieldDownGrey = 0x38,
        PS_EnchantUpRed = 0x39,
        PS_EnchantDownRed = 0x3A,
        PS_EnchantUpOrange = 0x3B,
        PS_EnchantDownOrange = 0x3C,
        PS_EnchantUpYellow = 0x3D,
        PS_EnchantDownYellow = 0x3E,
        PS_EnchantUpGreen = 0x3F,
        PS_EnchantDownGreen = 0x40,
        PS_EnchantUpBlue = 0x41,
        PS_EnchantDownBlue = 0x42,
        PS_EnchantUpPurple = 0x43,
        PS_EnchantDownPurple = 0x44,
        PS_VitaeUpWhite = 0x45,
        PS_VitaeDownBlack = 0x46,
        PS_VisionUpWhite = 0x47,
        PS_VisionDownBlack = 0x48,
        PS_SwapHealth_Red_To_Yellow = 0x49,
        PS_SwapHealth_Red_To_Blue = 0x4A,
        PS_SwapHealth_Yellow_To_Red = 0x4B,
        PS_SwapHealth_Yellow_To_Blue = 0x4C,
        PS_SwapHealth_Blue_To_Red = 0x4D,
        PS_SwapHealth_Blue_To_Yellow = 0x4E,
        PS_TransUpWhite = 0x4F,
        PS_TransDownBlack = 0x50,
        PS_Fizzle = 0x51,
        PS_PortalEntry = 0x52,
        PS_PortalExit = 0x53,
        PS_BreatheFlame = 0x54,
        PS_BreatheFrost = 0x55,
        PS_BreatheAcid = 0x56,
        PS_BreatheLightning = 0x57,
        PS_Create = 0x58,
        PS_Destroy = 0x59,
        PS_ProjectileCollision = 0x5A,
        PS_SplatterLowLeftBack = 0x5B,
        PS_SplatterLowLeftFront = 0x5C,
        PS_SplatterLowRightBack = 0x5D,
        PS_SplatterLowRightFront = 0x5E,
        PS_SplatterMidLeftBack = 0x5F,
        PS_SplatterMidLeftFront = 0x60,
        PS_SplatterMidRightBack = 0x61,
        PS_SplatterMidRightFront = 0x62,
        PS_SplatterUpLeftBack = 0x63,
        PS_SplatterUpLeftFront = 0x64,
        PS_SplatterUpRightBack = 0x65,
        PS_SplatterUpRightFront = 0x66,
        PS_SparkLowLeftBack = 0x67,
        PS_SparkLowLeftFront = 0x68,
        PS_SparkLowRightBack = 0x69,
        PS_SparkLowRightFront = 0x6A,
        PS_SparkMidLeftBack = 0x6B,
        PS_SparkMidLeftFront = 0x6C,
        PS_SparkMidRightBack = 0x6D,
        PS_SparkMidRightFront = 0x6E,
        PS_SparkUpLeftBack = 0x6F,
        PS_SparkUpLeftFront = 0x70,
        PS_SparkUpRightBack = 0x71,
        PS_SparkUpRightFront = 0x72,
        PS_PortalStorm = 0x73,
        PS_Hide = 0x74,
        PS_UnHide = 0x75,
        PS_Hidden = 0x76,
        PS_DisappearDestroy = 0x77,
        SpecialState1 = 0x78,
        SpecialState2 = 0x79,
        SpecialState3 = 0x7A,
        SpecialState4 = 0x7B,
        SpecialState5 = 0x7C,
        SpecialState6 = 0x7D,
        SpecialState7 = 0x7E,
        SpecialState8 = 0x7F,
        SpecialState9 = 0x80,
        SpecialState0 = 0x81,
        SpecialStateRed = 0x82,
        SpecialStateOrange = 0x83,
        SpecialStateYellow = 0x84,
        SpecialStateGreen = 0x85,
        SpecialStateBlue = 0x86,
        SpecialStatePurple = 0x87,
        SpecialStateWhite = 0x88,
        SpecialStateBlack = 0x89,
        PS_LevelUp = 0x8A,
        PS_EnchantUpGrey = 0x8B,
        PS_EnchantDownGrey = 0x8C,
        PS_WeddingBliss = 0x8D,
        PS_EnchantUpWhite = 0x8E,
        PS_EnchantDownWhite = 0x8F,
        PS_CampingMastery = 0x90,
        PS_CampingIneptitude = 0x91,
        PS_DispelLife = 0x92,
        PS_DispelCreature = 0x93,
        PS_DispelAll = 0x94,
        PS_BunnySmite = 0x95,
        PS_BaelZharonSmite = 0x96,
        PS_WeddingSteele = 0x97,
        PS_RestrictionEffectBlue = 0x98,
        PS_RestrictionEffectGreen = 0x99,
        PS_RestrictionEffectGold = 0x9A,
        PS_LayingofHands = 0x9B,
        PS_AugmentationUseAttribute = 0x9C,
        PS_AugmentationUseSkill = 0x9D,
        PS_AugmentationUseResistances = 0x9E,
        PS_AugmentationUseOther = 0x9F,
        PS_BlackMadness = 0xA0,
        PS_AetheriaLevelUp = 0xA1,
        PS_AetheriaSurgeDestruction = 0xA2,
        PS_AetheriaSurgeProtection = 0xA3,
        PS_AetheriaSurgeRegeneration = 0xA4,
        PS_AetheriaSurgeAffliction = 0xA5,
        PS_AetheriaSurgeFestering = 0xA6,
        PS_HealthDownVoid = 0xA7,
        PS_RegenDownVoid = 0xA8,
        PS_SkillDownVoid = 0xA9,
        PS_DirtyFightingHealDebuff = 0xAA,
        PS_DirtyFightingAttackDebuff = 0xAB,
        PS_DirtyFightingDefenseDebuff = 0xAC,
        PS_DirtyFightingDamageOverTime = 0xAD,
        NUM_PSCRIPT_TYPES = 0xAE,
        FORCE_PScriptType_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct CShadowObj
    {
        public LongHashData hashData;
        public CPhysicsObj* physobj;
        public uint cell_id;
        public CObjCell* cell;
    };

    public enum PhysicsDesc_PhysicsDescInfo
    {
      CSetup = 0x1,
      MTABLE = 0x2,
      VELOCITY = 0x4,
      ACCELERATION = 0x8,
      OMEGA = 0x10,
      PARENT = 0x20,
      CHILDREN = 0x40,
      OBJSCALE = 0x80,
      FRICTION = 0x100,
      ELASTICITY = 0x200,
      TIMESTAMPS = 0x400,
      STABLE = 0x800,
      PETABLE = 0x1000,
      DEFAULT_SCRIPT = 0x2000,
      DEFAULT_SCRIPT_INTENSITY = 0x4000,
      POSITION = 0x8000,
      MOVEMENT = 0x10000,
      ANIMFRAME_ID = 0x20000,
      TRANSLUCENCY = 0x40000,
      FORCE_PhysicsDescInfo_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct PhysicsObjHook
    {
        public IntPtr vfptr;
        public PhysicsDesc_PhysicsDescInfo hook_type; //align 8
        public double time_created;
        public double interpolation_time;
        public PhysicsObjHook* prev;
        public PhysicsObjHook* next;
        public void* user_data;
    };

    public struct Plane
    {
        public AC1Legacy_Vector3 N;
        public float d;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public struct CPhysicsObj_CollisionRecord
    {
        public double touched_time;
        public int ethereal;
    };

    public unsafe struct HashBase<T>
        where T : unmanaged
    {
        public IntPtr vfptr;
        public uint table_mask;
        public uint key_shift;
        public HashBaseData<T>** buckets;
        public uint table_size;
        public int fPlacementNew_;
    };

    public struct LongNIValHash<T>
        where T : unmanaged
    {
        public HashBase<ulong> hashbase;
    }

    public unsafe struct CPhysicsObj //align 4
    {
        public LongHashData hash_data;
        public NIList<TypedPointer<NetBlob>>* netblob_list;
        public CPartArray* part_array;
        public AC1Legacy_Vector3 player_vector;
        public float player_distance;
        public float CYpt;
        public CSoundTable* sound_table;
        public bool m_bExaminationObject;
        public ScriptManager* script_manager;
        public PhysicsScriptTable* physics_script_table;
        public PScriptType default_script;
        public float default_script_intensity;
        public CPhysicsObj* parent;
        public CHILDLIST* children;
        public Position m_position;
        public CObjCell* cell;
        public uint num_shadow_objects;
        public DArray<CShadowObj> shadow_objects;
        public uint state;
        public uint transient_state;
        public float elasticity;
        public float translucency;
        public float translucencyOriginal;
        public float friction;
        public float massinv;
        public MovementManager* movement_manager;
        public PositionManager* position_manager;
        public int last_move_was_autonomous;
        public int jumped_this_frame;
        public double update_time;
        public AC1Legacy_Vector3 m_velocityVector;
        public AC1Legacy_Vector3 m_accelerationVector;
        public AC1Legacy_Vector3 m_omegaVector;
        public PhysicsObjHook* hooks;
        public AC1Legacy_SmartArray<TypedPointer<CAnimHook>> anim_hooks;
        public float m_scale;
        public float attack_radius;
        public DetectionManager* detection_manager;
        public AttackManager* attack_manager;
        public TargetManager* target_manager;
        public ParticleManager* particle_manager;
        public CWeenieObject* weenie_obj;
        public Plane contact_plane;
        public uint contact_plane_cell_id;
        public AC1Legacy_Vector3 sliding_normal;
        public AC1Legacy_Vector3 cached_velocity;
        public LongNIValHash<CPhysicsObj_CollisionRecord>* collision_table;
        public int colliding_with_environment;
        public fixed ushort update_times[9];
    };
}
