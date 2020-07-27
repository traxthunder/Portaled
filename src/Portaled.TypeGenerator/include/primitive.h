
#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "core.h"

struct _IDClass_16
{
	unsigned __int16 id;
};

struct _IDClass_32
{
	unsigned int id;
};


struct IDClass_tagDataID_32_0
{
	_IDClass_32 id;
};


struct AsyncContext
{
	unsigned int m_id;
};


struct _tagDataID
{
};



struct ReferenceCountTemplate_1048576_0
{
	void* vfptr;
	unsigned int m_cRef;
};

struct UserBindingValue
{
	unsigned int m_eActionClass;
	unsigned int m_action_name;
	unsigned int m_description;
};

struct Matrix4
{
	float _11;
	float _12;
	float _13;
	float _14;
	float _21;
	float _22;
	float _23;
	float _24;
	float _31;
	float _32;
	float _33;
	float _34;
	float _41;
	float _42;
	float _43;
	float _44;
};

struct TResult
{
	unsigned int m_val;
};

const struct Turbine_GUID
{
	unsigned int m_data1;
	unsigned __int16 m_data2;
	unsigned __int16 m_data3;
	char m_data4[8];
};


struct Vector3
{
	float x;
	float y;
	float z;
};


struct Quaternion
{
	float w;
	float x;
	float y;
	float z;
};


struct RGBAColor
{
	float r;
	float g;
	float b;
	float a;
};

struct Heading
{
	float m_degrees;
};


struct tagEMR
{
	unsigned int iType;
	unsigned int nSize;
};


struct _RECTL
{
	int left;
	int top;
	int right;
	int bottom;
};


struct _POINTL
{
	int x;
	int y;
};

struct tagXFORM
{
	float eM11;
	float eM12;
	float eM21;
	float eM22;
	float eDx;
	float eDy;
};

struct _TAPE_SET_DRIVE_PARAMETERS
{
	char ECC;
	char Compression;
	char DataPadding;
	char ReportSetmarks;
	unsigned int EOTWarningZoneSize;
};



struct _NETRESOURCEW
{
	unsigned int dwScope;
	unsigned int dwType;
	unsigned int dwDisplayType;
	unsigned int dwUsage;
	unsigned __int16* lpLocalName;
	unsigned __int16* lpRemoteName;
	unsigned __int16* lpComment;
	unsigned __int16* lpProvider;
};



struct midiproptempo_tag
{
	unsigned int cbStruct;
	unsigned int dwTempo;
};


struct _CRYPTOAPI_BLOB
{
	unsigned int cbData;
	char* pbData;
};



struct tagCBTACTIVATESTRUCT
{
	int fMouse;
	HWND__* hWndActive;
};



struct _CRYPT_BIT_BLOB
{
	unsigned int cbData;
	char* pbData;
	unsigned int cUnusedBits;
};


struct __declspec(align(4)) tagRemHGLOBAL
{
	int fNullHGlobal;
	unsigned int cbData;
	char data[1];
};



struct _DWORD_BLOB
{
	unsigned int clSize;
	unsigned int alData[1];
};


struct _AFPROTOCOLS
{
	int iAddressFamily;
	int iProtocol;
};


struct tagBLOB
{
	unsigned int cbSize;
	char* pBlobData;
};



struct _TOKEN_PRIMARY_GROUP
{
	void* PrimaryGroup;
};


struct _QUERY_SERVICE_CONFIGA
{
	unsigned int dwServiceType;
	unsigned int dwStartType;
	unsigned int dwErrorControl;
	char* lpBinaryPathName;
	char* lpLoadOrderGroup;
	unsigned int dwTagId;
	char* lpDependencies;
	char* lpServiceStartName;
	char* lpDisplayName;
};



struct E2ACC251678A70CC660B42C50BE23747A
{
	void* hMem;
	unsigned int dwReserved[3];
};


struct E03A236B16FC15461493BD6ADF5082600
{
	unsigned int dwCommittedSize;
	unsigned int dwUnCommittedSize;
	void* lpFirstBlock;
	void* lpLastBlock;
};

struct __declspec(align(4)) tagPARAMDATA
{
	unsigned __int16* szName;
	unsigned __int16 vt;
};

struct _SID_AND_ATTRIBUTES
{
	void* Sid;
	unsigned int Attributes;
};

struct _MEMORY_BASIC_INFORMATION64
{
	unsigned __int64 BaseAddress;
	unsigned __int64 AllocationBase;
	unsigned int AllocationProtect;
	unsigned int __alignment1;
	unsigned __int64 RegionSize;
	unsigned int State;
	unsigned int Protect;
	unsigned int Type;
	unsigned int __alignment2;
};

struct tagMCI_SAVE_PARMSA
{
	unsigned int dwCallback;
	const unsigned __int8* lpfilename;
};


struct _FAT_STATISTICS
{
	unsigned int CreateHits;
	unsigned int SuccessfulCreates;
	unsigned int FailedCreates;
	unsigned int NonCachedReads;
	unsigned int NonCachedReadBytes;
	unsigned int NonCachedWrites;
	unsigned int NonCachedWriteBytes;
	unsigned int NonCachedDiskReads;
	unsigned int NonCachedDiskWrites;
};



struct _PROCESSOR_POWER_POLICY_INFO
{
	unsigned int TimeCheck;
	unsigned int DemoteLimit;
	unsigned int PromoteLimit;
	char DemotePercent;
	char PromotePercent;
	char Spare[2];
	unsigned __int32 AllowDemotion : 1;
	unsigned __int32 AllowPromotion : 1;
	unsigned __int32 Reserved : 30;
};




struct SB_IntrusiveSmartPointerAllocator
{
};


struct __declspec(align(4)) tagRemHMETAFILEPICT
{
	int mm;
	int xExt;
	int yExt;
	unsigned int cbData;
	char data[1];
};





struct tagTOGGLEKEYS
{
	unsigned int cbSize;
	unsigned int dwFlags;
};


struct HDRVR__
{
	int unused;
};


struct E6361545E6B1EA29D9FF9117A8594F5B1
{
	void* XlatTable;
	char* StateTable;
	unsigned int NumberOfEntries;
};




struct tagMCI_SEEK_PARMS
{
	unsigned int dwCallback;
	unsigned int dwTo;
};



struct _DOC_INFO_1W
{
	unsigned __int16* pDocName;
	unsigned __int16* pOutputFile;
	unsigned __int16* pDatatype;
};


 __unaligned __declspec(align(2)) struct tagBITMAPFILEHEADER
{
	unsigned __int16 bfType;
	unsigned int bfSize;
	unsigned __int16 bfReserved1;
	unsigned __int16 bfReserved2;
	unsigned int bfOffBits;
};

union EA5A483E05FC9B52B872A8DCFA58CFF52
{
	unsigned int Offset;
	void* Pointer;
};

struct __declspec(align(4)) _FLAGGED_BYTE_BLOB
{
	unsigned int fFlags;
	unsigned int clSize;
	char abData[1];
};

struct _CRYPT_URL_ARRAY
{
	unsigned int cUrl;
	unsigned __int16** rgwszUrl;
};

struct tagRPC_CALL_ATTRIBUTES_V1_A
{
	unsigned int Version;
	unsigned int Flags;
	unsigned int ServerPrincipalNameBufferLength;
	char* ServerPrincipalName;
	unsigned int ClientPrincipalNameBufferLength;
	char* ClientPrincipalName;
	unsigned int AuthenticationLevel;
	unsigned int AuthenticationService;
	int NullSession;
};

struct tagREGISTERWORDA
{
	char* lpReading;
	char* lpWord;
};

struct _JOBOBJECT_END_OF_JOB_TIME_INFORMATION
{
	unsigned int EndOfJobTimeAction;
};

struct tagDEBUGHOOKINFO
{
	unsigned int idThread;
	unsigned int idThreadInstaller;
	int lParam;
	unsigned int wParam;
	int code;
};

struct _PORT_INFO_2A
{
	char* pPortName;
	char* pMonitorName;
	char* pDescription;
	unsigned int fPortType;
	unsigned int Reserved;
};

struct _IMAGE_BOUND_FORWARDER_REF
{
	unsigned int TimeDateStamp;
	unsigned __int16 OffsetModuleName;
	unsigned __int16 Reserved;
};

struct _MONITOR_INFO_2A
{
	char* pName;
	char* pEnvironment;
	char* pDLLName;
};

struct tagCOPYDATASTRUCT
{
	unsigned int dwData;
	unsigned int cbData;
	void* lpData;
};


struct tagMIXERCONTROLDETAILS_LISTTEXTA
{
	unsigned int dwParam1;
	unsigned int dwParam2;
	char szName[64];
};

struct _LUID
{
	unsigned int LowPart;
	int HighPart;
};


struct tagREGISTERWORDW
{
	unsigned __int16* lpReading;
	unsigned __int16* lpWord;
};

struct _PORT_INFO_1A
{
	char* pName;
};

union E444B8AF3F414656C8F88F98B3D40B8AE
{
	unsigned int hKeyEncryptionKey;
	void* pvKeyEncryptionKey;
};

struct tagSCROLLINFO
{
	unsigned int cbSize;
	unsigned int fMask;
	int nMin;
	int nMax;
	unsigned int nPage;
	int nPos;
	int nTrackPos;
};

struct _IMAGE_BOUND_IMPORT_DESCRIPTOR
{
	unsigned int TimeDateStamp;
	unsigned __int16 OffsetModuleName;
	unsigned __int16 NumberOfModuleForwarderRefs;
};

struct _SID_IDENTIFIER_AUTHORITY
{
	char Value[6];
};

struct _CRYPT_KEY_PROV_PARAM
{
	unsigned int dwParam;
	char* pbData;
	unsigned int cbData;
	unsigned int dwFlags;
};

struct tagPANOSE
{
	char bFamilyType;
	char bSerifStyle;
	char bWeight;
	char bProportion;
	char bContrast;
	char bStrokeVariation;
	char bArmStyle;
	char bLetterform;
	char bMidline;
	char bXHeight;
};

struct tagPALETTEENTRY
{
	char peRed;
	char peGreen;
	char peBlue;
	char peFlags;
};

struct _DCB
{
	unsigned int DCBlength;
	unsigned int BaudRate;
	unsigned __int32 fBinary : 1;
	unsigned __int32 fParity : 1;
	unsigned __int32 fOutxCtsFlow : 1;
	unsigned __int32 fOutxDsrFlow : 1;
	unsigned __int32 fDtrControl : 2;
	unsigned __int32 fDsrSensitivity : 1;
	unsigned __int32 fTXContinueOnXoff : 1;
	unsigned __int32 fOutX : 1;
	unsigned __int32 fInX : 1;
	unsigned __int32 fErrorChar : 1;
	unsigned __int32 fNull : 1;
	unsigned __int32 fRtsControl : 2;
	unsigned __int32 fAbortOnError : 1;
	unsigned __int32 fDummy2 : 17;
	unsigned __int16 wReserved;
	unsigned __int16 XonLim;
	unsigned __int16 XoffLim;
	char ByteSize;
	char Parity;
	char StopBits;
	char XonChar;
	char XoffChar;
	char ErrorChar;
	char EofChar;
	char EvtChar;
	unsigned __int16 wReserved1;
};

struct _OSVERSIONINFOEXW
{
	unsigned int dwOSVersionInfoSize;
	unsigned int dwMajorVersion;
	unsigned int dwMinorVersion;
	unsigned int dwBuildNumber;
	unsigned int dwPlatformId;
	unsigned __int16 szCSDVersion[128];
	unsigned __int16 wServicePackMajor;
	unsigned __int16 wServicePackMinor;
	unsigned __int16 wSuiteMask;
	char wProductType;
	char wReserved;
};

struct _PRINTER_NOTIFY_OPTIONS_TYPE
{
	unsigned __int16 Type;
	unsigned __int16 Reserved0;
	unsigned int Reserved1;
	unsigned int Reserved2;
	unsigned int Count;
	unsigned __int16* pFields;
};


struct tagMIDIOUTCAPSA
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	char szPname[32];
	unsigned __int16 wTechnology;
	unsigned __int16 wVoices;
	unsigned __int16 wNotes;
	unsigned __int16 wChannelMask;
	unsigned int dwSupport;
};

struct _STARTUPINFOW
{
	unsigned int cb;
	unsigned __int16* lpReserved;
	unsigned __int16* lpDesktop;
	unsigned __int16* lpTitle;
	unsigned int dwX;
	unsigned int dwY;
	unsigned int dwXSize;
	unsigned int dwYSize;
	unsigned int dwXCountChars;
	unsigned int dwYCountChars;
	unsigned int dwFillAttribute;
	unsigned int dwFlags;
	unsigned __int16 wShowWindow;
	unsigned __int16 cbReserved2;
	char* lpReserved2;
	void* hStdInput;
	void* hStdOutput;
	void* hStdError;
};

struct tagJOYCAPSA
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	char szPname[32];
	unsigned int wXmin;
	unsigned int wXmax;
	unsigned int wYmin;
	unsigned int wYmax;
	unsigned int wZmin;
	unsigned int wZmax;
	unsigned int wNumButtons;
	unsigned int wPeriodMin;
	unsigned int wPeriodMax;
	unsigned int wRmin;
	unsigned int wRmax;
	unsigned int wUmin;
	unsigned int wUmax;
	unsigned int wVmin;
	unsigned int wVmax;
	unsigned int wCaps;
	unsigned int wMaxAxes;
	unsigned int wNumAxes;
	unsigned int wMaxButtons;
	char szRegKey[32];
	char szOEMVxD[260];
};

 __unaligned __declspec(align(2)) struct DLGTEMPLATE
{
	unsigned int style;
	unsigned int dwExtendedStyle;
	unsigned __int16 cdit;
	__int16 x;
	__int16 y;
	__int16 cx;
	__int16 cy;
};

struct _ACTIVATION_CONTEXT_QUERY_INDEX
{
	unsigned int ulAssemblyIndex;
	unsigned int ulFileIndexInAssembly;
};

struct EFEAB62C056B7B19C610CD18E991278A7
{
	unsigned int cbBuf;
	void* pBuf;
};

struct _CTL_USAGE
{
	unsigned int cUsageIdentifier;
	char** rgpszUsageIdentifier;
};

struct _CERT_TRUST_STATUS
{
	unsigned int dwErrorStatus;
	unsigned int dwInfoStatus;
};

struct val_context
{
	int valuelen;
	void* value_context;
	void* val_buff_ptr;
};

struct _currencyfmtA
{
	unsigned int NumDigits;
	unsigned int LeadingZero;
	unsigned int Grouping;
	char* lpDecimalSep;
	char* lpThousandSep;
	unsigned int NegativeOrder;
	unsigned int PositiveOrder;
	char* lpCurrencySymbol;
};

struct tagLOGFONTW
{
	int lfHeight;
	int lfWidth;
	int lfEscapement;
	int lfOrientation;
	int lfWeight;
	char lfItalic;
	char lfUnderline;
	char lfStrikeOut;
	char lfCharSet;
	char lfOutPrecision;
	char lfClipPrecision;
	char lfQuality;
	char lfPitchAndFamily;
	unsigned __int16 lfFaceName[32];
};

struct _PRINTER_INFO_5A
{
	char* pPrinterName;
	char* pPortName;
	unsigned int Attributes;
	unsigned int DeviceNotSelectedTimeout;
	unsigned int TransmissionRetryTimeout;
};


struct tagPRINTPAGERANGE
{
	unsigned int nFromPage;
	unsigned int nToPage;
};


struct _DOC_INFO_2W
{
	unsigned __int16* pDocName;
	unsigned __int16* pOutputFile;
	unsigned __int16* pDatatype;
	unsigned int dwMode;
	unsigned int JobId;
};

struct HDC__
{
	int unused;
};

struct tagNMHDR
{
	HWND__* hwndFrom;
	unsigned int idFrom;
	unsigned int code;
};

struct _SERVICE_TABLE_ENTRYW
{
	unsigned __int16* lpServiceName;
	void(__stdcall* lpServiceProc)(unsigned int, unsigned __int16**);
};

struct _DRIVER_INFO_5A
{
	unsigned int cVersion;
	char* pName;
	char* pEnvironment;
	char* pDriverPath;
	char* pDataFile;
	char* pConfigFile;
	unsigned int dwDriverAttributes;
	unsigned int dwConfigVersion;
	unsigned int dwDriverVersion;
};

struct __declspec(align(4)) tagDVTARGETDEVICE
{
	unsigned int tdSize;
	unsigned __int16 tdDriverNameOffset;
	unsigned __int16 tdDeviceNameOffset;
	unsigned __int16 tdPortNameOffset;
	unsigned __int16 tdExtDevmodeOffset;
	char tdData[1];
};

struct HENHMETAFILE__
{
	int unused;
};

struct EB950AFB169DC87688B328897744C612F
{
	unsigned int LowPart;
	unsigned int HighPart;
};

struct tagBIND_OPTS
{
	unsigned int cbStruct;
	unsigned int grfFlags;
	unsigned int grfMode;
	unsigned int dwTickCountDeadline;
};

struct tagRGBTRIPLE
{
	char rgbtBlue;
	char rgbtGreen;
	char rgbtRed;
};

struct _MONITOR_INFO_1W
{
	unsigned __int16* pName;
};

struct _COMSTAT
{
	unsigned __int32 fCtsHold : 1;
	unsigned __int32 fDsrHold : 1;
	unsigned __int32 fRlsdHold : 1;
	unsigned __int32 fXoffHold : 1;
	unsigned __int32 fXoffSent : 1;
	unsigned __int32 fEof : 1;
	unsigned __int32 fTxim : 1;
	unsigned __int32 fReserved : 25;
	unsigned int cbInQue;
	unsigned int cbOutQue;
};

 __unaligned __declspec(align(2)) struct DLGITEMTEMPLATE
{
	unsigned int style;
	unsigned int dwExtendedStyle;
	__int16 x;
	__int16 y;
	__int16 cx;
	__int16 cy;
	unsigned __int16 id;
};

struct _DISPLAY_DEVICEW
{
	unsigned int cb;
	unsigned __int16 DeviceName[32];
	unsigned __int16 DeviceString[128];
	unsigned int StateFlags;
	unsigned __int16 DeviceID[128];
	unsigned __int16 DeviceKey[128];
};

struct _CRYPT_OID_FUNC_ENTRY
{
	const unsigned __int8* pszOID;
	void* pvFuncAddr;
};

struct _DOC_INFO_3A
{
	char* pDocName;
	char* pOutputFile;
	char* pDatatype;
	unsigned int dwFlags;
};

struct HMENU__
{
	int unused;
};

struct tagMINIMIZEDMETRICS
{
	unsigned int cbSize;
	int iWidth;
	int iHorzGap;
	int iVertGap;
	int iArrange;
};


struct HMIDIIN__
{
	int unused;
};

struct _CRYPT_DECRYPT_MESSAGE_PARA
{
	unsigned int cbSize;
	unsigned int dwMsgAndCertEncodingType;
	unsigned int cCertStore;
	void* rghCertStore;
};

struct _TypeDescriptor
{
	const void* pVFTable;
	void* spare;
	//char name[];
	unsigned __int8 name;
};

struct _PMD
{
	int mdisp;
	int pdisp;
	int vdisp;
};

struct tagJOYCAPSW
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned __int16 szPname[32];
	unsigned int wXmin;
	unsigned int wXmax;
	unsigned int wYmin;
	unsigned int wYmax;
	unsigned int wZmin;
	unsigned int wZmax;
	unsigned int wNumButtons;
	unsigned int wPeriodMin;
	unsigned int wPeriodMax;
	unsigned int wRmin;
	unsigned int wRmax;
	unsigned int wUmin;
	unsigned int wUmax;
	unsigned int wVmin;
	unsigned int wVmax;
	unsigned int wCaps;
	unsigned int wMaxAxes;
	unsigned int wNumAxes;
	unsigned int wMaxButtons;
	unsigned __int16 szRegKey[32];
	unsigned __int16 szOEMVxD[260];
};

struct tagCIEXYZ
{
	int ciexyzX;
	int ciexyzY;
	int ciexyzZ;
};

struct tagMCI_SYSINFO_PARMSA
{
	unsigned int dwCallback;
	char* lpstrReturn;
	unsigned int dwRetSize;
	unsigned int dwNumber;
	unsigned int wDeviceType;
};

struct _PRINTPROCESSOR_INFO_1A
{
	char* pName;
};

struct tagCABSTR
{
	unsigned int cElems;
	unsigned __int16** pElems;
};

struct tagMULTIKEYHELPW
{
	unsigned int mkSize;
	unsigned __int16 mkKeylist;
	unsigned __int16 szKeyphrase[1];
};

struct __declspec(align(4)) tagHELPWININFOA
{
	int wStructSize;
	int x;
	int y;
	int dx;
	int dy;
	int wMax;
	char rgchMember[2];
};

struct E30731EC1589AE832070BFAB4699C1350
{
	unsigned int dwType;
	unsigned int dwDeviceID;
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	unsigned __int16 szPname[32];
};

struct __declspec(align(4)) tagRemHENHMETAFILE
{
	unsigned int cbData;
	char data[1];
};

struct tagSIZE
{
	int cx;
	int cy;
};

struct tagMEASUREITEMSTRUCT
{
	unsigned int CtlType;
	unsigned int CtlID;
	unsigned int itemID;
	unsigned int itemWidth;
	unsigned int itemHeight;
	unsigned int itemData;
};

struct DRVCONFIGINFOEX
{
	unsigned int dwDCISize;
	const unsigned __int16* lpszDCISectionName;
	const unsigned __int16* lpszDCIAliasName;
	unsigned int dnDevNode;
};

struct _PRINTER_INFO_1A
{
	unsigned int Flags;
	char* pDescription;
	char* pName;
	char* pComment;
};

struct tagOLEVERB
{
	int lVerb;
	unsigned __int16* lpszVerbName;
	unsigned int fuFlags;
	unsigned int grfAttribs;
};

struct E983F061E0B702DD8AE0B4B955735A6A3
{
	unsigned int Lo;
	int Hi;
};

struct tagSAFEARRAYBOUND
{
	unsigned int cElements;
	int lLbound;
};

struct EE2F13C0D8C7A5E44CBEA2DDC2BADB614
{
	unsigned __int16 vt;
	unsigned __int16 wReserved1;
	unsigned __int16 wReserved2;
	unsigned __int16 wReserved3;
	__int64 llVal;
};

struct E5CC4D6FD2BF4E5B80FE1FD714DCA0CFA
{
	char scale;
	char sign;
};

struct EA04CD8C0331024E133CCEC4B0AB36956
{
	unsigned int Lo32;
	unsigned int Mid32;
};

struct EF28A51B4B40B0D33C72915D739D42B4B
{
	_BYTE gap0[8];
	char bVal;
};

struct E31126B8528A05AF3606C6D495FD178E8
{
	_BYTE gap0[8];
	__int16 iVal;
};

struct E50230A970D9734D4E9774CFC619DF0F6
{
	_BYTE gap0[8];
	float fltVal;
};

struct E4C0EC2258454B893CE739DAE89D8DB7B
{
	_BYTE gap0[8];
	long double dblVal;
};

struct E6DB36323059316E675433BB10D285009
{
	_BYTE gap0[8];
	__int16 boolVal;
};

struct E8E3C8731874D1B3BC66617C4DD3163A6
{
	_BYTE gap0[8];
	int scode;
};



struct EE94952165EEA9EEA990FEB33603E1B19
{
	_BYTE gap0[8];
	long double date;
};

struct EC854646156F6772BF5D6F8470C9CCFAF
{
	_BYTE gap0[8];
	unsigned __int16* bstrVal;
};

struct E166B1F81F6EA96F97683A65F38FB1A59
{
	_BYTE gap0[8];
	char* pbVal;
};

struct E76732A64405C0E287FCB302687644550
{
	_BYTE gap0[8];
	__int16* piVal;
};

struct EE5FC128E66C26C95254032BA69D36E74
{
	_BYTE gap0[8];
	int* plVal;
};

struct EE9CDCC48CD0BB58E8F361AA17BFDA76E
{
	_BYTE gap0[8];
	__int64* pllVal;
};

struct EBF8CC88CDF129BD6E4FA4ABA13F521AD
{
	_BYTE gap0[8];
	float* pfltVal;
};

struct E2CABE618CF1C2625A4479554E4967E0A
{
	_BYTE gap0[8];
	long double* pdblVal;
};

struct EAAA92DA1D6E1B0E8462F69216B62027C
{
	_BYTE gap0[8];
	__int16* pboolVal;
};

struct EF7167AE7A8ABA03C094C204FB1564A28
{
	_BYTE gap0[8];
	int* pscode;
};

struct HUMPD__
{
	int unused;
};



struct _PROVIDOR_INFO_2W
{
	unsigned __int16* pOrder;
};


struct _NETRESOURCEA
{
	unsigned int dwScope;
	unsigned int dwType;
	unsigned int dwDisplayType;
	unsigned int dwUsage;
	char* lpLocalName;
	char* lpRemoteName;
	char* lpComment;
	char* lpProvider;
};


struct __declspec(align(4)) tagRemSTGMEDIUM
{
	unsigned int tymed;
	unsigned int dwHandleType;
	unsigned int pData;
	unsigned int pUnkForRelease;
	unsigned int cbData;
	char data[1];
};




struct SC_HANDLE__
{
	int unused;
};


struct tagPOINTS
{
	__int16 x;
	__int16 y;
};


struct _RPC_PROTSEQ_ENDPOINT
{
	char* RpcProtocolSequence;
	char* Endpoint;
};



struct ArchiveVersionRow_VersionEntry
{
	unsigned int tokVersion;
	unsigned int iVersion;
};


struct _PROV_ENUMALGS_EX
{
	unsigned int aiAlgid;
	unsigned int dwDefaultLen;
	unsigned int dwMinLen;
	unsigned int dwMaxLen;
	unsigned int dwProtocols;
	unsigned int dwNameLen;
	char szName[20];
	unsigned int dwLongNameLen;
	char szLongName[40];
};




struct __declspec(align(4)) _COMMPROP
{
	unsigned __int16 wPacketLength;
	unsigned __int16 wPacketVersion;
	unsigned int dwServiceMask;
	unsigned int dwReserved1;
	unsigned int dwMaxTxQueue;
	unsigned int dwMaxRxQueue;
	unsigned int dwMaxBaud;
	unsigned int dwProvSubType;
	unsigned int dwProvCapabilities;
	unsigned int dwSettableParams;
	unsigned int dwSettableBaud;
	unsigned __int16 wSettableData;
	unsigned __int16 wSettableStopParity;
	unsigned int dwCurrentTxQueue;
	unsigned int dwCurrentRxQueue;
	unsigned int dwProvSpec1;
	unsigned int dwProvSpec2;
	unsigned __int16 wcProvChar[1];
};



struct _PRINTER_ENUM_VALUESW
{
	unsigned __int16* pValueName;
	unsigned int cbValueName;
	unsigned int dwType;
	char* pData;
	unsigned int cbData;
};

struct _QUERY_SERVICE_CONFIGW
{
	unsigned int dwServiceType;
	unsigned int dwStartType;
	unsigned int dwErrorControl;
	unsigned __int16* lpBinaryPathName;
	unsigned __int16* lpLoadOrderGroup;
	unsigned int dwTagId;
	unsigned __int16* lpDependencies;
	unsigned __int16* lpServiceStartName;
	unsigned __int16* lpDisplayName;
};


struct _NAME_BUFFER
{
	char name[16];
	char name_num;
	char name_flags;
};



struct _DOC_INFO_1A
{
	char* pDocName;
	char* pOutputFile;
	char* pDatatype;
};



struct _RTL_VERIFIER_THUNK_DESCRIPTOR
{
	char* ThunkName;
	void* ThunkOldAddress;
	void* ThunkNewAddress;
};


struct tagMCI_VD_ESCAPE_PARMSW
{
	unsigned int dwCallback;
	const unsigned __int16* lpstrCommand;
};


struct __declspec(align(4)) _MODEMSETTINGS
{
	unsigned int dwActualSize;
	unsigned int dwRequiredSize;
	unsigned int dwDevSpecificOffset;
	unsigned int dwDevSpecificSize;
	unsigned int dwCallSetupFailTimer;
	unsigned int dwInactivityTimeout;
	unsigned int dwSpeakerVolume;
	unsigned int dwSpeakerMode;
	unsigned int dwPreferredModemOptions;
	unsigned int dwNegotiatedModemOptions;
	unsigned int dwNegotiatedDCERate;
	char abVariablePortion[1];
};




struct _DRIVER_INFO_4W
{
	unsigned int cVersion;
	unsigned __int16* pName;
	unsigned __int16* pEnvironment;
	unsigned __int16* pDriverPath;
	unsigned __int16* pDataFile;
	unsigned __int16* pConfigFile;
	unsigned __int16* pHelpFile;
	unsigned __int16* pDependentFiles;
	unsigned __int16* pMonitorName;
	unsigned __int16* pDefaultDataType;
	unsigned __int16* pszzPreviousNames;
};



struct Turbine_Debug_AssertIfFalseFmt
{
	bool m_bExpressionResult;
	const unsigned __int8* m_szFile;
	const unsigned __int8* m_szCondition;
	int m_iLine;
	unsigned int* m_rdwFlags;
};




struct DbgReportContext
{
	void* m_hProcess;
	unsigned int m_idThread;
	void* m_hThread;
	void* m_hModule;
};


struct _CMSG_CTRL_DECRYPT_PARA
{
	unsigned int cbSize;
	unsigned int hCryptProv;
	unsigned int dwKeySpec;
	unsigned int dwRecipientIndex;
};



struct _IMAGE_ROM_OPTIONAL_HEADER
{
	unsigned __int16 Magic;
	char MajorLinkerVersion;
	char MinorLinkerVersion;
	unsigned int SizeOfCode;
	unsigned int SizeOfInitializedData;
	unsigned int SizeOfUninitializedData;
	unsigned int AddressOfEntryPoint;
	unsigned int BaseOfCode;
	unsigned int BaseOfData;
	unsigned int BaseOfBss;
	unsigned int GprMask;
	unsigned int CprMask[4];
	unsigned int GpValue;
};

struct tagMIDIINCAPSA
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	char szPname[32];
	unsigned int dwSupport;
};



struct tagMCI_WAVE_SET_PARMS
{
	unsigned int dwCallback;
	unsigned int dwTimeFormat;
	unsigned int dwAudio;
	unsigned int wInput;
	unsigned int wOutput;
	unsigned __int16 wFormatTag;
	unsigned __int16 wReserved2;
	unsigned __int16 nChannels;
	unsigned __int16 wReserved3;
	unsigned int nSamplesPerSec;
	unsigned int nAvgBytesPerSec;
	unsigned __int16 nBlockAlign;
	unsigned __int16 wReserved4;
	unsigned __int16 wBitsPerSample;
	unsigned __int16 wReserved5;
};

struct _IMAGE_DEBUG_DIRECTORY
{
	unsigned int Characteristics;
	unsigned int TimeDateStamp;
	unsigned __int16 MajorVersion;
	unsigned __int16 MinorVersion;
	unsigned int Type;
	unsigned int SizeOfData;
	unsigned int AddressOfRawData;
	unsigned int PointerToRawData;
};


struct pvalueA
{
	char* pv_valuename;
	int pv_valuelen;
	void* pv_value_context;
	unsigned int pv_type;
};


struct _STORAGE_BUS_RESET_REQUEST
{
	char PathId;
};


struct _PRINTER_INFO_4W
{
	unsigned __int16* pPrinterName;
	unsigned __int16* pServerName;
	unsigned int Attributes;
};

struct HCONVLIST__
{
	int unused;
};




 __unaligned __declspec(align(2)) struct IMAGE_AUX_SYMBOL_TOKEN_DEF
{
	char bAuxType;
	char bReserved;
	unsigned int SymbolTableIndex;
	char rgbReserved[12];
};



struct tagLAYERPLANEDESCRIPTOR
{
	unsigned __int16 nSize;
	unsigned __int16 nVersion;
	unsigned int dwFlags;
	char iPixelType;
	char cColorBits;
	char cRedBits;
	char cRedShift;
	char cGreenBits;
	char cGreenShift;
	char cBlueBits;
	char cBlueShift;
	char cAlphaBits;
	char cAlphaShift;
	char cAccumBits;
	char cAccumRedBits;
	char cAccumGreenBits;
	char cAccumBlueBits;
	char cAccumAlphaBits;
	char cDepthBits;
	char cStencilBits;
	char cAuxBuffers;
	char iLayerPlane;
	char bReserved;
	unsigned int crTransparent;
};


struct tagMCI_WAVE_DELETE_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrom;
	unsigned int dwTo;
};



struct _CRYPT_PASSWORD_CREDENTIALSA
{
	unsigned int cbSize;
	char* pszUsername;
	char* pszPassword;
};



struct _numberfmtW
{
	unsigned int NumDigits;
	unsigned int LeadingZero;
	unsigned int Grouping;
	unsigned __int16* lpDecimalSep;
	unsigned __int16* lpThousandSep;
	unsigned int NegativeOrder;
};



struct _PRINTPROCESSOR_CAPS_1
{
	unsigned int dwLevel;
	unsigned int dwNupOptions;
	unsigned int dwPageOrderFlags;
	unsigned int dwNumberOfCopies;
};


struct _PORT_INFO_3A
{
	unsigned int dwStatus;
	char* pszStatus;
	unsigned int dwSeverity;
};



struct $428257C9868A469D077AA3A343E95D70
{
	unsigned int dwType;
	unsigned int dwDeviceID;
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	char szPname[32];
};


union $024A9AD87DA22F97CCD4130050D7BF17
{
	unsigned int SymbolTableIndex;
	unsigned int VirtualAddress;
};



struct _MONITOR_INFO_1A
{
	char* pName;
};




struct tagNEWTEXTMETRICA
{
	int tmHeight;
	int tmAscent;
	int tmDescent;
	int tmInternalLeading;
	int tmExternalLeading;
	int tmAveCharWidth;
	int tmMaxCharWidth;
	int tmWeight;
	int tmOverhang;
	int tmDigitizedAspectX;
	int tmDigitizedAspectY;
	char tmFirstChar;
	char tmLastChar;
	char tmDefaultChar;
	char tmBreakChar;
	char tmItalic;
	char tmUnderlined;
	char tmStruckOut;
	char tmPitchAndFamily;
	char tmCharSet;
	unsigned int ntmFlags;
	unsigned int ntmSizeEM;
	unsigned int ntmCellHeight;
	unsigned int ntmAvgWidth;
};



struct __declspec(align(4)) _IMAGE_DEBUG_MISC
{
	unsigned int DataType;
	unsigned int Length;
	char Unicode;
	char Reserved[3];
	char Data[1];
};

struct _FILESYSTEM_STATISTICS
{
	unsigned __int16 FileSystemType;
	unsigned __int16 Version;
	unsigned int SizeOfCompleteStructure;
	unsigned int UserFileReads;
	unsigned int UserFileReadBytes;
	unsigned int UserDiskReads;
	unsigned int UserFileWrites;
	unsigned int UserFileWriteBytes;
	unsigned int UserDiskWrites;
	unsigned int MetaDataReads;
	unsigned int MetaDataReadBytes;
	unsigned int MetaDataDiskReads;
	unsigned int MetaDataWrites;
	unsigned int MetaDataWriteBytes;
	unsigned int MetaDataDiskWrites;
};


struct _IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY
{
	unsigned int BeginAddress;
	unsigned int EndAddress;
	unsigned int ExceptionHandler;
	unsigned int HandlerData;
	unsigned int PrologEndAddress;
};


struct _OSVERSIONINFOW
{
	unsigned int dwOSVersionInfoSize;
	unsigned int dwMajorVersion;
	unsigned int dwMinorVersion;
	unsigned int dwBuildNumber;
	unsigned int dwPlatformId;
	unsigned __int16 szCSDVersion[128];
};


struct tagRECONVERTSTRING
{
	unsigned int dwSize;
	unsigned int dwVersion;
	unsigned int dwStrLen;
	unsigned int dwStrOffset;
	unsigned int dwCompStrLen;
	unsigned int dwCompStrOffset;
	unsigned int dwTargetStrLen;
	unsigned int dwTargetStrOffset;
};


struct _EXCEPTION_RECORD32
{
	unsigned int ExceptionCode;
	unsigned int ExceptionFlags;
	unsigned int ExceptionRecord;
	unsigned int ExceptionAddress;
	unsigned int NumberParameters;
	unsigned int ExceptionInformation[15];
};


struct _CERT_TEMPLATE_EXT
{
	unsigned __int8* pszObjId;
	unsigned int dwMajorVersion;
	int fMinorVersion;
	unsigned int dwMinorVersion;
};


struct tagSTICKYKEYS
{
	unsigned int cbSize;
	unsigned int dwFlags;
};



struct tagMCI_SEQ_SET_PARMS
{
	unsigned int dwCallback;
	unsigned int dwTimeFormat;
	unsigned int dwAudio;
	unsigned int dwTempo;
	unsigned int dwPort;
	unsigned int dwSlave;
	unsigned int dwMaster;
	unsigned int dwOffset;
};


struct _DRIVER_INFO_2W
{
	unsigned int cVersion;
	unsigned __int16* pName;
	unsigned __int16* pEnvironment;
	unsigned __int16* pDriverPath;
	unsigned __int16* pDataFile;
	unsigned __int16* pConfigFile;
};


struct _COAUTHIDENTITY
{
	unsigned __int16* User;
	unsigned int UserLength;
	unsigned __int16* Domain;
	unsigned int DomainLength;
	unsigned __int16* Password;
	unsigned int PasswordLength;
	unsigned int Flags;
};



struct _DRIVER_INFO_3A
{
	unsigned int cVersion;
	unsigned __int8* pName;
	unsigned __int8* pEnvironment;
	unsigned __int8* pDriverPath;
	unsigned __int8* pDataFile;
	unsigned __int8* pConfigFile;
	unsigned __int8* pHelpFile;
	unsigned __int8* pDependentFiles;
	unsigned __int8* pMonitorName;
	unsigned __int8* pDefaultDataType;
};



struct _PORT_INFO_2W
{
	unsigned __int16* pPortName;
	unsigned __int16* pMonitorName;
	unsigned __int16* pDescription;
	unsigned int fPortType;
	unsigned int Reserved;
};


struct tagRemFORMATETC
{
	unsigned int cfFormat;
	unsigned int ptd;
	unsigned int dwAspect;
	int lindex;
	unsigned int tymed;
};


struct tagMOUSEKEYS
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned int iMaxSpeed;
	unsigned int iTimeToMaxSpeed;
	unsigned int iCtrlSpeed;
	unsigned int dwReserved1;
	unsigned int dwReserved2;
};


struct HACCEL__
{
	int unused;
};


struct _RPC_POLICY
{
	unsigned int Length;
	unsigned int EndpointFlags;
	unsigned int NICFlags;
};

union $E6E24A7F5B6F8B597C18331DB62781EC
{
	unsigned int ForwarderString;
	unsigned int Function;
	unsigned int Ordinal;
	unsigned int AddressOfData;
};



struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY
{
	unsigned int FuncStart;
	unsigned __int32 PrologLen : 8;
	unsigned __int32 FuncLen : 22;
	unsigned __int32 ThirtyTwoBit : 1;
	unsigned __int32 ExceptionFlag : 1;
};


struct _REASSIGN_BLOCKS
{
	unsigned __int16 Reserved;
	unsigned __int16 Count;
	unsigned int BlockNumber[1];
};


struct tagSERIALKEYSA
{
	unsigned int cbSize;
	unsigned int dwFlags;
	char* lpszActivePort;
	char* lpszPort;
	unsigned int iBaudRate;
	unsigned int iPortState;
	unsigned int iActive;
};


struct AutoTrueBool
{
	bool m_bValue;
};


struct midiproptimediv_tag
{
	unsigned int cbStruct;
	unsigned int dwTimeDiv;
};


struct _SESSION_HEADER
{
	char sess_name;
	char num_sess;
	char rcv_dg_outstanding;
	char rcv_any_outstanding;
};



struct _IMAGE_VXD_HEADER
{
	unsigned __int16 e32_magic;
	char e32_border;
	char e32_worder;
	unsigned int e32_level;
	unsigned __int16 e32_cpu;
	unsigned __int16 e32_os;
	unsigned int e32_ver;
	unsigned int e32_mflags;
	unsigned int e32_mpages;
	unsigned int e32_startobj;
	unsigned int e32_eip;
	unsigned int e32_stackobj;
	unsigned int e32_esp;
	unsigned int e32_pagesize;
	unsigned int e32_lastpagesize;
	unsigned int e32_fixupsize;
	unsigned int e32_fixupsum;
	unsigned int e32_ldrsize;
	unsigned int e32_ldrsum;
	unsigned int e32_objtab;
	unsigned int e32_objcnt;
	unsigned int e32_objmap;
	unsigned int e32_itermap;
	unsigned int e32_rsrctab;
	unsigned int e32_rsrccnt;
	unsigned int e32_restab;
	unsigned int e32_enttab;
	unsigned int e32_dirtab;
	unsigned int e32_dircnt;
	unsigned int e32_fpagetab;
	unsigned int e32_frectab;
	unsigned int e32_impmod;
	unsigned int e32_impmodcnt;
	unsigned int e32_impproc;
	unsigned int e32_pagesum;
	unsigned int e32_datapage;
	unsigned int e32_preload;
	unsigned int e32_nrestab;
	unsigned int e32_cbnrestab;
	unsigned int e32_nressum;
	unsigned int e32_autodata;
	unsigned int e32_debuginfo;
	unsigned int e32_debuglen;
	unsigned int e32_instpreload;
	unsigned int e32_instdemand;
	unsigned int e32_heapsize;
	char e32_res3[12];
	unsigned int e32_winresoff;
	unsigned int e32_winreslen;
	unsigned __int16 e32_devid;
	unsigned __int16 e32_ddkver;
};


union _RemotableHandle___MIDL_IWinTypes_0009
{
	int hInproc;
	int hRemote;
};



struct _CERT_POLICY_MAPPING
{
	char* pszIssuerDomainPolicy;
	char* pszSubjectDomainPolicy;
};



struct __declspec(align(4)) tagMULTIKEYHELPA
{
	unsigned int mkSize;
	char mkKeylist;
	char szKeyphrase[1];
};




struct _CERT_CHAIN_POLICY_PARA
{
	unsigned int cbSize;
	unsigned int dwFlags;
	void* pvExtraPolicyPara;
};



struct _CERT_POLICY_CONSTRAINTS_INFO
{
	int fRequireExplicitPolicy;
	unsigned int dwRequireExplicitPolicySkipCerts;
	int fInhibitPolicyMapping;
	unsigned int dwInhibitPolicyMappingSkipCerts;
};




struct _MONITOR_INFO_2W
{
	unsigned __int16* pName;
	unsigned __int16* pEnvironment;
	unsigned __int16* pDLLName;
};

struct _MMCKINFO
{
	unsigned int ckid;
	unsigned int cksize;
	unsigned int fccType;
	unsigned int dwDataOffset;
	unsigned int dwFlags;
};




struct _PRINTER_ENUM_VALUESA
{
	char* pValueName;
	unsigned int cbValueName;
	unsigned int dwType;
	char* pData;
	unsigned int cbData;
};



struct _CRYPT_PASSWORD_CREDENTIALSW
{
	unsigned int cbSize;
	unsigned __int16* pszUsername;
	unsigned __int16* pszPassword;
};


struct _OSVERSIONINFOEXA
{
	unsigned int dwOSVersionInfoSize;
	unsigned int dwMajorVersion;
	unsigned int dwMinorVersion;
	unsigned int dwBuildNumber;
	unsigned int dwPlatformId;
	char szCSDVersion[128];
	unsigned __int16 wServicePackMajor;
	unsigned __int16 wServicePackMinor;
	unsigned __int16 wSuiteMask;
	char wProductType;
	char wReserved;
};


struct tMIXERCONTROLDETAILS_SIGNED
{
	int lValue;
};


struct _IMAGE_COFF_SYMBOLS_HEADER
{
	unsigned int NumberOfSymbols;
	unsigned int LvaToFirstSymbol;
	unsigned int NumberOfLinenumbers;
	unsigned int LvaToFirstLinenumber;
	unsigned int RvaToFirstByteOfCode;
	unsigned int RvaToLastByteOfCode;
	unsigned int RvaToFirstByteOfData;
	unsigned int RvaToLastByteOfData;
};


struct _ImageArchitectureHeader
{
	unsigned __int32 AmaskValue : 1;
	unsigned __int32 : 7;
	unsigned __int32 AmaskShift : 8;
	unsigned int FirstEntryRVA;
};


struct _SYSTEM_POWER_STATUS
{
	char ACLineStatus;
	char BatteryFlag;
	char BatteryLifePercent;
	char Reserved1;
	unsigned int BatteryLifeTime;
	unsigned int BatteryFullLifeTime;
};



struct _BYTE_SIZEDARR
{
	unsigned int clSize;
	char* pData;
};


struct _DRIVER_INFO_3W
{
	unsigned int cVersion;
	unsigned __int16* pName;
	unsigned __int16* pEnvironment;
	unsigned __int16* pDriverPath;
	unsigned __int16* pDataFile;
	unsigned __int16* pConfigFile;
	unsigned __int16* pHelpFile;
	unsigned __int16* pDependentFiles;
	unsigned __int16* pMonitorName;
	unsigned __int16* pDefaultDataType;
};






struct _WSABUF
{
	unsigned int len;
	char* buf;
};


struct HWAVEIN__
{
	int unused;
};



struct tagMIXERCAPSA
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	char szPname[32];
	unsigned int fdwSupport;
	unsigned int cDestinations;
};



struct joyinfoex_tag
{
	unsigned int dwSize;
	unsigned int dwFlags;
	unsigned int dwXpos;
	unsigned int dwYpos;
	unsigned int dwZpos;
	unsigned int dwRpos;
	unsigned int dwUpos;
	unsigned int dwVpos;
	unsigned int dwButtons;
	unsigned int dwButtonNumber;
	unsigned int dwPOV;
	unsigned int dwReserved1;
	unsigned int dwReserved2;
};


struct _PRINTER_INFO_5W
{
	unsigned __int16* pPrinterName;
	unsigned __int16* pPortName;
	unsigned int Attributes;
	unsigned int DeviceNotSelectedTimeout;
	unsigned int TransmissionRetryTimeout;
};



struct _TAPE_WMI_OPERATIONS
{
	unsigned int Method;
	unsigned int DataBufferSize;
	void* DataBuffer;
};


struct tagMCI_SYSINFO_PARMSW
{
	unsigned int dwCallback;
	unsigned __int16* lpstrReturn;
	unsigned int dwRetSize;
	unsigned int dwNumber;
	unsigned int wDeviceType;
};




struct _CRYPT_DEFAULT_CONTEXT_MULTI_OID_PARA
{
	unsigned int cOID;
	char** rgpszOID;
};



struct HFONT__
{
	int unused;
};

struct _PRINTER_INFO_7A
{
	char* pszObjectGUID;
	unsigned int dwAction;
};


struct compile_time_class_check_test
{
};


struct tagMOUSEMOVEPOINT
{
	int x;
	int y;
	unsigned int time;
	unsigned int dwExtraInfo;
};


struct tagHIGHCONTRASTA
{
	unsigned int cbSize;
	unsigned int dwFlags;
	char* lpszDefaultScheme;
};



struct _CERT_KEY_CONTEXT
{
	unsigned int cbSize;
	unsigned int hCryptProv;
	unsigned int dwKeySpec;
};


struct _TAPE_GET_STATISTICS
{
	unsigned int Operation;
};


struct _PROVIDOR_INFO_1W
{
	unsigned __int16* pName;
	unsigned __int16* pEnvironment;
	unsigned __int16* pDLLName;
};


struct _IMAGE_BASE_RELOCATION
{
	unsigned int VirtualAddress;
	unsigned int SizeOfBlock;
};


struct _PERF_COUNTER_DEFINITION
{
	unsigned int ByteLength;
	unsigned int CounterNameTitleIndex;
	unsigned __int16* CounterNameTitle;
	unsigned int CounterHelpTitleIndex;
	unsigned __int16* CounterHelpTitle;
	int DefaultScale;
	unsigned int DetailLevel;
	unsigned int CounterType;
	unsigned int CounterSize;
	unsigned int CounterOffset;
};


union $B5432B5766EACA8D7A891B0C9CA17601
{
	unsigned int cbStruct;
	unsigned int cbSize;
};


struct _SHORT_SIZEDARR
{
	unsigned int clSize;
	unsigned __int16* pData;
};


struct _LONG_SIZEDARR
{
	unsigned int clSize;
	unsigned int* pData;
};


struct _HYPER_SIZEDARR
{
	unsigned int clSize;
	__int64* pData;
};


struct tagCANDIDATELIST
{
	unsigned int dwSize;
	unsigned int dwStyle;
	unsigned int dwCount;
	unsigned int dwSelection;
	unsigned int dwPageStart;
	unsigned int dwPageSize;
	unsigned int dwOffset[1];
};


struct tagACCESSTIMEOUT
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned int iTimeOutMSec;
};



struct _JOBOBJECT_ASSOCIATE_COMPLETION_PORT
{
	void* CompletionKey;
	void* CompletionPort;
};


struct HWINEVENTHOOK__
{
	int unused;
};


struct _CMS_KEY_INFO
{
	unsigned int dwVersion;
	unsigned int Algid;
	char* pbOID;
	unsigned int cbOID;
};


struct __declspec(align(2)) _MESSAGE_RESOURCE_ENTRY
{
	unsigned __int16 Length;
	unsigned __int16 Flags;
	char Text[1];
};


struct tagHIGHCONTRASTW
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned __int16* lpszDefaultScheme;
};


struct tagMCI_LOAD_PARMSA
{
	unsigned int dwCallback;
	const unsigned __int8* lpfilename;
};


union $22971E98F1DCAE471B592EC18ECB1551
{
	unsigned int PhysicalAddress;
	unsigned int VirtualSize;
};

struct _PORT_INFO_1W
{
	unsigned __int16* pName;
};


struct tagWAVEINCAPSA
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	char szPname[32];
	unsigned int dwFormats;
	unsigned __int16 wChannels;
	unsigned __int16 wReserved1;
};



struct _EFS_HASH_BLOB
{
	unsigned int cbData;
	char* pbData;
};


struct _flowspec
{
	unsigned int TokenRate;
	unsigned int TokenBucketSize;
	unsigned int PeakBandwidth;
	unsigned int Latency;
	unsigned int DelayVariation;
	unsigned int ServiceType;
	unsigned int MaxSduSize;
	unsigned int MinimumPolicedSize;
};



struct SYSTEM_BATTERY_STATE
{
	char AcOnLine;
	char BatteryPresent;
	char Charging;
	char Discharging;
	char Spare1[4];
	unsigned int MaxCapacity;
	unsigned int RemainingCapacity;
	unsigned int Rate;
	unsigned int EstimatedTime;
	unsigned int DefaultAlert1;
	unsigned int DefaultAlert2;
};


struct HMETAFILE__
{
	int unused;
};


struct tagHELPWININFOW
{
	int wStructSize;
	int x;
	int y;
	int dx;
	int dy;
	int wMax;
	unsigned __int16 rgchMember[2];
};


struct _CERT_STORE_PROV_FIND_INFO
{
	unsigned int cbSize;
	unsigned int dwMsgAndCertEncodingType;
	unsigned int dwFindFlags;
	unsigned int dwFindType;
	const void* pvFindPara;
};

struct tagHANDLETABLE
{
	void* objectHandle[1];
};


struct __declspec(align(4)) tagBinaryParam
{
	void* Buffer;
	__int16 Size;
};


struct $7C924936EBD9EC1686BC09279527D86D
{
	unsigned __int16 Write;
	unsigned __int16 Create;
	unsigned __int16 SetInfo;
	unsigned __int16 Flush;
};


struct $C659373CAE9F9E74FDBB0AC0E68C9269
{
	unsigned __int16 Write;
	unsigned __int16 Create;
	unsigned __int16 SetInfo;
};


struct $A9C6E7883B3D8C453F1F4181F1444E70
{
	unsigned int Calls;
	unsigned int Clusters;
	unsigned int Hints;
	unsigned int RunsReturned;
	unsigned int HintsHonored;
	unsigned int HintsClusters;
	unsigned int Cache;
	unsigned int CacheClusters;
	unsigned int CacheMiss;
	unsigned int CacheMissClusters;
};


struct tagSOUNDSENTRYA
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned int iFSTextEffect;
	unsigned int iFSTextEffectMSec;
	unsigned int iFSTextEffectColorBits;
	unsigned int iFSGrafEffect;
	unsigned int iFSGrafEffectMSec;
	unsigned int iFSGrafEffectColor;
	unsigned int iWindowsEffect;
	unsigned int iWindowsEffectMSec;
	char* lpszWindowsEffectDLL;
	unsigned int iWindowsEffectOrdinal;
};


struct _IMAGE_RESOURCE_DATA_ENTRY
{
	unsigned int OffsetToData;
	unsigned int Size;
	unsigned int CodePage;
	unsigned int Reserved;
};


struct _COMMTIMEOUTS
{
	unsigned int ReadIntervalTimeout;
	unsigned int ReadTotalTimeoutMultiplier;
	unsigned int ReadTotalTimeoutConstant;
	unsigned int WriteTotalTimeoutMultiplier;
	unsigned int WriteTotalTimeoutConstant;
};



struct _EXIT_PROCESS_DEBUG_INFO
{
	unsigned int dwExitCode;
};


struct _SHNAMEMAPPINGA
{
	char* pszOldPath;
	char* pszNewPath;
	int cchOldPath;
	int cchNewPath;
};


struct _ImageArchitectureEntry
{
	unsigned int FixupInstRVA;
	unsigned int NewInst;
};


union $4CFA15F5CE489CDF0BD78DFB308FEF36
{
	unsigned __int16 Ordinal;
	unsigned __int16 Hint;
};


struct tagMONERRSTRUCT
{
	unsigned int cb;
	unsigned int wLastError;
	unsigned int dwTime;
	void* hTask;
};


struct _PRINTPROCESSOR_INFO_1W
{
	unsigned __int16* pName;
};



struct _stat
{
	unsigned int st_dev;
	unsigned __int16 st_ino;
	unsigned __int16 st_mode;
	__int16 st_nlink;
	__int16 st_uid;
	__int16 st_gid;
	unsigned int st_rdev;
	int st_size;
	int st_atime;
	int st_mtime;
	int st_ctime;
};


struct _CRYPT_OBJID_TABLE
{
	unsigned int dwAlgId;
	const unsigned __int8* pszObjId;
};


struct __declspec(align(4)) _MODEMDEVCAPS
{
	unsigned int dwActualSize;
	unsigned int dwRequiredSize;
	unsigned int dwDevSpecificOffset;
	unsigned int dwDevSpecificSize;
	unsigned int dwModemProviderVersion;
	unsigned int dwModemManufacturerOffset;
	unsigned int dwModemManufacturerSize;
	unsigned int dwModemModelOffset;
	unsigned int dwModemModelSize;
	unsigned int dwModemVersionOffset;
	unsigned int dwModemVersionSize;
	unsigned int dwDialOptions;
	unsigned int dwCallSetupFailTimer;
	unsigned int dwInactivityTimeout;
	unsigned int dwSpeakerVolume;
	unsigned int dwSpeakerMode;
	unsigned int dwModemOptions;
	unsigned int dwMaxDTERate;
	unsigned int dwMaxDCERate;
	char abVariablePortion[1];
};


struct tagWAVEOUTCAPSW
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	unsigned __int16 szPname[32];
	unsigned int dwFormats;
	unsigned __int16 wChannels;
	unsigned __int16 wReserved1;
	unsigned int dwSupport;
};


struct _SERVICE_STATUS
{
	unsigned int dwServiceType;
	unsigned int dwCurrentState;
	unsigned int dwControlsAccepted;
	unsigned int dwWin32ExitCode;
	unsigned int dwServiceSpecificExitCode;
	unsigned int dwCheckPoint;
	unsigned int dwWaitHint;
};

struct value_entW
{
	unsigned __int16* ve_valuename;
	unsigned int ve_valuelen;
	unsigned int ve_valueptr;
	unsigned int ve_type;
};


struct tagMCI_INFO_PARMSW
{
	unsigned int dwCallback;
	unsigned __int16* lpstrReturn;
	unsigned int dwRetSize;
};


struct _PACKEDEVENTINFO
{
	unsigned int ulSize;
	unsigned int ulNumEventsForLogFile;
	//unsigned int ulOffsets[];
	unsigned int* ulOffsets;
};


struct _MEMORYSTATUSEX
{
	unsigned int dwLength;
	unsigned int dwMemoryLoad;
	unsigned __int64 ullTotalPhys;
	unsigned __int64 ullAvailPhys;
	unsigned __int64 ullTotalPageFile;
	unsigned __int64 ullAvailPageFile;
	unsigned __int64 ullTotalVirtual;
	unsigned __int64 ullAvailVirtual;
	unsigned __int64 ullAvailExtendedVirtual;
};

struct sockproto
{
	unsigned __int16 sp_family;
	unsigned __int16 sp_protocol;
};


struct _EFS_RPC_BLOB
{
	unsigned int cbData;
	char* pbData;
};


struct _PSINJECTDATA
{
	unsigned int DataBytes;
	unsigned __int16 InjectionPoint;
	unsigned __int16 PageNumber;
};

struct tagGCP_RESULTSA
{
	unsigned int lStructSize;
	char* lpOutString;
	unsigned int* lpOrder;
	int* lpDx;
	int* lpCaretPos;
	char* lpClass;
	unsigned __int16* lpGlyphs;
	unsigned int nGlyphs;
	int nMaxFit;
};


struct tagEMRFORMAT
{
	unsigned int dSignature;
	unsigned int nVersion;
	unsigned int cbData;
	unsigned int offData;
};


struct tagMCI_VD_STEP_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrames;
};


struct tagMETARECORD
{
	unsigned int rdSize;
	unsigned __int16 rdFunction;
	unsigned __int16 rdParm[1];
};


struct tagRPC_ERROR_ENUM_HANDLE
{
	unsigned int Signature;
	void* CurrentPos;
	void* Head;
};



struct SCARD_T0_COMMAND
{
	char bCla;
	char bIns;
	char bP1;
	char bP2;
	char bP3;
};



struct _GENERIC_MAPPING
{
	unsigned int GenericRead;
	unsigned int GenericWrite;
	unsigned int GenericExecute;
	unsigned int GenericAll;
};


struct _EFS_KEY_INFO
{
	unsigned int dwVersion;
	unsigned int Entropy;
	unsigned int Algorithm;
	unsigned int KeyLength;
};



struct tagVS_FIXEDFILEINFO
{
	unsigned int dwSignature;
	unsigned int dwStrucVersion;
	unsigned int dwFileVersionMS;
	unsigned int dwFileVersionLS;
	unsigned int dwProductVersionMS;
	unsigned int dwProductVersionLS;
	unsigned int dwFileFlagsMask;
	unsigned int dwFileFlags;
	unsigned int dwFileOS;
	unsigned int dwFileType;
	unsigned int dwFileSubtype;
	unsigned int dwFileDateMS;
	unsigned int dwFileDateLS;
};


struct tagMIDIOUTCAPSW
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	unsigned __int16 szPname[32];
	unsigned __int16 wTechnology;
	unsigned __int16 wVoices;
	unsigned __int16 wNotes;
	unsigned __int16 wChannelMask;
	unsigned int dwSupport;
};


struct tagMCI_WAVE_OPEN_PARMSW
{
	unsigned int dwCallback;
	unsigned int wDeviceID;
	const unsigned __int16* lpstrDeviceType;
	const unsigned __int16* lpstrElementName;
	const unsigned __int16* lpstrAlias;
	unsigned int dwBufferSeconds;
};



struct HIMC__
{
	int unused;
};



struct _CHANGER_PRODUCT_DATA
{
	char VendorId[8];
	char ProductId[16];
	char Revision[4];
	char SerialNumber[32];
	char DeviceType;
};



union $66A2FC5ED47CB5912809650DAB14E256
{
	unsigned int VirtualAddress;
	unsigned int RelocCount;
};



union $E3CAD8411F77256CCB020CE77D197F57
{
	unsigned int nStartPage;
	const unsigned __int8* pStartPage;
};


struct _SCARD_ATRMASK
{
	unsigned int cbAtr;
	char rgbAtr[36];
	char rgbMask[36];
};


struct _LANA_ENUM
{
	char length;
	char lana[255];
};


struct _QUERY_SERVICE_LOCK_STATUSW
{
	unsigned int fIsLocked;
	unsigned __int16* lpLockOwner;
	unsigned int dwLockDuration;
};



struct _PRINTER_INFO_7W
{
	unsigned __int16* pszObjectGUID;
	unsigned int dwAction;
};



struct ARRAY_INFO
{
	int Dimension;
	unsigned int* BufferConformanceMark;
	unsigned int* BufferVarianceMark;
	unsigned int* MaxCountArray;
	unsigned int* OffsetArray;
	unsigned int* ActualCountArray;
};


struct CS_STUB_INFO
{
	unsigned int WireCodeset;
	unsigned int DesiredReceivingCodeset;
	void* CSArrayInfo;
};



struct tagLOCALESIGNATURE
{
	unsigned int lsUsb[4];
	unsigned int lsCsbDefault[2];
	unsigned int lsCsbSupported[2];
};


struct _RPC_SECURITY_QOS
{
	unsigned int Version;
	unsigned int Capabilities;
	unsigned int IdentityTracking;
	unsigned int ImpersonationType;
};



struct _IMAGE_SEPARATE_DEBUG_HEADER
{
	unsigned __int16 Signature;
	unsigned __int16 Flags;
	unsigned __int16 Machine;
	unsigned __int16 Characteristics;
	unsigned int TimeDateStamp;
	unsigned int CheckSum;
	unsigned int ImageBase;
	unsigned int SizeOfImage;
	unsigned int NumberOfSections;
	unsigned int ExportedNamesSize;
	unsigned int DebugDirectorySize;
	unsigned int SectionAlignment;
	unsigned int Reserved[2];
};



struct $F10B7358C253DFE8D052089404AC5994
{
	char hour;
	char min;
	char sec;
	char frame;
	char fps;
	char dummy;
	char pad[2];
};


struct tagDEVNAMES
{
	unsigned __int16 wDriverOffset;
	unsigned __int16 wDeviceOffset;
	unsigned __int16 wOutputOffset;
	unsigned __int16 wDefault;
};


struct _cpinfoexW
{
	unsigned int MaxCharSize;
	char DefaultChar[2];
	char LeadByte[12];
	unsigned __int16 UnicodeDefaultChar;
	unsigned int CodePage;
	unsigned __int16 CodePageName[260];
};


struct __wfinddata64_t
{
	unsigned int attrib;
	__int64 time_create;
	__int64 time_access;
	__int64 time_write;
	__int64 size;
	wchar_t name[260];
};



struct _UNIVERSAL_NAME_INFOW
{
	unsigned __int16* lpUniversalName;
};


struct __declspec(align(4)) _TAPE_WRITE_MARKS
{
	unsigned int Type;
	unsigned int Count;
	char Immediate;
};


struct tagSTYLEBUFA
{
	unsigned int dwStyle;
	char szDescription[32];
};



struct value_entA
{
	char* ve_valuename;
	unsigned int ve_valuelen;
	unsigned int ve_valueptr;
	unsigned int ve_type;
};



struct _IO_COUNTERS
{
	unsigned __int64 ReadOperationCount;
	unsigned __int64 WriteOperationCount;
	unsigned __int64 OtherOperationCount;
	unsigned __int64 ReadTransferCount;
	unsigned __int64 WriteTransferCount;
	unsigned __int64 OtherTransferCount;
};



struct tagMIXERCONTROLDETAILS_LISTTEXTW
{
	unsigned int dwParam1;
	unsigned int dwParam2;
	unsigned __int16 szName[64];
};


struct _FSCTL_QUERY_FAT_BPB_BUFFER
{
	char First0x24BytesOfBootSector[36];
};

struct HMIDIOUT__
{
	int unused;
};


struct _IMAGE_ARCHIVE_MEMBER_HEADER
{
	char Name[16];
	char Date[12];
	char UserID[6];
	char GroupID[6];
	char Mode[8];
	char Size[10];
	char EndHeader[2];
};



struct _IMAGE_EXPORT_DIRECTORY
{
	unsigned int Characteristics;
	unsigned int TimeDateStamp;
	unsigned __int16 MajorVersion;
	unsigned __int16 MinorVersion;
	unsigned int Name;
	unsigned int Base;
	unsigned int NumberOfFunctions;
	unsigned int NumberOfNames;
	unsigned int AddressOfFunctions;
	unsigned int AddressOfNames;
	unsigned int AddressOfNameOrdinals;
};


struct _STL__Bit_iterator_base
{
	unsigned int* _M_p;
	unsigned int _M_offset;
};



struct _STL__Bit_reference
{
	unsigned int* _M_p;
	unsigned int _M_mask;
};




struct _STL_input_iterator_tag
{
};




struct __declspec(align(4)) _LOAD_DLL_DEBUG_INFO
{
	void* hFile;
	void* lpBaseOfDll;
	unsigned int dwDebugInfoFileOffset;
	unsigned int nDebugInfoSize;
	void* lpImageName;
	unsigned __int16 fUnicode;
};



struct _IMAGE_RUNTIME_FUNCTION_ENTRY
{
	unsigned int BeginAddress;
	unsigned int EndAddress;
	unsigned int UnwindInfoAddress;
};



struct _CMSG_CTRL_VERIFY_SIGNATURE_EX_PARA
{
	unsigned int cbSize;
	unsigned int hCryptProv;
	unsigned int dwSignerIndex;
	unsigned int dwSignerType;
	void* pvSigner;
};



struct DDEADVISE
{
	unsigned __int16 reserved : 14;
	unsigned __int16 fDeferUpd : 1;
	unsigned __int16 fAckReq : 1;
	__int16 cfFormat;
};

union _FILE_SEGMENT_ELEMENT
{
	void* Buffer;
	unsigned __int64 Alignment;
};

struct _div_t
{
	int quot;
	int rem;
};

struct _InstanceID
{
	unsigned __int64 id;
};




struct _JOB_SET_ARRAY
{
	void* JobHandle;
	unsigned int MemberLevel;
	unsigned int Flags;
};



struct _MIDL_FORMAT_STRING
{
	__int16 Pad;
	unsigned __int8* Format;//char Format[];
};

struct tagMCI_ANIM_STEP_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrames;
};



struct _ACTIVATION_CONTEXT_DETAILED_INFORMATION
{
	unsigned int dwFlags;
	unsigned int ulFormatVersion;
	unsigned int ulAssemblyCount;
	unsigned int ulRootManifestPathType;
	unsigned int ulRootManifestPathChars;
	unsigned int ulRootConfigurationPathType;
	unsigned int ulRootConfigurationPathChars;
	unsigned int ulAppDirPathType;
	unsigned int ulAppDirPathChars;
	const unsigned __int16* lpRootManifestPath;
	const unsigned __int16* lpRootConfigurationPath;
	const unsigned __int16* lpAppDirPath;
};



struct _CREATE_THREAD_DEBUG_INFO
{
	void* hThread;
	void* lpThreadLocalBase;
	unsigned int(__stdcall* lpStartAddress)(void*);
};


struct _CRYPT_KEY_LIMITS_V01
{
	unsigned int dwVersion;
	unsigned int algId;
	unsigned int dwMinKeyLength;
	unsigned int dwMaxKeyLength;
	unsigned int dwRequiredFlags;
	unsigned int dwDisallowedFlags;
};



struct _SECURITY_DESCRIPTOR_RELATIVE
{
	char Revision;
	char Sbz1;
	unsigned __int16 Control;
	unsigned int Owner;
	unsigned int Group;
	unsigned int Sacl;
	unsigned int Dacl;
};




struct _CERT_REVOCATION_STATUS
{
	unsigned int cbSize;
	unsigned int dwIndex;
	unsigned int dwError;
	unsigned int dwReason;
	int fHasFreshnessTime;
	unsigned int dwFreshnessTime;
};





struct tagCSPLATFORM
{
	unsigned int dwPlatformId;
	unsigned int dwVersionHi;
	unsigned int dwVersionLo;
	unsigned int dwProcessorArch;
};


struct _SHNAMEMAPPINGW
{
	unsigned __int16* pszOldPath;
	unsigned __int16* pszNewPath;
	int cchOldPath;
	int cchNewPath;
};


struct tagMCI_GETDEVCAPS_PARMS
{
	unsigned int dwCallback;
	unsigned int dwReturn;
	unsigned int dwItem;
};



struct tagRPC_CALL_ATTRIBUTES_V1_W
{
	unsigned int Version;
	unsigned int Flags;
	unsigned int ServerPrincipalNameBufferLength;
	unsigned __int16* ServerPrincipalName;
	unsigned int ClientPrincipalNameBufferLength;
	unsigned __int16* ClientPrincipalName;
	unsigned int AuthenticationLevel;
	unsigned int AuthenticationService;
	int NullSession;
};
struct _RSAPUBKEY
{
	unsigned int magic;
	unsigned int bitlen;
	unsigned int pubexp;
};



struct _IMAGE_TLS_DIRECTORY32
{
	unsigned int StartAddressOfRawData;
	unsigned int EndAddressOfRawData;
	unsigned int AddressOfIndex;
	unsigned int AddressOfCallBacks;
	unsigned int SizeOfZeroFill;
	unsigned int Characteristics;
};

struct _GRADIENT_RECT
{
	unsigned int UpperLeft;
	unsigned int LowerRight;
};


struct _SESSION_BUFFER
{
	char lsn;
	char state;
	char local_name[16];
	char remote_name[16];
	char rcvs_outstanding;
	char sends_outstanding;
};


struct HRSRC__
{
	int unused;
};


struct _ACL_SIZE_INFORMATION
{
	unsigned int AceCount;
	unsigned int AclBytesInUse;
	unsigned int AclBytesFree;
};


struct _CMSG_SP3_COMPATIBLE_AUX_INFO
{
	unsigned int cbSize;
	unsigned int dwFlags;
};

struct $FAF74743FBE1C8632047CFB668F7028A
{
	unsigned int LowPart;
	int HighPart;
};


struct tagDRVCONFIGINFO
{
	unsigned int dwDCISize;
	const unsigned __int16* lpszDCISectionName;
	const unsigned __int16* lpszDCIAliasName;
};



struct InterfaceSystemDestroyer
{
};


struct _CMSG_RC2_AUX_INFO
{
	unsigned int cbSize;
	unsigned int dwBitLen;
};


struct tagKERNINGPAIR
{
	unsigned __int16 wFirst;
	unsigned __int16 wSecond;
	int iKernAmount;
};

struct _GET_CHANGER_PARAMETERS
{
	unsigned int Size;
	unsigned __int16 NumberTransportElements;
	unsigned __int16 NumberStorageElements;
	unsigned __int16 NumberCleanerSlots;
	unsigned __int16 NumberIEElements;
	unsigned __int16 NumberDataTransferElements;
	unsigned __int16 NumberOfDoors;
	unsigned __int16 FirstSlotNumber;
	unsigned __int16 FirstDriveNumber;
	unsigned __int16 FirstTransportNumber;
	unsigned __int16 FirstIEPortNumber;
	unsigned __int16 FirstCleanerSlotAddress;
	unsigned __int16 MagazineSize;
	unsigned int DriveCleanTimeout;
	unsigned int Features0;
	unsigned int Features1;
	char MoveFromTransport;
	char MoveFromSlot;
	char MoveFromIePort;
	char MoveFromDrive;
	char ExchangeFromTransport;
	char ExchangeFromSlot;
	char ExchangeFromIePort;
	char ExchangeFromDrive;
	char LockUnlockCapabilities;
	char PositionCapabilities;
	char Reserved1[2];
	unsigned int Reserved2[2];
};


union $B34434447B6B77C7D7B1493D8CD04E6E
{
	unsigned __int16 UnicodeChar;
	char AsciiChar;
};
struct _PERF_INSTANCE_DEFINITION
{
	unsigned int ByteLength;
	unsigned int ParentObjectTitleIndex;
	unsigned int ParentObjectInstance;
	int UniqueID;
	unsigned int NameOffset;
	unsigned int NameLength;
};


struct _SEC_WINNT_AUTH_IDENTITY_A
{
	char* User;
	unsigned int UserLength;
	char* Domain;
	unsigned int DomainLength;
	char* Password;
	unsigned int PasswordLength;
	unsigned int Flags;
};


struct _PROVIDOR_INFO_2A
{
	char* pOrder;
};


struct _QUERY_SERVICE_LOCK_STATUSA
{
	unsigned int fIsLocked;
	char* lpLockOwner;
	unsigned int dwLockDuration;
};


struct HMIDISTRM__
{
	int unused;
};



struct IMAGE_LOAD_CONFIG_DIRECTORY64
{
	unsigned int Characteristics;
	unsigned int TimeDateStamp;
	unsigned __int16 MajorVersion;
	unsigned __int16 MinorVersion;
	unsigned int GlobalFlagsClear;
	unsigned int GlobalFlagsSet;
	unsigned int CriticalSectionDefaultTimeout;
	unsigned __int64 DeCommitFreeBlockThreshold;
	unsigned __int64 DeCommitTotalFreeThreshold;
	unsigned __int64 LockPrefixTable;
	unsigned __int64 MaximumAllocationSize;
	unsigned __int64 VirtualMemoryThreshold;
	unsigned __int64 ProcessAffinityMask;
	unsigned int ProcessHeapFlags;
	unsigned __int16 CSDVersion;
	unsigned __int16 Reserved1;
	unsigned __int64 EditList;
	unsigned int Reserved[2];
};


struct linger
{
	unsigned __int16 l_onoff;
	unsigned __int16 l_linger;
};


union $8662F439D215AAEDBB1F787C8B649648
{
	unsigned __int64 FiberData;
	unsigned int Version;
};



struct _ABCFLOAT
{
	float abcfA;
	float abcfB;
	float abcfC;
};


struct _IMAGE_ALPHA64_RUNTIME_FUNCTION_ENTRY
{
	unsigned __int64 BeginAddress;
	unsigned __int64 EndAddress;
	unsigned __int64 ExceptionHandler;
	unsigned __int64 HandlerData;
	unsigned __int64 PrologEndAddress;
};


struct _CONSOLE_CURSOR_INFO
{
	unsigned int dwSize;
	int bVisible;
};


struct _PROV_ENUMALGS
{
	unsigned int aiAlgid;
	unsigned int dwBitLen;
	unsigned int dwNameLen;
	char szName[20];
};


struct _wfinddatai64_t
{
	unsigned int attrib;
	int time_create;
	int time_access;
	int time_write;
	__int64 size;
	wchar_t name[260];
};



struct _SERVICE_DESCRIPTIONA
{
	char* lpDescription;
};


struct tagCRGB
{
	char bRed;
	char bGreen;
	char bBlue;
	char bExtra;
};


struct _CRYPT_ENROLLMENT_NAME_VALUE_PAIR
{
	unsigned __int16* pwszName;
	unsigned __int16* pwszValue;
};


struct timeval
{
	int tv_sec;
	int tv_usec;
};


struct tagBITMAP
{
	int bmType;
	int bmWidth;
	int bmHeight;
	int bmWidthBytes;
	unsigned __int16 bmPlanes;
	unsigned __int16 bmBitsPixel;
	void* bmBits;
};


struct __declspec(align(4)) tagRemHBITMAP
{
	unsigned int cbData;
	char data[1];
};


struct _TOKEN_OWNER
{
	void* Owner;
};


struct _CMSG_RC4_AUX_INFO
{
	unsigned int cbSize;
	unsigned int dwBitLen;
};


struct tMIXERCONTROLDETAILS_BOOLEAN
{
	int fValue;
};


struct __declspec(align(2)) _IMAGE_RESOURCE_DIRECTORY_STRING
{
	unsigned __int16 Length;
	char NameString[1];
};



struct _IMAGE_DOS_HEADER
{
	unsigned __int16 e_magic;
	unsigned __int16 e_cblp;
	unsigned __int16 e_cp;
	unsigned __int16 e_crlc;
	unsigned __int16 e_cparhdr;
	unsigned __int16 e_minalloc;
	unsigned __int16 e_maxalloc;
	unsigned __int16 e_ss;
	unsigned __int16 e_sp;
	unsigned __int16 e_csum;
	unsigned __int16 e_ip;
	unsigned __int16 e_cs;
	unsigned __int16 e_lfarlc;
	unsigned __int16 e_ovno;
	unsigned __int16 e_res[4];
	unsigned __int16 e_oemid;
	unsigned __int16 e_oeminfo;
	unsigned __int16 e_res2[10];
	int e_lfanew;
};


struct _ADAPTER_STATUS
{
	char adapter_address[6];
	char rev_major;
	char reserved0;
	char adapter_type;
	char rev_minor;
	unsigned __int16 duration;
	unsigned __int16 frmr_recv;
	unsigned __int16 frmr_xmit;
	unsigned __int16 iframe_recv_err;
	unsigned __int16 xmit_aborts;
	unsigned int xmit_success;
	unsigned int recv_success;
	unsigned __int16 iframe_xmit_err;
	unsigned __int16 recv_buff_unavail;
	unsigned __int16 t1_timeouts;
	unsigned __int16 ti_timeouts;
	unsigned int reserved1;
	unsigned __int16 free_ncbs;
	unsigned __int16 max_cfg_ncbs;
	unsigned __int16 max_ncbs;
	unsigned __int16 xmit_buf_unavail;
	unsigned __int16 max_dgram_size;
	unsigned __int16 pending_sess;
	unsigned __int16 max_cfg_sess;
	unsigned __int16 max_sess;
	unsigned __int16 max_sess_pkt_size;
	unsigned __int16 name_count;
};



union $30417D6DC3305618FB171BBBD15A8541
{
	unsigned int uTimeout;
	unsigned int uVersion;
};

struct HDROP__
{
	int unused;
};


struct tagCOLORADJUSTMENT
{
	unsigned __int16 caSize;
	unsigned __int16 caFlags;
	unsigned __int16 caIlluminantIndex;
	unsigned __int16 caRedGamma;
	unsigned __int16 caGreenGamma;
	unsigned __int16 caBlueGamma;
	unsigned __int16 caReferenceBlack;
	unsigned __int16 caReferenceWhite;
	__int16 caContrast;
	__int16 caBrightness;
	__int16 caColorfulness;
	__int16 caRedGreenTint;
};

struct _FPO_DATA
{
	unsigned int ulOffStart;
	unsigned int cbProcSize;
	unsigned int cdwLocals;
	unsigned __int16 cdwParams;
	unsigned __int16 cbProlog : 8;
	unsigned __int16 cbRegs : 3;
	unsigned __int16 fHasSEH : 1;
	unsigned __int16 fUseBP : 1;
	unsigned __int16 reserved : 1;
	unsigned __int16 cbFrame : 2;
};



struct _SEC_WINNT_AUTH_IDENTITY_W
{
	unsigned __int16* User;
	unsigned int UserLength;
	unsigned __int16* Domain;
	unsigned int DomainLength;
	unsigned __int16* Password;
	unsigned int PasswordLength;
	unsigned int Flags;
};


struct _RPC_PROTSEQ_VECTORA
{
	unsigned int Count;
	char* Protseq[1];
};


struct _MENU_EVENT_RECORD
{
	unsigned int dwCommandId;
};


struct _REMOTE_NAME_INFOA
{
	char* lpUniversalName;
	char* lpConnectionName;
	char* lpRemainingPath;
};


struct _DATATYPES_INFO_1W
{
	unsigned __int16* pName;
};


struct _FIND_NAME_HEADER
{
	unsigned __int16 node_count;
	char reserved;
	char unique_group;
};


struct tagFILTERKEYS
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned int iWaitMSec;
	unsigned int iDelayMSec;
	unsigned int iRepeatMSec;
	unsigned int iBounceMSec;
};


struct _FIND_NAME_BUFFER
{
	char length;
	char access_control;
	char frame_control;
	char destination_addr[6];
	char source_addr[6];
	char routing_info[18];
};


struct _ACTION_HEADER
{
	unsigned int transport_id;
	unsigned __int16 action_code;
	unsigned __int16 reserved;
};


struct _DOCINFOW
{
	int cbSize;
	const unsigned __int16* lpszDocName;
	const unsigned __int16* lpszOutput;
	const unsigned __int16* lpszDatatype;
	unsigned int fwType;
};


struct __declspec(align(4)) tagSTATPROPSTG
{
	unsigned __int16* lpwstrName;
	unsigned int propid;
	unsigned __int16 vt;
};


struct HMIDI__
{
	int unused;
};


struct _WSANETWORKEVENTS
{
	int lNetworkEvents;
	int iErrorCode[10];
};


struct tagOleMenuGroupWidths
{
	int width[6];
};


struct tagNEWTEXTMETRICW
{
	int tmHeight;
	int tmAscent;
	int tmDescent;
	int tmInternalLeading;
	int tmExternalLeading;
	int tmAveCharWidth;
	int tmMaxCharWidth;
	int tmWeight;
	int tmOverhang;
	int tmDigitizedAspectX;
	int tmDigitizedAspectY;
	unsigned __int16 tmFirstChar;
	unsigned __int16 tmLastChar;
	unsigned __int16 tmDefaultChar;
	unsigned __int16 tmBreakChar;
	char tmItalic;
	char tmUnderlined;
	char tmStruckOut;
	char tmPitchAndFamily;
	char tmCharSet;
	unsigned int ntmFlags;
	unsigned int ntmSizeEM;
	unsigned int ntmCellHeight;
	unsigned int ntmAvgWidth;
};


struct _IMAGE_RESOURCE_DIR_STRING_U
{
	unsigned __int16 Length;
	unsigned __int16 NameString[1];
};


struct HMIXER__
{
	int unused;
};


struct BATTERY_REPORTING_SCALE
{
	unsigned int Granularity;
	unsigned int Capacity;
};



struct _complex
{
	long double x;
	long double y;
};


struct tagMCI_RECORD_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrom;
	unsigned int dwTo;
};

struct SERVICE_STATUS_HANDLE__
{
	int unused;
};


struct tagMCI_VD_PLAY_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrom;
	unsigned int dwTo;
	unsigned int dwSpeed;
};


struct _DRIVER_INFO_1W
{
	unsigned __int16* pName;
};



struct _exception
{
	int type;
	char* name;
	long double arg1;
	long double arg2;
	long double retval;
};


struct HWAVE__
{
	int unused;
};



struct _DRIVER_INFO_2A
{
	unsigned int cVersion;
	char* pName;
	char* pEnvironment;
	char* pDriverPath;
	char* pDataFile;
	char* pConfigFile;
};


struct __declspec(align(4)) _cpinfo
{
	unsigned int MaxCharSize;
	char DefaultChar[2];
	char LeadByte[12];
};


struct _PSFEATURE_OUTPUT
{
	int bPageIndependent;
	int bSetPageDevice;
};



struct tagMIDIINCAPSW
{
	unsigned __int16 wMid;
	unsigned __int16 wPid;
	unsigned int vDriverVersion;
	unsigned __int16 szPname[32];
	unsigned int dwSupport;
};


struct _wfinddata_t
{
	unsigned int attrib;
	int time_create;
	int time_access;
	int time_write;
	unsigned int size;
	wchar_t name[260];
};


struct netent
{
	char* n_name;
	char** n_aliases;
	__int16 n_addrtype;
	unsigned int n_net;
};


struct __declspec(align(4)) tagCURSORSHAPE
{
	int xHotSpot;
	int yHotSpot;
	int cx;
	int cy;
	int cbWidth;
	char Planes;
	char BitsPixel;
};



struct _CERT_SYSTEM_STORE_INFO
{
	unsigned int cbSize;
};

struct HCOLORSPACE__
{
	int unused;
};



struct _TAPE_CREATE_PARTITION
{
	unsigned int Method;
	unsigned int Count;
	unsigned int Size;
};


struct joyinfo_tag
{
	unsigned int wXpos;
	unsigned int wYpos;
	unsigned int wZpos;
	unsigned int wButtons;
};

struct __declspec(align(4)) datetype
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	bool tm_isdst;
};

struct tagSOUNDSENTRYW
{
	unsigned int cbSize;
	unsigned int dwFlags;
	unsigned int iFSTextEffect;
	unsigned int iFSTextEffectMSec;
	unsigned int iFSTextEffectColorBits;
	unsigned int iFSGrafEffect;
	unsigned int iFSGrafEffectMSec;
	unsigned int iFSGrafEffectColor;
	unsigned int iWindowsEffect;
	unsigned int iWindowsEffectMSec;
	unsigned __int16* lpszWindowsEffectDLL;
	unsigned int iWindowsEffectOrdinal;
};


struct tagMCI_SET_PARMS
{
	unsigned int dwCallback;
	unsigned int dwTimeFormat;
	unsigned int dwAudio;
};



struct tagSTGOPTIONS
{
	unsigned __int16 usVersion;
	unsigned __int16 reserved;
	unsigned int ulSectorSize;
	const unsigned __int16* pwcsTemplateFile;
};


struct _JOBOBJECT_BASIC_PROCESS_ID_LIST
{
	unsigned int NumberOfAssignedProcesses;
	unsigned int NumberOfProcessIdsInList;
	unsigned int ProcessIdList[1];
};

struct SqCoord
{
	int x;
	int y;
};



struct FreelistDef
{
	bool m_bRecycle;
	bool m_bShrink;
	unsigned int m_nIdealSize;
	unsigned int m_nMaxSize;
};



struct __declspec(align(8)) CPhysicsObj_CollisionRecord
{
	long double touched_time;
	int ethereal;
};



struct RGBColor
{
	float r;
	float g;
	float b;
};


struct __declspec(align(4)) _FILE_NOTIFY_INFORMATION
{
	unsigned int NextEntryOffset;
	unsigned int Action;
	unsigned int FileNameLength;
	unsigned __int16 FileName[1];
};



struct GlobalVoyeurInfo
{
	unsigned int object_iid;
	unsigned int type;
	int ref_count;
};

struct NUMPARSE
{
	int cDig;
	unsigned int dwInFlags;
	unsigned int dwOutFlags;
	int cchUsed;
	int nBaseShift;
	int nPwr10;
};


struct _IMAGE_RESOURCE_DIRECTORY
{
	unsigned int Characteristics;
	unsigned int TimeDateStamp;
	unsigned __int16 MajorVersion;
	unsigned __int16 MinorVersion;
	unsigned __int16 NumberOfNamedEntries;
	unsigned __int16 NumberOfIdEntries;
};


struct CQuickTimer
{
	unsigned int m_dwStart;
	unsigned int m_dwInterval;
};


volatile struct TimeSource_QueryPerformanceCounter_StateData
{
	long double tLastTime;
	unsigned int dwFlags;
	long double tReference;
	unsigned int dwReferenceTGT;
	unsigned __int64 qwReferenceQPC;
};



struct _ldiv_t
{
	int quot;
	int rem;
};


struct _SERVICE_DESCRIPTIONW
{
	unsigned __int16* lpDescription;
};

union $E38888FFFF2E8047BDBD55C921E86469
{
	unsigned int FiberData;
	unsigned int Version;
};



struct _iobuf
{
	char* _ptr;
	int _cnt;
	char* _base;
	int _flag;
	int _file;
	int _charbuf;
	int _bufsiz;
	char* _tmpfname;
};


struct _IMAGE_TLS_DIRECTORY64
{
	unsigned __int64 StartAddressOfRawData;
	unsigned __int64 EndAddressOfRawData;
	unsigned __int64 AddressOfIndex;
	unsigned __int64 AddressOfCallBacks;
	unsigned int SizeOfZeroFill;
	unsigned int Characteristics;
};



struct stat
{
	unsigned int st_dev;
	unsigned __int16 st_ino;
	unsigned __int16 st_mode;
	__int16 st_nlink;
	__int16 st_uid;
	__int16 st_gid;
	unsigned int st_rdev;
	int st_size;
	int st_atime;
	int st_mtime;
	int st_ctime;
};



struct DDEDATA
{
	unsigned __int16 unused : 12;
	unsigned __int16 fResponse : 1;
	unsigned __int16 fRelease : 1;
	unsigned __int16 reserved : 1;
	unsigned __int16 fAckReq : 1;
	__int16 cfFormat;
	char Value[1];
};


struct _EVENTLOG_FULL_INFORMATION
{
	unsigned int dwFull;
};


struct HHOOK__
{
	int unused;
};



struct $6177A0AD8E9F0D390D62242D769E2CDF
{
	char DataBuffer[1];
};

struct __stat64
{
	unsigned int st_dev;
	unsigned __int16 st_ino;
	unsigned __int16 st_mode;
	__int16 st_nlink;
	__int16 st_uid;
	__int16 st_gid;
	unsigned int st_rdev;
	__int64 st_size;
	__int64 st_atime;
	__int64 st_mtime;
	__int64 st_ctime;
};


struct _PERF_COUNTER_BLOCK
{
	unsigned int ByteLength;
};


struct __declspec(align(4)) _TAPE_PREPARE
{
	unsigned int Operation;
	char Immediate;
};



struct _JOBOBJECT_BASIC_UI_RESTRICTIONS
{
	unsigned int UIRestrictionsClass;
};


struct RPC_CLIENT_INFORMATION1
{
	char* UserName;
	char* ComputerName;
	unsigned __int16 Privilege;
	unsigned int AuthFlags;
};



struct LIST_ENTRY64
{
	unsigned __int64 Flink;
	unsigned __int64 Blink;
};


struct HPEN__
{
	int unused;
};


struct _tagCODEBASEHOLD
{
	unsigned int cbSize;
	unsigned __int16* szDistUnit;
	unsigned __int16* szCodeBase;
	unsigned int dwVersionMS;
	unsigned int dwVersionLS;
	unsigned int dwStyle;
};



struct __declspec(align(8)) _stati64
{
	unsigned int st_dev;
	unsigned __int16 st_ino;
	unsigned __int16 st_mode;
	__int16 st_nlink;
	__int16 st_uid;
	__int16 st_gid;
	unsigned int st_rdev;
	__int64 st_size;
	int st_atime;
	int st_mtime;
	int st_ctime;
};



struct _CRYPT_URL_INFO
{
	unsigned int cbSize;
	unsigned int dwSyncDeltaTime;
	unsigned int cGroup;
	unsigned int* rgcGroupEntry;
};



struct _TAPE_GET_DRIVE_PARAMETERS
{
	char ECC;
	char Compression;
	char DataPadding;
	char ReportSetmarks;
	unsigned int DefaultBlockSize;
	unsigned int MaximumBlockSize;
	unsigned int MinimumBlockSize;
	unsigned int MaximumPartitionCount;
	unsigned int FeaturesLow;
	unsigned int FeaturesHigh;
	unsigned int EOTWarningZoneSize;
};



struct _TAPE_SET_MEDIA_PARAMETERS
{
	unsigned int BlockSize;
};


struct DDEACK
{
	unsigned __int16 bAppReturnCode : 8;
	unsigned __int16 reserved : 6;
	unsigned __int16 fBusy : 1;
	unsigned __int16 fAck : 1;
};


struct _RPC_BINDING_VECTOR
{
	unsigned int Count;
	void* BindingH[1];
};



struct tagMDICREATESTRUCTW
{
	const unsigned __int16* szClass;
	const unsigned __int16* szTitle;
	void* hOwner;
	int x;
	int y;
	int cx;
	int cy;
	unsigned int style;
	int lParam;
};


struct tagMCI_ANIM_PLAY_PARMS
{
	unsigned int dwCallback;
	unsigned int dwFrom;
	unsigned int dwTo;
	unsigned int dwSpeed;
};


struct SCARD_READERSTATEW
{
	const unsigned __int16* szReader;
	void* pvUserData;
	unsigned int dwCurrentState;
	unsigned int dwEventState;
	unsigned int cbAtr;
	char rgbAtr[36];
};


union $980F6A28C67C8F3640106D01D4C85A6A
{
	unsigned int Characteristics;
	unsigned int OriginalFirstThunk;
};



struct _tagDATAINFO
{
	unsigned int ulTotalSize;
	unsigned int ulavrPacketSize;
	unsigned int ulConnectSpeed;
	unsigned int ulProcessorSpeed;
};


struct _DISK_LOGGING
{
	char Function;
	void* BufferAddress;
	unsigned int BufferSize;
};


union $6E03E74EEA369F7A495E2D00D4F13CF6
{
	unsigned __int64 ActiveProcessorsAffinityMask[16];
	unsigned __int64 AvailableMemory[16];
};


struct _EXCEPTION_RECORD64
{
	unsigned int ExceptionCode;
	unsigned int ExceptionFlags;
	unsigned __int64 ExceptionRecord;
	unsigned __int64 ExceptionAddress;
	unsigned int NumberParameters;
	unsigned int __unusedAlignment;
	unsigned __int64 ExceptionInformation[15];
};


struct pvalueW
{
	unsigned __int16* pv_valuename;
	int pv_valuelen;
	void* pv_value_context;
	unsigned int pv_type;
};


struct tagMCI_INFO_PARMSA
{
	unsigned int dwCallback;
	char* lpstrReturn;
	unsigned int dwRetSize;
};


 __unaligned __declspec(align(4)) struct _SHQUERYRBINFO
{
	unsigned int cbSize;
	__int64 i64Size;
	__int64 i64NumItems;
};


union $644E3772CE471009796AF877D4363EF9
{
	void* pvSystemStore;
	const unsigned __int8* pszSystemStore;
	const unsigned __int16* pwszSystemStore;
};



struct tm
{
	int tm_sec;
	int tm_min;
	int tm_hour;
	int tm_mday;
	int tm_mon;
	int tm_year;
	int tm_wday;
	int tm_yday;
	int tm_isdst;
};



struct _PSFEATURE_CUSTPAPER
{
	int lOrientation;
	int lWidth;
	int lHeight;
	int lWidthOffset;
	int lHeightOffset;
};

union $0055FF1BE34206123B9C488F0A43FAA0
{
	unsigned __int64 ForwarderString;
	unsigned __int64 Function;
	unsigned __int64 Ordinal;
	unsigned __int64 AddressOfData;
};


struct _xml_error
{
	unsigned int _nLine;
	unsigned __int16* _pchBuf;
	unsigned int _cchBuf;
	unsigned int _ich;
	unsigned __int16* _pszFound;
	unsigned __int16* _pszExpected;
	unsigned int _reserved1;
	unsigned int _reserved2;
};


struct __declspec(align(4)) protoent
{
	char* p_name;
	char** p_aliases;
	__int16 p_proto;
};


struct HDESK__
{
	int unused;
};

struct MENUITEMTEMPLATE
{
	unsigned __int16 mtOption;
	unsigned __int16 mtID;
	unsigned __int16 mtString[1];
};


struct DDEPOKE
{
	unsigned __int16 unused : 13;
	unsigned __int16 fRelease : 1;
	unsigned __int16 fReserved : 2;
	__int16 cfFormat;
	char Value[1];
};


struct DDELN
{
	unsigned __int16 unused : 13;
	unsigned __int16 fRelease : 1;
	unsigned __int16 fDeferUpd : 1;
	unsigned __int16 fAckReq : 1;
	__int16 cfFormat;
};


struct DDEUP
{
	unsigned __int16 unused : 12;
	unsigned __int16 fAck : 1;
	unsigned __int16 fRelease : 1;
	unsigned __int16 fReserved : 1;
	unsigned __int16 fAckReq : 1;
	__int16 cfFormat;
	char rgb[1];
};


struct RPC_STATS_VECTOR
{
	unsigned int Count;
	unsigned int Stats[1];
};



struct __declspec(align(4)) tagRemSNB
{
	unsigned int ulCntStr;
	unsigned int ulCntChar;
	unsigned __int16 rgString[1];
};


struct _PUBLICKEYSTRUC
{
	char bType;
	char bVersion;
	unsigned __int16 reserved;
	unsigned int aiKeyAlg;
};


struct tagGCP_RESULTSW
{
	unsigned int lStructSize;
	unsigned __int16* lpOutString;
	unsigned int* lpOrder;
	int* lpDx;
	int* lpCaretPos;
	char* lpClass;
	unsigned __int16* lpGlyphs;
	unsigned int nGlyphs;
	int nMaxFit;
};


struct __declspec(align(2)) _IMAGE_IMPORT_BY_NAME
{
	unsigned __int16 Hint;
	char Name[1];
};


struct __s_GUID
{
	unsigned int Data1;
	unsigned __int16 Data2;
	unsigned __int16 Data3;
	char Data4[8];
};



struct _CRYPT_KEY_VERIFY_MESSAGE_PARA
{
	unsigned int cbSize;
	unsigned int dwMsgEncodingType;
	unsigned int hCryptProv;
};



struct _CERT_CHAIN_ENGINE_CONFIG
{
	unsigned int cbSize;
	void* hRestrictedRoot;
	void* hRestrictedTrust;
	void* hRestrictedOther;
	unsigned int cAdditionalStore;
	void* rghAdditionalStore;
	unsigned int dwFlags;
	unsigned int dwUrlRetrievalTimeout;
	unsigned int MaximumCachedCertificates;
	unsigned int CycleDetectionModulus;
};

struct PerfTimer
{
	unsigned __int64 m_startTime;
};


struct PerfTimer_Initializer
{
};


struct HSTR__
{
	int unused;
};


struct _ACL_REVISION_INFORMATION
{
	unsigned int AclRevision;
};



struct Vector4
{
	float x;
	float y;
	float z;
	float w;
};


struct HMIXEROBJ__
{
	int unused;
};


struct You_Need_To_Use_DECLARE_TURBINE_INTERFACE
{
};



struct _STL___ptr_base
{
	void* _M_p;
};


struct __declspec(align(8)) ostream
{
	_BYTE gap0[4];
	int x_floatused;
	_BYTE gap8[80];
};


struct __declspec(align(4)) istream
{
	_BYTE gap0[4];
	int _fGline;
	int x_gcount;
	_BYTE gapC[80];
};

struct PortalEvent
{
	void* eventHandle_;
};


struct RegEdit
{
};

struct ClassRegistrarClient_ClassType
{
};




#endif