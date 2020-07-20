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
    public unsafe struct CPhysicsObj
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
        public unsigned int num_shadow_objects;
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
        public long double update_time;
        public AC1Legacy::Vector3 m_velocityVector;
        public AC1Legacy::Vector3 m_accelerationVector;
        public AC1Legacy::Vector3 m_omegaVector;
        public PhysicsObjHook* hooks;
        public AC1Legacy::SmartArray<CAnimHook*> anim_hooks;
        public float m_scale;
        public float attack_radius;
        public DetectionManager* detection_manager;
        public AttackManager* attack_manager;
        public TargetManager* target_manager;
        public ParticleManager* particle_manager;
        public CWeenieObject* weenie_obj;
        public Plane contact_plane;
        public unsigned int contact_plane_cell_id;
        public AC1Legacy::Vector3 sliding_normal;
        public AC1Legacy::Vector3 cached_velocity;
        public LongNIValHash<CPhysicsObj::CollisionRecord>* collision_table;
        public int colliding_with_environment;
        public unsigned __int16 update_times[9];
    };
}
