using Portaled.Core.ACTypes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct DBObj
    {
        public IntPtr vfptr; //Interface
        public uint m_dataCategory;
        public bool m_bLoaded;
        public double m_timeStamp;
        public DBObj* m_pNext;
        public DBObj* m_pLast;
        public IntPtr m_pMaintainer; //DBOCache m_pMaintainer;
        public int m_numLinks;
        public IDClass__tagDataID_32_0 m_DID;
        public bool m_AllowedInFreeList;
    }

    public struct QualifiedDataID
    {
        public uint Type;
        public IDClass__tagDataID_32_0 ID;
    };

    public struct IDClass__tagDataID_32_0
    {
        public int id;
    }

    public enum SurfaceHandlerEnum
    {
        FORCE_SurfaceHandlerEnum_32_BIT = 0x7fffffff,
        NUM_SURFACE_HANDLER = 0x5,
        SH_CUSTOMDB = 0x4,
        SH_DATABASE = 0x1,
        SH_PALSHIFT = 0x2,
        SH_TEXMERGE = 0x3,
        SH_UNKNOWN = 0x0
    };

    public unsafe struct CSurface //Appears to be correct structure
    {
        public DBObj parent;
        public GraphicsResource graphics;

        public uint type;
        public SurfaceHandlerEnum handler;
        public uint color_value;
        public int solid_index;
        public IDClass__tagDataID_32_0 indexed_texture_id; 
        public ImgTex* base1map;
        public Palette* base1pal;
        public float translucency;
        public float luminosity;
        public float diffuse;
        public IDClass__tagDataID_32_0 orig_texture_id;
        public IDClass__tagDataID_32_0 orig_palette_id;
        public float orig_luminosity;
        public float orig_diffuse;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct ActionMap
    {
        public DBObj parent;
       // public HashList<unsigned long, HashList<unsigned long, ActionMapValue,1>,1> m_hashInputMaps;
        //public IDClass<_tagDataID,32,0> m_didStringTable;
        //public HashTable<unsigned long, InputMapConflictsValue,0> m_hashConflictingMaps;*/
    }

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct EnumMapper
    {
        public DBObj parent;
       // public IDClass<_tagDataID,32,0> m_base_emp_did;
        //public EnumMapper* m_base_emp;
        //public AutoGrowHashTable<unsigned long, CaseInsensitiveStringBase<PStringBase<char>>> m_id_to_string_map;
        //public AutoGrowHashTable<CaseInsensitiveStringBase<PStringBase<char>>, unsigned long> m_string_to_id_map;
    };

    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct CMasterInputMap
    {
        public DBObj parent;
        /*public PStringBase<char> m_strName;
        public Turbine_GUID m_guidMap;
        public SmartArray<DeviceKeyMapEntry,1> m_rgDevices;
        public HashList<ControlSpecification, unsigned long,1> m_listMetaKeys;
        public HashList<unsigned long, CInputMap*,1> m_hashSections;
        public unsigned int m_dwUsedMetaKeys;*/
    };

    //align 8
    [StructLayout(LayoutKind.Sequential, Pack = 8)]
    public struct SerializeUsingPackDBObj
    {
        public DBObj parent;
        public PackObj packObj;
    };

    public unsafe struct BBox
    {
        public Vector3 m_vMin;
        public Vector3 m_vMax;
    };


    public struct E393C16A032292777F0C3725FFB2C0008
    {
        public float x;
        public float y;
        public float z;
    };

    [StructLayout(LayoutKind.Explicit)]
    public struct ED554C44E56C320449443B6F5D299EEA7
    {
        [FieldOffset(0)]
        public E393C16A032292777F0C3725FFB2C0008 __s0;
        [FieldOffset(0)]
        public AC1Legacy_Vector3 vertex;
    };

    public struct CVertex
    {
        public ED554C44E56C320449443B6F5D299EEA7 ___u0;
        public uint reserve4;
        public uint reserve5;
        public uint reserve6;
        public uint reserve7;
        public uint reserve8;
    };

    public enum VertexType
    {
        UnknownVertexType = 0x0,
        CSWVertexType = 0x1,
        FORCE_VertexType_32_BIT = 0x7FFFFFFF,
    };

    public unsafe struct CVertexArray
    {
        public void* vertex_memory;
        public BBox bbox;
        public VertexType vertex_type;
        public uint num_vertices;
        public CVertex* vertices;
    };

    public unsafe struct Vec2Dscreen
    {
        public AC1Legacy_Vector3 vertex;
        public float w;
    };

    public unsafe struct CPolygon
    {
        public CVertex** vertices;
        public ushort* vertex_ids;
        public Vec2Dscreen** screen;
        public short poly_id;
        public char num_pts;
        public char stippling;
        public int sides_type;
        public char* pos_uv_indices;
        public char* neg_uv_indices;
        public ushort pos_surface;
        public ushort neg_surface;
        public Plane plane;
    };

    public struct IUnknown
    {
        public IntPtr vfptr;
    };

    public struct ID3DXBaseMesh
    {
        public IUnknown _interface;
    };

    public unsafe struct ID3DXMesh
    {
        public ID3DXBaseMesh mesh;
    };

    public struct CVec2Duv
    {
        public float u;
        public float v;
    };

    public unsafe struct MeshBuffer
    {
        public ID3DXMesh* pMesh;
        public RenderMesh* pRenderMesh;
        public uint meshFVF;
        public float detailTilingFactorSet;
        public char* isStippledOrAlphaedMask;
        public char burnedInStaticLights;
        public bool m_bUseUVAnimation;
        public CVec2Duv m_vUVDelta;
        public uint m_RemoteSizeInBytes;
    };

    public struct CSphere
    {
        public AC1Legacy_Vector3 center;
        public float radius;
    };

    [StructLayout(LayoutKind.Explicit)]
    public unsafe struct E429348390AB0EFA2F7BE9421CDFA9E37
    {
        [FieldOffset(0)]
        public int type;

        [FieldOffset(0)]
        public fixed char type_string[4];
    }

    public unsafe struct BSPNODE
    {
        public IntPtr vfptr;
        public CSphere sphere;
        public Plane splitting_plane;
        public E429348390AB0EFA2F7BE9421CDFA9E37 ___u3;
        public uint num_polys;
        public CPolygon** in_polys;
        public BSPNODE* pos_node;
        public BSPNODE* neg_node;
    };

    public unsafe struct BSPTREE
    {
        public BSPNODE* root_node;
        public BSPNODE RootNode => *root_node;
    };

    public static class ArrayWrapper
    {
    }

    public unsafe class CGfxObjEx
        : ACType<CGfxObj>
    {
        public CMaterialEx Material => CMaterialEx.Make<CMaterialEx>(ptr->material);
        public CSurfaceEx[] GetSurfaces() => ArrayWrapper.Make2<CSurfaceEx>(m_rgsurfaces, ptr->num_surfaces);
        {
        }
    }

    public unsafe struct CGfxObj //(align(8))
    {
        public DBObj parent;
        public CMaterial* material;
        public uint num_surfaces;
        public CSurface** m_rgSurfaces;
        public CVertexArray vertex_array;
        public uint num_physics_polygons;
        public CPolygon* physics_polygons;
        public MeshBuffer* constructed_mesh;
        public int use_built_mesh;
        public CSphere* physics_sphere;
        public CSphere PhysicsSphere => *physics_sphere;
        public BSPTREE* physics_bsp;
        public AC1Legacy_Vector3 sort_center;
        public uint num_polygons;
        public CPolygon* polygons;
        public CSphere* drawing_sphere;
        public CSphere DrawingSphere => *drawing_sphere;
        public BSPTREE* drawing_bsp;
        public BBox gfx_bound_box;
        public IDClass__tagDataID_32_0 m_didDegrade;
    };


    public unsafe struct SmartArray<T>
        where T : unmanaged
    {
        public T* m_data;
        public ulong m_size;
        public ulong m_num;
    }

    public struct GraphicsResource
    {
        public IntPtr vtbl;
        public int none;
        public bool m_bIsLost;
        public short none2;
        public bool none3;
        public double m_TimeUsed;
        public uint m_FrameUsed;
        public bool m_bIsThrashable;
        public bool m_AutoRestore;
        public short none5;
        public uint m_nResourceSize;
        public uint m_ListIndex;
    };


    public unsafe struct ImgTex
    {
        public DBObj parent;
        public GraphicsResource graphics;
        public SmartArray<IDClass__tagDataID_32_0> m_SourceLevels;
        public RenderSurface* m_pImageData;
        public Palette* m_pPalette;
        public int m_cPitch;
        public ulong m_TextureCode;
        public IntPtr m_pD3DTexture; //IDirect3DTexture9*
        public RenderTexture* m_pRenderTexture;
        public RenderTexture* m_pSystemMemTexture;
        public bool m_IsLocked;
    };


    public unsafe struct RenderMesh
    {
        public DBObj parent;

      /*  public unsigned int m_InstanceFlags;
        public unsigned int m_MeshAppearanceType;
        public RenderMeshMaterialArray* m_pMaterialArray;
        public RenderMeshVerticesArray* m_pVerticesArray;
        public RenderMeshIndicesArray* m_pIndicesArray;
        public SmartArray<RenderMeshFragment*,1> m_Fragments; 
        public SmartArray<unsigned long,1> m_RenderLODFragmentIndices;
        public SmartArray<unsigned long,1> m_OccluderFragmentIndices;
        public unsigned int m_ShadowLODFragmentIndex;
        public bool m_CachedSupportsLighting;
        public bool m_CachedSupportsMultiPassLighting;
        public bool m_CachedSupportsCombinedAmbientPass;
        public bool m_CachedIsGlowing;
        public bool m_CachedNeedAlphaBlendPass;
        public bool m_CachedHasSkeletalData;
        bool m_CachedAllSkeletalLODsWereBlended;
        public unsigned int m_CachedSkeletalRenderLODIndex;
        public unsigned int m_CachedSkeletalShadowVolumeLODIndex;
        public BBox m_CachedRenderBoundingBox;
        public BBox m_CachedSkinnedBoundingBox;
        public bool m_IsSkinnedBoundingBoxValid;*/
    };


    /* 5464 */
    public unsafe struct RenderSurfaceD3D
    {
        public RenderSurface parent;
        //IDirect3DSurface9* m_pD3DSurface;
        //_D3DPOOL m_pool;
        //bool m_CountAsSystemMemory;
        //bool m_CountAsVideoMemory;
    };


    public enum PixelFormatID
    {
        PFID_A1R5G5B5 = 0x19,
        PFID_A2B10G10R10 = 0x1f,
        PFID_A2R10G10B10 = 0x23,
        PFID_A2W10V10U10 = 0x43,
        PFID_A4L4 = 0x34,
        PFID_A4R4G4B4 = 0x1a,
        PFID_A8 = 0x1c,
        PFID_A8B8G8R8 = 0x20,
        PFID_A8L8 = 0x33,
        PFID_A8P8 = 0x28,
        PFID_A8R3G3B2 = 0x1d,
        PFID_A8R8G8B8 = 0x15,
        PFID_CUSTOM_A8B8G8R8 = 0xf1,
        PFID_CUSTOM_B8G8R8 = 0xf2,
        PFID_CUSTOM_FIRST = 0xf0,
        PFID_CUSTOM_LAST = 0x1f4,
        PFID_CUSTOM_LSCAPE_ALPHA = 0xf4,
        PFID_CUSTOM_LSCAPE_R8G8B8 = 0xf3,
        PFID_CUSTOM_R8G8B8A8 = 0xf0,
        PFID_CUSTOM_RAW_JPEG = 0x1f4,
        PFID_D15S1 = 0x49,
        PFID_D16 = 0x50,
        PFID_D16_LOCKABLE = 0x46,
        PFID_D24S8 = 0x4b,
        PFID_D24X4S4 = 0x4f,
        PFID_D24X8 = 0x4d,
        PFID_D32 = 0x47,
        PFID_DXT1 = 0x31545844,
        PFID_DXT2 = 0x32545844,
        PFID_DXT3 = 0x33545844,
        PFID_DXT4 = 0x34545844,
        PFID_DXT5 = 0x35545844,
        PFID_G8R8_G8B8 = 0x42475247,
        PFID_INDEX16 = 0x65,
        PFID_INDEX32 = 0x66,
        PFID_INVALID = 0x7fffffff,
        PFID_L6V5U5 = 0x3d,
        PFID_L8 = 0x32,
        PFID_P8 = 0x29,
        PFID_Q8W8V8U8 = 0x3f,
        PFID_R3G3B2 = 0x1b,
        PFID_R5G6B5 = 0x17,
        PFID_R8G8B8 = 0x14,
        PFID_R8G8_B8G8 = 0x47424752,
        PFID_UNKNOWN = 0x0,
        PFID_UYVY = 0x59565955,
        PFID_V16U16 = 0x40,
        PFID_V8U8 = 0x3c,
        PFID_VERTEXDATA = 0x64,
        PFID_X1R5G5B5 = 0x18,
        PFID_X4R4G4B4 = 0x1e,
        PFID_X8B8G8R8 = 0x21,
        PFID_X8L8V8U8 = 0x3e,
        PFID_X8R8G8B8 = 0x16,
        PFID_YUY2 = 0x32595559
    };

    public struct PixelFormatDesc
    {
        public PixelFormatID format;
        public ulong flags;
        public ulong fourCC;
        public byte bitsPerPixel;
        public ulong redBitMask;
        public ulong greenBitMask;
        public ulong blueBitMask;
        public ulong alphaBitMask;
        public byte redBitCount;
        public byte greenBitCount;
        public byte blueBitCount;
        public byte alphaBitCount;
        public byte redBitOffset;
        public byte greenBitOffset;
        public byte blueBitOffset;
        public byte alphaBitOffset;
        public ulong redMax;
        public ulong greenMax;
        public ulong blueMax;
        public ulong alphaMax;
    };


    public unsafe struct RenderSurfaceSourceData
    {
        public ulong width;
        public ulong height;
        public ulong imageSize;
        public byte* sourceBits;
        public PixelFormatDesc pfDesc;
    };


    public unsafe struct RenderSurface
    {
        public DBObj parent;
        public GraphicsResource graphics;
        public RenderSurfaceSourceData sourceData;
        public uint width;
        public uint height;
        public uint size;
        public SurfaceWindow window;
        public bool locked;
        public PixelFormatDesc pfDesc;
        public byte* m_pSurfaceBits;
        public IDClass__tagDataID_32_0 m_didPalatte;
        public bool m_IsDirty;
        public bool m_ReadOnlyLock;
    };

    public struct tagRECT
    {
        public int left;
        public int top;
        public int right;
        public int bottom;
    };


    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public unsafe struct SurfaceWindow
    {
        public uint unknown1;
        public RenderSurface* surface;
        public SurfaceWindow* parent;
        public tagRECT rect;
        public ulong lockCount;
        public bool writable;
        public void* data;
        public int pitch;
    };


    public unsafe struct RenderTextureD3D //__cppobj __declspec(align(8)) RenderTextureD3D : RenderTexture
    {
        RenderTexture parent;
     //   IDirect3DTexture9* m_p2DTextureD3D;
      //  IDirect3DCubeTexture9* m_pCubeTextureD3D;
      //  SmartArray<D3DLevelResourceType,1> m_D3DSurfaces;
    };


    public enum TextureType
    {
        TEXTURETYPE_UNDEFINED = 0x1,
        TEXTURETYPE_2D = 0x2,
        TEXTURETYPE_3D = 0x3,
        TEXTURETYPE_CUBE = 0x4,
        TEXTURETYPE_MOVIE2D = 0x5,
    };


    public unsafe struct DBLevelResource
    {
        public PStringBase_char m_Name;
        public IDClass__tagDataID_32_0 m_LevelID;
        public RenderSurface* m_pResource;
    };

    public struct DBLevelInfo
    {
        public DBLevelResource m_Resources1;
        public DBLevelResource m_Resources2;
        public DBLevelResource m_Resources3;
        public DBLevelResource m_Resources4;
        public DBLevelResource m_Resources5;
        public DBLevelResource m_Resources6;
    };

public unsafe struct RenderTexture //_declspec(align(8)) 
    {
        public DBObj parent;
        public GraphicsResource graphics;
        public TextureType m_TextureType;
        public uint m_nNumLevels;
        public PixelFormatID m_PixelFormat;
        public uint m_Flags;
        public bool m_bDropLevelsCalled;
        public uint m_ManagedRefCount;
        public double m_LastManagedReleaseTime;
        public bool m_AllowManagement;
        public SmartArray<DBLevelInfo> m_SourceLevels;
        public uint m_nWidth;
        public uint m_nHeight;
        public uint m_nEdgeLength;
    };


    public unsafe struct MaterialInstance //(align(4)) MaterialInstance : DBObj
    {
        public DBObj parent;
     /*   PStringBase<char> m_materialName;
        IDClass<_tagDataID,32,0> m_materialID;
        PStringBase<char> m_materialTypeName;
        unsigned int m_materialType;
        SmartArray<ModifierRef*,1> m_aModifierRefs;
        bool m_AllowStencilShadows;
        bool m_WantDiscardGeometry;
        RenderMaterial* m_pMaterial;
        SmartArray<MaterialModifier*,1> m_aModifiers;
        RenderMaterial* m_pModifiedMaterial;
        bool m_bNeedRefresh;*/
    };


    public unsafe struct MaterialModifier // __cppobj __declspec(align(8)) MaterialModifier : DBObj
    {
        public DBObj parent;
      //  SmartArray<MaterialProperty*,1> properties;
    };


    public unsafe struct RenderMaterial //__cppobj RenderMaterial : DBObj
    {
        public DBObj parent;
    /*    bool m_IsInstance;
        MaterialModifier properties;
        SmartArray<MaterialLayer*,1> layers;
        SmartArray<PStringBase<char>,1> m_MaterialShaderConstantNames;
        SmartArray<MaterialShaderConstant,1> m_MaterialShaderConstants;
        bool m_IsOptimized;
        bool m_SupportsLighting;
        bool m_SupportsMultiPassLighting;
        bool m_SupportsCombinedAmbientPass;
        bool m_SupportsGlowing;
        bool m_NeedsAlphaBlendPass;
        bool m_UsesVideoPost;
        float m_Opacity;
        char m_LayerIndices[45][8] [3];*/
    };
    public unsafe struct LayoutDesc //const struct __cppobj __declspec(align(8)) LayoutDesc : DBObj
    {
        public DBObj parent;
        /*unsigned int m_displayWidth;
        unsigned int m_displayHeight;
        HashTable<unsigned long, ElementDesc,0> m_elements;
        PStringBase<char> m_strElementHeader;
        PStringBase<char> m_strElementWHeader;
        PStringBase<char> m_strStateHeader;
        PStringBase<char> m_strStateWHeader;*/
    };

    public struct NonDBObjLayoutDesc
    {
        LayoutDesc parent;
    };

    public struct ACCharGenData // : CharGenData
    {
        public CharGenData parent;
       // SmartArray<ACCharGenStartArea,1> mStartAreaList;
       // HashTable<unsigned long, HeritageGroup_CG,0> mHeritageGroupList;
    };

    public unsafe struct CharGenData // : DBObj
    {
        public DBObj parent;
    };

    struct FontLocal
    {
        public Font parent;
    };


    public unsafe struct Font
    {
        public DBObj parent;
        /*unsigned int maxCharHeight;
        unsigned int maxCharWidth;
        unsigned int numCharacters;
        FontCharDesc *charDescs;
        unsigned int m_NumHorizontalBorderPixels;
        unsigned int m_NumVerticalBorderPixels;
        int m_BaselineOffset;
        PStringBase<char> m_ForegroundSurfaceFileName;
        IDClass<_tagDataID,32,0> m_ForegroundSurfaceDataID;
        RenderSurface *m_pForegroundSurface;
        PStringBase<char> m_BackgroundSurfaceFileName;
        IDClass<_tagDataID,32,0> m_BackgroundSurfaceDataID;
        RenderSurface *m_pBackgroundSurface;
        unsigned __int16 minUnicodeChar;
        unsigned __int16 maxUnicodeChar;
        unsigned int unicodeRangeLength;
        unsigned __int16 *characterMap;*/
    };

    public unsafe struct MasterProperty //const struct __cppobj __declspec(align(8)) MasterProperty : DBObj
    {
      //EnumMapper m_emapper;
      //HashTable<unsigned long,BasePropertyDesc *,0> m_properties;
    };
    
    public unsafe struct CLanguageInfo //struct __cppobj CLanguageInfo : DBObj
    {
      /*int version;
      unsigned __int16 base;
      unsigned __int16 numDecimalDigits;
      bool leadingZero;
      unsigned __int16 groupingSize;
      PStringBase<unsigned short> numerals;
      PStringBase<unsigned short> decimalSeperator;
      PStringBase<unsigned short> groupingSeperator;
      PStringBase<unsigned short> negativeNumberFormat;
      bool isZeroSingular;
      bool isOneSingular;
      bool isNegativeOneSingular;
      bool isTwoOrMoreSingular;
      bool isNegativeTwoOrLessSingular;
      PStringBase<unsigned short> treasurePrefixLetters;
      PStringBase<unsigned short> treasureMiddleLetters;
      PStringBase<unsigned short> treasureSuffixLetters;
      PStringBase<unsigned short> malePlayerLetters;
      PStringBase<unsigned short> femalePlayerLetters;
      unsigned int m_ImeEnabledSetting;
      unsigned int m_symbolColor;
      unsigned int m_symbolColorText;
      unsigned int m_symbolHeight;
      unsigned int m_symbolTranslucence;
      unsigned int m_symbolPlacement;
      unsigned int m_candColorBase;
      unsigned int m_candColorBorder;
      unsigned int m_candColorText;
      unsigned int m_compColorInput;
      unsigned int m_compColorTargetConv;
      unsigned int m_compColorConverted;
      unsigned int m_compColorTargetNotConv;
      unsigned int m_compColorInputErr;
      unsigned int m_compTranslucence;
      unsigned int m_compColorText;
      unsigned int m_otherIME;
      int m_wordWrapOnSpace;
      PStringBase<unsigned short> m_additionalSettings;
      unsigned int m_additionalFlags;*/
    };

    public struct DualEnumIDMap //struct __cppobj __declspec(align(8)) DualEnumIDMap : EnumIDMap
    {
        public EnumIDMap parent;
      //  HashTable<IDClass<_tagDataID,32,0>, unsigned long,0> m_IDToEnum;
    };

    public unsafe struct EnumIDMap //__cppobj EnumIDMap : DBObj
    {
        public DBObj parent;
        /* HashTable<unsigned long,IDClass<_tagDataID,32,0>,0> m_EnumToID;
         HashTable<unsigned long,IDClass<_tagDataID,32,0>,0> m_EnumToIDInternal;
         HashTable<unsigned long,PStringBase<char>,0> m_EnumToName;
         HashTable<unsigned long,PStringBase<char>,0> m_EnumToNameInternal;*/
    };
    public unsafe struct DBFile2IDTable //struct __cppobj __declspec(align(8)) DBFile2IDTable : DBObj, TFile2IDTable
    {
        public DBObj parent;
    };

    public unsafe struct NameFilterTable //struct __cppobj __declspec(align(8)) NameFilterTable : DBObj
    {
        public DBObj parent;
        //HashTable<unsigned long,NameFilterLanguageData,0> m_LanguageData;
    };


    public unsafe struct StringTable //struct __cppobj StringTable : DBObj
    {
        public DBObj parent;
      //unsigned int m_version;
      //PStringBase<unsigned short> m_description;
      //unsigned int m_language;
      //HashTable<unsigned long,StringTableString *,0> m_strings;
    };


    public unsafe struct TabooTable //struct __cppobj __declspec(align(8)) TabooTable : DBObj
    {
        public DBObj parent;
        //HashTable<unsigned long,HashTable<unsigned long,List<PStringBase<char> >,0>,0> m_audienceToBannedPatterns;
    };

    public unsafe struct DBString //struct __cppobj __declspec(align(8)) String : DBObj, PStringBase<char>
    {
        public DBObj parent;
    };

    
    public struct CSoundTable //const struct __cppobj __declspec(align(8)) CSoundTable : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
       // public SoundTableData sound_data_;
    };

    public struct PhysicsScriptTable    //const struct __cppobj __declspec(align(8)) PhysicsScriptTable : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
       // HashTable<unsigned long, PhysicsScriptTableData*,0> script_table;
    }

    public struct CLandCell //struct __cppobj CLandCell : CSortCell
    {
        public CSortCell parent;
        //CPolygon **polygons;
      //  BoundingType in_view;
    };

    public struct CSortCell //struct __cppobj __declspec(align(8)) CSortCell : CObjCell
    {
        public CObjCell parent;
     //   CBuildingObj *building;
    };


    public struct CEnvCell //struct __cppobj CEnvCell : CObjCell
    {
        public CObjCell parent;
       /*  unsigned int num_surfaces;
          CSurface **surfaces;
          CCellStruct *structure;
          CEnvironment *env;
          unsigned int num_portals;
          CCellPortal *portals;
          unsigned int num_static_objects;
          IDClass<_tagDataID,32,0> *static_object_ids;
          Frame *static_object_frames;
          CPhysicsObj **static_objects;
          RGBColor *light_array;
          int incell_timestamp;
          MeshBuffer *constructed_mesh;
          int use_built_mesh;
          unsigned int m_current_render_frame_num;
          unsigned int num_view;
          DArray<portal_view_type *> portal_view;*/
    };

    public struct CObjCell //const struct __cppobj __declspec(align(8)) CObjCell : SerializeUsingPackDBObj, CPartCell
    {
        public SerializeUsingPackDBObj parent;
      /*  public CPartCell parent2;
            LandDefs::WaterType water_type;
        Position pos;
        unsigned int num_objects;
        DArray<CPhysicsObj*> object_list;
        unsigned int num_lights;
        DArray<LIGHTOBJ const *> light_list;
        unsigned int num_shadow_objects;
        DArray<CShadowObj*> shadow_object_list;
        unsigned int restriction_obj;
        ClipPlaneList** clip_planes;
        unsigned int num_stabs;
        unsigned int* stab_list;
        int seen_outside;
        LongNIValHash<GlobalVoyeurInfo>* voyeur_table;
        CLandBlock* myLandBlock_;*/
    };



    public struct CSetup //const struct __cppobj CSetup : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
       /*   unsigned int num_parts;
        IDClass<_tagDataID,32,0>* parts;
        unsigned int* parent_index;
        AC1Legacy::Vector3* default_scale;
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
        AC1Legacy::Vector3 anim_scale;
        LongHash<LocationType>* holding_locations;
        LongHash<LocationType>* connection_points;
        LongHash<PlacementType> placement_frames;
        IDClass<_tagDataID,32,0> default_anim_id;
        IDClass<_tagDataID,32,0> default_script_id;
        IDClass<_tagDataID,32,0> default_mtable_id;
        IDClass<_tagDataID,32,0> default_stable_id;
        IDClass<_tagDataID,32,0> default_phstable_id;*/
    };


    public unsafe struct Palette //struct __cppobj __declspec(align(8)) Palette : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
        uint num_colors;
        float min_lighting;
        uint* ARGB;
    };


    public struct CLandBlock //struct __cppobj CLandBlock : SerializeUsingPackDBObj, CLandBlockStruct
    {
        public SerializeUsingPackDBObj parent;
      /*  public CLandBlockStruct lb;
          SqCoord block_coord;
        Frame block_frame;
        float max_zval;
        float min_zval;
        int dyn_objs_init_done;
        int lbi_exists;
        LandDefs::Direction dir;
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
        unsigned int draw_array_size;*/
    };

    public struct CAnimation // __cppobj __declspec(align(8)) CAnimation : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
     /*   AFrame* pos_frames;
        AnimFrame* part_frames;
        int has_hooks;
        unsigned int num_parts;
        unsigned int num_frames;*/
    };

    public struct CMotionTable //const struct __cppobj __declspec(align(8)) CMotionTable : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
    /*      LongNIValHash<unsigned long> style_defaults;
        LongHash<MotionData> cycles;
        LongHash<MotionData> modifiers;
        LongNIValHash<LongHash<MotionData>*> links;
        unsigned int default_style;*/
    };

    public struct GfxObjDegradeInfo // __cppobj GfxObjDegradeInfo : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
   //     unsigned int num_degrades;
   //     GfxObjInfo* degrades;
    };
    public struct PhysicsScript //const struct __cppobj PhysicsScript : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
     //   OldSmartArray<PhysicsScriptData*> script_data;
     //   long double length;
    };

    public struct CLandblockInfo //struct __cppobj CLandBlockInfo : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
        
      /*  unsigned int num_objects;
        IDClass<_tagDataID,32,0>* object_ids;
        Frame* object_frames;
        unsigned int num_buildings;
        BuildInfo** buildings;
        PackableHashTable<unsigned long, unsigned long>* restriction_table;
        PackableHashTable<unsigned long, PackableList<unsigned long>>* cell_ownership;
        unsigned int num_cells;
        unsigned int* cell_ids;
        CEnvCell** cells;*/
    };

     //struct __cppobj CEnvironment : SerializeUsingPackDBObj
     public struct CEnvironment
    {
        public SerializeUsingPackDBObj parent;
     //   unsigned int num_cells;
     //   CCellStruct *cells;
    };

    //struct __cppobj PlayerDesc : CACQualities
    public struct PlayerDesc
    {
        public CACQualities parent;
    };

    //struct __cppobj CACQualities : SerializeUsingPackDBObj, CBaseQualities
    public struct CACQualities
    {
        public SerializeUsingPackDBObj parent;
     /*   public CBaseQualities cbase;
        AttributeCache* _attribCache;
        PackableHashTable<unsigned long, Skill>* _skillStatsTable;
        Body* _body;
        CSpellBook* _spell_book;
        CEnchantmentRegistry* _enchantment_reg;
        EventFilter* _event_filter;
        CEmoteTable* _emote_table;
        PackableList<CreationProfile>* _create_list;
        PageDataList* _pageDataList;
        GeneratorTable* _generator_table;
        GeneratorRegistry* _generator_registry;
        GeneratorQueue* _generator_queue;*/
    }


    //struct __cppobj __declspec(align(8)) SkillTable : SerializeUsingPackDBObj
    public struct SkillTable
    {
        public SerializeUsingPackDBObj parent;
     //   PackableHashTable<unsigned long,SkillBase> _skillBaseHash;
    };

    //struct __cppobj Attribute2ndTable : SerializeUsingPackDBObj
    public struct Attribute2ndTable
    {
        public SerializeUsingPackDBObj parent;
    /*    Attribute2ndBase _max_health;
        Attribute2ndBase _max_stamina;
        Attribute2ndBase _max_mana;*/
    };

    //struct __cppobj __declspec(align(8)) CContractTable : SerializeUsingPackDBObj
    public struct CContractTable
    {
        public SerializeUsingPackDBObj parent;
       // PackableHashTable<unsigned long,CContract> _contractHash;
    };

    //struct __cppobj __declspec(align(8)) CSpellTable : SerializeUsingPackDBObj
    public struct CSpellTable
    {
        public SerializeUsingPackDBObj parent;
     //   PackableHashTable<unsigned long,CSpellBase> _spellBaseHash;
     //   PHashTable<unsigned long,SpellSet> m_SpellSetHash;
    };

    //struct __cppobj __declspec(align(8)) SpellComponentTable : SerializeUsingPackDBObj
    public struct SpellComponentTable
    {
        public SerializeUsingPackDBObj parent;
     //   PackableHashTable<unsigned long,SpellComponentBase> _spellComponentBaseHash;
    };


//struct __cppobj ParticleEmitterInfo : SerializeUsingPackDBObj
    public struct ParticleEmitterInfo
    {
        public SerializeUsingPackDBObj parent;
      /*  int emitter_type;
        int particle_type;
        int is_parent_local;
        IDClass<_tagDataID,32,0> gfxobj_id;
        IDClass<_tagDataID,32,0> hw_gfxobj_id;
        long double birthrate;
        int max_particles;
        int initial_particles;
        int total_particles;
        long double total_seconds;
        long double lifespan_rand;
        long double lifespan;
        CSphere sorting_sphere;
        AC1Legacy::Vector3 offset_dir;
        float min_offset;
        float max_offset;
        AC1Legacy::Vector3 a;
        AC1Legacy::Vector3 b;
        AC1Legacy::Vector3 c;
        float min_a;
        float max_a;
        float min_b;
        float max_b;
        float min_c;
        float max_c;
        float scale_rand;
        float start_scale;
        float final_scale;
        float trans_rand;
        float start_trans;
        float final_trans;*/
    };

    public struct CRegionDesc//__cppobj CRegionDesc : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
  /*    unsigned int region_number;
      AC1Legacy::PStringBase<char> region_name;
      unsigned int version;
      int minimize_pal;
      unsigned int parts_mask;
      FileNameDesc *file_info;
      SkyDesc *sky_info;
      CSoundDesc *sound_info;
      CSceneDesc *scene_info;
      CTerrainDesc *terrain_info;
      CEncounterDesc *encounter_info;
      WaterDesc *water_info;
      FogDesc *fog_info;
      DistanceFogDesc *dist_fog_info;
      RegionMapDesc *region_map_info;
      RegionMisc *region_misc;*/
    };

    public struct ClothingTable//__cppobj ClothingTable : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
   //     PackableHashTable<IDClass<_tagDataID,32,0>,ClothingBase> _cloBaseHash;
    //    PackableHashTable<unsigned long,CloPaletteTemplate> _paletteTemplatesHash;
    };

    public struct PalSet // __cppobj PalSet : SerializeUsingPackDBObj
    {
        public SerializeUsingPackDBObj parent;
     //   unsigned int num_pals;
    //    IDClass<_tagDataID,32,0> *palette_IDs;
    };

    public struct WaveFile// __cppobj WaveFile
    {
      /*  WaveFileVtbl *vfptr;
        tWAVEFORMATEX *m_pwfmt;
        char *m_pData;
        HMMIO__ *m_hmmio;
        unsigned int m_mmr;
        _MMCKINFO m_mmckiRiff;
        _MMCKINFO m_mmckiFmt;
        _MMCKINFO m_mmckiData;
        unsigned int m_nDuration;
        unsigned int m_nBlockAlign;
        unsigned int m_nAvgDataRate;
        unsigned int m_nDataSize;
        unsigned int m_nFormatSize;
        unsigned int m_nBytesPlayed;*/
    };

    //struct __cppobj DBWave : SerializeUsingPackDBObj, WaveFile
    public struct DBWave
    {
        public SerializeUsingPackDBObj parent;
        public WaveFile wave;
    };

    //struct __cppobj ChatPoseTable : SerializeUsingPackDBObj
    public struct ChatPoseTable
    {
        public SerializeUsingPackDBObj parent;
    //    PackableHashTable<AC1Legacy::CaseInsensitiveStringBase<AC1Legacy::PStringBase<char> >,AC1Legacy::PStringBase<char> > _chatPoseHash;
    //    PackableHashTable<AC1Legacy::PStringBase<char>,ChatEmoteData> _chatEmoteHash;
    };

    //struct __cppobj __unaligned __declspec(align(4)) cWObjHierNode : AC1Legacy::SmartArray<cWObjHierNode *>
    public struct cWObjHierNode
    {
        //public 
    //    AC1Legacy::PStringBase<char> _menu_name;
    //    IDClass<_tagDataID,32,0> _wcid;
    };

        //struct __cppobj __declspec(align(8)) cWObjHierRootNode : SerializeUsingPackDBObj, cWObjHierNode
        //{
        //};

//struct __cppobj __declspec(align(8)) BadData : SerializeUsingPackDBObj
    public struct BadData
    {
        public SerializeUsingPackDBObj parent;
        //PackableHashTable<IDClass<_tagDataID,32,0>,int> _bad;
    };

//struct __cppobj __declspec(align(8)) Scene : SerializeUsingPackDBObj
public struct Scene
{
    public SerializeUsingPackDBObj parent;
    //unsigned int version;
    //unsigned int num_objects;
    //ObjectDesc *objects;
};

//struct __cppobj QualityFilter : SerializeUsingPackDBObj
public unsafe struct QualityFilter
{
    public SerializeUsingPackDBObj parent;
      int *_int_stat_filter;
      int *_int64_stat_filter;
      int *_bool_stat_filter;
      int *_float_stat_filter;
      int *_string_stat_filter;
      int *_did_stat_filter;
      int *_iid_stat_filter;
      int *_position_stat_filter;
};

//struct __cppobj CombatManeuverTable : SerializeUsingPackDBObj
public unsafe struct CombatManeuverTable
{
    public SerializeUsingPackDBObj parent;
    uint _num_combat_maneuvers;
    //CombatManeuver *_cmt;
};

//struct __cppobj __declspec(align(8)) ExperienceTable : SerializeUsingPackDBObj
public unsafe struct ExperienceTable
{
    public SerializeUsingPackDBObj parent;
    uint _max_attribute_level;
    uint *_attribute_table;
    uint _max_attribute2nd_level;
    uint *_attribute2nd_table;
    uint _max_trained_skill_level;
    uint *_trained_skill_table;
    uint _max_specialized_skill_level;
    uint *_specialized_skill_table;
    uint _max_level;
    UInt64 *_level_table;
    uint *_credit_table;
};

//struct __cppobj __declspec(align(8)) QuestDefDB : SerializeUsingPackDBObj
public struct QuestDefDB
{
    public SerializeUsingPackDBObj parent;
  //  PackableHashTable<AC1Legacy::CaseInsensitiveStringBase<AC1Legacy::PStringBase<char> >,QuestDef> _defs;
};


    //struct __cppobj __declspec(align(8)) ACQualityFilter : QualityFilter
    public unsafe struct ACQualityFilter
    {
        public QualityFilter parent;
        int *_attribute_stat_filter;
        int *_attribute2nd_stat_filter;
        int *_skill_stat_filter;
    };

}
