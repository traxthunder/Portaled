
#ifndef DBOBJ_H
#define DBOBJ_H

#include "core.h"
#include "primitive.h"
#include "enums.h"
#include "hash.h"
#include "list.h"
#include "dbocache.h"



struct AC1Legacy_Vector3 : Vector3
{
};


struct Plane
{
	AC1Legacy_Vector3 N;
	float d;
};






class DBOCache
{
	public:
		virtual void* __vecDelDtor (unsigned int);
		virtual void DONOTUSE_1();
		virtual void DONOTUSE_2();
		//virtual struct Collection* GetCollection (IDClass_tagDataID_32_0);
		virtual struct Collection* GetCollection(unsigned int);
		virtual bool SetCollection(struct Collection*);
		virtual unsigned int Release(unsigned int);
		//virtual unsigned int Release(IDClass_tagDataID_32_0);
		virtual bool AddObj(DBObj*);
		virtual bool RemoveObj(unsigned int);
		//virtual bool RemoveObj(IDClass_tagDataID_32_0);
		virtual bool CanLoadFromDisk();
		virtual bool CanRequestFromNet();
		virtual void FlushFreeObjects();
		virtual bool SaveObjectToDisk(PreprocHeader*, DBObj*);
		virtual bool ReloadObject(unsigned int);
		//virtual bool ReloadObject(IDClass_tagDataID_32_0);
		virtual void LastWords();
		virtual bool AddObj_Internal(DBObj*);
		virtual void RemoveObj_Internal(DBObj*);
		virtual void FreeObject(DBObj*);
		virtual void DestroyObj(DBObj*);
		virtual void FreelistAdd(DBObj*);
		virtual void FreelistRemove(DBObj*);
		virtual DBObj* FreelistRemoveOldest();

//		DBOCacheVtbl* vfptr;
		//AutoGrowHashTable<IDClass_tagDataID_32_0, DBObj*> m_ObjTable;
		DBObjTable m_ObjTable;
		unsigned int m_dbtype;
		HashTable<unsigned long, float, 0> m_fidelityTable;
		bool m_fCanKeepFreeObjs;
		bool m_fKeepFreeObjs;
		bool m_bFreelistActive;
		FreelistDef m_freelistDef;
		DBObj* m_pOldestFree;
		DBObj* m_pYoungestFree;
		unsigned int m_nFree;
		unsigned int m_nTotalCount;
		void* m_pfnAllocator;


};



struct InputMapConflictsValue
{
	unsigned int m_eInputMap;
	List<unsigned long> m_listConflictingInputMaps;
};


const struct ActionMap : DBObj
{
	HashList<unsigned long, HashList<unsigned long, ActionMapValue, 1>, 1> m_hashInputMaps;
	IDClass_tagDataID_32_0 m_didStringTable;
	HashTable<unsigned long, InputMapConflictsValue, 0> m_hashConflictingMaps;
};

struct BBox
{
	Vector3 m_vMin;
	Vector3 m_vMax;
};


struct CVertexArray
{
	void* vertex_memory;
	BBox bbox;
	VertexType vertex_type;
	unsigned int num_vertices;
	CVertex* vertices;
};


struct __declspec(align(8)) CGfxObj : DBObj
{
	CMaterial* material;
	unsigned int num_surfaces;
	CSurface** m_rgSurfaces;
	CVertexArray vertex_array;
	unsigned int num_physics_polygons;
	CPolygon* physics_polygons;
	MeshBuffer* constructed_mesh;
	int use_built_mesh;
	CSphere* physics_sphere;
	BSPTREE* physics_bsp;
	AC1Legacy_Vector3 sort_center;
	unsigned int num_polygons;
	CPolygon* polygons;
	CSphere* drawing_sphere;
	BSPTREE* drawing_bsp;
	BBox gfx_bound_box;
	IDClass_tagDataID_32_0 m_didDegrade;
};



struct CommandListElement
{
	CommandListElement* next;
	CommandListElement* prev;
	unsigned int command;
	float speed;
	int hold_run;
};

struct CommandList
{
	CommandListElement* head;
	CommandListElement* mouse_command;
	CommandListElement* current;
};

struct Frame
{
	float qw;
	float qx;
	float qy;
	float qz;
	float m_fl2gv[9];
	AC1Legacy_Vector3 m_fOrigin;
};

struct Position : PackObj
{
	unsigned int objcell_id;
	Frame frame;
};

struct NoticeHandler
{
	void* vfptr;//NoticeHandlerVtbl* vfptr;
};

struct ReferenceCountTemplate
{
	void* vfptr;
	unsigned int m_cRef;
};

struct Turbine_RefCount : ReferenceCountTemplate
{
};



struct IDListNode
{
	unsigned int id;
	IDListNode* prev;
	IDListNode* next;
};


struct IDList : PackObj
{
	IDListNode* first;
	IDListNode* last;
	IDListNode* curNode;
	int numIDs;
	int curNum;
};



struct InventoryPlacement : PackObj
{
	unsigned int iid_;
	unsigned int loc_;
	unsigned int priority_;
};


struct CObjectInventory : LongHashData
{
	IDList _itemsList;
	IDList _containersList;
	PackableList<InventoryPlacement> _invPlacement;
};

template <typename T>
struct __declspec(align(8)) AC1Legacy_PQueueArray_PQueueNode
{
	T key;
	void* data;
};


template <typename K, typename V>
struct PQueueArray_PQueueNode
{
	K key;
	V data;
};

template <typename T>
struct AC1Legacy_PQueueArray
{
	void* vfptr;
	AC1Legacy_PQueueArray_PQueueNode<T>* A;
	int curNumNodes;
	int allocatedNodes;
	int minAllocatedNodes;
};


struct CObjectMaint
{
	Interface _interface;
	NoticeHandler noticeHandler;
	Turbine_RefCount m_cTurbineRefCount;
	int is_active;
	IntrusiveHashTable<unsigned long, CLostCell*, 0> lost_cell_table;
	LongHash<CPhysicsObj> object_table;
	LongHash<CPhysicsObj> null_object_table;
	LongHash<CWeenieObject> weenie_object_table;
	LongHash<CWeenieObject> null_weenie_object_table;
	HashSet<unsigned long> visible_object_table;
	HashTable<unsigned long, double, 0> destruction_object_table;
	LongHash<CObjectInventory> object_inventory_table;
	AC1Legacy_PQueueArray<double> object_destruction_queue;
};


struct __declspec(align(8)) SerializeUsingPackDBObj
{
	DBObj dbobj;
	PackObj packobj;
};

template <typename T>
struct DArray
{
	T* data;
	unsigned int blocksize;
	unsigned int next_available;
	unsigned int sizeOf;
};

struct CPartCell
{
	void* vfptr;
	unsigned int num_shadow_parts;
	DArray<CShadowPart*> shadow_part_list;
};




struct LIGHTINFO
{
	int type;
	Frame offset;
	AC1Legacy_Vector3 viewerspace_location;
	RGBColor color;
	float intensity;
	float falloff;
	float cone_angle;
};


const struct LIGHTOBJ
{
	LIGHTINFO* lightinfo;
	Frame global_offset;
	int state;
};


template <typename T>
struct LongNIValHash : HashBase<unsigned long>
{
};




struct CLandBlockStruct
{
	RGBColor* vertex_lighting;
	LandDefs_Direction trans_dir;
	int side_vertex_count;
	int side_polygon_count;
	int side_cell_count;
	LandDefs_WaterType water_type;
	char* height;
	unsigned __int16* terrain;
	CVertexArray vertex_array;
	CPolygon* polygons;
	unsigned int num_surface_strips;
	CSurfaceTriStrips* surface_strips;
	unsigned int block_surface_index;
	CLandCell* lcell;
	int* SWtoNEcut;
};

struct CLandBlock
{
	SerializeUsingPackDBObj dbobj;
	CLandBlockStruct lbstruct;
	SqCoord block_coord;
	Frame block_frame;
	float max_zval;
	float min_zval;
	int dyn_objs_init_done;
	int lbi_exists;
	LandDefs_Direction dir;
	SqCoord closest;
	BoundingType in_view;
	CLandBlockInfo* lbi;
	unsigned int num_static_objects;
	DArray<CPhysicsObj*> static_objects;
	unsigned int num_buildings;
	CBuildingObj** buildings;
	unsigned int stab_num;
	unsigned int* stablist;
	CLandCell** draw_array;
	unsigned int draw_array_size;
};


struct CPhysicsObj;

template <typename T>
struct DLList : DLListBase
{
};


struct CAnimHook
{
	void* vfptr;
	CAnimHook* next_hook;
	int direction_;
};


struct AnimFrame
{
	AFrame* frame;
	unsigned int num_frame_hooks;
	CAnimHook* hooks;
	unsigned int num_parts;
};

struct CSequence : PackObj
{
	DLList<AnimSequenceNode> anim_list;
	AnimSequenceNode* first_cyclic;
	AC1Legacy_Vector3 velocity;
	AC1Legacy_Vector3 omega;
	CPhysicsObj* hook_obj;
	long double frame_number;
	AnimSequenceNode* curr_anim;
	AnimFrame* placement_frame;
	unsigned int placement_frame_id;
	int bIsTrivial;
};


class GraphicsResource
{
	public:
		virtual void* __vecDelDtor(unsigned int);
		virtual bool CopyInto(GraphicsResource*);
		virtual bool PurgeResource();
		virtual bool RestoreResource();

		__declspec(align(8)) bool m_bIsLost;
		long double m_TimeUsed;
		unsigned int m_FrameUsed;
		bool m_bIsThrashable;
		bool m_AutoRestore;
		unsigned int m_nResourceSize;
		unsigned int m_ListIndex;
};



struct PixelFormatDesc
{
	PixelFormatID format;
	unsigned int flags;
	unsigned int fourCC;
	char bitsPerPixel;
	unsigned int redBitMask;
	unsigned int greenBitMask;
	unsigned int blueBitMask;
	unsigned int alphaBitMask;
	char redBitCount;
	char greenBitCount;
	char blueBitCount;
	char alphaBitCount;
	char redBitOffset;
	char greenBitOffset;
	char blueBitOffset;
	char alphaBitOffset;
	unsigned int redMax;
	unsigned int greenMax;
	unsigned int blueMax;
	unsigned int alphaMax;
};

struct RenderSurfaceSourceData
{
	unsigned int width;
	unsigned int height;
	unsigned int imageSize;
	char* sourceBits;
	PixelFormatDesc pfDesc;
};


struct RenderSurface;

struct SurfaceWindow
{
	void* vfptr;
	RenderSurface* surface;
	SurfaceWindow* parent;
	tagRECT rect;
	unsigned int lockCount;
	bool writable;
	void* data;
	int pitch;
};


struct __declspec(align(4)) RenderSurface
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	RenderSurfaceSourceData sourceData;
	unsigned int width;
	unsigned int height;
	unsigned int size;
	SurfaceWindow window;
	bool locked;
	PixelFormatDesc pfDesc;
	void* m_pSurfaceBits;
	IDClass_tagDataID_32_0 m_didPalatte;
	bool m_IsDirty;
	bool m_ReadOnlyLock;
};


struct IUnknown
{
	void* vfptr;
};


struct IDirect3DResource9 : IUnknown
{

};
struct IDirect3DSurface9 : IDirect3DResource9
{
};

__declspec(align(8)) struct RenderSurfaceD3D
{
	RenderSurface parent;
	IDirect3DSurface9* m_pD3DSurface;
	_D3DPOOL m_pool;
	bool m_CountAsSystemMemory;
	bool m_CountAsVideoMemory;
};



struct __declspec(align(8)) RenderTexture
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	TextureType m_TextureType;
	unsigned int m_nNumLevels;
	PixelFormatID m_PixelFormat;
	unsigned int m_Flags;
	bool m_bDropLevelsCalled;
	unsigned int m_ManagedRefCount;
	long double m_LastManagedReleaseTime;
	bool m_AllowManagement;
	SmartArray<DBLevelInfo> m_SourceLevels;
	unsigned int m_nWidth;
	unsigned int m_nHeight;
	unsigned int m_nEdgeLength;
};



struct __declspec(align(8)) Palette
{
	SerializeUsingPackDBObj dbobj;
	unsigned int num_colors;
	float min_lighting;
	unsigned int* ARGB;
};


struct __declspec(align(4)) ImgTex
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	SmartArray<IDClass_tagDataID_32_0> m_SourceLevels;
	RenderSurface* m_pImageData;
	Palette* m_pPalette;
	int m_cPitch;
	unsigned __int64 m_TextureCode;
	IDirect3DTexture9* m_pD3DTexture;
	RenderTexture* m_pRenderTexture;
	RenderTexture* m_pSystemMemTexture;
	bool m_IsLocked;
};



struct CSurface
{
	DBObj dbobj;
	GraphicsResource gfxresource;
	unsigned int type;
	SurfaceHandlerEnum handler;
	unsigned int color_value;
	int solid_index;
	IDClass_tagDataID_32_0 indexed_texture_id;
	ImgTex* base1map;
	Palette* base1pal;
	float translucency;
	float luminosity;
	float diffuse;
	IDClass_tagDataID_32_0 orig_texture_id;
	IDClass_tagDataID_32_0 orig_palette_id;
	float orig_luminosity;
	float orig_diffuse;
};


struct CPhysicsPart
{
	float CYpt;
	AC1Legacy_Vector3 viewer_heading;
	GfxObjDegradeInfo* degrades;
	unsigned int deg_level;
	int deg_mode;
	int draw_state;
	CGfxObj** gfxobj;
	AC1Legacy_Vector3 gfxobj_scale;
	Position pos;
	Position draw_pos;
	CMaterial* material;
	CSurface** surfaces;
	IDClass_tagDataID_32_0 original_palette_id;
	float curTranslucency;
	float curDiffuse;
	float curLuminosity;
	Palette* shiftPal;
	unsigned int m_current_render_frame_num;
	CPhysicsObj* physobj;
	int physobj_index;
};


struct LocationType
{
	LongHashData data;
	unsigned int part_id;
	Frame frame;
};


struct PlacementType
{
	LongHashData data;
	AnimFrame anim_frame;
};


struct CCylSphere
{
	AC1Legacy_Vector3 low_pt;
	float height;
	float radius;
};



struct CSphere
{
	AC1Legacy_Vector3 center;
	float radius;
};



const struct CSetup
{
	SerializeUsingPackDBObj dbobj;
	unsigned int num_parts;
	IDClass_tagDataID_32_0* parts;
	unsigned int* parent_index;
	AC1Legacy_Vector3* default_scale;
	unsigned int num_cylsphere;
	CCylSphere* cylsphere;
	unsigned int num_sphere;
	CSphere* sphere;
	int has_physics_bsp;
	int allow_free_heading;
	float height;
	float radius;
	float step_down_height;
	float step_up_height;
	CSphere sorting_sphere;
	CSphere selection_sphere;
	unsigned int num_lights;
	LIGHTINFO* lights;
	AC1Legacy_Vector3 anim_scale;
	LongHash<LocationType>* holding_locations;
	LongHash<LocationType>* connection_points;
	LongHash<PlacementType> placement_frames;
	IDClass_tagDataID_32_0 default_anim_id;
	IDClass_tagDataID_32_0 default_script_id;
	IDClass_tagDataID_32_0 default_mtable_id;
	IDClass_tagDataID_32_0 default_stable_id;
	IDClass_tagDataID_32_0 default_phstable_id;
};




struct LIGHTLIST
{
	unsigned int num_lights;
	LIGHTOBJ* lightobj;
};

struct MotionState
{
	unsigned int style;
	unsigned int substate;
	float substate_mod;
	MotionList* modifier_head;
	MotionList* action_head;
	MotionList* action_tail;
};


struct MotionTableManager_AnimNode : DLListData
{
	unsigned int motion;
	unsigned int num_anims;
};




struct AnimData : PackObj
{
	IDClass_tagDataID_32_0 anim_id;
	int low_frame;
	int high_frame;
	float framerate;
};


struct __declspec(align(4)) MotionData
{
	PackObj obj;
	LongHashData data;
	char num_anims;
	AnimData* anims;
	AC1Legacy_Vector3 velocity;
	AC1Legacy_Vector3 omega;
	char bitfield;
};


const struct __declspec(align(8)) CMotionTable : SerializeUsingPackDBObj
{
	LongNIValHash<unsigned long> style_defaults;
	LongHash<MotionData> cycles;
	LongHash<MotionData> modifiers;
	LongNIValHash<LongHash<MotionData>*> links;
	unsigned int default_style;
};


struct MotionTableManager
{
	CPhysicsObj* physics_obj;
	CMotionTable* table;
	MotionState state;
	int animation_counter;
	DLList<MotionTableManager_AnimNode> pending_animations;
};


struct CPartArray
{
	unsigned int pa_state;
	CPhysicsObj* owner;
	CSequence sequence;
	MotionTableManager* motion_table_manager; //Fine
	struct CSetup* setup;
	unsigned int num_parts;
	CPhysicsPart** parts; //Not showing up correctly
	AC1Legacy_Vector3 scale;
	Palette** pals;
	LIGHTLIST* lights;
	AnimFrame* last_animframe;
};


struct __declspec(align(4)) CPhysicsObj
{
	LongHashData hashdata;
	//NIList<NetBlob*>* netblob_list;
	void* netblob_list;
	CPartArray* part_array;
	AC1Legacy_Vector3 player_vector;
	float player_distance;
	float CYpt;
	CSoundTable* sound_table;
	bool m_bExaminationObject;
	ScriptManager* script_manager;
	PhysicsScriptTable* physics_script_table;
	PScriptType default_script;
	float default_script_intensity;
	CPhysicsObj* parent;
	CHILDLIST* children;
	Position m_position;
	CObjCell* cell;
	unsigned int num_shadow_objects;
	DArray<CShadowObj> shadow_objects;
	unsigned int state;
	unsigned int transient_state;
	float elasticity;
	float translucency;
	float translucencyOriginal;
	float friction;
	float massinv;
	MovementManager* movement_manager;
	PositionManager* position_manager;
	int last_move_was_autonomous;
	int jumped_this_frame;
	long double update_time;
	AC1Legacy_Vector3 m_velocityVector;
	AC1Legacy_Vector3 m_accelerationVector;
	AC1Legacy_Vector3 m_omegaVector;
	PhysicsObjHook* hooks;
	AC1Legacy_SmartArray<CAnimHook*> anim_hooks;
	float m_scale;
	float attack_radius;
	DetectionManager* detection_manager;
	AttackManager* attack_manager;
	TargetManager* target_manager;
	ParticleManager* particle_manager;
	CWeenieObject* weenie_obj;
	Plane contact_plane;
	unsigned int contact_plane_cell_id;
	AC1Legacy_Vector3 sliding_normal;
	AC1Legacy_Vector3 cached_velocity;
	LongNIValHash<CPhysicsObj_CollisionRecord>* collision_table;
	int colliding_with_environment;
	unsigned __int16 update_times[9];
};


const __declspec(align(8)) struct CObjCell
{
	SerializeUsingPackDBObj dbobj;
	CPartCell cellpart;
	LandDefs_WaterType water_type;
	Position pos;
	unsigned int num_objects;
	DArray<CPhysicsObj*> object_list;
	unsigned int num_lights;
	DArray<LIGHTOBJ const*> light_list;
	unsigned int num_shadow_objects;
	DArray<CShadowObj*> shadow_object_list;
	unsigned int restriction_obj;
	ClipPlaneList** clip_planes;
	unsigned int num_stabs;
	unsigned int* stab_list;
	int seen_outside;
	LongNIValHash<GlobalVoyeurInfo>* voyeur_table;
	CLandBlock* myLandBlock_;
};


struct GameSky
{
	AC1Legacy_SmartArray<CelestialPosition> sky_obj_pos;
	AC1Legacy_SmartArray<CPhysicsObj*> sky_obj;
	AC1Legacy_SmartArray<unsigned long> property_array;
	CEnvCell* before_sky_cell;
	CEnvCell* after_sky_cell;
};


struct LScape
{
	int mid_radius;
	int mid_width;
	CLandBlock** land_blocks;
	CLandBlock** block_draw_list;
	unsigned int loaded_cell_id;
	unsigned int viewer_cell_id;
	int viewer_b_xoff;
	int viewer_b_yoff;
	GameSky* sky;
	CSurface* landscape_detail_surface;
	CSurface* environment_detail_surface;
	CSurface* building_detail_surface;
	CSurface* object_detail_surface;
};


struct SmartBox
{
	//SmartBoxVtbl* vfptr;
	void* vfptr;
	int testMode;
	Position viewer;
	CObjCell* viewer_cell;
	unsigned int head_index;
	Position viewer_sought_position;
	CameraManager* camera_manager;
	CellManager* cell_manager;
	CPhysics* physics;
	CObjectMaint* m_pObjMaint;
	LScape* lscape;
	Ambient* ambient_sounds;
	CommandInterpreter* cmdinterp;
	int creature_mode;
	float m_fGameFOV;
	float m_fViewDistFOV;
	bool m_bUseViewDistance;
	float game_ambient_level;
	unsigned int game_ambient_color;
	int game_degrades_disabled;
	int hidden;
	int position_update_complete;
	int waiting_for_teleport;
	int has_been_teleported;
	void* in_queue; //NIList<NetBlob*>* in_queue;
	void* netblob_list;//NIList<NetBlob*>* netblob_list;
	_iobuf* position_and_movement_file;
	unsigned int player_id;
	CPhysicsObj* player;
	unsigned int target_object_id;
	void(__cdecl* target_callback)(unsigned int, ObjectSelectStatus, tagRECT*, const float);
	unsigned int num_cells;
	CEnvCell** cells;
	unsigned int num_objects;
	CPhysicsObj** objects;
	void(__cdecl* m_renderingCallback)();
};


struct IInputActionCallback
{
	void* vfptr;
};


struct CommandInterpreter
{
	IInputActionCallback parent;
	SmartBox* smartbox;
	CPhysicsObj* player;
	CommandList SubstateList;
	CommandList TurnList;
	CommandList SidestepList;
	unsigned int autonomy_level;
	int controlled_by_server;
	int hold_run;
	int hold_sidestep;
	int transient_state;
	int enabled;
	int auto_run;
	int mouselook_active;
	int mouseleft_down;
	float autorun_speed;
	unsigned int action_stamp;
	long double last_sent_position_time;
	Position last_sent_position;
	Plane last_sent_contact_plane;
	const long double time_between_position_events;
};

struct TDynamicCircularArray
{
	void* vfptr;
	AsyncCache_CCallbackHandler** A;
	unsigned int first;
	unsigned int next;
	unsigned int count;
	unsigned int max;
	unsigned int growsize;
};

struct QualifiedDataID
{
	unsigned int Type;
	IDClass_tagDataID_32_0 ID;
};


template <typename K, typename V, size_t S>
struct IntrusiveHashIterator
{
	IntrusiveHashTable<K, V, S>* m_currHashTable;
	V* m_currBucket;
	V m_currElement;
};

struct QualifiedDataIDArray : IntrusiveHashTable<QualifiedDataID, DBObjSaveInfo*, 1>
{
	IntrusiveHashIterator<QualifiedDataID, DBObjSaveInfo*, 1> m_CurBracketIterator;
	unsigned int m_LastBracketIndex;
};



union E6132C438F0B638693FB2F3E0AF1DACE5
{
	unsigned int Op;
	AsyncCache_AsyncOperation eOp;
};

struct AsyncCache_CAsyncRequest : ReferenceCountTemplate_1048576_0
{
	AsyncResult Result;
	E6132C438F0B638693FB2F3E0AF1DACE5 ___u2;
	QualifiedDataID qdid;
	SmartArray<AsyncCache_CAsyncRequest_CCallbackWrapper> m_pCallbacks;
	DBObj* m_pObj;
};


struct AsyncCacheCallback
{
	void* vfptr;
};


/*
 __declspec(align(4)) struct AsyncCache
{
	void* vfptr;
	TDynamicCircularArray m_PendingCallbacks;
	AutoGrowHashTable<QualifiedDataID, CAsyncGetRequest*> m_PendingGets;
	AutoGrowHashTable<AsyncContext, AsyncCache_CCallbackHandler*> m_BusyCallbacks;
	unsigned int dwNextCallbackHandle;
	bool m_bCallingPendingCallbacks;
};
*/

__declspec(align(4)) class AsyncCache
{
	public:
		virtual DBObj* (BlockingGet)(unsigned int, QualifiedDataID*);
		//_BYTE gap4[16];
		virtual void UNUSED1();
		virtual void UNUSED2();
		virtual void UNUSED3();
		virtual void UNUSED4();
		virtual AsyncContext* AsyncGet(AsyncContext* result, unsigned int, QualifiedDataID*, AsyncCacheCallback*, unsigned int);
		virtual void AsyncGetImmediate(AsyncContext*, unsigned int, QualifiedDataIDArray*, AsyncCacheCallback*, unsigned int);
		virtual void UNUSED5(); //virtual __declspec(align(8)) $F1026C46A91364D736E48DC9BF562217 ___u3;
		virtual void UNUSED6();
		virtual AsyncContext*  AsyncSave(AsyncContext* result, QualifiedDataID*, Cache_Pack_t*, unsigned __int64, AsyncCacheCallback*, unsigned int);
		virtual void UNUSED7();//virtual _BYTE gap28[8];
		virtual void UNUSED8();
		//virtual $3578EF11CE7628A82DA0CA7D8F8BA153 ___u5;
		virtual void UNUSED9();
		virtual void ReleaseContext(AsyncContext);
		virtual DBOCache*  GetDBOCache(QualifiedDataID*);
		virtual bool IsOnDisk(QualifiedDataID*);
		virtual bool AreOnDisk(QualifiedDataIDArray*);
		virtual void UseTime(); //__declspec(align(8));
		virtual void UNUSED10();
		virtual void HashAndEnqueue(CAsyncGetRequest*);
		virtual void EnqueueAsyncRequest(AsyncCache_CAsyncRequest*);
		virtual void UnhashPendingGet(CAsyncGetRequest*, CAsyncGetRequest*);
		virtual void FlushPendingRequests();
		virtual void OnRequestFinished(AsyncCache_CAsyncRequest*);
		virtual void OnGetRequestFinished(CAsyncGetRequest*);
		virtual void OnSaveRequestFinished(CAsyncSaveRequest*);
		virtual void OnPurgeRequestFinished(CAsyncPurgeRequest*);
		virtual void NotifyCallback(AsyncCache_CAsyncRequest*);
		virtual void OnAsyncGetFinished(CAsyncGetRequest*);
		virtual void CallPendingCallbacks();
		virtual DBObj* BlockingGetFromDisk(QualifiedDataID*, DBOCache*);
		virtual bool BlockingLoadInto(DBObj*, QualifiedDataID*, DBOCache*);
		virtual bool SerializeFromCachePack(DBObj*, Cache_Pack_t*);
		virtual DBObj* GetIfInMemory(QualifiedDataID*, DBOCache*);
		virtual DBObj* GetFreeObj(QualifiedDataID*, DBOCache*);
		virtual bool AsyncGetFromOtherSources(QualifiedDataID*, DBOCache*);
		virtual void OnAsyncGetFromOtherSourcesFailed(QualifiedDataID*);
		virtual bool AddObjToDBOCache(DBObj*, DBOCache*);
		virtual DiskController* GetDiskController(QualifiedDataID*, unsigned __int64);
		virtual bool LoadData(QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
		virtual bool SaveData(QualifiedDataID*, Cache_Pack_t*, unsigned __int64);
		virtual bool PurgeData(QualifiedDataID*, unsigned __int64);

		TDynamicCircularArray m_PendingCallbacks;
		AutoGrowHashTable<QualifiedDataID, CAsyncGetRequest*> m_PendingGets;
		AutoGrowHashTable<AsyncContext, AsyncCache_CCallbackHandler*> m_BusyCallbacks;
		unsigned int dwNextCallbackHandle;
		bool m_bCallingPendingCallbacks;
};


struct IDataGraph
{
	void* vfptr;
};


struct DBCache
{
	Interface _interface;
	AsyncCache asyncCache;
	Turbine_RefCount m_cTurbineRefCount;
	IDClass_tagDataID_32_0 m_MasterMapID;
	unsigned int m_CurrentRegion;
	unsigned int m_LocalLanguage;
	bool m_bRuntime;
	bool m_bIsClient;
	bool m_bIsServer;
	IDataGraph* m_pDataGraph;
};

#endif