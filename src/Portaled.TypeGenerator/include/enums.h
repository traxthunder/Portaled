
#ifndef ENUMS_H
#define ENUMS_H

enum CameraManager_MovementDirectionFlags
{
	mdf_Left = 0x1,
	mdf_Right = 0x2,
	mdf_XAxis = 0x3,
	mdf_Forward = 0x4,
	mdf_Backward = 0x8,
	mdf_YAxis = 0xC,
	mdf_Up = 0x10,
	mdf_Down = 0x20,
	mdf_ZAxis = 0x30,
};




enum Sidedness
{
	POSITIVE = 0x0,
	NEGATIVE = 0x1,
	IN_PLANE = 0x2,
	CROSSING = 0x3,
};


enum Frame_FrameInitializationEnum
{
	FRAME_NO_INITIALIZATION = 0x0,
};


enum SimplePolygonType
{
	SIMPLE_POLYGON = 0x0,
	PATH_POLYGON = 0x1,
	PLANAR_POLYGON = 0x2,
};


enum PixelFormatID
{
	PFID_UNKNOWN = 0x0,
	PFID_R8G8B8 = 0x14,
	PFID_A8R8G8B8 = 0x15,
	PFID_X8R8G8B8 = 0x16,
	PFID_R5G6B5 = 0x17,
	PFID_X1R5G5B5 = 0x18,
	PFID_A1R5G5B5 = 0x19,
	PFID_A4R4G4B4 = 0x1A,
	PFID_R3G3B2 = 0x1B,
	PFID_A8 = 0x1C,
	PFID_A8R3G3B2 = 0x1D,
	PFID_X4R4G4B4 = 0x1E,
	PFID_A2B10G10R10 = 0x1F,
	PFID_A8B8G8R8 = 0x20,
	PFID_X8B8G8R8 = 0x21,
	PFID_A2R10G10B10 = 0x23,
	PFID_A8P8 = 0x28,
	PFID_P8 = 0x29,
	PFID_L8 = 0x32,
	PFID_A8L8 = 0x33,
	PFID_A4L4 = 0x34,
	PFID_V8U8 = 0x3C,
	PFID_L6V5U5 = 0x3D,
	PFID_X8L8V8U8 = 0x3E,
	PFID_Q8W8V8U8 = 0x3F,
	PFID_V16U16 = 0x40,
	PFID_A2W10V10U10 = 0x43,
	PFID_UYVY = 0x59565955,
	PFID_R8G8_B8G8 = 0x47424752,
	PFID_YUY2 = 0x32595559,
	PFID_G8R8_G8B8 = 0x42475247,
	PFID_DXT1 = 0x31545844,
	PFID_DXT2 = 0x32545844,
	PFID_DXT3 = 0x33545844,
	PFID_DXT4 = 0x34545844,
	PFID_DXT5 = 0x35545844,
	PFID_D16_LOCKABLE = 0x46,
	PFID_D32 = 0x47,
	PFID_D15S1 = 0x49,
	PFID_D24S8 = 0x4B,
	PFID_D24X8 = 0x4D,
	PFID_D24X4S4 = 0x4F,
	PFID_D16 = 0x50,
	PFID_VERTEXDATA = 0x64,
	PFID_INDEX16 = 0x65,
	PFID_INDEX32 = 0x66,
	PFID_CUSTOM_R8G8B8A8 = 0xF0,
	PFID_CUSTOM_A8B8G8R8 = 0xF1,
	PFID_CUSTOM_B8G8R8 = 0xF2,
	PFID_CUSTOM_LSCAPE_R8G8B8 = 0xF3,
	PFID_CUSTOM_LSCAPE_ALPHA = 0xF4,
	PFID_CUSTOM_RAW_JPEG = 0x1F4,
	PFID_CUSTOM_FIRST = 0xF0,
	PFID_CUSTOM_LAST = 0x1F4,
	PFID_INVALID = 0x7FFFFFFF,
};


enum _STL_float_round_style
{
	round_indeterminate = 0xFFFFFFFF,
	round_toward_zero = 0x0,
	round_to_nearest = 0x1,
	round_toward_infinity = 0x2,
	round_toward_neg_infinity = 0x3,
};


enum UIQueueManager_Enum18
{
	IMPLEMENT_STD_ADDREF_UNIQUE_RETVAL = 0x0,
};


enum PScriptType
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


enum _STL_float_denorm_style
{
	denorm_indeterminate = 0xFFFFFFFF,
	denorm_absent = 0x0,
	denorm_present = 0x1,
};


enum PhysicsState
{
	STATIC_PS = 0x1,
	UNUSED1_PS = 0x2,
	ETHEREAL_PS = 0x4,
	REPORT_COLLISIONS_PS = 0x8,
	IGNORE_COLLISIONS_PS = 0x10,
	NODRAW_PS = 0x20,
	MISSILE_PS = 0x40,
	PUSHABLE_PS = 0x80,
	ALIGNPATH_PS = 0x100,
	PATHCLIPPED_PS = 0x200,
	GRAVITY_PS = 0x400,
	LIGHTING_ON_PS = 0x800,
	PARTICLE_EMITTER_PS = 0x1000,
	UNNUSED2_PS = 0x2000,
	HIDDEN_PS = 0x4000,
	SCRIPTED_COLLISION_PS = 0x8000,
	HAS_PHYSICS_BSP_PS = 0x10000,
	INELASTIC_PS = 0x20000,
	HAS_DEFAULT_ANIM_PS = 0x40000,
	HAS_DEFAULT_SCRIPT_PS = 0x80000,
	CLOAKED_PS = 0x100000,
	REPORT_COLLISIONS_AS_ENVIRONMENT_PS = 0x200000,
	EDGE_SLIDE_PS = 0x400000,
	SLEDDING_PS = 0x800000,
	FROZEN_PS = 0x1000000,
	FORCE_PhysicsState_32_BIT = 0x7FFFFFFF,
};


enum HARBitmask
{
	Undef_HARBitmask = 0x0,
	OpenHouse_HARBitmask = 0x1,
	AllegianceGuests_HARBitmask = 0x2,
	AllegianceStorage_HARBitmask = 0x4,
	Force32Bit_HARBitmask = 0x7FFFFFFF,
};


enum MovementTypes_Type
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


enum CallbackLoseFocusResult
{
	lfBlock = 0x0,
	lfTransfer = 0x1,
};


enum StatType
{
	Undef_StatType = 0x0,
	Int_StatType = 0x1,
	Float_StatType = 0x2,
	Position_StatType = 0x3,
	Skill_StatType = 0x4,
	String_StatType = 0x5,
	DataID_StatType = 0x6,
	InstanceID_StatType = 0x7,
	DID_StatType = 0x6,
	IID_StatType = 0x7,
	Attribute_StatType = 0x8,
	Attribute_2nd_StatType = 0x9,
	BodyDamageValue_StatType = 0xA,
	BodyDamageVariance_StatType = 0xB,
	BodyArmorValue_StatType = 0xC,
	Bool_StatType = 0xD,
	Int64_StatType = 0xE,
	Num_StatTypes = 0xF,
	FORCE_StatType_32_BIT = 0x7FFFFFFF,
};


enum EFD9017AF91B05EB6079FFF5A02395D2D
{
	No_Subscription = 0x0,
	AsheronsCall_Subscription = 0x1,
	DarkMajesty_Subscription = 0x2,
	ThroneOfDestiny_Subscription = 0x4,
	ThroneOfDestiny_Preordered = 0x8,
};



enum PropertyInheritanceType_Type
{
	ClassOnly = 0x0,
	InstanceOnly = 0x1,
	Either = 0x2,
};


enum PropertyDatFileType_Type
{
	ClientOnlyData = 0x0,
	ServerOnlyData = 0x1,
	SharedData = 0x2,
};


enum PropertyPropagationType_Type
{
	NetPredictedSharedVisually = 0x0,
	NetPredictedSharedPrivately = 0x1,
	NetSharedVisually = 0x2,
	NetSharedPrivately = 0x3,
	NetNotShared = 0x4,
	WorldSharedWithServers = 0x5,
	WorldSharedWithServersAndClients = 0x6,
};


enum PropertyCachingType_Type
{
	Global = 0x0,
	Internal = 0x1,
};


enum SKILL_ADVANCEMENT_CLASS
{
	UNDEF_SKILL_ADVANCEMENT_CLASS = 0x0,
	UNTRAINED_SKILL_ADVANCEMENT_CLASS = 0x1,
	TRAINED_SKILL_ADVANCEMENT_CLASS = 0x2,
	SPECIALIZED_SKILL_ADVANCEMENT_CLASS = 0x3,
	NUM_SKILL_ADVANCEMENT_CLASSES = 0x4,
	FORCE_SKILL_ADVANCEMENT_CLASS_32_BIT = 0x7FFFFFFF,
};



enum E90DB17C06A8468C20D5E6E771419B42D
{
	digits = 0x1,
	digits10 = 0x0,
	radix = 0x2,
	is_specialized = 0x1,
	is_signed = 0x0,
	is_integer = 0x1,
	is_exact = 0x1,
	is_bounded = 0x1,
	is_modulo = 0x0,
};


enum AllegianceVersion
{
	Undef_AllegianceVersion = 0x0,
	SpokespersonAdded_AllegianceVersion = 0x1,
	PoolsAdded_AllegianceVersion = 0x2,
	MotdAdded_AllegianceVersion = 0x3,
	ChatRoomIDAdded_AllegianceVersion = 0x4,
	BannedCharactersAdded_AllegianceVersion = 0x5,
	MultipleAllegianceOfficersAdded_AllegianceVersion = 0x6,
	Bindstones_AllegianceVersion = 0x7,
	AllegianceName_AllegianceVersion = 0x8,
	OfficersTitlesAdded_AllegianceVersion = 0x9,
	LockedState_AllegianceVersion = 0xA,
	ApprovedVassal_AllegianceVersion = 0xB,
	Newest_AllegianceVersion = 0xB,
	FORCE_AllegianceVersion_32_BIT = 0x7FFFFFFF,
};


enum E492F8EFB2274F06F7B85D3D8F4EB2E2C
{
	ikvUnspecifiedStorage = 0x0,
	ikv64BitStorage = 0x1,
	ikvCurrentFormatVersion = 0x1,
};



enum IterationKey_SpecialKey
{
	keyInvalid = 0x0,
	keyUnknown = 0x1,
	keyUnencrypted = 0x2,
};


enum _D3DXCLEANTYPE
{
	D3DXCLEAN_BACKFACING = 0x1,
	D3DXCLEAN_BOWTIES = 0x2,
	D3DXCLEAN_SKINNING = 0x1,
	D3DXCLEAN_OPTIMIZATION = 0x1,
	D3DXCLEAN_SIMPLIFICATION = 0x3,
};


enum _MAX_FVF_DECL_SIZE
{
	MAX_FVF_DECL_SIZE = 0x41,
};


enum CryptoProviderFlags
{
	cpfUseMachineKeyset = 0x1,
	cpfUsePerUserKeyset = 0x2,
	cpfDisableSystemDialogs = 0x4,
};


enum UI_SELECTION_TYPE
{
	SELECTION_TYPE_UNDEF = 0x0,
	SELECTION_TYPE_ITEM = 0x1,
	SELECTION_TYPE_COMPASS_ITEM = 0x2,
	SELECTION_TYPE_MONSTER = 0x3,
	SELECTION_TYPE_PLAYER = 0x4,
	SELECTION_TYPE_UNOPENED_CORPSE = 0x5,
	FORCE_UI_SELECTION_TYPE_32_BIT = 0x7FFFFFFF,
};



enum DEFAULT_AUTHFLAGS
{
	AUTHFLAGS_ENABLECRYPTO = 0x1,
	AUTHFLAGS_ADMINACCTOVERRIDE = 0x2,
	AUTHFLAGS_EXTRADATA = 0x4,
	AUTHFLAGS_LASTDEFAULT = 0x4,
};


enum ObjectDrawStatus
{
	UNKNOWN_ODS = 0x0,
	OUTSIDE_VIEWCONE_ODS = 0x1,
	INSIDE_VIEWCONE_ODS = 0x2,
	UNDER_CURSOR_ODS = 0x3,
	FORCE_ObjectDrawStatus_32_BIT = 0x7FFFFFFF,
};



enum AsyncResult
{
	AsyncResult_Unknown = 0x0,
	AsyncResult_Success = 0x1,
	AsyncResult_PartialSuccess = 0x2,
	AsyncResult_Failure = 0x3,
};


enum MoveType
{
	MoveType_Invalid = 0x0,
	MoveType_Pass = 0x1,
	MoveType_Resign = 0x2,
	MoveType_Stalemate = 0x3,
	MoveType_Grid = 0x4,
	MoveType_FromTo = 0x5,
	MoveType_SelectedPiece = 0x6,
};


enum TSRecvMode
{
	TSRECV_BLOCK = 0x0,
	TSRECV_LATESTONLY = 0x1,
	FORCE_TSRecvMode_32_BIT = 0x7FFFFFFF,
};


enum CharacterTitleTableVersion
{
	Undef_CharacterTitleTableVersion = 0x0,
	Initial_CharacterTitleTableVersion = 0x1,
	Current_CharacterTitleTableVersion = 0x1,
	FORCE_CHARACTER_TITLE_TABLE_VERSION_32_BIT = 0x7FFFFFFF,
};


enum DATFILE_TYPE
{
	UNDEF_DISK = 0x0,
	PORTAL_DATFILE = 0x1,
	CELL_DATFILE = 0x2,
	LOCAL_DATFILE = 0x3,
	FORCE_32_BIT_DATFILE_TPE = 0x7FFFFFFF,
};


enum EnchantmentTypeEnum
{
	Undef_EnchantmentType = 0x0,
	Attribute_EnchantmentType = 0x1,
	SecondAtt_EnchantmentType = 0x2,
	Int_EnchantmentType = 0x4,
	Float_EnchantmentType = 0x8,
	Skill_EnchantmentType = 0x10,
	BodyDamageValue_EnchantmentType = 0x20,
	BodyDamageVariance_EnchantmentType = 0x40,
	BodyArmorValue_EnchantmentType = 0x80,
	SingleStat_EnchantmentType = 0x1000,
	MultipleStat_EnchantmentType = 0x2000,
	Multiplicative_EnchantmentType = 0x4000,
	Additive_EnchantmentType = 0x8000,
	AttackSkills_EnchantmentType = 0x10000,
	DefenseSkills_EnchantmentType = 0x20000,
	Multiplicative_Degrade_EnchantmentType = 0x100000,
	Additive_Degrade_EnchantmentType = 0x200000,
	Vitae_EnchantmentType = 0x800000,
	Cooldown_EnchantmentType = 0x1000000,
	Beneficial_EnchantmentType = 0x2000000,
	StatTypes_EnchantmentType = 0xFF,
	FORCE_EnchantmentTypeEnum_32_BIT = 0x7FFFFFFF,
};


enum INVENTORY_LOC
{
	NONE_LOC = 0x0,
	HEAD_WEAR_LOC = 0x1,
	CHEST_WEAR_LOC = 0x2,
	ABDOMEN_WEAR_LOC = 0x4,
	UPPER_ARM_WEAR_LOC = 0x8,
	LOWER_ARM_WEAR_LOC = 0x10,
	HAND_WEAR_LOC = 0x20,
	UPPER_LEG_WEAR_LOC = 0x40,
	LOWER_LEG_WEAR_LOC = 0x80,
	FOOT_WEAR_LOC = 0x100,
	CHEST_ARMOR_LOC = 0x200,
	ABDOMEN_ARMOR_LOC = 0x400,
	UPPER_ARM_ARMOR_LOC = 0x800,
	LOWER_ARM_ARMOR_LOC = 0x1000,
	UPPER_LEG_ARMOR_LOC = 0x2000,
	LOWER_LEG_ARMOR_LOC = 0x4000,
	NECK_WEAR_LOC = 0x8000,
	WRIST_WEAR_LEFT_LOC = 0x10000,
	WRIST_WEAR_RIGHT_LOC = 0x20000,
	FINGER_WEAR_LEFT_LOC = 0x40000,
	FINGER_WEAR_RIGHT_LOC = 0x80000,
	MELEE_WEAPON_LOC = 0x100000,
	SHIELD_LOC = 0x200000,
	MISSILE_WEAPON_LOC = 0x400000,
	MISSILE_AMMO_LOC = 0x800000,
	HELD_LOC = 0x1000000,
	TWO_HANDED_LOC = 0x2000000,
	TRINKET_ONE_LOC = 0x4000000,
	CLOAK_LOC = 0x8000000,
	SIGIL_ONE_LOC = 0x10000000,
	SIGIL_TWO_LOC = 0x20000000,
	SIGIL_THREE_LOC = 0x40000000,
	CLOTHING_LOC = 0x80001FF,
	ARMOR_LOC = 0x7E00,
	JEWELRY_LOC = 0x7C0F8000,
	WRIST_WEAR_LOC = 0x30000,
	FINGER_WEAR_LOC = 0xC0000,
	SIGIL_LOC = 0x70000000,
	READY_SLOT_LOC = 0x3F00000,
	WEAPON_LOC = 0x2500000,
	WEAPON_READY_SLOT_LOC = 0x3500000,
	ALL_LOC = 0x7FFFFFFF,
	CAN_GO_IN_READY_SLOT_LOC = 0x7FFFFFFF,
	FORCE_INVENTORY_LOC_32_BIT = 0x7FFFFFFF,
};


enum WaveformType
{
	WAVEFORM_INVALID = 0x0,
	WAVEFORM_NONE = 0x1,
	WAVEFORM_SPEED = 0x2,
	WAVEFORM_NOISE = 0x3,
	WAVEFORM_SINE = 0x4,
	WAVEFORM_SQUARE = 0x5,
	WAVEFORM_BOUNCE = 0x6,
	WAVEFORM_PERLIN = 0x7,
	WAVEFORM_FRACTAL = 0x8,
	WAVEFORM_FRAMELOOP = 0x9,
	NUM_WAVEFORMS = 0xA,
};


enum DataHistory_IterationType
{
	Normal_Iteration = 0x0,
	NoPatch_Iteration = 0x1,
	Alias_Iteration = 0x2,
	Invalid_IterationType = 0x3,
};


enum DestinationType
{
	Undef_DestinationType = 0x0,
	Contain_DestinationType = 0x1,
	Wield_DestinationType = 0x2,
	Shop_DestinationType = 0x4,
	Treasure_DestinationType = 0x8,
	HouseBuy_DestinationType = 0x10,
	HouseRent_DestinationType = 0x20,
	Checkpoint_DestinationType = 0x7,
	ContainTreasure_DestinationType = 0x9,
	WieldTreasure_DestinationType = 0xA,
	ShopTreasure_DestinationType = 0xC,
	FORCE_DestinationType_32_BIT = 0x7FFFFFFF,
};


enum LandDefs_Direction
{
	IN_VIEWER_BLOCK = 0x0,
	NORTH_OF_VIEWER = 0x1,
	SOUTH_OF_VIEWER = 0x2,
	EAST_OF_VIEWER = 0x3,
	WEST_OF_VIEWER = 0x4,
	NORTHWEST_OF_VIEWER = 0x5,
	SOUTHWEST_OF_VIEWER = 0x6,
	NORTHEAST_OF_VIEWER = 0x7,
	SOUTHEAST_OF_VIEWER = 0x8,
	UNKNOWN = 0x9,
	FORCE_Direction_32_BIT = 0x7FFFFFFF,
};


enum ITEM_TYPE
{
	TYPE_UNDEF = 0x0,
	TYPE_MELEE_WEAPON = 0x1,
	TYPE_ARMOR = 0x2,
	TYPE_CLOTHING = 0x4,
	TYPE_JEWELRY = 0x8,
	TYPE_CREATURE = 0x10,
	TYPE_FOOD = 0x20,
	TYPE_MONEY = 0x40,
	TYPE_MISC = 0x80,
	TYPE_MISSILE_WEAPON = 0x100,
	TYPE_CONTAINER = 0x200,
	TYPE_USELESS = 0x400,
	TYPE_GEM = 0x800,
	TYPE_SPELL_COMPONENTS = 0x1000,
	TYPE_WRITABLE = 0x2000,
	TYPE_KEY = 0x4000,
	TYPE_CASTER = 0x8000,
	TYPE_PORTAL = 0x10000,
	TYPE_LOCKABLE = 0x20000,
	TYPE_PROMISSORY_NOTE = 0x40000,
	TYPE_MANASTONE = 0x80000,
	TYPE_SERVICE = 0x100000,
	TYPE_MAGIC_WIELDABLE = 0x200000,
	TYPE_CRAFT_COOKING_BASE = 0x400000,
	TYPE_CRAFT_ALCHEMY_BASE = 0x800000,
	TYPE_CRAFT_FLETCHING_BASE = 0x1000000,
	TYPE_CRAFT_ALCHEMY_INTERMEDIATE = 0x4000000,
	TYPE_CRAFT_FLETCHING_INTERMEDIATE = 0x8000000,
	TYPE_LIFESTONE = 0x10000000,
	TYPE_TINKERING_TOOL = 0x20000000,
	TYPE_TINKERING_MATERIAL = 0x40000000,
	TYPE_GAMEBOARD = 0x80000000,
	TYPE_PORTAL_MAGIC_TARGET = 0x10010000,
	TYPE_LOCKABLE_MAGIC_TARGET = 0x280,
	TYPE_VESTEMENTS = 0x6,
	TYPE_WEAPON = 0x101,
	TYPE_WEAPON_OR_CASTER = 0x8101,
	TYPE_ITEM = 0x2DFBEF,
	TYPE_REDIRECTABLE_ITEM_ENCHANTMENT_TARGET = 0x8107,
	TYPE_ITEM_ENCHANTABLE_TARGET = 0x88B8F,
	TYPE_SELF = 0x0,
	TYPE_VENDOR_SHOPKEEP = 0x480467A7,
	TYPE_VENDOR_GROCER = 0x446220,
	FORCE_ITEM_TYPE_32_BIT = 0x7FFFFFFF,
};


enum RegenerationType
{
	Undef_RegenerationType = 0x0,
	Destruction_RegenerationType = 0x1,
	PickUp_RegenerationType = 0x2,
	Death_RegenerationType = 0x4,
	FORCE_RegenerationType_32_BIT = 0x7FFFFFFF,
};


enum UIElementMessageListenResult
{
	lrDefault = 0x0,
	lrDontDoDefault = 0x1,
	lrStopProcessing = 0x2,
};


enum RegenLocationType
{
	Undef_RegenLocationType = 0x0,
	OnTop_RegenLocationType = 0x1,
	Scatter_RegenLocationType = 0x2,
	Specific_RegenLocationType = 0x4,
	Contain_RegenLocationType = 0x8,
	Wield_RegenLocationType = 0x10,
	Shop_RegenLocationType = 0x20,
	Checkpoint_RegenLocationType = 0x38,
	Treasure_RegenLocationType = 0x40,
	OnTopTreasure_RegenLocationType = 0x41,
	ScatterTreasure_RegenLocationType = 0x42,
	SpecificTreasure_RegenLocationType = 0x44,
	ContainTreasure_RegenLocationType = 0x48,
	WieldTreasure_RegenLocationType = 0x50,
	ShopTreasure_RegenLocationType = 0x60,
	FORCE_RegenLocationType_32_BIT = 0x7FFFFFFF,
};


enum HoldKey
{
	HoldKey_Invalid = 0x0,
	HoldKey_None = 0x1,
	HoldKey_Run = 0x2,
	Num_HoldKeys = 0x3,
	FORCE_HoldKey_32_BIT = 0x7FFFFFFF,
};


enum CharacterOption
{
	Undef_CharacterOption = 0x0,
	AutoRepeatAttack_CharacterOption = 0x2,
	IgnoreAllegianceRequests_CharacterOption = 0x4,
	IgnoreFellowshipRequests_CharacterOption = 0x8,
	AllowGive_CharacterOption = 0x40,
	ViewCombatTarget_CharacterOption = 0x80,
	ShowTooltips_CharacterOption = 0x100,
	UseDeception_CharacterOption = 0x200,
	ToggleRun_CharacterOption = 0x400,
	StayInChatMode_CharacterOption = 0x800,
	AdvancedCombatUI_CharacterOption = 0x1000,
	AutoTarget_CharacterOption = 0x2000,
	VividTargetingIndicator_CharacterOption = 0x8000,
	DisableMostWeatherEffects_CharacterOption = 0x10000,
	IgnoreTradeRequests_CharacterOption = 0x20000,
	FellowshipShareXP_CharacterOption = 0x40000,
	AcceptLootPermits_CharacterOption = 0x80000,
	FellowshipShareLoot_CharacterOption = 0x100000,
	SideBySideVitals_CharacterOption = 0x200000,
	CoordinatesOnRadar_CharacterOption = 0x400000,
	SpellDuration_CharacterOption = 0x800000,
	DisableHouseRestrictionEffects_CharacterOption = 0x2000000,
	DragItemOnPlayerOpensSecureTrade_CharacterOption = 0x4000000,
	DisplayAllegianceLogonNotifications_CharacterOption = 0x8000000,
	UseChargeAttack_CharacterOption = 0x10000000,
	AutoAcceptFellowRequest_CharacterOption = 0x20000000,
	HearAllegianceChat_CharacterOption = 0x40000000,
	UseCraftSuccessDialog_CharacterOption = 0x80000000,
	Default_CharacterOption = 0x50C4A54A,
	FORCE_CharacterOption_32_BIT = 0x7FFFFFFF,
};





enum AsyncCache_AsyncOperation
{
	opAsyncGet = 0x0,
	opAsyncPurge = 0x1,
	opAsyncSave = 0x2,
	opAsyncCacheNextAsyncOperation = 0x3,
};


enum CharacterOptions2
{
	Undef_CharacterOptions2 = 0x0,
	PersistentAtDay_CharacterOptions2 = 0x1,
	DisplayDateOfBirth_CharacterOptions2 = 0x2,
	DisplayChessRank_CharacterOptions2 = 0x4,
	DisplayFishingSkill_CharacterOptions2 = 0x8,
	DisplayNumberDeaths_CharacterOptions2 = 0x10,
	DisplayAge_CharacterOptions2 = 0x20,
	TimeStamp_CharacterOptions2 = 0x40,
	SalvageMultiple_CharacterOptions2 = 0x80,
	HearGeneralChat_CharacterOptions2 = 0x100,
	HearTradeChat_CharacterOptions2 = 0x200,
	HearLFGChat_CharacterOptions2 = 0x400,
	HearRoleplayChat_CharacterOptions2 = 0x800,
	AppearOffline_CharacterOptions2 = 0x1000,
	DisplayNumberCharacterTitles_CharacterOptions2 = 0x2000,
	MainPackPreferred_CharacterOptions2 = 0x4000,
	LeadMissileTargets_CharacterOptions2 = 0x8000,
	UseFastMissiles_CharacterOptions2 = 0x10000,
	FilterLanguage_CharacterOptions2 = 0x20000,
	ConfirmVolatileRareUse_CharacterOptions2 = 0x40000,
	HearSocietyChat_CharacterOptions2 = 0x80000,
	ShowHelm_CharacterOptions2 = 0x100000,
	DisableDistanceFog_CharacterOptions2 = 0x200000,
	UseMouseTurning_CharacterOptions2 = 0x400000,
	ShowCloak_CharacterOptions2 = 0x800000,
	LockUI_CharacterOptions2 = 0x1000000,
	Default_CharacterOptions2 = 0x948700,
	FORCE_CharacterOptions2_32_BIT = 0x7FFFFFFF,
};


enum TradeStatusEnum
{
	Undef_TradeStatus = 0x0,
	Pending_TradeStatus = 0x1,
	Open_TradeStatus = 0x2,
	WaitingToClose_TradeStatus = 0x4,
	FORCE_TradeStatusEnum_32_BIT = 0x7FFFFFFF,
};


enum SearchCommandExecuteErrors
{
	SCEE_PATHNOTFOUND = 0x1,
	SCEE_MAXFILESFOUND = 0x2,
	SCEE_INDEXSEARCH = 0x3,
	SCEE_CONSTRAINT = 0x4,
	SCEE_SCOPEMISMATCH = 0x5,
	SCEE_CASESENINDEX = 0x6,
	SCEE_INDEXNOTCOMPLETE = 0x7,
};




enum SpellbookFilter
{
	Undef_SpellbookFilter = 0x0,
	Creature_SpellbookFilter = 0x1,
	Item_SpellbookFilter = 0x2,
	Life_SpellbookFilter = 0x4,
	War_SpellbookFilter = 0x8,
	Level_1_SpellbookFilter = 0x10,
	Level_2_SpellbookFilter = 0x20,
	Level_3_SpellbookFilter = 0x40,
	Level_4_SpellbookFilter = 0x80,
	Level_5_SpellbookFilter = 0x100,
	Level_6_SpellbookFilter = 0x200,
	Level_7_SpellbookFilter = 0x400,
	Level_8_SpellbookFilter = 0x800,
	Level_9_SpellbookFilter = 0x1000,
	Void_SpellbookFilter = 0x2000,
	Default_SpellbookFilter = 0x3FFF,
	FORCE_SpellbookFilter_32_BIT = 0x7FFFFFFF,
};


enum EnchantmentVersion
{
	Undef_EnchantmentVersion = 0x0,
	SpellSetID_EnchantmentVersion = 0x1,
	Newest_EnchantmentVersion = 0x1,
	FORCE_EnchantmentVersion_32_BIT = 0x7FFFFFFF,
};


enum SpellComponentCategory
{
	Scarab_SpellComponentCategory = 0x0,
	Herb_SpellComponentCategory = 0x1,
	PowderedGem_SpellComponentCategory = 0x2,
	AlchemicalSubstance_SpellComponentCategory = 0x3,
	Talisman_SpellComponentCategory = 0x4,
	Taper_SpellComponentCategory = 0x5,
	Pea_SpellComponentCategory = 0x6,
	Num_SpellComponentCategories = 0x7,
	Undef_SpellComponentCategory = 0x8,
	FORCE_SpellComponentCategory_32_BIT = 0x7FFFFFFF,
};


enum DDDEvent
{
	DDD_PatchtimeInterrogation = 0x0,
	DDD_RegionSet = 0x1,
	DDD_PatchtimePending = 0x2,
	DDD_PatchtimeBegin = 0x3,
	DDD_PatchtimeEnd = 0x4,
	DDD_DataDownloaded = 0x5,
	DDD_DynamicDataRequested = 0x6,
	DDD_DataError = 0x7,
};


enum SpellIndex
{
	Undef_SpellIndex = 0x0,
	Resistable_SpellIndex = 0x1,
	PKSensitive_SpellIndex = 0x2,
	Beneficial_SpellIndex = 0x4,
	SelfTargeted_SpellIndex = 0x8,
	Reversed_SpellIndex = 0x10,
	NotIndoor_SpellIndex = 0x20,
	NotOutdoor_SpellIndex = 0x40,
	NotResearchable_SpellIndex = 0x80,
	Projectile_SpellIndex = 0x100,
	CreatureSpell_SpellIndex = 0x200,
	ExcludedFromItemDescriptions_SpellIndex = 0x400,
	IgnoresManaConversion_SpellIndex = 0x800,
	NonTrackingProjectile_SpellIndex = 0x1000,
	FellowshipSpell_SpellIndex = 0x2000,
	FastCast_SpellIndex = 0x4000,
	IndoorLongRange_SpellIndex = 0x8000,
	DamageOverTime_SpellIndex = 0x10000,
	FORCE_SpellIndex_32_BIT = 0x7FFFFFFF,
};


enum GRVDataType
{
	GRVDataType_Unknown = 0x0,
	GRVDataType_DataID = 0x1,
	GRVDataType_Bool = 0x2,
	GRVDataType_Int32 = 0x3,
	GRVDataType_UInt32 = 0x4,
	GRVDataType_Int16 = 0x5,
	GRVDataType_UInt16 = 0x6,
	GRVDataType_Int8 = 0x7,
	GRVDataType_UInt8 = 0x8,
	GRVDataType_Float32 = 0x9,
	GRVDataType_Float64 = 0xA,
	GRVDataType_Vector3 = 0xB,
	GRVDataType_RGBAColor = 0xC,
	GRVDataType_PString = 0xD,
	GRVDataType_Waveform = 0xE,
};




enum SURFCHAR
{
	SOLID = 0x0,
	WATER = 0x1,
	FORCE_SURFCHAR_32_BIT = 0x7FFFFFFF,
};


enum HouseOp
{
	Undef_HouseOp = 0x0,
	Buy_House = 0x1,
	Rent_House = 0x2,
	Force32Bit_House = 0x7FFFFFFF,
};


enum E2AD2342CF57D9E8172C0F9DC73822D65
{
	cat_None = 0x0,
	cat_ButtonDown = 0x1,
	cat_ButtonUp = 0x2,
	cat_ButtonTap = 0x4,
	cat_ButtonDblClick = 0x8,
	cat_ButtonDblClickUp = 0x10,
	cat_ButtonNearby = 0x20,
	cat_ButtonNearbyUp = 0x40,
	cat_AnalogMotion = 0x80,
	cat_DownActions = 0xA9,
	cat_UpActions = 0x56,
	cat_InputEvent = 0x80000000,
};


enum HouseBitmask
{
	Undef_HouseBitmask = 0x0,
	Active_HouseBitmask = 0x1,
	RequiresMonarch_HouseBitmask = 0x2,
	Force32Bit_HouseBitmask = 0x7FFFFFFF,
};


enum CLCache_CCLCacheAsyncOperation
{
	opAsyncBeginDDD = 0x3,
	opCLCacheNextAsyncOperation = 0x4,
};


enum STREAMTYPE
{
	STREAM_GETPACKSIZE = 0x0,
	STREAM_PACK = 0x1,
	STREAM_UNPACK = 0x2,
};


enum SubControlIndex
{
	sci_None = 0x0,
	sci_PositiveAxis = 0x1,
	sci_NegativeAxis = 0x2,
	sci_POVUp = 0x3,
	sci_POVRight = 0x4,
	sci_POVDown = 0x5,
	sci_POVLeft = 0x6,
};


enum TransientState
{
	CONTACT_TS = 0x1,
	ON_WALKABLE_TS = 0x2,
	SLIDING_TS = 0x4,
	WATER_CONTACT_TS = 0x8,
	STATIONARY_FALL_TS = 0x10,
	STATIONARY_STOP_TS = 0x20,
	STATIONARY_STUCK_TS = 0x40,
	ACTIVE_TS = 0x80,
	CHECK_ETHEREAL_TS = 0x100,
	FORCE_TransientState_32_BIT = 0x7FFFFFFF,
};


enum Target_Mode
{
	TARGET_MODE_NONE = 0x0,
	TARGET_MODE_USE = 0x1,
	TARGET_MODE_EXAMINE = 0x2,
	TARGET_MODE_USE_TARGET = 0x3,
	FORCE_Target_Mode_32_BIT = 0x7FFFFFFF,
};



enum StateDesc_INCORPORATIONFLAGS
{
	IF_PASSTOCHILDREN = 0x1,
	IF_X = 0x2,
	IF_Y = 0x4,
	IF_WIDTH = 0x8,
	IF_HEIGHT = 0x10,
	IF_ZLEVEL = 0x20,
};




enum COMBAT_MODE
{
	UNDEF_COMBAT_MODE = 0x0,
	NONCOMBAT_COMBAT_MODE = 0x1,
	MELEE_COMBAT_MODE = 0x2,
	MISSILE_COMBAT_MODE = 0x4,
	MAGIC_COMBAT_MODE = 0x8,
	VALID_COMBAT_MODES = 0xF,
	COMBAT_COMBAT_MODE = 0xE,
	FORCE_COMBAT_MODE_32_BIT = 0x7FFFFFFF,
};


enum CombatStyle
{
	Undef_CombatStyle = 0x0,
	Unarmed_CombatStyle = 0x1,
	OneHanded_CombatStyle = 0x2,
	OneHandedAndShield_CombatStyle = 0x4,
	TwoHanded_CombatStyle = 0x8,
	Bow_CombatStyle = 0x10,
	Crossbow_CombatStyle = 0x20,
	Sling_CombatStyle = 0x40,
	ThrownWeapon_CombatStyle = 0x80,
	DualWield_CombatStyle = 0x100,
	Magic_CombatStyle = 0x200,
	Atlatl_CombatStyle = 0x400,
	ThrownShield_CombatStyle = 0x800,
	Reserved1_CombatStyle = 0x1000,
	Reserved2_CombatStyle = 0x2000,
	Reserved3_CombatStyle = 0x4000,
	Reserved4_CombatStyle = 0x8000,
	StubbornMagic_CombatStyle = 0x10000,
	StubbornProjectile_CombatStyle = 0x20000,
	StubbornMelee_CombatStyle = 0x40000,
	StubbornMissile_CombatStyle = 0x80000,
	Melee_CombatStyles = 0x10F,
	Missile_CombatStyles = 0xCF0,
	Magic_CombatStyles = 0x200,
	All_CombatStyle = 0xFFFF,
	FORCE_CombatStyle_32_BIT = 0x7FFFFFFF,
};


enum BODY_HEIGHT
{
	UNDEF_BODY_HEIGHT = 0x0,
	HIGH_BODY_HEIGHT = 0x1,
	MEDIUM_BODY_HEIGHT = 0x2,
	LOW_BODY_HEIGHT = 0x3,
	NUM_BODY_HEIGHTS = 0x4,
	FORCE_BODY_HEIGHT32_BIT = 0x7FFFFFFF,
};


enum DAMAGE_TYPE
{
	UNDEF_DAMAGE_TYPE = 0x0,
	SLASH_DAMAGE_TYPE = 0x1,
	PIERCE_DAMAGE_TYPE = 0x2,
	BLUDGEON_DAMAGE_TYPE = 0x4,
	COLD_DAMAGE_TYPE = 0x8,
	FIRE_DAMAGE_TYPE = 0x10,
	ACID_DAMAGE_TYPE = 0x20,
	ELECTRIC_DAMAGE_TYPE = 0x40,
	HEALTH_DAMAGE_TYPE = 0x80,
	STAMINA_DAMAGE_TYPE = 0x100,
	MANA_DAMAGE_TYPE = 0x200,
	NETHER_DAMAGE_TYPE = 0x400,
	BASE_DAMAGE_TYPE = 0x10000000,
	FORCE_DAMAGE_TYPE_32_BIT = 0x7FFFFFFF,
};


enum AttackType
{
	Undef_AttackType = 0x0,
	Punch_AttackType = 0x1,
	Thrust_AttackType = 0x2,
	Slash_AttackType = 0x4,
	Kick_AttackType = 0x8,
	OffhandPunch_AttackType = 0x10,
	DoubleSlash_AttackType = 0x20,
	TripleSlash_AttackType = 0x40,
	DoubleThrust_AttackType = 0x80,
	TripleThrust_AttackType = 0x100,
	OffhandThrust_AttackType = 0x200,
	OffhandSlash_AttackType = 0x400,
	OffhandDoubleSlash_AttackType = 0x800,
	OffhandTripleSlash_AttackType = 0x1000,
	OffhandDoubleThrust_AttackType = 0x2000,
	OffhandTripleThrust_AttackType = 0x4000,
	Unarmed_AttackType = 0x19,
	MultiStrike_AttackType = 0x79E0,
	FORCE_AttackType_32_BIT = 0x7FFFFFFF,
};




enum StringInfo_StringInfo_Override_Flag
{
	SI_NONE = 0x0,
	SI_LITERAL = 0x1,
	SI_AUTOGEN = 0x2,
};


enum ImbuedEffectType
{
	Undef_ImbuedEffectType = 0x0,
	CriticalStrike_ImbuedEffectType = 0x1,
	CripplingBlow_ImbuedEffectType = 0x2,
	ArmorRending_ImbuedEffectType = 0x4,
	SlashRending_ImbuedEffectType = 0x8,
	PierceRending_ImbuedEffectType = 0x10,
	BludgeonRending_ImbuedEffectType = 0x20,
	AcidRending_ImbuedEffectType = 0x40,
	ColdRending_ImbuedEffectType = 0x80,
	ElectricRending_ImbuedEffectType = 0x100,
	FireRending_ImbuedEffectType = 0x200,
	MeleeDefense_ImbuedEffectType = 0x400,
	MissileDefense_ImbuedEffectType = 0x800,
	MagicDefense_ImbuedEffectType = 0x1000,
	Spellbook_ImbuedEffectType = 0x2000,
	NetherRending_ImbuedEffectType = 0x4000,
	IgnoreSomeMagicProjectileDamage_ImbuedEffectType = 0x20000000,
	AlwaysCritical_ImbuedEffectType = 0x40000000,
	IgnoreAllArmor_ImbuedEffectType = 0x80000000,
	FORCE_ImbuedEffectType_32_BIT = 0x7FFFFFFF,
};






enum LIGHTINFO_LightType
{
	INVALID_LIGHT_TYPE = 0xFFFFFFFF,
	POINT_LIGHT = 0x0,
	DISTANT_LIGHT = 0x1,
	SPOT_LIGHT = 0x2,
	FORCE_LightType_32_BIT = 0x7FFFFFFF,
};


enum DiskControllerLoadFlags
{
	dclfDontDecompress = 0x1,
	dclfBTEntryOnly = 0x2,
	dclfShortRead = 0x5,
};


enum eAllegianceOfficerLevel
{
	Undef_AllegianceOfficerLevel = 0x0,
	Speaker_AllegianceOfficerLevel = 0x1,
	Seneschal_AllegianceOfficerLevel = 0x2,
	Castellan_AllegianceOfficerLevel = 0x3,
	NumberOfOfficerTitles_AllegianceOfficerLevel = 0x3,
	FORCE_AllegianceOfficerLevel_32_BIT = 0x7FFFFFFF,
};


enum eAllegianceLockAction
{
	Undef_AllegianceLockAction = 0x0,
	OffLock_AllegianceLockAction = 0x1,
	OnLock_AllegianceLockAction = 0x2,
	ToggleLock_AllegianceLockAction = 0x3,
	CheckLock_AllegianceLockAction = 0x4,
	CheckApproved_AllegianceLockAction = 0x5,
	ClearApproved_AllegianceLockAction = 0x6,
	NumberOfActions_AllegianceLockAction = 0x6,
	FORCE_AllegianceLockAction_32_BIT = 0x7FFFFFFF,
};


enum CACHE_OBJECT_CODES
{
	CACHE_OBJECT_INVALID = 0xFFFFFFFE,
	CACHE_OBJECT_NET_GETTING = 0xFFFFFFFF,
	CACHE_OBJECT_LOOKING = 0x0,
	CACHE_OBJECT_IN_FILE = 0x1,
	CACHE_OBJECT_IN_MEMORY = 0x2,
};


enum DataHistory_UpdateType
{
	utPatch = 0x0,
	utPurge = 0x1,
	utIgnore = 0x2,
	utInvalid = 0x3,
};


enum CLCache_DatFileIndex
{
	PortalDatIndex = 0x0,
	LocalDatIndex = 0x1,
	CellDatIndex = 0x2,
	HighResDatIndex = 0x3,
	nDatFiles = 0x4,
};


enum EE0971427BCD5BF40126DFC935D5F9371
{
	dddIdle = 0x0,
	dddInterrogationReceved = 0x1,
	dddPatching = 0x2,
	dddEndSent = 0x3,
	dddRunTime = 0x4,
};


enum DeviceType
{
	dt_Invalid = 0x0,
	dt_Keyboard = 0x1,
	dt_Mouse = 0x2,
	dt_Joystick = 0x3,
	dt_Virtual = 0x4,
};


enum MouseLookBehavior
{
	mlb_Center = 0x0,
	mlb_Remember = 0x1,
	mlb_GotoXY = 0x2,
};


enum NetBlob_State
{
	NETBLOB_FROZEN = 0x0,
	NETBLOB_SENDING = 0x1,
	NETBLOB_RECEIVING = 0x2,
	NETBLOB_RECEIVED = 0x3,
	NETBLOB_FRAGMENTED = 0x4,
	FORCE_State_32_BIT = 0x7FFFFFFF,
};


enum GetStringErrorCode
{
	gsSuccess = 0x0,
	gsUninitialized = 0x1,
	gsMissingString = 0x2,
	gsMissingTable = 0x3,
	gsMissingPrivateString = 0x4,
	gsMissingPrivateTable = 0x5,
	gsMissingVariable = 0x6,
	gsMetaLanguageError = 0x7,
	gsGenericError = 0x8,
	GetStringErrorCode_FORCE_32_BIT = 0x7FFFFFFF,
};


enum NetStatus
{
	Net_Initializing = 0x0,
	Net_LoginAuthenticating = 0x1,
	Net_LoginConnecting = 0x2,
	Net_LoginConnected = 0x3,
	Net_LoginConnectionError = 0x4,
	Net_WorldConnectionError = 0x5,
};


enum EDDE4C8BA43F9A489C0C96F0C76F0F3BD
{
	LinkStatus_Created = 0x0,
	LinkStatus_Initialized = 0x1,
	LinkStatus_Connecting = 0x2,
	LinkStatus_Connected = 0x3,
	LinkStatus_Disconnected = 0x4,
};


enum ObjectSelectStatus
{
	Invalid_OSS = 0x0,
	ObjectOnscreen_OSS = 0x1,
	ObjectOffscreen_OSS = 0x2,
	ObjectNotFound_OSS = 0x3,
	FORCE_ObjectSelectStatus_32_BIT = 0x7FFFFFFF,
};


enum NetBlobProcessedStatus
{
	NETBLOB_UNDEF_STATUS = 0x0,
	NETBLOB_PROCESSED_OK = 0x1,
	NETBLOB_OLD_INSTANCE = 0x2,
	NETBLOB_ERROR = 0x3,
	NETBLOB_QUEUED = 0x4,
	FORCE_NetBlobProcessedStatus_32_BIT = 0x7FFFFFFF,
};


enum charError
{
	CHAR_ERROR_UNDEF = 0x0,
	CHAR_ERROR_LOGON = 0x1,
	CHAR_ERROR_LOGGED_ON = 0x2,
	CHAR_ERROR_ACCOUNT_LOGON = 0x3,
	CHAR_ERROR_SERVER_CRASH = 0x4,
	CHAR_ERROR_LOGOFF = 0x5,
	CHAR_ERROR_DELETE = 0x6,
	CHAR_ERROR_NO_PREMADE = 0x7,
	CHAR_ERROR_ACCOUNT_IN_USE = 0x8,
	CHAR_ERROR_ACCOUNT_INVALID = 0x9,
	CHAR_ERROR_ACCOUNT_DOESNT_EXIST = 0xA,
	CHAR_ERROR_ENTER_GAME_GENERIC = 0xB,
	CHAR_ERROR_ENTER_GAME_STRESS_ACCOUNT = 0xC,
	CHAR_ERROR_ENTER_GAME_CHARACTER_IN_WORLD = 0xD,
	CHAR_ERROR_ENTER_GAME_PLAYER_ACCOUNT_MISSING = 0xE,
	CHAR_ERROR_ENTER_GAME_CHARACTER_NOT_OWNED = 0xF,
	CHAR_ERROR_ENTER_GAME_CHARACTER_IN_WORLD_SERVER = 0x10,
	CHAR_ERROR_ENTER_GAME_OLD_CHARACTER = 0x11,
	CHAR_ERROR_ENTER_GAME_CORRUPT_CHARACTER = 0x12,
	CHAR_ERROR_ENTER_GAME_START_SERVER_DOWN = 0x13,
	CHAR_ERROR_ENTER_GAME_COULDNT_PLACE_CHARACTER = 0x14,
	CHAR_ERROR_LOGON_SERVER_FULL = 0x15,
	CHAR_ERROR_CHARACTER_IS_BOOTED = 0x16,
	CHAR_ERROR_ENTER_GAME_CHARACTER_LOCKED = 0x17,
	CHAR_ERROR_SUBSCRIPTION_EXPIRED = 0x18,
	CHAR_ERROR_NUM_ERRORS = 0x19,
	FORCE_charError_32_BIT = 0x7FFFFFFF,
};


enum EC596587DC4E66710E5C1896DCA752819
{
	QUALITY_STATTYPE = 0x8,
};




enum LandDefs_Rotation
{
	ROT_0 = 0x0,
	ROT_90 = 0x1,
	ROT_180 = 0x2,
	ROT_270 = 0x3,
	FORCE_Rotation_32_BIT = 0x7FFFFFFF,
};


enum LandDefs_PalType
{
	SWTerrain = 0x0,
	SETerrain = 0x1,
	NETerrain = 0x2,
	NWTerrain = 0x3,
	Road = 0x4,
	FORCE_PalType_32_BIT = 0x7FFFFFFF,
};


enum LandDefs_WaterType
{
	NOT_WATER = 0x0,
	PARTIALLY_WATER = 0x1,
	ENTIRELY_WATER = 0x2,
	FORCE_WaterType_32_BIT = 0x7FFFFFFF,
};


enum LandDefs_TerrainType
{
	BarrenRock = 0x0,
	Grassland = 0x1,
	Ice = 0x2,
	LushGrass = 0x3,
	MarshSparseSwamp = 0x4,
	MudRichDirt = 0x5,
	ObsidianPlain = 0x6,
	PackedDirt = 0x7,
	PatchyDirt = 0x8,
	PatchyGrassland = 0x9,
	SandYellow = 0xA,
	SandGrey = 0xB,
	SandRockStrewn = 0xC,
	SedimentaryRock = 0xD,
	SemiBarrenRock = 0xE,
	Snow = 0xF,
	WaterRunning = 0x10,
	WaterStandingFresh = 0x11,
	WaterShallowSea = 0x12,
	WaterShallowStillSea = 0x13,
	WaterDeepSea = 0x14,
	Reserved21 = 0x15,
	Reserved22 = 0x16,
	Reserved23 = 0x17,
	Reserved24 = 0x18,
	Reserved25 = 0x19,
	Reserved26 = 0x1A,
	Reserved27 = 0x1B,
	Reserved28 = 0x1C,
	Reserved29 = 0x1D,
	Reserved30 = 0x1E,
	Reserved31 = 0x1F,
	RoadType = 0x20,
	FORCE_TerrainType_32_BIT = 0x7FFFFFFF,
};


enum DBOBJ_STATUS
{
	DBOBJ_UNDEF = 0x0,
	DBOBJ_OK = 0x1,
	DBOBJ_NOTFOUND = 0x2,
	DBOBJ_DEFERRED = 0x3,
	DBOBJ_NOTLOADED = 0x4,
	DBOBJ_FROZEN = 0x5,
};


enum PlayerOption
{
	Invalid_PlayerOption = 0xFFFFFFFF,
	AutoRepeatAttack_PlayerOption = 0x0,
	IgnoreAllegianceRequests_PlayerOption = 0x1,
	IgnoreFellowshipRequests_PlayerOption = 0x2,
	IgnoreTradeRequests_PlayerOption = 0x3,
	DisableMostWeatherEffects_PlayerOption = 0x4,
	PersistentAtDay_PlayerOption = 0x5,
	AllowGive_PlayerOption = 0x6,
	ViewCombatTarget_PlayerOption = 0x7,
	ShowTooltips_PlayerOption = 0x8,
	UseDeception_PlayerOption = 0x9,
	ToggleRun_PlayerOption = 0xA,
	StayInChatMode_PlayerOption = 0xB,
	AdvancedCombatUI_PlayerOption = 0xC,
	AutoTarget_PlayerOption = 0xD,
	VividTargetingIndicator_PlayerOption = 0xE,
	FellowshipShareXP_PlayerOption = 0xF,
	AcceptLootPermits_PlayerOption = 0x10,
	FellowshipShareLoot_PlayerOption = 0x11,
	FellowshipAutoAcceptRequests_PlayerOption = 0x12,
	SideBySideVitals_PlayerOption = 0x13,
	CoordinatesOnRadar_PlayerOption = 0x14,
	SpellDuration_PlayerOption = 0x15,
	DisableHouseRestrictionEffects_PlayerOption = 0x16,
	DragItemOnPlayerOpensSecureTrade_PlayerOption = 0x17,
	DisplayAllegianceLogonNotifications_PlayerOption = 0x18,
	UseChargeAttack_PlayerOption = 0x19,
	UseCraftSuccessDialog_PlayerOption = 0x1A,
	HearAllegianceChat_PlayerOption = 0x1B,
	DisplayDateOfBirth_PlayerOption = 0x1C,
	DisplayAge_PlayerOption = 0x1D,
	DisplayChessRank_PlayerOption = 0x1E,
	DisplayFishingSkill_PlayerOption = 0x1F,
	DisplayNumberDeaths_PlayerOption = 0x20,
	DisplayTimeStamps_PlayerOption = 0x21,
	SalvageMultiple_PlayerOption = 0x22,
	HearGeneralChat_PlayerOption = 0x23,
	HearTradeChat_PlayerOption = 0x24,
	HearLFGChat_PlayerOption = 0x25,
	HearRoleplayChat_PlayerOption = 0x26,
	AppearOffline_PlayerOption = 0x27,
	DisplayNumberCharacterTitles_PlayerOption = 0x28,
	MainPackPreferred_PlayerOption = 0x29,
	LeadMissileTargets_PlayerOption = 0x2A,
	UseFastMissiles_PlayerOption = 0x2B,
	FilterLanguage_PlayerOption = 0x2C,
	ConfirmVolatileRareUse_PlayerOption = 0x2D,
	HearSocietyChat_PlayerOption = 0x2E,
	ShowHelm_PlayerOption = 0x2F,
	DisableDistanceFog_PlayerOption = 0x30,
	UseMouseTurning_PlayerOption = 0x31,
	ShowCloak_PlayerOption = 0x32,
	LockUI_PlayerOption = 0x33,
	TotalNumberOfPlayerOptions_PlayerOption = 0x34,
};


enum AMMO_TYPE
{
	AMMO_NONE = 0x0,
	AMMO_ARROW = 0x1,
	AMMO_BOLT = 0x2,
	AMMO_ATLATL = 0x4,
	AMMO_ARROW_CRYSTAL = 0x8,
	AMMO_BOLT_CRYSTAL = 0x10,
	AMMO_ATLATL_CRYSTAL = 0x20,
	AMMO_ARROW_CHORIZITE = 0x40,
	AMMO_BOLT_CHORIZITE = 0x80,
	AMMO_ATLATL_CHORIZITE = 0x100,
	FORCE_AMMO_TYPE_32_BIT = 0x7FFFFFFF,
};


enum AppraisalProfile_ArmorEnchantment_BFIndex
{
	BF_ARMOR_LEVEL = 0x1,
	BF_ARMOR_MOD_VS_SLASH = 0x2,
	BF_ARMOR_MOD_VS_PIERCE = 0x4,
	BF_ARMOR_MOD_VS_BLUDGEON = 0x8,
	BF_ARMOR_MOD_VS_COLD = 0x10,
	BF_ARMOR_MOD_VS_FIRE = 0x20,
	BF_ARMOR_MOD_VS_ACID = 0x40,
	BF_ARMOR_MOD_VS_ELECTRIC = 0x80,
	BF_ARMOR_MOD_VS_NETHER = 0x100,
	BF_ARMOR_LEVEL_HI = 0x10000,
	BF_ARMOR_MOD_VS_SLASH_HI = 0x20000,
	BF_ARMOR_MOD_VS_PIERCE_HI = 0x40000,
	BF_ARMOR_MOD_VS_BLUDGEON_HI = 0x80000,
	BF_ARMOR_MOD_VS_COLD_HI = 0x100000,
	BF_ARMOR_MOD_VS_FIRE_HI = 0x200000,
	BF_ARMOR_MOD_VS_ACID_HI = 0x400000,
	BF_ARMOR_MOD_VS_ELECTRIC_HI = 0x800000,
	BF_ARMOR_MOD_VS_NETHER_HI = 0x1000000,
	FORCE_ArmorEnchantment_BFIndex_32_BIT = 0x7FFFFFFF,
};


enum AppraisalProfile_WeaponEnchantment_BFIndex
{
	BF_WEAPON_OFFENSE = 0x1,
	BF_WEAPON_DEFENSE = 0x2,
	BF_WEAPON_TIME = 0x4,
	BF_DAMAGE = 0x8,
	BF_DAMAGE_VARIANCE = 0x10,
	BF_DAMAGE_MOD = 0x20,
	BF_WEAPON_OFFENSE_HI = 0x10000,
	BF_WEAPON_DEFENSE_HI = 0x20000,
	BF_WEAPON_TIME_HI = 0x40000,
	BF_DAMAGE_HI = 0x80000,
	BF_DAMAGE_VARIANCE_HI = 0x100000,
	BF_DAMAGE_MOD_HI = 0x200000,
	FORCE_WeaponEnchantment_BFIndex_32_BIT = 0x7FFFFFFF,
};


enum AppraisalProfile_ResistanceEnchantment_BFIndex
{
	BF_RESIST_SLASH = 0x1,
	BF_RESIST_PIERCE = 0x2,
	BF_RESIST_BLUDGEON = 0x4,
	BF_RESIST_FIRE = 0x8,
	BF_RESIST_COLD = 0x10,
	BF_RESIST_ACID = 0x20,
	BF_RESIST_ELECTRIC = 0x40,
	BF_RESIST_HEALTH_BOOST = 0x80,
	BF_RESIST_STAMINA_DRAIN = 0x100,
	BF_RESIST_STAMINA_BOOST = 0x200,
	BF_RESIST_MANA_DRAIN = 0x400,
	BF_RESIST_MANA_BOOST = 0x800,
	BF_MANA_CON_MOD = 0x1000,
	BF_ELE_DAMAGE_MOD = 0x2000,
	BF_RESIST_NETHER = 0x4000,
	BF_RESIST_SLASH_HI = 0x10000,
	BF_RESIST_PIERCE_HI = 0x20000,
	BF_RESIST_BLUDGEON_HI = 0x40000,
	BF_RESIST_FIRE_HI = 0x80000,
	BF_RESIST_COLD_HI = 0x100000,
	BF_RESIST_ACID_HI = 0x200000,
	BF_RESIST_ELECTRIC_HI = 0x400000,
	BF_RESIST_HEALTH_BOOST_HI = 0x800000,
	BF_RESIST_STAMINA_DRAIN_HI = 0x1000000,
	BF_RESIST_STAMINA_BOOST_HI = 0x2000000,
	BF_RESIST_MANA_DRAIN_HI = 0x4000000,
	BF_RESIST_MANA_BOOST_HI = 0x8000000,
	BF_MANA_CON_MOD_HI = 0x10000000,
	BF_ELE_DAMAGE_MOD_HI = 0x20000000,
	BF_RESIST_NETHER_HI = 0x40000000,
	FORCE_ResistanceEnchantment_BFIndex_32_BIT = 0x7FFFFFFF,
};


enum Ray_ClosestPointType
{
	ClosestPointType_Endpoint = 0x0,
	ClosestPointType_Interior = 0x1,
};


enum UIElement_FunctionSignatureChanged
{
};


enum BorderLocation
{
	BORDER_NONE = 0x0,
	BORDER_UL = 0x1,
	BORDER_TOP = 0x2,
	BORDER_UR = 0x3,
	BORDER_RIGHT = 0x4,
	BORDER_LR = 0x5,
	BORDER_BOTTOM = 0x6,
	BORDER_LL = 0x7,
	BORDER_LEFT = 0x8,
};


enum UIElement_Intialized_Has_Been_Replaced_With_PostInit
{
};


enum CG_VERIFICATION_RESPONSE
{
	UNDEF_CG_VERIFICATION_RESPONSE = 0x0,
	CG_VERIFICATION_RESPONSE_OK = 0x1,
	CG_VERIFICATION_RESPONSE_PENDING = 0x2,
	CG_VERIFICATION_RESPONSE_NAME_IN_USE = 0x3,
	CG_VERIFICATION_RESPONSE_NAME_BANNED = 0x4,
	CG_VERIFICATION_RESPONSE_CORRUPT = 0x5,
	CG_VERIFICATION_RESPONSE_DATABASE_DOWN = 0x6,
	CG_VERIFICATION_RESPONSE_ADMIN_PRIVILEGE_DENIED = 0x7,
	NUM_CG_VERIFICATION_RESPONSES = 0x8,
	FORCE_CG_VERIFICATION_RESPONSE_32_BIT = 0x7FFFFFFF,
};


enum PowerBarMode
{
	PBM_UNDEF = 0x0,
	PBM_COMBAT = 0x1,
	PBM_ADVANCED_COMBAT = 0x2,
	PBM_JUMP = 0x3,
	PBM_DDD = 0x4,
};


enum ATTACK_HEIGHT
{
	UNDEF_ATTACK_HEIGHT = 0x0,
	HIGH_ATTACK_HEIGHT = 0x1,
	MEDIUM_ATTACK_HEIGHT = 0x2,
	LOW_ATTACK_HEIGHT = 0x3,
	NUM_ATTACK_HEIGHTS = 0x4,
	FORCE_ATTACK_HEIGHT_32_BIT = 0x7FFFFFFF,
};


enum ShopMode
{
	SHOP_MODE_UNDEF = 0x0,
	SHOP_MODE_NONE = 0x1,
	SHOP_MODE_BUY = 0x2,
	SHOP_MODE_SELL = 0x3,
	FORCE_ShopMode_32_BIT = 0x7FFFFFFF,
};


enum BlitDataFormat
{
	BlitFmt_NoData = 0xFFFFFFFF,
	BlitFmt_ARGB = 0x0,
	BlitFmt_XRGB = 0x1,
	BlitFmt_RGB = 0x2,
	BlitFmt_nFormats = 0x3,
};


enum MaskDataFormat
{
	MaskFmt_NoData = 0xFFFFFFFF,
	MaskFmt_Fill = 0x0,
	MaskFmt_A = 0x1,
	MaskFmt_AXXX = 0x2,
	MaskFmt_nSrcFormats = 0x3,
};


enum SurfaceWindow_WhichBufferArg
{
	baBlit = 0x0,
	baMask = 0x1,
};


enum ImageScaleType
{
	FULL_RES = 0x0,
	HALF_RES = 0x1,
	QUARTER_RES = 0x2,
	EIGHTH_RES = 0x3,
	NumImageScaleType = 0x4,
	FORCE_ImageScaleType_32_BIT = 0x7FFFFFFF,
};


enum CameraTarget
{
	INVALID_TARGET = 0x0,
	LOOK_IN_DIRECTION = 0x1,
	LOOK_AT_OBJECT = 0x2,
	LOOK_AT_PIVOT = 0x4,
	ALIGN_WITH_PIVOT = 0x8,
	ALIGN_WITH_PLANE = 0x10,
	FORCE_CameraTarget_32_BIT = 0x7FFFFFFF,
};


enum SpellType
{
	Undef_SpellType = 0x0,
	Enchantment_SpellType = 0x1,
	Projectile_SpellType = 0x2,
	Boost_SpellType = 0x3,
	Transfer_SpellType = 0x4,
	PortalLink_SpellType = 0x5,
	PortalRecall_SpellType = 0x6,
	PortalSummon_SpellType = 0x7,
	PortalSending_SpellType = 0x8,
	Dispel_SpellType = 0x9,
	LifeProjectile_SpellType = 0xA,
	FellowBoost_SpellType = 0xB,
	FellowEnchantment_SpellType = 0xC,
	FellowPortalSending_SpellType = 0xD,
	FellowDispel_SpellType = 0xE,
	EnchantmentProjectile_SpellType = 0xF,
	FORCE_SpellType_32_BIT = 0x7FFFFFFF,
};


enum ChatTypeEnum
{
	Undef_ChatTypeEnum = 0x0,
	Allegiance_ChatTypeEnum = 0x1,
	General_ChatTypeEnum = 0x2,
	Trade_ChatTypeEnum = 0x3,
	LFG_ChatTypeEnum = 0x4,
	Roleplay_ChatTypeEnum = 0x5,
	Society_ChatTypeEnum = 0x6,
	SocietyCelHan_ChatTypeEnum = 0x7,
	SocietyEldWeb_ChatTypeEnum = 0x8,
	SocietyRadBlo_ChatTypeEnum = 0x9,
	Olthoi_ChatTypeEnum = 0xA,
	FORCE_CHAT_TYPE_32_BIT = 0x7FFFFFFF,
};


enum E4EDBBE523245B163339CBB1829736610
{
	CurrentPackVersion = 0x1,
	OldestValidPackVersion = 0x1,
};


enum E978A68ABF2811DE155E71498BB7861FE
{
	InvalidVersion = 0x0,
	SizeOfVersion = 0x4,
	SizeOfChecksum = 0x4,
};


enum EnterChargen
{
	ENTER_NEW = 0x0,
	ENTER_CONTINUE = 0x1,
	ENTER_RANDOM = 0x2,
	FORCE_EnterChargen_32_BIT = 0x7FFFFFFF,
};


enum Method_CG
{
};


enum AdvancedMethod_CG
{
};


enum ClientCommunicationSystem_HelpType
{
	Summary_HelpType = 0x0,
	List_HelpType = 0x1,
	Detail_HelpType = 0x2,
};


enum SpellComponentType
{
	Undef_SpellComponentType = 0x0,
	Power_SpellComponentType = 0x1,
	Action_SpellComponentType = 0x2,
	ConceptPrefix_SpellComponentType = 0x3,
	ConceptSuffix_SpellComponentType = 0x4,
	Target_SpellComponentType = 0x5,
	Accent_SpellComponentType = 0x6,
	Pea_SpellComponentType = 0x7,
	FORCE_SpellComponentType_32_BIT = 0x7FFFFFFF,
};


enum ComponentTrackerUpdate
{
	CT_CHANGE_NONE = 0x0,
	CT_CHANGE_ADD = 0x1,
	CT_CHANGE_REMOVE = 0x2,
	FORCE_ComponentTrackerUpdate_32_BIT = 0x7FFFFFFF,
};


enum UI_SLOT_SIDE
{
	SLOT_SIDE_NULL = 0x0,
	SLOT_SIDE_LEFT = 0x1,
	SLOT_SIDE_RIGHT = 0x2,
	FORCE_UI_SLOT_SIDE_32_BIT = 0x7FFFFFFF,
};


enum DialogBoxGateway_ThisFunctionHasBeenRenamed
{
};


enum E816135D4CADE8445651DF97A0C695365
{
	eAlgID = 0x8003,
};



enum SoundType
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


enum ProgramType
{
	Undef_ProgramType = 0x0,
	Client_ProgramType = 0x1,
	Server_ProgramType = 0x2,
	GameClient_ProgramType = 0x40000001,
	GameServer_ProgramType = 0x40000002,
	ClientAdder_ProgramType = 0x80000001,
	ServerAdder_ProgramType = 0x80000002,
	WorldBuilder_ProgramType = 0x80000011,
	RuntimeProgram_ProgramType = 0x40000000,
	PreprocProgram_ProgramType = 0x80000000,
	PathMap_ProgramType = 0x100,
	PathGen_ProgramType = 0x80000102,
};


enum E313183CCA009719CCB6D34FDE8D053C0
{
	npfChecksumEncrypted = 0x1,
	npfHasTimeSensitiveHeaders = 0x2,
	npfHasSequencedData = 0x4,
	npfHasHighPriorityHeaders = 0x8,
};


enum OptionalHeaderFlags
{
	ohfDisposable = 0x1,
	ohfExclusive = 0x2,
	ohfNotConn = 0x4,
	ohfTimeSensitive = 0x8,
	ohfShouldPiggyBack = 0x10,
	ohfHighPriority = 0x20,
	ohfCountsAsTouch = 0x40,
	ohfEncrypted = 0x20000000,
	ohfSigned = 0x40000000,
};


enum AsyncStateMachineStatus
{
	AsyncStateMachine_Unknown = 0x0,
	AsyncStateMachine_Running = 0x1,
	AsyncStateMachine_Succeeded = 0x2,
	AsyncStateMachine_TimedOut = 0x3,
	AsyncStateMachine_Failed = 0x4,
	AsyncStateMachine_InternalError = 0x5,
};


enum LegacyDataErrorMode
{
	DataError_Normal = 0x0,
	DataError_OutputDebugString = 0x1,
	DataError_OutputToConsole = 0x2,
};


enum ClientNet_WAIT_RESULT
{
	UNDEF_WAIT_RESULT = 0x0,
	DONE_WAIT_RESULT = 0x1,
	FAILED_WAIT_RESULT = 0x2,
	ROUTED_WAIT_RESULT = 0x3,
	NO_LOGON_SERVER_WAIT_RESULT = 0x4,
	EXPIRED_ZONE_TICKET_RESULT = 0x5,
	FORCE_WAIT_RESULT_32_BIT = 0x7FFFFFFF,
};


enum NetPerfCounter
{
	BytesSentCounter = 0x0,
	BytesReceivedCounter = 0x1,
	BadPacketsReceivedCounter = 0x2,
	OptionalHeadersOnlyPacketsReceivedCounter = 0x3,
	OptionalHeadersAndDataPacketsReceivedCounter = 0x4,
	DataOnlyPacketsReceivedCounter = 0x5,
	AcksReceivedCounter = 0x6,
	NaksReceivedCounter = 0x7,
	PaksReceivedCounter = 0x8,
	PacketsSentCounter = 0x9,
	RetransmitsSentCounter = 0xA,
	MiscPacketsCounter = 0xB,
};


enum PacketInfo_Protocol
{
	fe_tcp = 0x0,
	be_tcp = 0x1,
	fe_udp = 0x2,
};


enum ConnectionState
{
	cs_Disconnected = 0x0,
	cs_AwaitingWorldAuth = 0x1,
	cs_AuthSent = 0x2,
	cs_ConnectionRequestSent = 0x3,
	cs_ConnectionRequestAcked = 0x4,
	cs_Connected = 0x5,
	cs_DisconnectReceived = 0x6,
	cs_DisconnectSent = 0x7,
};


enum ReceiverState
{
	UNDEF_STATE = 0x0,
	NAK_STATE = 0x1,
	NO_NAK_STATE = 0x2,
	NO_STATE = 0x3,
	FORCE_ReceiverState_32_BIT = 0x7FFFFFFF,
};


enum ServerSwitchType
{
	ssWorldSwitch = 0x0,
	ssLogonSwitch = 0x1,
	ssForce32BitEnum = 0x7FFFFFFF,
};


enum ICMDCommandEnum
{
	cmdNOP = 0x1,
	cmdEchoRequest = 0x71655245,
	cmdEchoReply = 0x6C705245,
	ICMDCommandEnum_Force32Bit = 0x7FFFFFFF,
};


enum PerfMonCounterInfo_EPerfCounterType
{
	NORMAL = 0x0,
	NORMAL_HEX = 0x1,
	PER_SEC = 0x2,
};


enum SEND_CODE
{
	UNDEF_SEND = 0x0,
	OK_SEND = 0x1,
	NET_FAIL_SEND = 0x2,
	FLOW_FAIL_SEND = 0x3,
	FORCE_SEND_CODE_32_BIT = 0x7FFFFFFF,
};


enum eChatTypes
{
	eTextTypeDefault = 0x0,
	eTextTypeAllChannels = 0x1,
	eTextTypeSpeech = 0x2,
	eTextTypeSpeechDirect = 0x3,
	eTextTypeSpeechDirectSend = 0x4,
	eTextTypeSystemSvent = 0x5,
	eTextTypeCombat = 0x6,
	eTextTypeMagic = 0x7,
	eTextTypeChannel = 0x8,
	eTextTypeChannelCend = 0x9,
	eTextTypeSocialChannel = 0xA,
	eTextTypeSocialChannelSend = 0xB,
	eTextTypeEmote = 0xC,
	eTextTypeAdvancement = 0xD,
	eTextTypeAbuseChannel = 0xE,
	eTextTypeHelpChannel = 0xF,
	eTextTypeAppraisalChannel = 0x10,
	eTextTypeMagicCastingChannel = 0x11,
	eTextTypeAllegienceChannel = 0x12,
	eTextTypeFellowshipChannel = 0x13,
	eTextTypeWorld_broadcast = 0x14,
	eTextTypeCombatEnemy = 0x15,
	eTextTypeCombatSelf = 0x16,
	eTextTypeRecall = 0x17,
	eTextTypeCraft = 0x18,
	eTextTypeTotalNumChannels = 0x19,
};


enum eCombatMode
{
	eCombatModeUndef = 0x0,
	eCombatModeNonCombat = 0x1,
	eCombatModeMelee = 0x2,
	eCombatModeMissile = 0x4,
	eCombatModeMagic = 0x8,
};


enum eTradeListID
{
	TradeListIDUndef = 0x0,
	TradeListIDSelf = 0x1,
	TradeListIDPartner = 0x2,
};


enum LSA_FOREST_TRUST_RECORD_TYPE
{
	ForestTrustTopLevelName = 0x0,
	ForestTrustTopLevelNameEx = 0x1,
	ForestTrustDomainInfo = 0x2,
	ForestTrustRecordTypeLast = 0x2,
};


enum tagRASCONNSTATE
{
};


enum GODOTUNICODE
{
	PlatformUntested = 0x0,
	PlatformUnicode = 0x1,
	PlatformNotUnicode = 0x2,
};


enum SQFL
{
	sqflAlways = 0x0,
	sqflDll = 0x1,
	sqflFactory = 0x2,
	sqflDi = 0x3,
	sqflMouse = 0x4,
	sqflDev = 0x5,
	sqflKbd = 0x6,
	sqflDf = 0x7,
	sqflJoy = 0x8,
	sqflEm = 0x9,
	sqflSubclass = 0xA,
	sqflCursor = 0xB,
	sqflHel = 0xC,
	sqflLl = 0xD,
	sqflExcl = 0xE,
	sqflDEnum = 0xF,
	sqflExtDll = 0x10,
	sqflHid = 0x11,
	sqflHidDev = 0x12,
	sqflJoyCfg = 0x13,
	sqflEff = 0x14,
	sqflOleDup = 0x15,
	sqflEShep = 0x16,
	sqflJoyEff = 0x17,
	sqflJoyReg = 0x18,
	sqflVxdEff = 0x19,
	sqflNil = 0x1A,
	sqflHidUsage = 0x1B,
	sqflUtil = 0x1C,
	sqflObj = 0x1D,
	sqflCommon = 0x1E,
	sqflHidParse = 0x1F,
	sqflCal = 0x20,
	sqflJoyType = 0x21,
	sqflHidOutput = 0x22,
	sqflHidIni = 0x23,
	sqflPort = 0x24,
	sqflWDM = 0x25,
	sqflRegUtils = 0x26,
	sqflCrit = 0x27,
	sqflCompat = 0x28,
	sqflRaw = 0x29,
	sqflMaxArea = 0x2A,
	sqflTrace = 0x10000,
	sqflIn = 0x20000,
	sqflOut = 0x40000,
	sqflBenign = 0x80000,
	sqflError = 0x100000,
	sqflVerbose = 0x200000,
	sqflMajor = 0x400000,
};


enum _HIDP_REPORT_TYPE
{
	HidP_Input = 0x0,
	HidP_Output = 0x1,
	HidP_Feature = 0x2,
};


enum inflate_block_mode
{
	TYPE = 0x0,
	LENS = 0x1,
	STORED = 0x2,
	TABLE = 0x3,
	BTREE = 0x4,
	DTREE = 0x5,
	CODES = 0x6,
	DRY = 0x7,
	DONE = 0x8,
	BAD = 0x9,
};



enum inflate_codes_mode
{
	START = 0x0,
	LEN = 0x1,
	LENEXT = 0x2,
	DIST = 0x3,
	DISTEXT = 0x4,
	COPY = 0x5,
	LIT = 0x6,
	WASH = 0x7,
	END = 0x8,
	BADCODE = 0x9,
};


enum block_state
{
	need_more = 0x0,
	block_done = 0x1,
	finish_started = 0x2,
	finish_done = 0x3,
};


enum enumDMUS_SEGF_FLAGS
{
	DMUS_SEGF_REFTIME = 0x40,
	DMUS_SEGF_SECONDARY = 0x80,
	DMUS_SEGF_QUEUE = 0x100,
	DMUS_SEGF_CONTROL = 0x200,
	DMUS_SEGF_AFTERPREPARETIME = 0x400,
	DMUS_SEGF_GRID = 0x800,
	DMUS_SEGF_BEAT = 0x1000,
	DMUS_SEGF_MEASURE = 0x2000,
	DMUS_SEGF_DEFAULT = 0x4000,
	DMUS_SEGF_NOINVALIDATE = 0x8000,
	DMUS_SEGF_ALIGN = 0x10000,
	DMUS_SEGF_VALID_START_BEAT = 0x20000,
	DMUS_SEGF_VALID_START_GRID = 0x40000,
	DMUS_SEGF_VALID_START_TICK = 0x80000,
	DMUS_SEGF_AUTOTRANSITION = 0x100000,
	DMUS_SEGF_AFTERQUEUETIME = 0x200000,
	DMUS_SEGF_AFTERLATENCYTIME = 0x400000,
	DMUS_SEGF_SEGMENTEND = 0x800000,
	DMUS_SEGF_MARKER = 0x1000000,
	DMUS_SEGF_TIMESIG_ALWAYS = 0x2000000,
	DMUS_SEGF_USE_AUDIOPATH = 0x4000000,
	DMUS_SEGF_VALID_START_MEASURE = 0x8000000,
	DMUS_SEGF_INVALIDATE_PRI = 0x10000000,
};


enum TimeSource_QueryPerformanceCounter_StateFlags
{
	sfInitialized = 0x0,
	sfDisableQPC = 0x1,
};


enum EE66F53931D047C9E869E29CBD96E6CD1
{
	_Same = 0x1,
};


enum E11FE7EB2B809B1E6BEF72B3347F27D35
{
	NUM_FREELIST_ENTRIES = 0x8,
};


enum EAC6F05D61404D02C8AA445AB8CCE3542
{
	MAX_FREELIST_ALLOCATION = 0x200000,
};



enum DbgReportGenPage_FunctionSignatureHasChanged
{
};


enum E2C2C5AB73B2E49387A509B3CD0F68AD1
{
	N = 0x100,
};


enum ECF8589F024BA901179904CF3BB1639E0
{
	cbPixel = 0x4,
};



enum BlendMode
{
	BLEND_ZERO = 0x1,
	BLEND_ONE = 0x2,
	BLEND_SRCCOLOR = 0x3,
	BLEND_INVSRCCOLOR = 0x4,
	BLEND_SRCALPHA = 0x5,
	BLEND_INVSRCALPHA = 0x6,
	BLEND_DSTALPHA = 0x7,
	BLEND_INVDSTALPHA = 0x8,
	BLEND_DSTCOLOR = 0x9,
	BLEND_INVDSTCOLOR = 0xA,
	BLEND_SRCALPHASAT = 0xB,
	BLEND_BOTHSRCALPHA = 0xC,
	BLEND_BOTHINVSRCALPHA = 0xD,
	BLEND_BLENDFACTOR = 0xE,
	BLEND_INVBLENDFACTOR = 0xF,
	BLEND_INVALID = 0x7FFFFFFF,
};


enum BlendOpType
{
	BLENDOP_ADD = 0x1,
	BLENDOP_SUBTRACT = 0x2,
	BLENDOP_REVSUBTRACT = 0x3,
	BLENDOP_MIN = 0x4,
	BLENDOP_MAX = 0x5,
	BLENDOP_INVALID = 0x7FFFFFFF,
};


enum TextureOp
{
	TEXOP_DISABLE = 0x1,
	TEXOP_SELECTARG1 = 0x2,
	TEXOP_SELECTARG2 = 0x3,
	TEXOP_MODULATE = 0x4,
	TEXOP_MODULATE2X = 0x5,
	TEXOP_MODULATE4X = 0x6,
	TEXOP_ADD = 0x7,
	TEXOP_ADDSIGNED = 0x8,
	TEXOP_ADDSIGNED2X = 0x9,
	TEXOP_SUBTRACT = 0xA,
	TEXOP_ADDSMOOTH = 0xB,
	TEXOP_BLENDDIFFUSEALPHA = 0xC,
	TEXOP_BLENDTEXTUREALPHA = 0xD,
	TEXOP_BLENDFACTORALPHA = 0xE,
	TEXOP_BLENDTEXTUREALPHAPM = 0xF,
	TEXOP_BLENDCURRENTALPHA = 0x10,
	TEXOP_PREMODULATE = 0x11,
	TEXOP_MODULATEALPHA_ADDCOLOR = 0x12,
	TEXOP_MODULATECOLOR_ADDALPHA = 0x13,
	TEXOP_MODULATEINVALPHA_ADDCOLOR = 0x14,
	TEXOP_MODULATEINVCOLOR_ADDALPHA = 0x15,
	TEXOP_BUMPENVMAP = 0x16,
	TEXOP_BUMPENVMAPLUMINANCE = 0x17,
	TEXOP_DOTPRODUCT3 = 0x18,
	TEXOP_MULTIPLYADD = 0x19,
	TEXOP_LERP = 0x1A,
	TEXOP_INVALID = 0x7FFFFFFF,
};


enum TexAddress
{
	TEXADDRESS_WRAP = 0x1,
	TEXADDRESS_MIRROR = 0x2,
	TEXADDRESS_CLAMP = 0x3,
	TEXADDRESS_BORDER = 0x4,
	TEXADDRESS_MIRRORONCE = 0x5,
	TEXADDRESS_INVALID = 0x7FFFFFFF,
};


enum TexFilterMode
{
	TEXFILTER_NONE = 0x0,
	TEXFILTER_POINT = 0x1,
	TEXFILTER_LINEAR = 0x2,
	TEXFILTER_ANISOTROPIC = 0x3,
	TEXFILTER_PYRAMIDALQUAD = 0x6,
	TEXFILTER_GAUSSIANQUAD = 0x7,
	TEXFILTER_INVALID = 0x7FFFFFFF,
};


enum DepthTestMode
{
	DEPTHTEST_NEVER = 0x1,
	DEPTHTEST_LESS = 0x2,
	DEPTHTEST_EQUAL = 0x3,
	DEPTHTEST_LESSEQUAL = 0x4,
	DEPTHTEST_GREATER = 0x5,
	DEPTHTEST_NOTEQUAL = 0x6,
	DEPTHTEST_GREATEREQUAL = 0x7,
	DEPTHTEST_ALWAYS = 0x8,
	DEPTHTEST_INVALID = 0x7FFFFFFF,
};


enum CullModeType
{
	CULLMODE_NONE = 0x1,
	CULLMODE_CW = 0x2,
	CULLMODE_CCW = 0x3,
	CULLMODE_INVALID = 0x7FFFFFFF,
};


enum FillModeType
{
	FILLMODE_POINT = 0x1,
	FILLMODE_WIREFRAME = 0x2,
	FILLMODE_SOLID = 0x3,
	FILLMODE_INVALID = 0x7FFFFFFF,
};


enum AlphaTestFunc
{
	ALPHATESTFUNC_NEVER = 0x1,
	ALPHATESTFUNC_LESS = 0x2,
	ALPHATESTFUNC_EQUAL = 0x3,
	ALPHATESTFUNC_LESSEQUAL = 0x4,
	ALPHATESTFUNC_GREATER = 0x5,
	ALPHATESTFUNC_NOTEQUAL = 0x6,
	ALPHATESTFUNC_GREATEREQUAL = 0x7,
	ALPHATESTFUNC_ALWAYS = 0x8,
	ALPHATESTFUNC_INVALID = 0x7FFFFFFF,
};


enum LightClass
{
	SUNLIGHT = 0x0,
	STATIC = 0x1,
	DYNAMIC = 0x2,
	NO_LIGHT = 0xFFFFFFFF,
};


enum E3FE1B2A4349EA4ABC9286CB47EB03530
{
	START_PUSH = 0x1,
	MATRIX_PUSH = 0x2,
	FORCE_FramePush_32_BIT = 0x7FFFFFFF,
};


enum ColorSource
{
	FromMaterial = 0x0,
	FromVertex = 0x1,
};


enum GraphicsDriver
{
	GDRIVER_NULL = 0x0,
	GDRIVER_DIRECT3D = 0x1,
};


enum PlatformString_DisplayStringMode
{
	dsError = 0x0,
	dsWarning = 0x1,
	dsInformation = 0x2,
};


enum BoundingType
{
	OUTSIDE = 0x0,
	PARTIALLY_INSIDE = 0x1,
	ENTIRELY_INSIDE = 0x2,
	FORCE_BoundingType_32_BIT = 0x7FFFFFFF,
};


enum RenderPassType
{
	RenderPass_Default = 0x0,
	RenderPass_DirectionalLightDiffuseAndSpecular = 0x1,
	RenderPass_PointLightDiffuseAndSpecular = 0x2,
	RenderPass_PointLightDiffuseAndSpecularProjector = 0x3,
	RenderPass_AmbientLight_DirectionalLightDiffuseAndSpecular = 0x4,
	RenderPass_AmbientLight_PointLightDiffuseAndSpecular = 0x5,
	RenderPass_DistanceFog = 0x6,
	RenderPass_FixedFunctionGlow = 0x7,
	RenderPass_ShaderGlow = 0x8,
	RenderPass_LandscapeShadowMap = 0x9,
	RenderPass_AlphaBlend = 0xA,
	RenderPass_AL_0DL_0PL = 0xB,
	RenderPass_AL_0DL_1PL = 0xC,
	RenderPass_AL_0DL_2PL = 0xD,
	RenderPass_AL_0DL_3PL = 0xE,
	RenderPass_AL_0DL_4PL = 0xF,
	RenderPass_AL_0DL_5PL = 0x10,
	RenderPass_AL_0DL_6PL = 0x11,
	RenderPass_AL_0DL_7PL = 0x12,
	RenderPass_AL_0DL_8PL = 0x13,
	RenderPass_AL_1DL_0PL = 0x14,
	RenderPass_AL_1DL_1PL = 0x15,
	RenderPass_AL_1DL_2PL = 0x16,
	RenderPass_AL_1DL_3PL = 0x17,
	RenderPass_AL_1DL_4PL = 0x18,
	RenderPass_AL_1DL_5PL = 0x19,
	RenderPass_AL_1DL_6PL = 0x1A,
	RenderPass_AL_1DL_7PL = 0x1B,
	RenderPass_AL_0DL_0PL_Fog = 0x1C,
	RenderPass_AL_0DL_1PL_Fog = 0x1D,
	RenderPass_AL_0DL_2PL_Fog = 0x1E,
	RenderPass_AL_0DL_3PL_Fog = 0x1F,
	RenderPass_AL_0DL_4PL_Fog = 0x20,
	RenderPass_AL_0DL_5PL_Fog = 0x21,
	RenderPass_AL_0DL_6PL_Fog = 0x22,
	RenderPass_AL_0DL_7PL_Fog = 0x23,
	RenderPass_AL_0DL_8PL_Fog = 0x24,
	RenderPass_AL_1DL_0PL_Fog = 0x25,
	RenderPass_AL_1DL_1PL_Fog = 0x26,
	RenderPass_AL_1DL_2PL_Fog = 0x27,
	RenderPass_AL_1DL_3PL_Fog = 0x28,
	RenderPass_AL_1DL_4PL_Fog = 0x29,
	RenderPass_AL_1DL_5PL_Fog = 0x2A,
	RenderPass_AL_1DL_6PL_Fog = 0x2B,
	RenderPass_AL_1DL_7PL_Fog = 0x2C,
	RenderPass_MaxPasses = 0x2D,
	RenderPass_Invalid = 0x2E,
};


enum E_BASEWINDOW_TYPE
{
	E_TYPE_DOCUMENT = 0x0,
	E_TYPE_WINDOW = 0x1,
	E_TYPE_CONTROL = 0x2,
};


enum FileEntryType
{
	NewName = 0x0,
	OnlyExisting = 0x1,
	UnsearchedDirectory = 0x2,
	SearchedDirectory = 0x3,
	DIDLessFile = 0x4,
	DIDFile = 0x5,
};


enum LayerModType
{
	LAYERMOD_UVTRANSLATE = 0x1,
	LAYERMOD_UVROTATE = 0x2,
	LAYERMOD_UVSCALE = 0x3,
	LAYERMOD_UVTRANSFORM = 0x4,
	LAYERMOD_INVALID = 0x5,
};



enum _D3DXIMAGE_FILEFORMAT
{
	D3DXIFF_BMP = 0x0,
	D3DXIFF_JPG = 0x1,
	D3DXIFF_TGA = 0x2,
	D3DXIFF_PNG = 0x3,
	D3DXIFF_DDS = 0x4,
	D3DXIFF_PPM = 0x5,
	D3DXIFF_DIB = 0x6,
	D3DXIFF_HDR = 0x7,
	D3DXIFF_PFM = 0x8,
	D3DXIFF_FORCE_DWORD = 0x7FFFFFFF,
};


enum PrimType
{
	PRIMTYPE_POINTLIST = 0x1,
	PRIMTYPE_LINELIST = 0x2,
	PRIMTYPE_LINESTRIP = 0x3,
	PRIMTYPE_TRIANGLELIST = 0x4,
	PRIMTYPE_TRIANGLESTRIP = 0x5,
	PRIMTYPE_TRIANGLEFAN = 0x6,
	PRIMTYPE_INVALID = 0x7FFFFFFF,
};


enum EC11DC88DC3E2C28AAD00BE4BA687D027
{
	ImeDisabled = 0x0,
	ImeEnabled = 0x1,
};


enum RMFieldType
{
	RMFIELD_LAYER_DIFFUSE = 0x0,
	RMFIELD_LAYER_SPECULAR = 0x1,
	RMFIELD_LAYER_SPECULARPOWER = 0x2,
	RMFIELD_LAYER_DYE = 0x3,
	RMFIELD_LAYER_CULLMODE = 0x4,
	RMFIELD_LAYER_DEPTHTEST = 0x5,
	RMFIELD_LAYER_DEPTHWRITE = 0x6,
	RMFIELD_LAYER_ALPHATEST = 0x7,
	RMFIELD_LAYER_ALPHATESTREF = 0x8,
	RMFIELD_LAYER_STAGE_TEXTURE = 0x9,
	RMFIELD_LAYER_STAGE_ADDRESSMODEU = 0xA,
	RMFIELD_LAYER_STAGE_ADDRESSMODEV = 0xB,
	RMFIELD_LAYER_MOD_ORIGIN_XTRANSLATE = 0xC,
	RMFIELD_LAYER_MOD_ORIGIN_YTRANSLATE = 0xD,
	RMFIELD_LAYER_MOD_ORIGIN_ZTRANSLATE = 0xE,
	RMFIELD_LAYER_MOD_ORIGIN_XSCALE = 0xF,
	RMFIELD_LAYER_MOD_ORIGIN_YSCALE = 0x10,
	RMFIELD_LAYER_MOD_ORIGIN_ZSCALE = 0x11,
	RMFIELD_LAYER_MOD_ORIGIN_ORIGINPHASE = 0x12,
	RMFIELD_LAYER_MOD_ORIGIN_NORMALPHASE = 0x13,
	RMFIELD_LAYER_MOD_NORMAL_XTRANSLATE = 0x14,
	RMFIELD_LAYER_MOD_NORMAL_YTRANSLATE = 0x15,
	RMFIELD_LAYER_MOD_NORMAL_ZTRANSLATE = 0x16,
	RMFIELD_LAYER_MOD_NORMAL_XSCALE = 0x17,
	RMFIELD_LAYER_MOD_NORMAL_YSCALE = 0x18,
	RMFIELD_LAYER_MOD_NORMAL_ZSCALE = 0x19,
	RMFIELD_LAYER_MOD_NORMAL_ORIGINPHASE = 0x1A,
	RMFIELD_LAYER_MOD_NORMAL_NORMALPHASE = 0x1B,
	RMFIELD_LAYER_MOD_DIFFUSE_R = 0x1C,
	RMFIELD_LAYER_MOD_DIFFUSE_G = 0x1D,
	RMFIELD_LAYER_MOD_DIFFUSE_B = 0x1E,
	RMFIELD_LAYER_MOD_DIFFUSE_A = 0x1F,
	RMFIELD_LAYER_MOD_UVTRANSLATE_UTRANSLATE = 0x20,
	RMFIELD_LAYER_MOD_UVTRANSLATE_VTRANSLATE = 0x21,
	RMFIELD_LAYER_MOD_UVROTATE_ROTATE = 0x22,
	RMFIELD_LAYER_MOD_UVSCALE_USCALE = 0x23,
	RMFIELD_LAYER_MOD_UVSCALE_VSCALE = 0x24,
};


enum RMDataType
{
	RMDATA_WAVEFORM = 0x3E8,
	RMDATA_COLOR = 0x7D0,
	RMDATA_TEXTURE = 0xBB8,
	RMDATA_BOOL = 0xFA0,
	RMDATA_TEXTURE_PTR = 0x2710,
	RMDATA_INVALID = 0x7FFFFFFF,
};


enum E91053EB72A2F4BE848925005287CF049
{
	PAN_MAX = 0xF,
	PAN_MIN = 0xFFFFFFF1,
	VOL_HALVING_DISTANCE = 0xA,
	FORCE_SoundManager_enum_32_BIT = 0x7FFFFFFF,
};


enum ShaderVersionType
{
	ShaderVersion_1_1 = 0x0,
	ShaderVersion_2_0 = 0x1,
	ShaderVersion_MaxVersions = 0x2,
	ShaderVersion_Invalid = 0x3,
};


enum Render_LightingType
{
	DYNAMIC_LIGHTING = 0x0,
	STATIC_LIGHTING = 0x1,
	FULL_LIGHTING = 0x2,
	FORCE_LightingType_32_BIT = 0x7FFFFFFF,
};




enum KS_STATUS
{
};


enum DiskConOpenFlags
{
	dcofUseLRU = 0x1,
	dcofExpandable = 0x2,
	dcofReadOnly = 0x4,
	dcofCreate = 0x8,
	dcofCreateIfNeeded = 0x10,
	dfocOptionalFile = 0x20,
};


enum DiskTransactType
{
	NO_TRANS = 0x0,
	ADD_OBJ_TRANS = 0x1,
	DELETE_LEAF_TRANS = 0x2,
	DELETE_INTERNAL_TRANS = 0x3,
	MERGE_NODES_TRANS = 0x4,
	UPDATE_OBJ_TRANS = 0x5,
	SPLIT_NODE_TRANS = 0x6,
	ROTATE_TRANS = 0x7,
	LRU_EXPAND_TRANS = 0x8,
	LRU_DELETE_TRANS = 0x9,
	NUM_TRANS_TYPES = 0xA,
};




enum DiskControllerSaveFlags
{
	dcsfCompressionMask = 0x7,
	dcsfNoCompression = 0x1,
	dcsfCompress = 0x2,
	dcsfDataIsCompressed = 0x3,
	dcsfUncompress = 0x4,
	dcsfBTEntryOnly = 0x5,
	dcsfModifyCachePack = 0x8,
};


enum ED2880D65BEE3DCB3CB79F13BE0F31A74
{
	grfHashed = 0x1,
	grfBusy = 0x2,
	grfInitLoadCalled = 0x4,
};


enum PEnumMapper_NumberingType
{
	NORMAL_NUMBERING = 0x0,
	SEQUENTIAL_NUMBERING = 0x1,
	BITFIELD_NUMBERING = 0x2,
	BITFIELD32_NUMBERING = 0x3,
	BITFIELD64_NUMBERING = 0x4,
};


enum PHeaderDataTypes
{
	COMPATABILITY_VERSION = 0x0,
	TOOL_VERSION = 0x1,
	SOURCE_FILE_NAME = 0x2,
	PREPROC_OPTIONS = 0x3,
	NUM_PHEADER_DATA_TYPES = 0x4,
};


enum E0E52F634BFD59B481A7DDEB3B134064C
{
	irmfNoUnknownKeys = 0x1,
};


enum CliDatError
{
};


enum EDC782FAE3184EACD08B89A3FE6E17599
{
	e_grave = 0xE8,
	E_grave = 0xC8,
	e_acute = 0xE9,
	E_acute = 0xC9,
	a_grave = 0xE0,
	A_grave = 0xC0,
	a_acute = 0xE1,
	A_acute = 0xC1,
	u_grave = 0xF9,
	U_grave = 0xDA,
	c_cedilla = 0xE7,
	C_cedilla = 0xC7,
	u_diaeresis = 0xFC,
	U_diaeresis = 0xDC,
	o_diaeresis = 0xF6,
	O_diaeresis = 0xD6,
	a_diaeresis = 0xE4,
	A_diaeresis = 0xC4,
};


enum StringTableMetaLanguage_NodeType
{
	ntInvalid = 0x0,
	ntRootNode = 0x1,
	ntText = 0x2,
	ntVar = 0x3,
	ntChoiceBlock = 0x4,
	ntOutsideVar = 0x5,
};



enum StringTableMetaLanguage_RenderErrorCode
{
	recSuccess = 0x0,
	recSyntaxError = 0x1,
	recDuplicateIDs = 0x2,
	recDuplicateChoices = 0x3,
	recInternalError = 0x4,
};


enum E0903896E91E068182469A9B6726DDF8F
{
	fTrimExcessSpaces = 0x1,
	fAllOptions = 0xFFFFFFFF,
};


enum RawParseErrorCode
{
	rpecSuccess = 0x0,
	rpecVarNameNonTerminated = 0x1,
	rpecVarNameEmpty = 0x2,
	rpecMetaLanguageBad = 0x3,
	rpecInvalidVarName = 0x4,
	rpecUndef = 0x5,
};


enum TextureType
{
	TEXTURETYPE_UNDEFINED = 0x1,
	TEXTURETYPE_2D = 0x2,
	TEXTURETYPE_3D = 0x3,
	TEXTURETYPE_CUBE = 0x4,
	TEXTURETYPE_MOVIE2D = 0x5,
};


enum LOG_TRUNCATE_OP
{
	TRUNCATE_NOP = 0x0,
	CIRCULAR_TRUNCATE_OP = 0x1,
	BACKUP_TRUNCATE_OP = 0x2,
};


enum ControlType
{
	ct_Invalid = 0x0,
	ct_Button = 0x1,
	ct_RelAxis = 0x2,
	ct_AbsAxis = 0x3,
	ct_POV = 0x4,
};


enum EFD03B2A5E519999BE000A82DDC7F7FC6
{
	DIV_MOUSELOOK = 0x1,
};


enum ActionStateChangeType
{
	asctActionStarted = 0x0,
	asctActionUpdated = 0x1,
	esctActionUnchanged = 0x2,
	asctActionStopped = 0x3,
};


enum ManagedLogFileOutputHandler_ReclaimBufferEnum
{
	ReclaimBuffer = 0x0,
};


enum InputMapPriority
{
	impri_Lowest = 0x0,
	impri_Gameplay = 0x3E8,
	impri_UnfocusedUI = 0x7D0,
	impri_FocusedUI = 0xBB8,
	impri_DebugConsole = 0xFA0,
};



enum E3034C1C0E3D52383FE6110AFE3001E8C
{
	Sample_SyncPoint = 0x1,
	Sample_Preroll = 0x2,
	Sample_Discontinuity = 0x4,
	Sample_TypeChanged = 0x8,
	Sample_TimeValid = 0x10,
	Sample_MediaTimeValid = 0x20,
	Sample_TimeDiscontinuity = 0x40,
	Sample_StopValid = 0x100,
	Sample_ValidFlags = 0x1FF,
};


enum EC80E162954656DA819442675FD5FFE61
{
	dwCacheMax = 0x5,
};




enum SurfaceType
{
	BASE1_SOLID = 0x1,
	BASE1_IMAGE = 0x2,
	BASE1_CLIPMAP = 0x4,
	TRANSLUCENT = 0x10,
	DIFFUSE = 0x20,
	LUMINOUS = 0x40,
	ALPHA = 0x100,
	INVALPHA = 0x200,
	ADDITIVE = 0x10000,
	DETAIL = 0x20000,
	GOURAUD = 0x10000000,
	STIPPLED = 0x40000000,
	PERSPECTIVE = 0x80000000,
	FORCE_SurfaceType_32_BIT = 0x7FFFFFFF,
};


enum SurfaceHandlerEnum
{
	SH_UNKNOWN = 0x0,
	SH_DATABASE = 0x1,
	SH_PALSHIFT = 0x2,
	SH_TEXMERGE = 0x3,
	SH_CUSTOMDB = 0x4,
	NUM_SURFACE_HANDLER = 0x5,
	FORCE_SurfaceHandlerEnum_32_BIT = 0x7FFFFFFF,
};


enum SurfaceInitType
{
	SurfaceInitObjDescChange = 0x0,
	SurfaceInitLoading = 0x1,
	SurfaceInitCadding = 0x2,
	SurfaceInitRestoring = 0x4,
	FORCE_SurfaceInitType_32_BIT = 0x7FFFFFFF,
};


enum _IJLIOTYPE
{
	IJL_SETUP = 0xFFFFFFFF,
	IJL_JFILE_READPARAMS = 0x0,
	IJL_JBUFF_READPARAMS = 0x1,
	IJL_JFILE_READWHOLEIMAGE = 0x2,
	IJL_JBUFF_READWHOLEIMAGE = 0x3,
	IJL_JFILE_READHEADER = 0x4,
	IJL_JBUFF_READHEADER = 0x5,
	IJL_JFILE_READENTROPY = 0x6,
	IJL_JBUFF_READENTROPY = 0x7,
	IJL_JFILE_WRITEWHOLEIMAGE = 0x8,
	IJL_JBUFF_WRITEWHOLEIMAGE = 0x9,
	IJL_JFILE_WRITEHEADER = 0xA,
	IJL_JBUFF_WRITEHEADER = 0xB,
	IJL_JFILE_WRITEENTROPY = 0xC,
	IJL_JBUFF_WRITEENTROPY = 0xD,
	IJL_JFILE_READONEHALF = 0xE,
	IJL_JBUFF_READONEHALF = 0xF,
	IJL_JFILE_READONEQUARTER = 0x10,
	IJL_JBUFF_READONEQUARTER = 0x11,
	IJL_JFILE_READONEEIGHTH = 0x12,
	IJL_JBUFF_READONEEIGHTH = 0x13,
	IJL_JFILE_READTHUMBNAIL = 0x14,
	IJL_JBUFF_READTHUMBNAIL = 0x15,
};


enum _IJL_COLOR
{
	IJL_RGB = 0x1,
	IJL_BGR = 0x2,
	IJL_YCBCR = 0x3,
	IJL_G = 0x4,
	IJL_RGBA_FPX = 0x5,
	IJL_YCBCRA_FPX = 0x6,
	IJL_OTHER = 0xFF,
};


enum _IJL_JPGSUBSAMPLING
{
	IJL_NONE = 0x0,
	IJL_411 = 0x1,
	IJL_422 = 0x2,
	IJL_4114 = 0x3,
	IJL_4224 = 0x4,
};


enum _IJLERR
{
	IJL_OK = 0x0,
	IJL_INTERRUPT_OK = 0x1,
	IJL_ROI_OK = 0x2,
	IJL_EXCEPTION_DETECTED = 0xFFFFFFFF,
	IJL_INVALID_ENCODER = 0xFFFFFFFE,
	IJL_UNSUPPORTED_SUBSAMPLING = 0xFFFFFFFD,
	IJL_UNSUPPORTED_BYTES_PER_PIXEL = 0xFFFFFFFC,
	IJL_MEMORY_ERROR = 0xFFFFFFFB,
	IJL_BAD_HUFFMAN_TABLE = 0xFFFFFFFA,
	IJL_BAD_QUANT_TABLE = 0xFFFFFFF9,
	IJL_INVALID_JPEG_PROPERTIES = 0xFFFFFFF8,
	IJL_ERR_FILECLOSE = 0xFFFFFFF7,
	IJL_INVALID_FILENAME = 0xFFFFFFF6,
	IJL_ERROR_EOF = 0xFFFFFFF5,
	IJL_PROG_NOT_SUPPORTED = 0xFFFFFFF4,
	IJL_ERR_NOT_JPEG = 0xFFFFFFF3,
	IJL_ERR_COMP = 0xFFFFFFF2,
	IJL_ERR_SOF = 0xFFFFFFF1,
	IJL_ERR_DNL = 0xFFFFFFF0,
	IJL_ERR_NO_HUF = 0xFFFFFFEF,
	IJL_ERR_NO_QUAN = 0xFFFFFFEE,
	IJL_ERR_NO_FRAME = 0xFFFFFFED,
	IJL_ERR_MULT_FRAME = 0xFFFFFFEC,
	IJL_ERR_DATA = 0xFFFFFFEB,
	IJL_ERR_NO_IMAGE = 0xFFFFFFEA,
	IJL_FILE_ERROR = 0xFFFFFFE9,
	IJL_INTERNAL_ERROR = 0xFFFFFFE8,
	IJL_BAD_RST_MARKER = 0xFFFFFFE7,
	IJL_THUMBNAIL_DIB_TOO_SMALL = 0xFFFFFFE6,
	IJL_THUMBNAIL_DIB_WRONG_COLOR = 0xFFFFFFE5,
	IJL_BUFFER_TOO_SMALL = 0xFFFFFFE4,
	IJL_UNSUPPORTED_FRAME = 0xFFFFFFE3,
	IJL_ERR_COM_BUFFER = 0xFFFFFFE2,
	IJL_RESERVED = 0xFFFFFF9D,
};


enum _DCTTYPE
{
	IJL_AAN = 0x0,
	IJL_IPP = 0x1,
};


enum _UPSAMPLING_TYPE
{
	IJL_BOX_FILTER = 0x0,
	IJL_TRIANGLE_FILTER = 0x1,
};


enum _PROCESSOR_TYPE
{
	IJL_OTHER_PROC = 0x0,
	IJL_PENTIUM_PROC = 0x1,
	IJL_PENTIUM_PRO_PROC = 0x2,
	IJL_PENTIUM_PROC_MMX_TECH = 0x3,
	IJL_PENTIUM_II_PROC = 0x4,
	IJL_PENTIUM_III_PROC = 0x5,
	IJL_PENTIUM_4_PROC = 0x6,
	IJL_NEW_PROCESSOR = 0x7,
};


enum _FAST_MCU_PROCESSING_TYPE
{
	IJL_NO_CC_OR_US = 0x0,
	IJL_111_YCBCR_111_RGB = 0x1,
	IJL_111_YCBCR_111_BGR = 0x2,
	IJL_411_YCBCR_111_RGB = 0x3,
	IJL_411_YCBCR_111_BGR = 0x4,
	IJL_422_YCBCR_111_RGB = 0x5,
	IJL_422_YCBCR_111_BGR = 0x6,
	IJL_111_YCBCR_1111_RGBA_FPX = 0x7,
	IJL_411_YCBCR_1111_RGBA_FPX = 0x8,
	IJL_422_YCBCR_1111_RGBA_FPX = 0x9,
	IJL_1111_YCBCRA_FPX_1111_RGBA_FPX = 0xA,
	IJL_4114_YCBCRA_FPX_1111_RGBA_FPX = 0xB,
	IJL_4224_YCBCRA_FPX_1111_RGBA_FPX = 0xC,
	IJL_111_RGB_1111_RGBA_FPX = 0xD,
	IJL_1111_RGBA_FPX_1111_RGBA_FPX = 0xE,
	IJL_111_OTHER_111_OTHER = 0xF,
	IJL_411_OTHER_111_OTHER = 0x10,
	IJL_422_OTHER_111_OTHER = 0x11,
	IJL_YCBYCR_YCBCR = 0x12,
	IJL_YCBCR_YCBYCR = 0x13,
	IJL_1_G_1_G = 0x14,
};


enum ImageFileType
{
	ILBM_FILE = 0x0,
	TGA_FILE = 0x1,
	CSI_FILE = 0x2,
	ALP_FILE = 0x3,
};


enum E011004B4512793E544B4F89B52426699
{
	RGBA_BLUE = 0x0,
	RGBA_GREEN = 0x1,
	RGBA_RED = 0x2,
	RGBA_ALPHA = 0x3,
};


enum EE0E32059A2BB68C5CCC0AFDE26B7E44C
{
	TGA_Null = 0x0,
	TGA_Map = 0x1,
	TGA_RGB = 0x2,
	TGA_Mono = 0x3,
	TGA_RLEMap = 0x9,
	TGA_RLERGB = 0xA,
	TGA_RLEMono = 0xB,
	TGA_CompMap = 0x20,
	TGA_CompMap4 = 0x21,
};


enum ILBMCompression
{
	ILBM_NONE = 0x0,
	ILBM_RLE = 0x1,
};


enum EF6862344F43E64BFF74269C7E883D5C0
{
	CSI_OK = 0x0,
	CSI_BAD_HEADER_ERROR = 0x1,
	CSI_TOO_BIG_ERROR = 0x2,
	CSI_TOO_SMALL_ERROR = 0x3,
	CSI_DATA_FAILURE = 0x4,
	FORCE_CSIDefs_enum_32_BIT = 0x7FFFFFFF,
};


enum E138001938272E84FB3996F614CAFE0D5
{
	ALP_OK = 0x0,
	ALP_BAD_HEADER_ERROR = 0x1,
	ALP_TOO_BIG_ERROR = 0x2,
	ALP_TOO_SMALL_ERROR = 0x3,
	ALP_DATA_FAILURE = 0x4,
	FORCE_ALPDefs_enum_32_BIT = 0x7FFFFFFF,
};


enum CubeTexture_FaceType
{
	PositiveX = 0x0,
	NegativeX = 0x1,
	PositiveY = 0x2,
	NegativeY = 0x3,
	PositiveZ = 0x4,
	NegativeZ = 0x5,
};


enum DetectionType
{
	NoChangeDetection = 0x0,
	EnteredDetection = 0x1,
	LeftDetection = 0x2,
	FORCE_DetectionType_32_BIT = 0x7FFFFFFF,
};


enum PhysicsTimeStamp
{
	POSITION_TS = 0x0,
	MOVEMENT_TS = 0x1,
	STATE_TS = 0x2,
	VECTOR_TS = 0x3,
	TELEPORT_TS = 0x4,
	SERVER_CONTROLLED_MOVE_TS = 0x5,
	FORCE_POSITION_TS = 0x6,
	OBJDESC_TS = 0x7,
	INSTANCE_TS = 0x8,
	NUM_PHYSICS_TS = 0x9,
	FORCE_PhysicsTimeStamp_32_BIT = 0x7FFFFFFF,
};


enum TransitionState
{
	INVALID_TS = 0x0,
	OK_TS = 0x1,
	COLLIDED_TS = 0x2,
	ADJUSTED_TS = 0x3,
	SLID_TS = 0x4,
	FORCE_TransitionState_32_BIT = 0x7FFFFFFF,
};


enum SetPositionError
{
	OK_SPE = 0x0,
	GENERAL_FAILURE_SPE = 0x1,
	NO_VALID_POSITION_SPE = 0x2,
	NO_CELL_SPE = 0x3,
	COLLIDED_SPE = 0x4,
	INVALID_ARGUMENTS = 0x100,
	FORCE_SetPositionError_32_BIT = 0x7FFFFFFF,
};


enum SetPositionFlag
{
	PLACEMENT_SPF = 0x1,
	TELEPORT_SPF = 0x2,
	RESTORE_SPF = 0x4,
	SLIDE_SPF = 0x10,
	DONOTCREATECELLS_SPF = 0x20,
	SCATTER_SPF = 0x100,
	RANDOMSCATTER_SPF = 0x200,
	LINE_SPF = 0x400,
	SEND_POSITION_EVENT_SPF = 0x1000,
	FORCE_SetPositionFlag_32_BIT = 0x7FFFFFFF,
};


enum ProfilerBudget_Status
{
	NotSet = 0x0,
	WayInBudget = 0x1,
	InBudget = 0x2,
	AlmostOverBudget = 0x3,
	JustOverBudget = 0x4,
	WayOverBudget = 0x5,
	NumOfStatuses = 0x6,
};


enum Parts
{
	Q_X = 0x0,
	Q_Y = 0x1,
	Q_Z = 0x2,
	Q_W = 0x3,
	FORCE_Parts_32_BIT = 0x7FFFFFFF,
};


enum SPHEREPATH_InsertType
{
	TRANSITION_INSERT = 0x0,
	PLACEMENT_INSERT = 0x1,
	INITIAL_PLACEMENT_INSERT = 0x2,
	FORCE_InsertType_32_BIT = 0x7FFFFFFF,
};


enum CPhysicsPart_PartDrawState
{
	DEFAULT_DS = 0x0,
	NODRAW_DS = 0x1,
	FORCE_PartDrawState_32_BIT = 0x7FFFFFFF,
};


enum ObjectInfoEnum
{
	DEFAULT_OI = 0x0,
	CONTACT_OI = 0x1,
	ON_WALKABLE_OI = 0x2,
	IS_VIEWER_OI = 0x4,
	PATH_CLIPPED_OI = 0x8,
	FREE_ROTATE_OI = 0x10,
	PERFECT_CLIP_OI = 0x40,
	IS_IMPENETRABLE = 0x80,
	IS_PLAYER = 0x100,
	EDGE_SLIDE = 0x200,
	IGNORE_CREATURES = 0x400,
	IS_PK = 0x800,
	IS_PKLITE = 0x1000,
	FORCE_ObjectInfoEnum_32_BIT = 0x7FFFFFFF,
};


enum LandChangeType
{
	CHANGE_LAND_HEIGHT = 0x0,
	CHANGE_LAND_ROAD = 0x1,
	CHANGE_LAND_TERRAIN = 0x2,
	CHANGE_LAND_SCENE = 0x3,
	CHANGE_LAND_ENCOUNTER = 0x4,
	FORCE_LandChangeType_32_BIT = 0x7FFFFFFF,
};


enum PhysicsDesc_PhysicsDescInfo
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


enum VertexType
{
	UnknownVertexType = 0x0,
	CSWVertexType = 0x1,
	FORCE_VertexType_32_BIT = 0x7FFFFFFF,
};




enum E6508AB6A0DDA74F520811817FB7B7D7C
{
	uf_None = 0x0,
	uf_Dirty = 0x1,
	uf_RefreshObject = 0x2,
	uf_Recurse = 0x4,
};


enum UIElement_Scrollbar_UIScrollBar_Flag
{
	UISB_NONE = 0x0,
	UISB_HORIZONTAL = 0x1,
	UISB_PROPORTIONAL = 0x2,
	UISB_DISABLED = 0x4,
	UISB_HIDE_DISABLED = 0x8,
	UISB_SMOOTH_MOVEMENT = 0x10,
	UISB_DISALLOW_UPDATING = 0x20,
	UISB_MOVE_TO_TOUCHED = 0x40,
	UISB_BUTTONS_INTERACT = 0x80,
	UISB_HAS_STOP_LOCATIONS = 0x100,
	UISB_MOUSE_PRESSED = 0x8000,
	UISB_OVER_WIDGET = 0x10000,
	UISB_OVER_BAR_LEFT = 0x20000,
	UISB_OVER_BAR_RIGHT = 0x40000,
	UISB_OVER_BAR_TOP = 0x80000,
	UISB_OVER_BAR_BOTTOM = 0x100000,
	UISB_RCV_MOUSEMOVE = 0x200000,
	UISB_ANIMATING = 0x400000,
	UISB_NEED_TO_KIDNAP_BUTTONS = 0x800000,
	UISB_GHOST_WHEN_DISABLED = 0x1000000,
	UISB_FORCEDWORD = 0xFFFFFFFF,
};


enum UIElement_Text_UIText_InqSize_Flag
{
	UITS_MAX_WIDTH = 0x0,
	UITS_CUR_WIDTH = 0x1,
	UITS_CUR_PARENT_WIDTH = 0x2,
	UITS_DESC_WIDTH = 0x3,
};


enum UIElement_Text_AddTextFlags
{
	atf_Default = 0x0,
	atf_PerserveSelection = 0x1,
	atf_AppendText = 0x2,
};


enum UIElement_Text_CursorMovementFlags
{
	ctm_Default = 0x0,
	ctm_SelectText = 0x1,
	ctm_DontSelectText = 0x2,
};


enum UIElement_Text_UIText_Flag
{
	UITF_NONE = 0x0,
	UITF_EDITABLE = 0x1,
	UITF_ONE_LINE = 0x2,
	UITF_SELECTABLE = 0x4,
	UITF_NO_IME = 0x8,
	UITF_OUTLINE = 0x10,
	UITF_DROPSHADOW = 0x20,
	UITF_MOUSE_SELECTING = 0x40,
	UITF_SELECTING = 0x80,
	UITF_DIRTY = 0x100,
	UITF_CURSOR_VISIBLE = 0x200,
	UITF_FIT_TO_TEXT = 0x400,
	UITF_TRUNCATE_TEXT_TO_FIT = 0x800,
	UITF_LOSE_FOCUS_ON_ESCAPE = 0x1000,
	UITF_LOSE_FOCUS_ON_ACCEPT_INPUT = 0x2000,
};


enum UIElement_ListBox_UIListBox_Flag
{
	UILB_NONE = 0x0,
	UILB_HORIZONTAL = 0x1,
	UILB_CLICK_SELECT = 0x2,
	UILB_DRAG_SELECT = 0x4,
	UILB_DRAG_ROLLOVER = 0x8,
	UILB_ALLOW_UPDATING = 0x10,
	UILB_SELECTED_ITEM_STATE_CHANGE = 0x20,
	UILB_DRAG_SELECTING = 0x40,
	UILB_SET_VIEW_STOP = 0x80,
	UILB_ROLLING_OVER = 0x100,
	UILB_DIRTY = 0x200,
};


enum EA1B11C374BA23963D011C37AC7069E9A
{
	UI_ELEMENT_TYPE = 0xC,
};




enum ViewSortType
{
};


enum UIElement_Text_DrawSelf___l16_GlyphPass
{
	gpBackground = 0x0,
	gpForeground = 0x1,
	gpNPasses = 0x2,
};


enum PKStatusEnum
{
	Undef_PKStatus = 0x0,
	Protected_PKStatus = 0x1,
	NPK_PKStatus = 0x2,
	PK_PKStatus = 0x4,
	Unprotected_PKStatus = 0x8,
	RubberGlue_PKStatus = 0x10,
	Free_PKStatus = 0x20,
	PKLite_PKStatus = 0x40,
	Creature_PKStatus = 0x8,
	Trap_PKStatus = 0x8,
	NPC_PKStatus = 0x1,
	Vendor_PKStatus = 0x10,
	Baelzharon_PKStatus = 0x20,
	FORCE_PKStatusEnum_32_BIT = 0x7FFFFFFF,
};


enum PublicWeenieDesc_BitfieldIndex
{
	BF_OPENABLE = 0x1,
	BF_INSCRIBABLE = 0x2,
	BF_STUCK = 0x4,
	BF_PLAYER = 0x8,
	BF_ATTACKABLE = 0x10,
	BF_PLAYER_KILLER = 0x20,
	BF_HIDDEN_ADMIN = 0x40,
	BF_UI_HIDDEN = 0x80,
	BF_BOOK = 0x100,
	BF_VENDOR = 0x200,
	BF_PKSWITCH = 0x400,
	BF_NPKSWITCH = 0x800,
	BF_DOOR = 0x1000,
	BF_CORPSE = 0x2000,
	BF_LIFESTONE = 0x4000,
	BF_FOOD = 0x8000,
	BF_HEALER = 0x10000,
	BF_LOCKPICK = 0x20000,
	BF_PORTAL = 0x40000,
	BF_ADMIN = 0x100000,
	BF_FREE_PKSTATUS = 0x200000,
	BF_IMMUNE_CELL_RESTRICTIONS = 0x400000,
	BF_REQUIRES_PACKSLOT = 0x800000,
	BF_RETAINED = 0x1000000,
	BF_PKLITE_PKSTATUS = 0x2000000,
	BF_INCLUDES_SECOND_HEADER = 0x4000000,
	BF_BINDSTONE = 0x8000000,
	BF_VOLATILE_RARE = 0x10000000,
	BF_WIELD_ON_USE = 0x20000000,
	BF_WIELD_LEFT = 0x40000000,
	FORCE_BitfieldIndex_32_BIT = 0x7FFFFFFF,
};


enum RadarEnum
{
	Undef_RadarEnum = 0x0,
	ShowNever_RadarEnum = 0x1,
	ShowMovement_RadarEnum = 0x2,
	ShowAttacking_RadarEnum = 0x3,
	ShowAlways_RadarEnum = 0x4,
	FORCE_RadarEnum_32_BIT = 0x7FFFFFFF,
};


enum ITEM_USEABLE
{
	USEABLE_UNDEF = 0x0,
	USEABLE_NO = 0x1,
	USEABLE_SELF = 0x2,
	USEABLE_WIELDED = 0x4,
	USEABLE_CONTAINED = 0x8,
	USEABLE_VIEWED = 0x10,
	USEABLE_REMOTE = 0x20,
	USEABLE_NEVER_WALK = 0x40,
	USEABLE_OBJSELF = 0x80,
	USEABLE_CONTAINED_VIEWED = 0x18,
	USEABLE_CONTAINED_VIEWED_REMOTE = 0x38,
	USEABLE_CONTAINED_VIEWED_REMOTE_NEVER_WALK = 0x78,
	USEABLE_VIEWED_REMOTE = 0x30,
	USEABLE_VIEWED_REMOTE_NEVER_WALK = 0x70,
	USEABLE_REMOTE_NEVER_WALK = 0x60,
	USEABLE_SOURCE_WIELDED_TARGET_WIELDED = 0x40004,
	USEABLE_SOURCE_WIELDED_TARGET_CONTAINED = 0x80004,
	USEABLE_SOURCE_WIELDED_TARGET_VIEWED = 0x100004,
	USEABLE_SOURCE_WIELDED_TARGET_REMOTE = 0x200004,
	USEABLE_SOURCE_WIELDED_TARGET_REMOTE_NEVER_WALK = 0x600004,
	USEABLE_SOURCE_CONTAINED_TARGET_WIELDED = 0x40008,
	USEABLE_SOURCE_CONTAINED_TARGET_CONTAINED = 0x80008,
	USEABLE_SOURCE_CONTAINED_TARGET_OBJSELF_OR_CONTAINED = 0x880008,
	USEABLE_SOURCE_CONTAINED_TARGET_SELF_OR_CONTAINED = 0xA0008,
	USEABLE_SOURCE_CONTAINED_TARGET_VIEWED = 0x100008,
	USEABLE_SOURCE_CONTAINED_TARGET_REMOTE = 0x200008,
	USEABLE_SOURCE_CONTAINED_TARGET_REMOTE_NEVER_WALK = 0x600008,
	USEABLE_SOURCE_CONTAINED_TARGET_REMOTE_OR_SELF = 0x220008,
	USEABLE_SOURCE_VIEWED_TARGET_WIELDED = 0x40010,
	USEABLE_SOURCE_VIEWED_TARGET_CONTAINED = 0x80010,
	USEABLE_SOURCE_VIEWED_TARGET_VIEWED = 0x100010,
	USEABLE_SOURCE_VIEWED_TARGET_REMOTE = 0x200010,
	USEABLE_SOURCE_REMOTE_TARGET_WIELDED = 0x40020,
	USEABLE_SOURCE_REMOTE_TARGET_CONTAINED = 0x80020,
	USEABLE_SOURCE_REMOTE_TARGET_VIEWED = 0x100020,
	USEABLE_SOURCE_REMOTE_TARGET_REMOTE = 0x200020,
	USEABLE_SOURCE_REMOTE_TARGET_REMOTE_NEVER_WALK = 0x600020,
	USEABLE_SOURCE_MASK = 0xFFFF,
	USEABLE_TARGET_MASK = 0xFFFF0000,
	FORCE_ITEM_USEABLE_32_BIT = 0x7FFFFFFF,
};


enum COMBAT_USE
{
	COMBAT_USE_NONE = 0x0,
	COMBAT_USE_MELEE = 0x1,
	COMBAT_USE_MISSILE = 0x2,
	COMBAT_USE_AMMO = 0x3,
	COMBAT_USE_SHIELD = 0x4,
	COMBAT_USE_TWO_HANDED = 0x5,
	FORCE_COMBAT_USE_32_BIT = 0x7FFFFFFF,
};


enum gmBarberUI_EParts
{
	ECG_PARTS_INVALID = 0x0,
	ECG_PARTS_HAIR = 0x1,
	ECG_PARTS_EYES = 0x2,
	ECG_PARTS_NOSE = 0x3,
	ECG_PARTS_MOUTH = 0x4,
	ECG_PARTS_SKIN = 0x5,
	ECG_PARTS_HEADGEAR = 0x6,
	ECG_PARTS_SHIRT = 0x7,
	ECG_PARTS_TROUSERS = 0x8,
	ECG_PARTS_FOOTWEAR = 0x9,
};


enum gmCGAppearancePage_EType
{
	ECG_CHOICE_INVALID = 0x0,
	ECG_CHOICE_FACE = 0x1,
	ECG_CHOICE_CLOTHES = 0x2,
};


enum gmMiniGameUI_GameState
{
	GS_NotPlaying = 0x0,
	GS_AttemptingToJoinGame = 0x1,
	GS_WaitingForGameStart = 0x2,
	GS_PlayingMyTurn = 0x3,
	GS_PlayingTryingToMove = 0x4,
	GS_PlayingNotMyTurn = 0x5,
};


enum RadarBlipShape
{
	Undef_RadarBlipShape = 0x0,
	Circle_RadarBlipShape = 0x1,
	Box_RadarBlipShape = 0x2,
	X_RadarBlipShape = 0x3,
	Plus_RadarBlipShape = 0x4,
	Triangle_RadarBlipShape = 0x5,
	InvertedTriangle_RadarBlipShape = 0x6,
	XBox_RadarBlipShape = 0x7,
	Default_RadarBlipShape = 0x4,
	AllegianceMember_RadarBlipShape = 0x2,
	FellowshipLeader_RadarBlipShape = 0x5,
	Fellowship_RadarBlipShape = 0x6,
	Threat_RadarBlipShape = 0x3,
	ThreatAllegiance_RadarBlipShape = 0x7,
};




enum SpellBanks
{
	SPELLCAST_BANK_1 = 0x0,
	SPELLCAST_BANK_2 = 0x1,
	SPELLCAST_BANK_3 = 0x2,
	SPELLCAST_BANK_4 = 0x3,
	SPELLCAST_BANK_5 = 0x4,
	SPELLCAST_BANK_6 = 0x5,
	SPELLCAST_BANK_7 = 0x6,
	SPELLCAST_BANK_8 = 0x7,
	NUM_SPELLCAST_BANKS = 0x8,
};



enum UIOption_CheckboxBitfield64_PropertyType
{
	Normal_PropType = 0x0,
	Chat_PropType = 0x1,
};


enum EECB582C33AF91E8E6055A81005C30E6C
{
	PlayerWhite = 0x0,
	PlayerBlack = 0x1,
};


enum ChessMoveResult
{
	NoMoveResult = 0x0,
	OKMoveToEmptySquare = 0x1,
	OKMoveToOccupiedSquare = 0x2,
	OKMoveEnPassant = 0x3,
	OKMoveMask = 0x3FF,
	OKMoveCHECK = 0x400,
	OKMoveCHECKMATE = 0x800,
	OKMovePromotion = 0x1000,
	OKMoveToEmptySquareCHECK = 0x401,
	OKMoveToOccupiedSquareCHECK = 0x402,
	OKMoveEnPassantCHECK = 0x403,
	OKMovePromotionCHECK = 0x1400,
	OKMoveToEmptySquareCHECKMATE = 0x801,
	OKMoveToOccupiedSquareCHECKMATE = 0x802,
	OKMoveEnPassantCHECKMATE = 0x803,
	OKMovePromotionCHECKMATE = 0x1800,
	BadMoveInvalidCommand = 0xFFFFFFFF,
	BadMoveNotPlaying = 0xFFFFFFFE,
	BadMoveNotYourTurn = 0xFFFFFFFD,
	BadMoveDirection = 0xFFFFFF9C,
	BadMoveDistance = 0xFFFFFF9B,
	BadMoveNoPiece = 0xFFFFFF9A,
	BadMoveNotYours = 0xFFFFFF99,
	BadMoveDestination = 0xFFFFFF98,
	BadMoveWouldClobber = 0xFFFFFF97,
	BadMoveSelfCheck = 0xFFFFFF96,
	BadMoveWouldCollide = 0xFFFFFF95,
	BadMoveCantCastleOutOfCheck = 0xFFFFFF94,
	BadMoveCantCastleThroughCheck = 0xFFFFFF93,
	BadMoveCantCastleAfterMoving = 0xFFFFFF92,
	BadMoveInvalidBoardState = 0xFFFFFF91,
	ForceChessMoveResult32Bit = 0x7FFFFFFF,
};


enum SKILL_CATEGORY
{
	UNDEF_SKILL_CATEGORY = 0x0,
	WEAPON_SKILL_CATEGORY = 0x1,
	NONWEAPON_SKILL_CATEGORY = 0x2,
	MAGIC_SKILL_CATEGORY = 0x3,
	NUM_SKILL_CATEGORIES = 0x4,
	FORCE_SKILL_CATEGORY_32_BIT = 0x7FFFFFFF,
};




enum SECTION_3D
{
	TOP_NW_SECTION = 0x0,
	MID_NW_SECTION = 0x1,
	BOT_NW_SECTION = 0x2,
	TOP_N_SECTION = 0x3,
	MID_N_SECTION = 0x4,
	BOT_N_SECTION = 0x5,
	TOP_NE_SECTION = 0x6,
	MID_NE_SECTION = 0x7,
	BOT_NE_SECTION = 0x8,
	W_SECTION = 0x9,
	CENTER_SECTION = 0xA,
	E_SECTION = 0xB,
	SW_SECTION = 0xC,
	LSW_SECTION = 0xD,
	RSW_SECTION = 0xE,
	TOP_S_SECTION = 0xF,
	MID_S_SECTION = 0x10,
	BOT_S_SECTION = 0x11,
	SE_SECTION = 0x12,
	LSE_SECTION = 0x13,
	RSE_SECTION = 0x14,
	NUM_3D_SECTIONS = 0x15,
	NOT_IN_3D_SECTION = 0x16,
};


enum DirectionNumber
{
	Left = 0x0,
	ForwardAndLeft = 0x1,
	Forward = 0x2,
	ForwardAndRight = 0x3,
	Right = 0x4,
	RightAndBack = 0x5,
	Back = 0x6,
	LeftAndBack = 0x7,
	Knight1 = 0x8,
	Knight2 = 0x9,
	Knight3 = 0xA,
	Knight4 = 0xB,
	Knight5 = 0xC,
	Knight6 = 0xD,
	Knight7 = 0xE,
	Knight8 = 0xF,
	nDirections = 0x10,
	ForceDirectionNumber32Bit = 0x7FFFFFFF,
};


enum ChessPieceType
{
	Empty = 0x0,
	Pawn = 0x1,
	Rook = 0x2,
	Castle = 0x2,
	Knight = 0x3,
	Bishop = 0x4,
	Queen = 0x5,
	King = 0x6,
	nPieceTypes = 0x7,
};


enum DropItemFlags
{
	DROPITEM_FLAGS_NONE = 0x0,
	DROPITEM_IS_CONTAINER = 0x1,
	DROPITEM_IS_VENDOR = 0x2,
	DROPITEM_IS_SHORTCUT = 0x4,
	DROPITEM_IS_SALVAGE = 0x8,
	DROPITEM_IS_ALIAS = 0xE,
	FORCE_DROPITEM_FLAGS_32_BIT = 0x7FFFFFFF,
};




enum LightingMode
{
	LM_RESTORE_LIGHTING = 0x0,
	LM_LOW_LIGHTING = 0x1,
	LM_HIGH_LIGHTING = 0x2,
	FORCE_LightingMode_32_BIT = 0x7FFFFFFF,
};


enum UIElement_SmartBoxWrapper_SearchReason
{
	sr_None = 0x0,
	sr_MouseOver = 0x1,
	sr_Select = 0x2,
	sr_Examine = 0x3,
	sr_Use = 0x4,
	sr_Drop = 0x5,
	sr_Drag = 0x6,
	sr_TargetedUse = 0x7,
};


enum PositionState
{
	IN_3D_VIEW = 0x0,
	WIELDED = 0x1,
	IN_CONTAINER = 0x2,
	BEING_REMOVED = 0x3,
	FORCE_PositionState_32_BIT = 0x7FFFFFFF,
};


enum InventoryRequest
{
	IR_NONE = 0x0,
	IR_MERGE = 0x1,
	IR_SPLIT = 0x2,
	IR_MOVE = 0x3,
	IR_PICK_UP = 0x4,
	IR_PUT_IN_CONTAINER = 0x5,
	IR_DROP = 0x6,
	IR_WIELD = 0x7,
	IR_VIEW_AS_GROUND_CONTAINER = 0x8,
	IR_GIVE = 0x9,
	IR_SHOP_EVENT = 0xA,
	FORCE_InventoryRequest_32_BIT = 0x7FFFFFFF,
};


enum NameType
{
	NAME_SINGULAR = 0x0,
	NAME_PLURAL = 0x1,
	NAME_APPROPRIATE = 0x2,
	FORCE_NameType_32_BIT = 0x7FFFFFFF,
};


enum ECDD2F3F74BF1850A829307C17E4F974C
{
	DRAGSCROLLREGION_NONE = 0x0,
	DRAGSCROLLREGION_UP = 0x1,
	DRAGSCROLLREGION_DOWN = 0x2,
	DRAGSCROLLREGION_LEFT = 0x3,
	DRAGSCROLLREGION_RIGHT = 0x4,
};


enum gmBarberUI_ERotateDirection
{
	ECG_ROTATE_INVALID = 0x0,
	ECG_ROTATE_CLOCKWISE = 0x1,
	ECG_ROTATE_COUNTERCLOCKWISE = 0x2,
};


enum gmBarberUI_EGender
{
	ECG_GENDER_INVALID = 0x0,
	ECG_GENDER_FEMALE = 0x1,
	ECG_GENDER_MALE = 0x2,
};


enum gmKeyboardUI_ListBoxEntryType
{
	Header_ListBoxEntryType = 0x0,
	ActionKeyMap_ListBoxEntryType = 0x1,
};


enum TeleportAnimState
{
	TAS_OFF = 0x0,
	TAS_WORLD_FADE_OUT = 0x1,
	TAS_TUNNEL_FADE_IN = 0x2,
	TAS_TUNNEL = 0x3,
	TAS_TUNNEL_CONTINUE = 0x4,
	TAS_TUNNEL_FADE_OUT = 0x5,
	TAS_WORLD_FADE_IN = 0x6,
	FORCE_TeleportAnimState_32_BIT = 0x7FFFFFFF,
};


enum ShopEvent
{
	SE_BUY = 0x0,
	SE_SELL = 0x1,
};


enum HousePanelTextColor
{
	Normal_HousePanelTextColor = 0x0,
	RentPaid_HousePanelTextColor = 0x1,
	RentNotPaid_HousePanelTextColor = 0x2,
};


enum PlayerOptionPage_OptionListType
{
	Header_OptionListType = 0x0,
	Seperator_OptionListType = 0x1,
	Boolean_OptionListType = 0x2,
	Float_OptionListType = 0x3,
	Menu_OptionListType = 0x4,
	BoolAndFloat_OptionListType = 0x5,
	FloatWithLabels_OptionListType = 0x6,
	BoolAndFloatWithLabels_OptionListType = 0x7,
	Bitfield64_OptionListType = 0x8,
};


enum ContractSortCriteria
{
	eName = 0x0,
	eStatus = 0x1,
};


enum JournalSortCriteria
{
	ePageNumber = 0x0,
	eTitle = 0x1,
	eLabel = 0x2,
	eTimer = 0x3,
};


enum gmSpellComponentUI_ListBoxEntryType
{
	ComponentCategory_ListBoxEntryType = 0x0,
	Component_ListBoxEntryType = 0x1,
};


enum gmCharGenMainUI_ECGProgress
{
	ECG_INVALID = 0x0,
	ECG_HERTAGE = 0x1,
	ECG_PROFESSION = 0x2,
	ECG_SKILLS = 0x3,
	ECG_APPEARANCE = 0x4,
	ECG_TOWN = 0x5,
	ECG_SUMMARY = 0x6,
};


enum gmCGProfessionPage_EProfession
{
	ECG_CUSTOM = 0x0,
	ECG_BOWHUNTER = 0x1,
	ECG_SWASHBUCKLER = 0x2,
	ECG_LIFECASTER = 0x3,
	ECG_WARMAGE = 0x4,
	ECG_WAYFARER = 0x5,
	ECG_SOLDIER = 0x6,
};


enum gmCGTownPage_ETown
{
	ECG_TOWN_INVALID = 0x0,
	ECG_TOWN_HOLTBURG = 0x1,
	ECG_TOWN_SHOUSHI = 0x2,
	ECG_TOWN_YARAQ = 0x3,
	ECG_TOWN_SANAMAR = 0x4,
};


enum ConfirmationType
{
	UNDEF_CONFIRM = 0x0,
	ALLEGIANCE_SWEAR_CONFIRM = 0x1,
	ALTER_SKILL_CONFIRM = 0x2,
	ALTER_ATTRIBUTE_CONFIRM = 0x3,
	FELLOWSHIP_RECRUIT_CONFIRM = 0x4,
	CRAFT_INTERACTION_CONFIRM = 0x5,
	USE_AUGMENTATION_CONFIRM = 0x6,
	YESNO_CONFIRM = 0x7,
	FORCE_ConfirmationType_32_BIT = 0x7FFFFFFF,
};


enum TradeListIDEnum
{
	Undef_TradeListID = 0x0,
	Self_TradeListID = 0x1,
	Partner_TradeListID = 0x2,
	FORCE_TradeListIDEnum_32_BIT = 0x7FFFFFFF,
};



enum WeaponType
{
	Undef_WeaponType = 0x0,
	Unarmed_WeaponType = 0x1,
	Sword_WeaponType = 0x2,
	Axe_WeaponType = 0x3,
	Mace_WeaponType = 0x4,
	Spear_WeaponType = 0x5,
	Dagger_WeaponType = 0x6,
	Staff_WeaponType = 0x7,
	Bow_WeaponType = 0x8,
	Crossbow_WeaponType = 0x9,
	Thrown_WeaponType = 0xA,
	TwoHanded_WeaponType = 0xB,
	Magic_WeaponType = 0xC,
};



enum AppraisalLongDescDecorations
{
	LDDecoration_PrependWorkmanship = 0x1,
	LDDecoration_PrependMaterial = 0x2,
	LDDecoration_AppendGemInfo = 0x4,
};


enum ExperienceHandlingType
{
	Undef_ExperienceHandlingType = 0x0,
	ApplyLevelMod_ExperienceHandlingType = 0x1,
	ShareWithFellows_ExperienceHandlingType = 0x2,
	AddFellowshipBonus_ExperienceHandlingType = 0x4,
	ShareWithAllegiance_ExperienceHandlingType = 0x8,
	ApplyToVitae_ExperienceHandlingType = 0x10,
	EarnsCP_ExperienceHandlingType = 0x20,
	ReducedByDistance_ExperienceHandlingType = 0x40,
	Monster_ExperienceHandlingType = 0x5F,
	NormalQuest_ExperienceHandlingType = 0x1A,
	NoShareQuest_ExperienceHandlingType = 0x10,
	PassupQuest_ExperienceHandlingType = 0x18,
	ReceivedFromFellowship_ExperienceHandlingType = 0x18,
	PPEarnedFromUse_ExperienceHandlingType = 0x7F,
	AdminRaiseXP_ExperienceHandlingType = 0x10,
	AdminRaiseSkillXP_ExperienceHandlingType = 0x10,
	ReceivedFromAllegiance_ExperienceHandlingType = 0x0,
	FORCE_ExperienceHandlingType_32_BIT = 0x7FFFFFFF,
};


enum CreatureAppraisalProfile_Enchantment_BFIndex
{
	BF_STRENGTH = 0x1,
	BF_ENDURANCE = 0x2,
	BF_QUICKNESS = 0x4,
	BF_COORDINATION = 0x8,
	BF_FOCUS = 0x10,
	BF_SELF = 0x20,
	BF_MAX_HEALTH = 0x40,
	BF_MAX_STAMINA = 0x80,
	BF_MAX_MANA = 0x100,
	BF_STRENGTH_HI = 0x10000,
	BF_ENDURANCE_HI = 0x20000,
	BF_QUICKNESS_HI = 0x40000,
	BF_COORDINATION_HI = 0x80000,
	BF_FOCUS_HI = 0x100000,
	BF_SELF_HI = 0x200000,
	BF_MAX_HEALTH_HI = 0x400000,
	BF_MAX_STAMINA_HI = 0x800000,
	BF_MAX_MANA_HI = 0x1000000,
	FORCE_Enchantment_BFIndex_32_BIT = 0x7FFFFFFF,
};


enum AttunedStatusEnum
{
	Normal_AttunedStatus = 0x0,
	Attuned_AttunedStatus = 0x1,
	Sticky_AttunedStatus = 0x2,
	FORCE_AttunedStatusEnum_32_BIT = 0x7FFFFFFF,
};


enum BondedStatusEnum
{
	Destroy_BondedStatus = 0xFFFFFFFE,
	Slippery_BondedStatus = 0xFFFFFFFF,
	Normal_BondedStatus = 0x0,
	Bonded_BondedStatus = 0x1,
	Sticky_BondedStatus = 0x2,
	FORCE_BondedStatusEnum_32_BIT = 0x7FFFFFFF,
};


enum E82BD968CF3BA577BDAD2B12CE107CB1D
{
	WHITE_PAWN_INDEX = 0x0,
	WHITE_BISHOP_INDEX = 0x1,
	WHITE_KNIGHT_INDEX = 0x2,
	WHITE_ROOK_INDEX = 0x3,
	WHITE_QUEEN_INDEX = 0x4,
	WHITE_KING_INDEX = 0x5,
	BLACK_PAWN_INDEX = 0x6,
	BLACK_BISHOP_INDEX = 0x7,
	BLACK_KNIGHT_INDEX = 0x8,
	BLACK_ROOK_INDEX = 0x9,
	BLACK_QUEEN_INDEX = 0xA,
	BLACK_KING_INDEX = 0xB,
};



enum FriendsUpdateType
{
	FRIENDS_UPDATE = 0x0,
	FRIENDS_UPDATE_ADD = 0x1,
	FRIENDS_UPDATE_REMOVE = 0x2,
	FRIENDS_UPDATE_REMOVE_SILENT = 0x3,
	FRIENDS_UPDATE_ONLINE_STATUS = 0x4,
	FORCE_FriendsUpdateType_32_BIT = 0x7FFFFFFF,
};



enum EmitterType
{
	Unknown_ET = 0x0,
	BirthratePerSec_ET = 0x1,
	BirthratePerMeter_ET = 0x2,
	FORCE_EmitterType_32_BIT = 0x7FFFFFFF,
};


enum ParticleType
{
	Unknown_PT = 0x0,
	Still_PT = 0x1,
	LocalVelocity_PT = 0x2,
	ParabolicLVGA_PT = 0x3,
	ParabolicLVGAGR_PT = 0x4,
	Swarm_PT = 0x5,
	Explode_PT = 0x6,
	Implode_PT = 0x7,
	ParabolicLVLA_PT = 0x8,
	ParabolicLVLALR_PT = 0x9,
	ParabolicGVGA_PT = 0xA,
	ParabolicGVGAGR_PT = 0xB,
	GlobalVelocity_PT = 0xC,
	NumParticleType = 0xD,
	FORCE_ParticleType_32_BIT = 0x7FFFFFFF,
};


enum RayIntersectionType_Type
{
	UsePhysicsRep = 0x0,
	UseExactDrawingRep = 0x1,
	EnvironmentOnly = 0x2,
	PortalsOnly = 0x3,
	UnconnectedPortalsOnly = 0x4,
};


enum TargetStatus
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



enum E919A7A0EC6925FE325C86CF6EB59662D
{
	UNKNOWN_HOOK = 0xFFFFFFFF,
	NOOP_HOOK = 0x0,
	SOUND_HOOK = 0x1,
	SOUND_TABLE_HOOK = 0x2,
	ATTACK_HOOK = 0x3,
	ANIMDONE_HOOK = 0x4,
	REPLACE_OBJECT_HOOK = 0x5,
	ETHEREAL_HOOK = 0x6,
	TRANSPARENT_PART_HOOK = 0x7,
	LUMINOUS_HOOK = 0x8,
	LUMINOUS_PART_HOOK = 0x9,
	DIFFUSE_HOOK = 0xA,
	DIFFUSE_PART_HOOK = 0xB,
	SCALE_HOOK = 0xC,
	CREATE_PARTICLE_HOOK = 0xD,
	DESTROY_PARTICLE_HOOK = 0xE,
	STOP_PARTICLE_HOOK = 0xF,
	NODRAW_HOOK = 0x10,
	DEFAULT_SCRIPT_HOOK = 0x11,
	DEFAULT_SCRIPT_PART_HOOK = 0x12,
	CALL_PES_HOOK = 0x13,
	TRANSPARENT_HOOK = 0x14,
	SOUND_TWEAKED_HOOK = 0x15,
	SET_OMEGA_HOOK = 0x16,
	TEXTURE_VELOCITY_HOOK = 0x17,
	TEXTURE_VELOCITY_PART_HOOK = 0x18,
	SET_LIGHT_HOOK = 0x19,
	CREATE_BLOCKING_PARTICLE_HOOK = 0x1A,
	FORCE_AnimHook_32_BIT = 0x7FFFFFFF,
};


enum CAnimHook_AnimHookDir
{
	UNKNOWN_ANIMHOOK = 0xFFFFFFFE,
	BACKWARD_ANIMHOOK = 0xFFFFFFFF,
	BOTH_ANIMHOOK = 0x0,
	FORWARD_ANIMHOOK = 0x1,
	FORCE_AnimHookDir_32_BIT = 0x7FFFFFFF,
};



enum LightState
{
	STATIC_LS = 0x1,
	FORCE_LightState_32_BIT = 0x7FFFFFFF,
};



enum ObjCollisionProfile_Bitfield
{
	Undef_OCPB = 0x0,
	Creature_OCPB = 0x1,
	Player_OCPB = 0x2,
	Attackable_OCPB = 0x4,
	Missile_OCPB = 0x8,
	Contact_OCPB = 0x10,
	MyContact_OCPB = 0x20,
	Door_OCPB = 0x40,
	Cloaked_OCPB = 0x80,
	FORCE_ObjCollisionProfile_Bitfield_32_BIT = 0x7FFFFFFF,
};


enum EnvCollisionProfile_Bitfield
{
	Undef_ECPB = 0x0,
	MyContact_ECPB = 0x1,
	FORCE_EnvCollisionProfile_Bitfield_32_BIT = 0x7FFFFFFF,
};


enum LBIPackMask
{
	NoAdditionalData_LBIPackMaskEnum = 0x0,
	RestrictionTable_LBIPackMaskEnum = 0x1,
	CellIDTable_LBIPackMaskEnum = 0x2,
	FORCE_LBIPackMaskEnum_16_BIT = 0xFFFF,
};


enum BSPTreeType
{
	DRAWING_BSP = 0x0,
	PHYSICS_BSP = 0x1,
	CELL_BSP = 0x2,
	FORCE_BSPTreeType_32_BIT = 0x7FFFFFFF,
};


enum SidesType
{
	ST_SINGLE = 0x0,
	ST_DOUBLE = 0x1,
	ST_BOTH = 0x2,
};


enum StipplingType
{
	NO_STIPPLING = 0x0,
	POSITIVE_STIPPLING = 0x1,
	NEGATIVE_STIPPLING = 0x2,
	BOTH_STIPPLING = 0x3,
	NO_POS_UVS = 0x4,
	NO_NEG_UVS = 0x8,
	NO_UVS = 0x14,
	FORCE_StipplingType_32_BIT = 0x7FFFFFFF,
};




enum E3BC29BCF20FE633344894604F108E65D
{
	msoctdsNull = 0x0,
	msoctdsQuit = 0x1,
	msoctdsRestart = 0x2,
	msoctdsRecover = 0x4,
	msoctdsUnused = 0x8,
	msoctdsDebug = 0x10,
};


enum E78A26F85214E1D638EBA5BCF1BB7406B
{
	fDwOfficeApp = 0x1,
	fDwNoReporting = 0x2,
	fDwCheckSig = 0x4,
	fDwGiveAppResponse = 0x8,
	fDwWhistler = 0x10,
	fDwUseIE = 0x20,
	fDwDeleteFiles = 0x40,
	fDwHeadless = 0x80,
	fDwUseHKLM = 0x100,
	fDwUseLitePlea = 0x200,
	fDwUsePrivacyHTA = 0x400,
	fDwManifestDebug = 0x800,
	fDwReportChoice = 0x1000,
	fDwSkipBucketLog = 0x2000,
	fDwNoDefaultCabLimit = 0x4000,
	fDwAllowSuspend = 0x8000,
	fDwMiniDumpWithUnloadedModules = 0x10000,
	fDwResponseLog = 0x20000,
};


enum E45FADDAEA746FE1D02C9B5AD322CA547
{
	INVALID_TYPE = 0x0,
	POSITION_TYPE = 0x1,
	JUMP_TYPE = 0x2,
	VELOCITY_TYPE = 0x3,
	FORCE_InterpolationNode_enum_32_BIT = 0x7FFFFFFF,
};


enum E991C8D4A316F250C03EAE5AF7609AF34
{
	_S_bufsize = 0x100,
};



enum EEF7C0E4A8CCB173AAC63430876B3E86B
{
	WCODE_HRESULT_FIRST = 0x80040200,
	WCODE_HRESULT_LAST = 0x8004FFFF,
};




enum PortalLinkType
{
	Undef_PortalLinkType = 0x0,
	LinkedLifestone_PortalLinkType = 0x1,
	LinkedPortalOne_PortalLinkType = 0x2,
	LinkedPortalTwo_PortalLinkType = 0x3,
	FORCE_PortalLinkType_32_BIT = 0x7FFFFFFF,
};


enum PortalRecallType
{
	Undef_PortalRecallType = 0x0,
	LastLifestone_PortalRecallType = 0x1,
	LinkedLifestone_PortalRecallType = 0x2,
	LastPortal_PortalRecallType = 0x3,
	LinkedPortalOne_PortalRecallType = 0x4,
	LinkedPortalTwo_PortalRecallType = 0x5,
	FORCE_PortalRecallType_32_BIT = 0x7FFFFFFF,
};


enum PortalSummonType
{
	Undef_PortalSummonType = 0x0,
	LinkedPortalOne_PortalSummonType = 0x1,
	LinkedPortalTwo_PortalSummonType = 0x2,
	FORCE_PortalSummonType_32_BIT = 0x7FFFFFFF,
};


enum HookTypeEnum
{
	Undef_HookTypeEnum = 0x0,
	Floor_HookTypeEnum = 0x1,
	Wall_HookTypeEnum = 0x2,
	Ceiling_HookTypeEnum = 0x4,
	Yard_HookTypeEnum = 0x8,
	Roof_HookTypeEnum = 0x10,
	FORCE_HookTypeEnum_32_BIT = 0x7FFFFFFF,
};




enum UI_EFFECT_TYPE
{
	UI_EFFECT_UNDEF = 0x0,
	UI_EFFECT_MAGICAL = 0x1,
	UI_EFFECT_POISONED = 0x2,
	UI_EFFECT_BOOST_HEALTH = 0x4,
	UI_EFFECT_BOOST_MANA = 0x8,
	UI_EFFECT_BOOST_STAMINA = 0x10,
	UI_EFFECT_FIRE = 0x20,
	UI_EFFECT_LIGHTNING = 0x40,
	UI_EFFECT_FROST = 0x80,
	UI_EFFECT_ACID = 0x100,
	UI_EFFECT_BLUDGEONING = 0x200,
	UI_EFFECT_SLASHING = 0x400,
	UI_EFFECT_PIERCING = 0x800,
	UI_EFFECT_NETHER = 0x1000,
	FORCE_UI_EFFECT_TYPE_32_BIT = 0x7FFFFFFF,
};




enum ExperienceType
{
	Undef_ExperienceType = 0x0,
	Attribute_ExperienceType = 0x1,
	Attribute2nd_ExperienceType = 0x2,
	TrainedSkill_ExperienceType = 0x3,
	SpecializedSkill_ExperienceType = 0x4,
	Level_ExperienceType = 0x5,
	Credit_ExperienceType = 0x6,
	FORCE_ExperienceType_32_BIT = 0x7FFFFFFF,
};


enum EnchantmentRegistryPackHeader
{
	Packed_None = 0x0,
	Packed_MultList = 0x1,
	Packed_AddList = 0x2,
	Packed_Vitae = 0x4,
	Packed_Cooldown = 0x8,
	FORCE_EnchantmentRegistryPackHeader_32_BIT = 0x7FFFFFFF,
};


enum _D3DXMESH
{
	D3DXMESH_32BIT = 0x1,
	D3DXMESH_DONOTCLIP = 0x2,
	D3DXMESH_POINTS = 0x4,
	D3DXMESH_RTPATCHES = 0x8,
	D3DXMESH_NPATCHES = 0x4000,
	D3DXMESH_VB_SYSTEMMEM = 0x10,
	D3DXMESH_VB_MANAGED = 0x20,
	D3DXMESH_VB_WRITEONLY = 0x40,
	D3DXMESH_VB_DYNAMIC = 0x80,
	D3DXMESH_VB_SOFTWAREPROCESSING = 0x8000,
	D3DXMESH_IB_SYSTEMMEM = 0x100,
	D3DXMESH_IB_MANAGED = 0x200,
	D3DXMESH_IB_WRITEONLY = 0x400,
	D3DXMESH_IB_DYNAMIC = 0x800,
	D3DXMESH_IB_SOFTWAREPROCESSING = 0x10000,
	D3DXMESH_VB_SHARE = 0x1000,
	D3DXMESH_USEHWONLY = 0x2000,
	D3DXMESH_SYSTEMMEM = 0x110,
	D3DXMESH_MANAGED = 0x220,
	D3DXMESH_WRITEONLY = 0x440,
	D3DXMESH_DYNAMIC = 0x880,
	D3DXMESH_SOFTWAREPROCESSING = 0x18000,
};


enum BSPPortalDrawType
{
	DRAW_BOTH = 0x0,
	DRAW_BLANK_PORTALS = 0x1,
	DRAW_VIEW_THROUGH_PORTALS = 0x2,
	DRAW_PORTALS_TO_OUTSIDE = 0x3,
	FORCE_BSPPortalDrawType_32_BIT = 0x7FFFFFFF,
};


enum PublicWeenieDescPackHeader
{
	PWD_Packed_None = 0x0,
	PWD_Packed_PluralName = 0x1,
	PWD_Packed_ItemsCapacity = 0x2,
	PWD_Packed_ContainersCapacity = 0x4,
	PWD_Packed_Value = 0x8,
	PWD_Packed_Useability = 0x10,
	PWD_Packed_UseRadius = 0x20,
	PWD_Packed_Monarch = 0x40,
	PWD_Packed_UIEffects = 0x80,
	PWD_Packed_AmmoType = 0x100,
	PWD_Packed_CombatUse = 0x200,
	PWD_Packed_Structure = 0x400,
	PWD_Packed_MaxStructure = 0x800,
	PWD_Packed_StackSize = 0x1000,
	PWD_Packed_MaxStackSize = 0x2000,
	PWD_Packed_ContainerID = 0x4000,
	PWD_Packed_WielderID = 0x8000,
	PWD_Packed_ValidLocations = 0x10000,
	PWD_Packed_Location = 0x20000,
	PWD_Packed_Priority = 0x40000,
	PWD_Packed_TargetType = 0x80000,
	PWD_Packed_BlipColor = 0x100000,
	PWD_Packed_Burden = 0x200000,
	PWD_Packed_SpellID = 0x400000,
	PWD_Packed_RadarEnum = 0x800000,
	PWD_Packed_Workmanship = 0x1000000,
	PWD_Packed_HouseOwner = 0x2000000,
	PWD_Packed_HouseRestrictions = 0x4000000,
	PWD_Packed_PScript = 0x8000000,
	PWD_Packed_HookType = 0x10000000,
	PWD_Packed_HookItemTypes = 0x20000000,
	PWD_Packed_IconOverlay = 0x40000000,
	PWD_Packed_MaterialType = 0x80000000,
	PWD_Packed_ForceDWord = 0xFFFFFFFF,
};


enum PublicWeenieDescPackHeader2
{
	PWD2_Packed_None = 0x0,
	PWD2_Packed_IconUnderlay = 0x1,
	PWD2_Packed_CooldownID = 0x2,
	PWD2_Packed_CooldownDuration = 0x4,
	PWD2_Packed_PetOwner = 0x8,
	PWD2_Packed_ForceDWord = 0xFFFFFFFF,
};




enum EC88337AF0BAB8BF8EADCAD53F850308E
{
	MaximumNumberOfElements = 0xFFFFFF,
};


enum E4E1D1FEBF138C3CAFFCA2EA8BF2F7294
{
	DefaultNumberOfBuckets = 0x20,
};


enum E3DFF7F057A8298F820DD24E6A7E1EBEB
{
	MaximumNumberOfBuckets = 0x80000000,
};




enum AllegianceIndex
{
	Undef_AllegianceIndex = 0x0,
	LoggedIn_AllegianceIndex = 0x1,
	Update_AllegianceIndex = 0x2,
	HasAllegianceAge_AllegianceIndex = 0x4,
	HasPackedLevel_AllegianceIndex = 0x8,
	MayPassupExperience_AllegianceIndex = 0x10,
	ForceDWord_AllegianceIndex = 0xFFFFFFFF,
};


enum HookGroupDataVersion
{
	Undef_HookGroupDataVersion = 0x0,
	Initial_HookGroupDataVersion = 0x1,
	Current_HookGroupDataVersion = 0x1,
	FORCE_HOOK_GROUP_DATA_VERSION_32_BIT = 0x7FFFFFFF,
};


enum CharCase
{
	CASE_UPPER = 0x0,
	CASE_LOWER = 0x1,
	CASE_EITHER = 0x2,
	FORCE_CharCase_32_BIT = 0x7FFFFFFF,
};


enum ATTRIBUTE_CACHE_MASK
{
	UNDEF_MASK = 0x0,
	STRENGTH_MASK = 0x1,
	ENDURANCE_MASK = 0x2,
	QUICKNESS_MASK = 0x4,
	COORDINATION_MASK = 0x8,
	FOCUS_MASK = 0x10,
	SELF_MASK = 0x20,
	HEALTH_MASK = 0x40,
	STAMINA_MASK = 0x80,
	MANA_MASK = 0x100,
	FORCE_ATTRIBUTE_CACHE_MASK_32_BIT = 0x7FFFFFFF,
};


enum GeneratorTimeType
{
	Undef_GeneratorTimeType = 0x0,
	RealTime_GeneratorTimeType = 0x1,
	Defined_GeneratorTimeType = 0x2,
	Event_GeneratorTimeType = 0x3,
	Night_GeneratorTimeType = 0x4,
	Day_GeneratorTimeType = 0x5,
	FORCE_GeneratorTimeType_32_BIT = 0x7FFFFFFF,
};


enum GeneratorDefinedTimes
{
	Undef_GeneratorDefinedTimes = 0x0,
	Dusk_GeneratorDefinedTimes = 0x1,
	Dawn_GeneratorDefinedTimes = 0x2,
	FORCE_GeneratorDefinedTimes_32_BIT = 0x7FFFFFFF,
};


enum GeneratorType
{
	Undef_GeneratorType = 0x0,
	Relative_GeneratorType = 0x1,
	Absolute_GeneratorType = 0x2,
	FORCE_GeneratorType_32_BIT = 0x7FFFFFFF,
};


enum GeneratorDestruct
{
	Undef_GeneratorDestruct = 0x0,
	Nothing_GeneratorDestruct = 0x1,
	Destroy_GeneratorDestruct = 0x2,
	Kill_GeneratorDestruct = 0x3,
	FORCE_GeneratorDestruct_32_BIT = 0x7FFFFFFF,
};




enum SecurityLevelEnum
{
	Undef_SecurityLevel = 0x0,
	Player_SecurityLevel = 0x0,
	Advocate1_SecurityLevel = 0x1,
	Advocate2_SecurityLevel = 0x2,
	Advocate3_SecurityLevel = 0x3,
	Advocate4_SecurityLevel = 0x4,
	Advocate5_SecurityLevel = 0x5,
	MaxAdvocate_SecurityLevel = 0x5,
	Sentinel1_SecurityLevel = 0x6,
	Sentinel2_SecurityLevel = 0x7,
	Sentinel3_SecurityLevel = 0x8,
	MaxSentinel_SecurityLevel = 0x8,
	Turbine_SecurityLevel = 0x9,
	Arch_SecurityLevel = 0xA,
	Admin_SecurityLevel = 0xB,
	Max_SecurityLevel = 0xB,
	FORCE_SecurityLevelEnum_32_BIT = 0x7FFFFFFF,
};


enum PackItVersionEnum
{
	Undef_PackItVersionEnum = 0x0,
	Original_GeneratorTimeType = 0x1,
	VersionTwo_GeneratorTimeType = 0x2,
	NewestVersion_PackItVersionEnum = 0x2,
	FORCE_PackItVersionEnum_32_BIT = 0x7FFFFFFF,
};


enum PlayerModulePackHeader
{
	PM_Packed_None = 0x0,
	PM_Packed_ShortCutManager = 0x1,
	PM_Packed_SquelchList = 0x2,
	PM_Packed_MultiSpellLists = 0x4,
	PM_Packed_DesiredComps = 0x8,
	PM_Packed_ExtendedMultiSpellLists = 0x10,
	PM_Packed_SpellbookFilters = 0x20,
	PM_Packed_2ndCharacterOptions = 0x40,
	PM_Packed_TimeStampFormat = 0x80,
	PM_Packed_GenericQualitiesData = 0x100,
	PM_Packed_GameplayOptions = 0x200,
	PM_Packed_8_SpellLists = 0x400,
	FORCE_PlayerModulePackHeader_32_BIT = 0x7FFFFFFF,
};


enum ProfilerBudget_Stat
{
	Stat_Triangles = 0x0,
	Stat_Vertices = 0x1,
	Stat_Batches = 0x2,
	Stat_SystemMemory = 0x3,
	Stat_VirtualMemory = 0x4,
	Stat_TotalVideoMemory = 0x5,
	Stat_VideoMemory = 0x6,
	NumStats = 0x7,
};



enum EE5F030E227FFC0754A01C5ED13466D16
{
	_S_initial_map_size = 0x8,
};


enum _RTC_ErrorNumber
{
	_RTC_CHKSTK = 0x0,
	_RTC_CVRT_LOSS_INFO = 0x1,
	_RTC_CORRUPT_STACK = 0x2,
	_RTC_UNINIT_LOCAL_USE = 0x3,
	_RTC_ILLEGAL = 0x4,
};


enum BlitMode
{
	Blit_Normal = 0x0,
	Blit_3Alpha = 0x1,
	Blit_4Alpha = 0x2,
	Blit_Colorize = 0x3,
	Blit_Multiply = 0x4,
	Blit_Screen = 0x5,
	Blit_Grayscale = 0x6,
	Blit_NOP = 0x7,
	Blit_nModes = 0x8,
};


enum RDBBitmask
{
	Undef_RDBBitmask = 0x0,
	OpenHouse_RDBBitmask = 0x1,
	Force32Bit_RDBBitmask = 0x7FFFFFFF,
};


enum E611B0BDBE9FB29078BEA11D567D3B602
{
	HEADER_SIZE = 0x4,
};




enum _D3DLIGHTTYPE
{
	D3DLIGHT_POINT = 0x1,
	D3DLIGHT_SPOT = 0x2,
	D3DLIGHT_DIRECTIONAL = 0x3,
	D3DLIGHT_PARALLELPOINT = 0x4,
	D3DLIGHT_FORCE_DWORD = 0x7FFFFFFF,
};



enum _D3DFORMAT
{
	D3DFMT_UNKNOWN = 0x0,
	D3DFMT_R8G8B8 = 0x14,
	D3DFMT_A8R8G8B8 = 0x15,
	D3DFMT_X8R8G8B8 = 0x16,
	D3DFMT_R5G6B5 = 0x17,
	D3DFMT_X1R5G5B5 = 0x18,
	D3DFMT_A1R5G5B5 = 0x19,
	D3DFMT_A4R4G4B4 = 0x1A,
	D3DFMT_R3G3B2 = 0x1B,
	D3DFMT_A8 = 0x1C,
	D3DFMT_A8R3G3B2 = 0x1D,
	D3DFMT_X4R4G4B4 = 0x1E,
	D3DFMT_A2B10G10R10 = 0x1F,
	D3DFMT_A8B8G8R8 = 0x20,
	D3DFMT_X8B8G8R8 = 0x21,
	D3DFMT_G16R16 = 0x22,
	D3DFMT_A2R10G10B10 = 0x23,
	D3DFMT_A16B16G16R16 = 0x24,
	D3DFMT_A8P8 = 0x28,
	D3DFMT_P8 = 0x29,
	D3DFMT_L8 = 0x32,
	D3DFMT_A8L8 = 0x33,
	D3DFMT_A4L4 = 0x34,
	D3DFMT_V8U8 = 0x3C,
	D3DFMT_L6V5U5 = 0x3D,
	D3DFMT_X8L8V8U8 = 0x3E,
	D3DFMT_Q8W8V8U8 = 0x3F,
	D3DFMT_V16U16 = 0x40,
	D3DFMT_A2W10V10U10 = 0x43,
	D3DFMT_UYVY = 0x59565955,
	D3DFMT_R8G8_B8G8 = 0x47424752,
	D3DFMT_YUY2 = 0x32595559,
	D3DFMT_G8R8_G8B8 = 0x42475247,
	D3DFMT_DXT1 = 0x31545844,
	D3DFMT_DXT2 = 0x32545844,
	D3DFMT_DXT3 = 0x33545844,
	D3DFMT_DXT4 = 0x34545844,
	D3DFMT_DXT5 = 0x35545844,
	D3DFMT_D16_LOCKABLE = 0x46,
	D3DFMT_D32 = 0x47,
	D3DFMT_D15S1 = 0x49,
	D3DFMT_D24S8 = 0x4B,
	D3DFMT_D24X8 = 0x4D,
	D3DFMT_D24X4S4 = 0x4F,
	D3DFMT_D16 = 0x50,
	D3DFMT_D32F_LOCKABLE = 0x52,
	D3DFMT_D24FS8 = 0x53,
	D3DFMT_D32_LOCKABLE = 0x54,
	D3DFMT_S8_LOCKABLE = 0x55,
	D3DFMT_L16 = 0x51,
	D3DFMT_VERTEXDATA = 0x64,
	D3DFMT_INDEX16 = 0x65,
	D3DFMT_INDEX32 = 0x66,
	D3DFMT_Q16W16V16U16 = 0x6E,
	D3DFMT_MULTI2_ARGB8 = 0x3154454D,
	D3DFMT_R16F = 0x6F,
	D3DFMT_G16R16F = 0x70,
	D3DFMT_A16B16G16R16F = 0x71,
	D3DFMT_R32F = 0x72,
	D3DFMT_G32R32F = 0x73,
	D3DFMT_A32B32G32R32F = 0x74,
	D3DFMT_CxV8U8 = 0x75,
	D3DFMT_A1 = 0x76,
	D3DFMT_A2B10G10R10_XR_BIAS = 0x77,
	D3DFMT_BINARYBUFFER = 0xC7,
	D3DFMT_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DDEVTYPE
{
	D3DDEVTYPE_HAL = 0x1,
	D3DDEVTYPE_REF = 0x2,
	D3DDEVTYPE_SW = 0x3,
	D3DDEVTYPE_NULLREF = 0x4,
	D3DDEVTYPE_FORCE_DWORD = 0x7FFFFFFF,
};



enum _D3DMULTISAMPLE_TYPE
{
	D3DMULTISAMPLE_NONE = 0x0,
	D3DMULTISAMPLE_NONMASKABLE = 0x1,
	D3DMULTISAMPLE_2_SAMPLES = 0x2,
	D3DMULTISAMPLE_3_SAMPLES = 0x3,
	D3DMULTISAMPLE_4_SAMPLES = 0x4,
	D3DMULTISAMPLE_5_SAMPLES = 0x5,
	D3DMULTISAMPLE_6_SAMPLES = 0x6,
	D3DMULTISAMPLE_7_SAMPLES = 0x7,
	D3DMULTISAMPLE_8_SAMPLES = 0x8,
	D3DMULTISAMPLE_9_SAMPLES = 0x9,
	D3DMULTISAMPLE_10_SAMPLES = 0xA,
	D3DMULTISAMPLE_11_SAMPLES = 0xB,
	D3DMULTISAMPLE_12_SAMPLES = 0xC,
	D3DMULTISAMPLE_13_SAMPLES = 0xD,
	D3DMULTISAMPLE_14_SAMPLES = 0xE,
	D3DMULTISAMPLE_15_SAMPLES = 0xF,
	D3DMULTISAMPLE_16_SAMPLES = 0x10,
	D3DMULTISAMPLE_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DSWAPEFFECT
{
	D3DSWAPEFFECT_DISCARD = 0x1,
	D3DSWAPEFFECT_FLIP = 0x2,
	D3DSWAPEFFECT_COPY = 0x3,
	D3DSWAPEFFECT_OVERLAY = 0x4,
	D3DSWAPEFFECT_FLIPEX = 0x5,
	D3DSWAPEFFECT_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DRESOURCETYPE
{
	D3DRTYPE_SURFACE = 0x1,
	D3DRTYPE_VOLUME = 0x2,
	D3DRTYPE_TEXTURE = 0x3,
	D3DRTYPE_VOLUMETEXTURE = 0x4,
	D3DRTYPE_CUBETEXTURE = 0x5,
	D3DRTYPE_VERTEXBUFFER = 0x6,
	D3DRTYPE_INDEXBUFFER = 0x7,
	D3DRTYPE_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DPOOL
{
	D3DPOOL_DEFAULT = 0x0,
	D3DPOOL_MANAGED = 0x1,
	D3DPOOL_SYSTEMMEM = 0x2,
	D3DPOOL_SCRATCH = 0x3,
	D3DPOOL_FORCE_DWORD = 0x7FFFFFFF,
};



enum _PinDirection
{
	PINDIR_INPUT = 0x0,
	PINDIR_OUTPUT = 0x1,
};


enum tagQualityMessageType
{
	Famine = 0x0,
	Flood = 0x1,
};


enum _FilterState
{
	State_Stopped = 0x0,
	State_Paused = 0x1,
	State_Running = 0x2,
};


enum _D3DCUBEMAP_FACES
{
	D3DCUBEMAP_FACE_POSITIVE_X = 0x0,
	D3DCUBEMAP_FACE_NEGATIVE_X = 0x1,
	D3DCUBEMAP_FACE_POSITIVE_Y = 0x2,
	D3DCUBEMAP_FACE_NEGATIVE_Y = 0x3,
	D3DCUBEMAP_FACE_POSITIVE_Z = 0x4,
	D3DCUBEMAP_FACE_NEGATIVE_Z = 0x5,
	D3DCUBEMAP_FACE_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DPRIMITIVETYPE
{
	D3DPT_POINTLIST = 0x1,
	D3DPT_LINELIST = 0x2,
	D3DPT_LINESTRIP = 0x3,
	D3DPT_TRIANGLELIST = 0x4,
	D3DPT_TRIANGLESTRIP = 0x5,
	D3DPT_TRIANGLEFAN = 0x6,
	D3DPT_FORCE_DWORD = 0x7FFFFFFF,
};


enum _D3DTEXTUREFILTERTYPE
{
	D3DTEXF_NONE = 0x0,
	D3DTEXF_POINT = 0x1,
	D3DTEXF_LINEAR = 0x2,
	D3DTEXF_ANISOTROPIC = 0x3,
	D3DTEXF_PYRAMIDALQUAD = 0x6,
	D3DTEXF_GAUSSIANQUAD = 0x7,
	D3DTEXF_CONVOLUTIONMONO = 0x8,
	D3DTEXF_FORCE_DWORD = 0x7FFFFFFF,
};


enum tagDOMNodeType
{
	NODE_INVALID = 0x0,
	NODE_ELEMENT = 0x1,
	NODE_ATTRIBUTE = 0x2,
	NODE_TEXT = 0x3,
	NODE_CDATA_SECTION = 0x4,
	NODE_ENTITY_REFERENCE = 0x5,
	NODE_ENTITY = 0x6,
	NODE_PROCESSING_INSTRUCTION = 0x7,
	NODE_COMMENT = 0x8,
	NODE_DOCUMENT = 0x9,
	NODE_DOCUMENT_TYPE = 0xA,
	NODE_DOCUMENT_FRAGMENT = 0xB,
	NODE_NOTATION = 0xC,
};

#endif