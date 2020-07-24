

struct tagPDEXA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  HDC__ *hDC;
  unsigned int Flags;
  unsigned int Flags2;
  unsigned int ExclusionFlags;
  unsigned int nPageRanges;
  unsigned int nMaxPageRanges;
  tagPRINTPAGERANGE *lpPageRanges;
  unsigned int nMinPage;
  unsigned int nMaxPage;
  unsigned int nCopies;
  HINSTANCE__ *hInstance;
  const char *lpPrintTemplateName;
  IUnknown *lpCallback;
  unsigned int nPropertyPages;
  _PSP **lphPropertyPages;
  unsigned int nStartPage;
  unsigned int dwResultAction;
};


struct _EXCEPTION_RECORD
{
  unsigned int ExceptionCode;
  unsigned int ExceptionFlags;
  _EXCEPTION_RECORD *ExceptionRecord;
  void *ExceptionAddress;
  unsigned int NumberParameters;
  unsigned int ExceptionInformation[15];
};



struct $B2E44C90C632A428B81AE7BCA4EF9DC3
{
  void (__stdcall *NotificationRoutine)(_RPC_ASYNC_STATE *, void *, _RPC_ASYNC_EVENT);
  void *hThread;
};


struct $545CB23F80113685974FE6DE440CC8DA
{
  void *hIOPort;
  unsigned int dwNumberOfBytesTransferred;
  unsigned int dwCompletionKey;
  _OVERLAPPED *lpOverlapped;
};


struct $0621D334C15857BC587ACE94AFB92B6D
{
  HWND__ *hWnd;
  unsigned int Msg;
};


union E11C80037706C1A66BF97122539306A7E
{
  $B2E44C90C632A428B81AE7BCA4EF9DC3 APC;
  $545CB23F80113685974FE6DE440CC8DA IOC;
  $0621D334C15857BC587ACE94AFB92B6D HWND;
  void *hEvent;
  void (__stdcall *NotificationRoutine)(_RPC_ASYNC_STATE *, void *, _RPC_ASYNC_EVENT);
};

struct _OVERLAPPED
{
  unsigned int Internal;
  unsigned int InternalHigh;
  $A5A483E05FC9B52B872A8DCFA58CFF52 ___u2;
  unsigned int OffsetHigh;
  void *hEvent;
};





union $F2E003516E3D3EB93273B8D5D1F8D68A
{
  const char *pszTemplate;
  DLGTEMPLATE *pResource;
};


union $864CA0437219939730246E31FD89420B
{
  HICON__ *hIcon;
  const char *pszIcon;
};


struct _PROPSHEETPAGEA
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $F2E003516E3D3EB93273B8D5D1F8D68A ___u3;
  $864CA0437219939730246E31FD89420B ___u4;
  const char *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEA *);
  unsigned int *pcRefParent;
  const char *pszHeaderTitle;
  const char *pszHeaderSubTitle;
};


struct _PROPSHEETPAGEA_V3
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $F2E003516E3D3EB93273B8D5D1F8D68A ___u3;
  $864CA0437219939730246E31FD89420B ___u4;
  const char *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEA *);
  unsigned int *pcRefParent;
  const char *pszHeaderTitle;
  const char *pszHeaderSubTitle;
  void *hActCtx;
};




struct tagEMRARC
{
  tagEMR emr;
  _RECTL rclBox;
  _POINTL ptlStart;
  _POINTL ptlEnd;
};





struct tagICONMETRICSW
{
  unsigned int cbSize;
  int iHorzSpacing;
  int iVertSpacing;
  int iTitleWrap;
  tagLOGFONTW lfFont;
};


struct _CERT_CONTEXT
{
  unsigned int dwCertEncodingType;
  char *pbCertEncoded;
  unsigned int cbCertEncoded;
  _CERT_INFO *pCertInfo;
  void *hCertStore;
};





struct _CRL_ENTRY
{
  _CRYPTOAPI_BLOB SerialNumber;
  _FILETIME RevocationDate;
  unsigned int cExtension;
  _CERT_EXTENSION *rgExtension;
};


struct _CRL_INFO
{
  unsigned int dwVersion;
  _CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
  _CRYPTOAPI_BLOB Issuer;
  _FILETIME ThisUpdate;
  _FILETIME NextUpdate;
  unsigned int cCRLEntry;
  _CRL_ENTRY *rgCRLEntry;
  unsigned int cExtension;
  _CERT_EXTENSION *rgExtension;
};


const struct _CRL_CONTEXT
{
  unsigned int dwCertEncodingType;
  char *pbCrlEncoded;
  unsigned int cbCrlEncoded;
  _CRL_INFO *pCrlInfo;
  void *hCertStore;
};


struct _CERT_REVOCATION_CRL_INFO
{
  unsigned int cbSize;
  _CRL_CONTEXT *pBaseCrlContext;
  _CRL_CONTEXT *pDeltaCrlContext;
  _CRL_ENTRY *pCrlEntry;
  int fDeltaCrlEntry;
};


struct _CERT_REVOCATION_INFO
{
  unsigned int cbSize;
  unsigned int dwRevocationResult;
  const char *pszRevocationOid;
  void *pvOidSpecificInfo;
  int fHasFreshnessTime;
  unsigned int dwFreshnessTime;
  _CERT_REVOCATION_CRL_INFO *pCrlInfo;
};





struct _CERT_CHAIN_ELEMENT
{
  unsigned int cbSize;
  _CERT_CONTEXT *pCertContext;
  _CERT_TRUST_STATUS TrustStatus;
  _CERT_REVOCATION_INFO *pRevocationInfo;
  _CTL_USAGE *pIssuanceUsage;
  _CTL_USAGE *pApplicationUsage;
  const unsigned __int16 *pwszExtendedErrorInfo;
};





union $2F7BEAB1D896985B27D8ECD2F7D56C7C
{
  unsigned int adwData[2];
  $FEAB62C056B7B19C610CD18E991278A7 Data;
};


struct _PRINTER_NOTIFY_INFO_DATA
{
  unsigned __int16 Type;
  unsigned __int16 Field;
  unsigned int Reserved;
  unsigned int Id;
  $2F7BEAB1D896985B27D8ECD2F7D56C7C NotifyData;
};










struct _SHCREATEPROCESSINFOW
{
  unsigned int cbSize;
  unsigned int fMask;
  HWND__ *hwnd;
  const unsigned __int16 *pszFile;
  const unsigned __int16 *pszParameters;
  const unsigned __int16 *pszCurrentDirectory;
  void *hUserToken;
  _SECURITY_ATTRIBUTES *lpProcessAttributes;
  _SECURITY_ATTRIBUTES *lpThreadAttributes;
  int bInheritHandles;
  unsigned int dwCreationFlags;
  _STARTUPINFOW *lpStartupInfo;
  _PROCESS_INFORMATION *lpProcessInformation;
};


struct _CRYPT_ATTRIBUTE
{
  char *pszObjId;
  unsigned int cValue;
  _CRYPTOAPI_BLOB *rgValue;
};


struct _CRYPT_ATTRIBUTES
{
  unsigned int cAttr;
  _CRYPT_ATTRIBUTE *rgAttr;
};





union _userHGLOBAL___MIDL_IWinTypes_0003
{
  int hInproc;
  _FLAGGED_BYTE_BLOB *hRemote;
  __int64 hInproc64;
};


struct _userHGLOBAL
{
  int fContext;
  _userHGLOBAL___MIDL_IWinTypes_0003 u;
};


struct IInternetProtocolSinkStackable : IUnknown
{
};


struct tagOFNW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpstrFilter;
  unsigned __int16 *lpstrCustomFilter;
  unsigned int nMaxCustFilter;
  unsigned int nFilterIndex;
  unsigned __int16 *lpstrFile;
  unsigned int nMaxFile;
  unsigned __int16 *lpstrFileTitle;
  unsigned int nMaxFileTitle;
  const unsigned __int16 *lpstrInitialDir;
  const unsigned __int16 *lpstrTitle;
  unsigned int Flags;
  unsigned __int16 nFileOffset;
  unsigned __int16 nFileExtension;
  const unsigned __int16 *lpstrDefExt;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpTemplateName;
  void *pvReserved;
  unsigned int dwReserved;
  unsigned int FlagsEx;
};




struct _NOTIFYICONDATAA
{
  unsigned int cbSize;
  HWND__ *hWnd;
  unsigned int uID;
  unsigned int uFlags;
  unsigned int uCallbackMessage;
  HICON__ *hIcon;
  char szTip[64];
};


struct _CMC_ADD_EXTENSIONS_INFO
{
  unsigned int dwCmcDataReference;
  unsigned int cCertReference;
  unsigned int *rgdwCertReference;
  unsigned int cExtension;
  _CERT_EXTENSION *rgExtension;
};





struct _CHANGER_ELEMENT
{
  _ELEMENT_TYPE ElementType;
  unsigned int ElementAddress;
};




struct _PRINTER_NOTIFY_OPTIONS
{
  unsigned int Version;
  unsigned int Flags;
  unsigned int Count;
  _PRINTER_NOTIFY_OPTIONS_TYPE *pTypes;
};


struct IOleCacheControl : IUnknown
{
};







struct __declspec(align(4)) _COMMCONFIG
{
  unsigned int dwSize;
  unsigned __int16 wVersion;
  unsigned __int16 wReserved;
  _DCB dcb;
  unsigned int dwProviderSubType;
  unsigned int dwProviderOffset;
  unsigned int dwProviderSize;
  unsigned __int16 wcProviderData[1];
};







struct __declspec(align(4)) tagEXTLOGFONTW
{
  tagLOGFONTW elfLogFont;
  unsigned __int16 elfFullName[64];
  unsigned __int16 elfStyle[32];
  unsigned int elfVersion;
  unsigned int elfStyleSize;
  unsigned int elfMatch;
  unsigned int elfReserved;
  char elfVendorId[4];
  unsigned int elfCulture;
  tagPANOSE elfPanose;
};


struct tagEMREXTCREATEFONTINDIRECTW
{
  tagEMR emr;
  unsigned int ihFont;
  tagEXTLOGFONTW elfw;
};








struct _CRYPT_KEY_PROV_INFO
{
  unsigned __int16 *pwszContainerName;
  unsigned __int16 *pwszProvName;
  unsigned int dwProvType;
  unsigned int dwFlags;
  unsigned int cProvParam;
  _CRYPT_KEY_PROV_PARAM *rgProvParam;
  unsigned int dwKeySpec;
};








struct tagEMROFFSETCLIPRGN
{
  tagEMR emr;
  _POINTL ptlOffset;
};








struct _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO
{
  unsigned int cbSize;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  void *pvKeyEncryptionAuxInfo;
  unsigned int hCryptProv;
  unsigned int dwKeyChoice;
  $444B8AF3F414656C8F88F98B3D40B8AE ___u5;
  _CRYPTOAPI_BLOB KeyId;
  _FILETIME Date;
  _CRYPT_ATTRIBUTE_TYPE_VALUE *pOtherAttr;
};








struct ISynchronize : IUnknown
{
};


struct tagFINDREPLACEA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  unsigned int Flags;
  char *lpstrFindWhat;
  char *lpstrReplaceWith;
  unsigned __int16 wFindWhatLen;
  unsigned __int16 wReplaceWithLen;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpTemplateName;
};







struct _LUID_AND_ATTRIBUTES
{
  _LUID Luid;
  unsigned int Attributes;
};


struct tagPOLYTEXTA
{
  int x;
  int y;
  unsigned int n;
  const char *lpstr;
  unsigned int uiFlags;
  tagRECT rcl;
  int *pdx;
};


struct tagEMRSELECTOBJECT
{
  tagEMR emr;
  unsigned int ihObject;
};


struct __declspec(align(4)) tagEMRPOLYDRAW
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cptl;
  _POINTL aptl[1];
  char abTypes[1];
};





struct _DISK_GEOMETRY
{
  _LARGE_INTEGER Cylinders;
  _MEDIA_TYPE MediaType;
  unsigned int TracksPerCylinder;
  unsigned int SectorsPerTrack;
  unsigned int BytesPerSector;
};





struct tagMINMAXINFO
{
	tagPOINT ptReserved;
	tagPOINT ptMaxSize;
	tagPOINT ptMaxPosition;
	tagPOINT ptMinTrackSize;
	tagPOINT ptMaxTrackSize;
};






struct tagWAVEOUTCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct tagMCI_ANIM_WINDOW_PARMSA
{
  unsigned int dwCallback;
  HWND__ *hWnd;
  unsigned int nCmdShow;
  const char *lpstrText;
};














struct _CRYPT_SIGN_MESSAGE_PARA
{
  unsigned int cbSize;
  unsigned int dwMsgEncodingType;
  _CERT_CONTEXT *pSigningCert;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  void *pvHashAuxInfo;
  unsigned int cMsgCert;
  _CERT_CONTEXT **rgpMsgCert;
  unsigned int cMsgCrl;
  _CRL_CONTEXT **rgpMsgCrl;
  unsigned int cAuthAttr;
  _CRYPT_ATTRIBUTE *rgAuthAttr;
  unsigned int cUnauthAttr;
  _CRYPT_ATTRIBUTE *rgUnauthAttr;
  unsigned int dwFlags;
  unsigned int dwInnerContentType;
};





struct IDropTarget : IUnknown
{
};


struct IDataObject
{
  IDataObjectVtbl *lpVtbl;
};


struct IDataObjectVtbl
{
  int (__stdcall *QueryInterface)(IDataObject *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IDataObject *);
  unsigned int (__stdcall *Release)(IDataObject *);
  int (__stdcall *GetData)(IDataObject *, tagFORMATETC *, tagSTGMEDIUM *);
  int (__stdcall *GetDataHere)(IDataObject *, tagFORMATETC *, tagSTGMEDIUM *);
  int (__stdcall *QueryGetData)(IDataObject *, tagFORMATETC *);
  int (__stdcall *GetCanonicalFormatEtc)(IDataObject *, tagFORMATETC *, tagFORMATETC *);
  int (__stdcall *SetData)(IDataObject *, tagFORMATETC *, tagSTGMEDIUM *, int);
  int (__stdcall *EnumFormatEtc)(IDataObject *, unsigned int, IEnumFORMATETC **);
  int (__stdcall *DAdvise)(IDataObject *, tagFORMATETC *, unsigned int, IAdviseSink *, unsigned int *);
  int (__stdcall *DUnadvise)(IDataObject *, unsigned int);
  int (__stdcall *EnumDAdvise)(IDataObject *, IEnumSTATDATA **);
};


struct tagFORMATETC
{
  unsigned __int16 cfFormat;
  tagDVTARGETDEVICE *ptd;
  unsigned int dwAspect;
  int lindex;
  unsigned int tymed;
};


union $5FBF876555A0AA89A74115D4615BDCE8
{
  HBITMAP__ *hBitmap;
  void *hMetaFilePict;
  HENHMETAFILE__ *hEnhMetaFile;
  void *hGlobal;
  unsigned __int16 *lpszFileName;
  IStream *pstm;
  IStorage *pstg;
};


struct tagSTGMEDIUM
{
  unsigned int tymed;
  $5FBF876555A0AA89A74115D4615BDCE8 ___u1;
  IUnknown *pUnkForRelease;
};


struct IEnumFORMATETC
{
  IEnumFORMATETCVtbl *lpVtbl;
};


struct IAdviseSink
{
  IAdviseSinkVtbl *lpVtbl;
};


struct IEnumSTATDATA
{
  IEnumSTATDATAVtbl *lpVtbl;
};








struct ISequentialStream : IUnknown
{
};


struct IStream : ISequentialStream
{
};


struct IStorage : IUnknown
{
};


struct IEnumFORMATETCVtbl
{
  int (__stdcall *QueryInterface)(IEnumFORMATETC *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumFORMATETC *);
  unsigned int (__stdcall *Release)(IEnumFORMATETC *);
  int (__stdcall *Next)(IEnumFORMATETC *, unsigned int, tagFORMATETC *, unsigned int *);
  int (__stdcall *Skip)(IEnumFORMATETC *, unsigned int);
  int (__stdcall *Reset)(IEnumFORMATETC *);
  int (__stdcall *Clone)(IEnumFORMATETC *, IEnumFORMATETC **);
};


struct IAdviseSinkVtbl
{
  int (__stdcall *QueryInterface)(IAdviseSink *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IAdviseSink *);
  unsigned int (__stdcall *Release)(IAdviseSink *);
  void (__stdcall *OnDataChange)(IAdviseSink *, tagFORMATETC *, tagSTGMEDIUM *);
  void (__stdcall *OnViewChange)(IAdviseSink *, unsigned int, int);
  void (__stdcall *OnRename)(IAdviseSink *, IMoniker *);
  void (__stdcall *OnSave)(IAdviseSink *);
  void (__stdcall *OnClose)(IAdviseSink *);
};


struct IEnumSTATDATAVtbl
{
  int (__stdcall *QueryInterface)(IEnumSTATDATA *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumSTATDATA *);
  unsigned int (__stdcall *Release)(IEnumSTATDATA *);
  int (__stdcall *Next)(IEnumSTATDATA *, unsigned int, tagSTATDATA *, unsigned int *);
  int (__stdcall *Skip)(IEnumSTATDATA *, unsigned int);
  int (__stdcall *Reset)(IEnumSTATDATA *);
  int (__stdcall *Clone)(IEnumSTATDATA *, IEnumSTATDATA **);
};


struct IMoniker
{
  IMonikerVtbl *lpVtbl;
};


struct tagSTATDATA
{
  tagFORMATETC formatetc;
  unsigned int advf;
  IAdviseSink *pAdvSink;
  unsigned int dwConnection;
};


struct IMonikerVtbl
{
  int (__stdcall *QueryInterface)(IMoniker *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IMoniker *);
  unsigned int (__stdcall *Release)(IMoniker *);
  int (__stdcall *GetClassID)(IMoniker *, _GUID *);
  int (__stdcall *IsDirty)(IMoniker *);
  int (__stdcall *Load)(IMoniker *, IStream *);
  int (__stdcall *Save)(IMoniker *, IStream *, int);
  int (__stdcall *GetSizeMax)(IMoniker *, _ULARGE_INTEGER *);
  int (__stdcall *BindToObject)(IMoniker *, IBindCtx *, IMoniker *, _GUID *const , void **);
  int (__stdcall *BindToStorage)(IMoniker *, IBindCtx *, IMoniker *, _GUID *const , void **);
  int (__stdcall *Reduce)(IMoniker *, IBindCtx *, unsigned int, IMoniker **, IMoniker **);
  int (__stdcall *ComposeWith)(IMoniker *, IMoniker *, int, IMoniker **);
  int (__stdcall *Enum)(IMoniker *, int, IEnumMoniker **);
  int (__stdcall *IsEqual)(IMoniker *, IMoniker *);
  int (__stdcall *Hash)(IMoniker *, unsigned int *);
  int (__stdcall *IsRunning)(IMoniker *, IBindCtx *, IMoniker *, IMoniker *);
  int (__stdcall *GetTimeOfLastChange)(IMoniker *, IBindCtx *, IMoniker *, _FILETIME *);
  int (__stdcall *Inverse)(IMoniker *, IMoniker **);
  int (__stdcall *CommonPrefixWith)(IMoniker *, IMoniker *, IMoniker **);
  int (__stdcall *RelativePathTo)(IMoniker *, IMoniker *, IMoniker **);
  int (__stdcall *GetDisplayName)(IMoniker *, IBindCtx *, IMoniker *, unsigned __int16 **);
  int (__stdcall *ParseDisplayName)(IMoniker *, IBindCtx *, IMoniker *, unsigned __int16 *, unsigned int *, IMoniker **);
  int (__stdcall *IsSystemMoniker)(IMoniker *, unsigned int *);
};





union _ULARGE_INTEGER
{
  $B950AFB169DC87688B328897744C612F __s0;
  $B950AFB169DC87688B328897744C612F u;
  unsigned __int64 QuadPart;
};


struct IBindCtx
{
  IBindCtxVtbl *lpVtbl;
};


struct IEnumMoniker
{
  IEnumMonikerVtbl *lpVtbl;
};


struct IBindCtxVtbl
{
  int (__stdcall *QueryInterface)(IBindCtx *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IBindCtx *);
  unsigned int (__stdcall *Release)(IBindCtx *);
  int (__stdcall *RegisterObjectBound)(IBindCtx *, IUnknown *);
  int (__stdcall *RevokeObjectBound)(IBindCtx *, IUnknown *);
  int (__stdcall *ReleaseBoundObjects)(IBindCtx *);
  int (__stdcall *SetBindOptions)(IBindCtx *, tagBIND_OPTS *);
  int (__stdcall *GetBindOptions)(IBindCtx *, tagBIND_OPTS *);
  int (__stdcall *GetRunningObjectTable)(IBindCtx *, IRunningObjectTable **);
  int (__stdcall *RegisterObjectParam)(IBindCtx *, unsigned __int16 *, IUnknown *);
  int (__stdcall *GetObjectParam)(IBindCtx *, unsigned __int16 *, IUnknown **);
  int (__stdcall *EnumObjectParam)(IBindCtx *, IEnumString **);
  int (__stdcall *RevokeObjectParam)(IBindCtx *, unsigned __int16 *);
};


struct IEnumMonikerVtbl
{
  int (__stdcall *QueryInterface)(IEnumMoniker *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumMoniker *);
  unsigned int (__stdcall *Release)(IEnumMoniker *);
  int (__stdcall *Next)(IEnumMoniker *, unsigned int, IMoniker **, unsigned int *);
  int (__stdcall *Skip)(IEnumMoniker *, unsigned int);
  int (__stdcall *Reset)(IEnumMoniker *);
  int (__stdcall *Clone)(IEnumMoniker *, IEnumMoniker **);
};





struct IRunningObjectTable
{
  IRunningObjectTableVtbl *lpVtbl;
};


struct IEnumString
{
  IEnumStringVtbl *lpVtbl;
};


struct IRunningObjectTableVtbl
{
  int (__stdcall *QueryInterface)(IRunningObjectTable *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IRunningObjectTable *);
  unsigned int (__stdcall *Release)(IRunningObjectTable *);
  int (__stdcall *Register)(IRunningObjectTable *, unsigned int, IUnknown *, IMoniker *, unsigned int *);
  int (__stdcall *Revoke)(IRunningObjectTable *, unsigned int);
  int (__stdcall *IsRunning)(IRunningObjectTable *, IMoniker *);
  int (__stdcall *GetObjectA)(IRunningObjectTable *, IMoniker *, IUnknown **);
  int (__stdcall *NoteChangeTime)(IRunningObjectTable *, unsigned int, _FILETIME *);
  int (__stdcall *GetTimeOfLastChange)(IRunningObjectTable *, IMoniker *, _FILETIME *);
  int (__stdcall *EnumRunning)(IRunningObjectTable *, IEnumMoniker **);
};


struct IEnumStringVtbl
{
  int (__stdcall *QueryInterface)(IEnumString *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumString *);
  unsigned int (__stdcall *Release)(IEnumString *);
  int (__stdcall *Next)(IEnumString *, unsigned int, unsigned __int16 **, unsigned int *);
  int (__stdcall *Skip)(IEnumString *, unsigned int);
  int (__stdcall *Reset)(IEnumString *);
  int (__stdcall *Clone)(IEnumString *, IEnumString **);
};


struct tagWINDOWINFO
{
  unsigned int cbSize;
  tagRECT rcWindow;
  tagRECT rcClient;
  unsigned int dwStyle;
  unsigned int dwExStyle;
  unsigned int dwWindowStatus;
  unsigned int cxWindowBorders;
  unsigned int cyWindowBorders;
  unsigned __int16 atomWindowType;
  unsigned __int16 wCreatorVersion;
};


struct _CMSG_KEY_TRANS_RECIPIENT_INFO
{
  unsigned int dwVersion;
  _CERT_ID RecipientId;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedKey;
};


union $B231DDA85B3C8A62A08B97AB01700C9A
{
  _CERT_ID OriginatorCertId;
  _CERT_PUBLIC_KEY_INFO OriginatorPublicKeyInfo;
};


struct _CMSG_KEY_AGREE_RECIPIENT_INFO
{
  unsigned int dwVersion;
  unsigned int dwOriginatorChoice;
  $B231DDA85B3C8A62A08B97AB01700C9A ___u2;
  _CRYPTOAPI_BLOB UserKeyingMaterial;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  unsigned int cRecipientEncryptedKeys;
  _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO **rgpRecipientEncryptedKeys;
};


struct _CMSG_MAIL_LIST_RECIPIENT_INFO
{
  unsigned int dwVersion;
  _CRYPTOAPI_BLOB KeyId;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedKey;
  _FILETIME Date;
  _CRYPT_ATTRIBUTE_TYPE_VALUE *pOtherAttr;
};


union $8924CB77772B75F888B0BBB435BAFDE2
{
  _CMSG_KEY_TRANS_RECIPIENT_INFO *pKeyTrans;
  _CMSG_KEY_AGREE_RECIPIENT_INFO *pKeyAgree;
  _CMSG_MAIL_LIST_RECIPIENT_INFO *pMailList;
};


struct _CMSG_CMS_RECIPIENT_INFO
{
  unsigned int dwRecipientChoice;
  $8924CB77772B75F888B0BBB435BAFDE2 ___u1;
};


struct IWinInetInfo : IUnknown
{
};


struct IWinInetHttpInfo : IWinInetInfo
{
};





struct tagEMRSELECTCLIPPATH
{
  tagEMR emr;
  unsigned int iMode;
};


struct tagWAVEOUTCAPS2W
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct _CERT_CHAIN_FIND_BY_ISSUER_PARA
{
  unsigned int cbSize;
  const char *pszUsageIdentifier;
  unsigned int dwKeySpec;
  unsigned int dwAcquirePrivateKeyFlags;
  unsigned int cIssuer;
  _CRYPTOAPI_BLOB *rgIssuer;
  int (__stdcall *pfnFindCallback)(_CERT_CONTEXT *, void *);
  void *pvFindArg;
};











struct _HMAC_Info
{
  unsigned int HashAlgid;
  char *pbInnerString;
  unsigned int cbInnerString;
  char *pbOuterString;
  unsigned int cbOuterString;
};


struct _TOKEN_SOURCE
{
  char SourceName[8];
  _LUID SourceIdentifier;
};


struct _TOKEN_CONTROL
{
  _LUID TokenId;
  _LUID AuthenticationId;
  _LUID ModifiedId;
  _TOKEN_SOURCE TokenSource;
};







struct tagABORTPATH
{
  tagEMR emr;
};





struct tagCOLORCORRECTPALETTE
{
  tagEMR emr;
  unsigned int ihPalette;
  unsigned int nFirstEntry;
  unsigned int nPalEntries;
  unsigned int nReserved;
};





struct tagCREATESTRUCTA
{
  void *lpCreateParams;
  HINSTANCE__ *hInstance;
  HMENU__ *hMenu;
  HWND__ *hwndParent;
  int cy;
  int cx;
  int y;
  int x;
  int style;
  const char *lpszName;
  const char *lpszClass;
  unsigned int dwExStyle;
};
















struct _s__CatchableType
{
  unsigned int properties;
  _TypeDescriptor *pType;
  _PMD thisDisplacement;
  int sizeOrOffset;
  void (__cdecl *copyFunction)();
};


struct _s__CatchableTypeArray
{
  int nCatchableTypes;
  _s__CatchableType *arrayOfCatchableTypes[];
};








struct tagICEXYZTRIPLE
{
  tagCIEXYZ ciexyzRed;
  tagCIEXYZ ciexyzGreen;
  tagCIEXYZ ciexyzBlue;
};


struct tagLOGCOLORSPACEW
{
  unsigned int lcsSignature;
  unsigned int lcsVersion;
  unsigned int lcsSize;
  int lcsCSType;
  int lcsIntent;
  tagICEXYZTRIPLE lcsEndpoints;
  unsigned int lcsGammaRed;
  unsigned int lcsGammaGreen;
  unsigned int lcsGammaBlue;
  unsigned __int16 lcsFilename[260];
};


struct __declspec(align(4)) tagEMRCREATECOLORSPACEW
{
  tagEMR emr;
  unsigned int ihCS;
  tagLOGCOLORSPACEW lcs;
  unsigned int dwFlags;
  unsigned int cbData;
  char Data[1];
};





struct _CTL_ENTRY
{
  _CRYPTOAPI_BLOB SubjectIdentifier;
  unsigned int cAttribute;
  _CRYPT_ATTRIBUTE *rgAttribute;
};


struct _CTL_INFO
{
  unsigned int dwVersion;
  _CTL_USAGE SubjectUsage;
  _CRYPTOAPI_BLOB ListIdentifier;
  _CRYPTOAPI_BLOB SequenceNumber;
  _FILETIME ThisUpdate;
  _FILETIME NextUpdate;
  _CRYPT_ALGORITHM_IDENTIFIER SubjectAlgorithm;
  unsigned int cCTLEntry;
  _CTL_ENTRY *rgCTLEntry;
  unsigned int cExtension;
  _CERT_EXTENSION *rgExtension;
};


struct _CTL_CONTEXT
{
  unsigned int dwMsgAndCertEncodingType;
  char *pbCtlEncoded;
  unsigned int cbCtlEncoded;
  _CTL_INFO *pCtlInfo;
  void *hCertStore;
  void *hCryptMsg;
  char *pbCtlContent;
  unsigned int cbCtlContent;
};


struct _CTL_VERIFY_USAGE_STATUS
{
  unsigned int cbSize;
  unsigned int dwError;
  unsigned int dwFlags;
  _CTL_CONTEXT **ppCtl;
  unsigned int dwCtlEntryIndex;
  _CERT_CONTEXT **ppSigner;
  unsigned int dwSignerIndex;
};


struct _CRYPT_BLOB_ARRAY
{
  unsigned int cBlob;
  _CRYPTOAPI_BLOB *rgBlob;
};


struct _CERT_TRUST_LIST_INFO
{
  unsigned int cbSize;
  _CTL_ENTRY *pCtlEntry;
  _CTL_CONTEXT *pCtlContext;
};


struct _CERT_SIMPLE_CHAIN
{
  unsigned int cbSize;
  _CERT_TRUST_STATUS TrustStatus;
  unsigned int cElement;
  _CERT_CHAIN_ELEMENT **rgpElement;
  _CERT_TRUST_LIST_INFO *pTrustListInfo;
  int fHasRevocationFreshnessTime;
  unsigned int dwRevocationFreshnessTime;
};


struct _CERT_CHAIN_CONTEXT
{
  unsigned int cbSize;
  _CERT_TRUST_STATUS TrustStatus;
  unsigned int cChain;
  _CERT_SIMPLE_CHAIN **rgpChain;
  unsigned int cLowerQualityChainContext;
  _CERT_CHAIN_CONTEXT **rgpLowerQualityChainContext;
  int fHasRevocationFreshnessTime;
  unsigned int dwRevocationFreshnessTime;
};




struct IInternetThreadSwitch : IUnknown
{
};





struct __declspec(align(4)) tagEMRFILLRGN
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cbRgnData;
  unsigned int ihBrush;
  char RgnData[1];
};











struct tagMIXERLINEW
{
  unsigned int cbStruct;
  unsigned int dwDestination;
  unsigned int dwSource;
  unsigned int dwLineID;
  unsigned int fdwLine;
  unsigned int dwUser;
  unsigned int dwComponentType;
  unsigned int cChannels;
  unsigned int cConnections;
  unsigned int cControls;
  unsigned __int16 szShortName[16];
  unsigned __int16 szName[64];
  $30731EC1589AE832070BFAB4699C1350 Target;
};








struct __declspec(align(4)) tagEMRFRAMERGN
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int cbRgnData;
  unsigned int ihBrush;
  tagSIZE szlStroke;
  char RgnData[1];
};














struct IRecordInfo : IUnknown
{
};


struct _wireBRECORD
{
  unsigned int fFlags;
  unsigned int clSize;
  IRecordInfo *pRecInfo;
  char *pRecord;
};


struct _wireSAFEARR_BRECORD
{
  unsigned int Size;
  _wireBRECORD **aRecord;
};





union tagCY
{
  $983F061E0B702DD8AE0B4B955735A6A3 __s0;
  __int64 int64;
};


struct IDispatch : IUnknown
{
};




struct tagSAFEARRAY
{
  unsigned __int16 cDims;
  unsigned __int16 fFeatures;
  unsigned int cbElements;
  unsigned int cLocks;
  void *pvData;
  tagSAFEARRAYBOUND rgsabound[1];
};








union $CF1ACB9762C8937E5EC02F296793B1CB
{
  $5CC4D6FD2BF4E5B80FE1FD714DCA0CFA __s0;
  unsigned __int16 signscale;
};





union $561FDB1B64097E5AC4D364A09FC86DE1
{
  $A04CD8C0331024E133CCEC4B0AB36956 __s0;
  unsigned __int64 Lo64;
};


struct tagDEC
{
  unsigned __int16 wReserved;
  $CF1ACB9762C8937E5EC02F296793B1CB ___u1;
  unsigned int Hi32;
  $561FDB1B64097E5AC4D364A09FC86DE1 ___u3;
};


struct $6C948B6A2788A01A02FF469B7FD2541C
{
  _BYTE gap0[8];
  int lVal;
  IRecordInfo *pRecInfo;
};




























struct $C56EFDA68083C016D8A875D7F2DD48F5
{
	_BYTE gap0[8];
	IUnknown* punkVal;
};


struct $378BA351D229C158B43779FFC0A1B1AD
{
  _BYTE gap0[8];
  IDispatch *pdispVal;
};


struct $EC718D470B5970BABF1B11757C9CCEF9
{
  _BYTE gap0[8];
  tagSAFEARRAY *parray;
};

























struct $185EA5CCE4FDFFE8FC0365849B7F722B
{
  _BYTE gap0[8];
  tagCY *pcyVal;
};


struct $6857AE69DB7C952EEFD665431A7B503A
{
  _BYTE gap0[8];
  long double *pdate;
};


struct $0878F16B0390542D20060EB711608720
{
  _BYTE gap0[8];
  unsigned __int16 **pbstrVal;
};


struct $16737F06913DACF50224AD026FE5ED52
{
	_BYTE gap0[8];
	tagCY cyVal;
};

struct $6F5F61F0A274ACF41FA8A466582E5408
{
  _BYTE gap0[8];
  IUnknown **ppunkVal;
};


struct $A943E77B543534A3D0C9478F54935464
{
  _BYTE gap0[8];
  IDispatch **ppdispVal;
};


struct $72E36A8367E2F91461FE60B0028555C4
{
  _BYTE gap0[8];
  tagSAFEARRAY **pparray;
};


struct $8A8E8731201AF5B9A93DCC04A30F20A5
{
  _BYTE gap0[8];
  tagVARIANT *pvarVal;
};


struct $6C39A09D97B880131B2C5BB4943CBB45
{
  _BYTE gap0[8];
  void *byref;
};


struct $E898A5260D8380431CCAA47FCC291563
{
  _BYTE gap0[8];
  char cVal;
};


struct $48802A31D3D0701BC13CEF9CEA041E7B
{
  _BYTE gap0[8];
  unsigned __int16 uiVal;
};


struct $B644145F46FF1F932B106BFA6CC3F6D9
{
  _BYTE gap0[8];
  unsigned int ulVal;
};


struct $EA00B0D50EAA1933F67C45009B664198
{
  _BYTE gap0[8];
  unsigned __int64 ullVal;
};


struct $5CA90CF57237397281FB12BFD52C1905
{
  _BYTE gap0[8];
  int intVal;
};


struct $E7F48E2F4EAA3149E57D87E5D1B2C6B8
{
  _BYTE gap0[8];
  unsigned int uintVal;
};


struct $B50888724FC9E0FCD5A9E53E9F05C27C
{
  _BYTE gap0[8];
  tagDEC *pdecVal;
};


struct $E1D71D20C3D01115E20D79FAE9629CE8
{
  _BYTE gap0[8];
  char *pcVal;
};


struct $5669F5A4AD19EF2CB42A5602080CB0A6
{
  _BYTE gap0[8];
  unsigned __int16 *puiVal;
};


struct $886F8AE9D7C8B1B861B6CA58D67B682A
{
  _BYTE gap0[8];
  unsigned int *pulVal;
};


struct $ADBB94A21537A8461C6168A5B871A740
{
  _BYTE gap0[8];
  unsigned __int64 *pullVal;
};


struct $CDA73A427DD2A30CDA26CA3394C33CF0
{
  _BYTE gap0[8];
  int *pintVal;
};


struct $2516E53E690D8CC5659AAB7EDC49E664
{
  _BYTE gap0[8];
  unsigned int *puintVal;
};


struct $17B4421FDC73B39569D8A12F584CB67F
{
  _BYTE gap0[8];
  void *pvRecord;
};


union $9AD7DBD02C88C7F5CB18D743E05677F7
{
  $E2F13C0D8C7A5E44CBEA2DDC2BADB614 __s0;
  tagDEC decVal;
  $6C948B6A2788A01A02FF469B7FD2541C __s2;
  $F28A51B4B40B0D33C72915D739D42B4B __s3;
  $31126B8528A05AF3606C6D495FD178E8 __s4;
  $50230A970D9734D4E9774CFC619DF0F6 __s5;
  $4C0EC2258454B893CE739DAE89D8DB7B __s6;
  $6DB36323059316E675433BB10D285009 __s7;
  $8E3C8731874D1B3BC66617C4DD3163A6 __s8;
  $16737F06913DACF50224AD026FE5ED52 __s9;
  $E94952165EEA9EEA990FEB33603E1B19 __s10;
  $C854646156F6772BF5D6F8470C9CCFAF __s11;
  $C56EFDA68083C016D8A875D7F2DD48F5 __s12;
  $378BA351D229C158B43779FFC0A1B1AD __s13;
  $EC718D470B5970BABF1B11757C9CCEF9 __s14;
  $166B1F81F6EA96F97683A65F38FB1A59 __s15;
  $76732A64405C0E287FCB302687644550 __s16;
  $E5FC128E66C26C95254032BA69D36E74 __s17;
  $E9CDCC48CD0BB58E8F361AA17BFDA76E __s18;
  $BF8CC88CDF129BD6E4FA4ABA13F521AD __s19;
  $2CABE618CF1C2625A4479554E4967E0A __s20;
  $AAA92DA1D6E1B0E8462F69216B62027C __s21;
  $F7167AE7A8ABA03C094C204FB1564A28 __s22;
  $185EA5CCE4FDFFE8FC0365849B7F722B __s23;
  $6857AE69DB7C952EEFD665431A7B503A __s24;
  $0878F16B0390542D20060EB711608720 __s25;
  $6F5F61F0A274ACF41FA8A466582E5408 __s26;
  $A943E77B543534A3D0C9478F54935464 __s27;
  $72E36A8367E2F91461FE60B0028555C4 __s28;
  $8A8E8731201AF5B9A93DCC04A30F20A5 __s29;
  $6C39A09D97B880131B2C5BB4943CBB45 __s30;
  $E898A5260D8380431CCAA47FCC291563 __s31;
  $48802A31D3D0701BC13CEF9CEA041E7B __s32;
  $B644145F46FF1F932B106BFA6CC3F6D9 __s33;
  $EA00B0D50EAA1933F67C45009B664198 __s34;
  $5CA90CF57237397281FB12BFD52C1905 __s35;
  $E7F48E2F4EAA3149E57D87E5D1B2C6B8 __s36;
  $B50888724FC9E0FCD5A9E53E9F05C27C __s37;
  $E1D71D20C3D01115E20D79FAE9629CE8 __s38;
  $5669F5A4AD19EF2CB42A5602080CB0A6 __s39;
  $886F8AE9D7C8B1B861B6CA58D67B682A __s40;
  $ADBB94A21537A8461C6168A5B871A740 __s41;
  $CDA73A427DD2A30CDA26CA3394C33CF0 __s42;
  $2516E53E690D8CC5659AAB7EDC49E664 __s43;
  $17B4421FDC73B39569D8A12F584CB67F __s44;
};


struct tagVARIANT
{
  $9AD7DBD02C88C7F5CB18D743E05677F7 ___u0;
};


struct tagCUSTDATAITEM
{
  _GUID guid;
  tagVARIANT varValue;
};


struct __declspec(align(4)) _CREATE_PROCESS_DEBUG_INFO
{
  void *hFile;
  void *hProcess;
  void *hThread;
  void *lpBaseOfImage;
  unsigned int dwDebugInfoFileOffset;
  unsigned int nDebugInfoSize;
  void *lpThreadLocalBase;
  unsigned int (__stdcall *lpStartAddress)(void *);
  void *lpImageName;
  unsigned __int16 fUnicode;
};


struct $0D057425CB83406CCB6CB71DF3FA0A4C
{
  int lMinimum;
  int lMaximum;
};


struct $E50C0F09BB6F8C50FF087E1E76EA2CA0
{
  unsigned int dwMinimum;
  unsigned int dwMaximum;
};


union $C980AEBE6C9A6676CE771A252444CFA9
{
  $0D057425CB83406CCB6CB71DF3FA0A4C __s0;
  $E50C0F09BB6F8C50FF087E1E76EA2CA0 __s1;
  unsigned int dwReserved[6];
};


union $D57FBB56CFB6CB9AA7C272D88EF9A29F
{
  unsigned int cSteps;
  unsigned int cbCustomData;
  unsigned int dwReserved[6];
};


struct tagMIXERCONTROLW
{
  unsigned int cbStruct;
  unsigned int dwControlID;
  unsigned int dwControlType;
  unsigned int fdwControl;
  unsigned int cMultipleItems;
  unsigned __int16 szShortName[16];
  unsigned __int16 szName[64];
  $C980AEBE6C9A6676CE771A252444CFA9 Bounds;
  $D57FBB56CFB6CB9AA7C272D88EF9A29F Metrics;
};


union $476D211351DA30503E50D2F0E6E515B0
{
  unsigned int dwControlID;
  unsigned int dwControlType;
};


struct tagMIXERLINECONTROLSW
{
  unsigned int cbStruct;
  unsigned int dwLineID;
  $476D211351DA30503E50D2F0E6E515B0 ___u2;
  unsigned int cControls;
  unsigned int cbmxctrl;
  tagMIXERCONTROLW *pamxctrl;
};


struct _CERT_POLICY_QUALIFIER_NOTICE_REFERENCE
{
  char *pszOrganization;
  unsigned int cNoticeNumbers;
  int *rgNoticeNumbers;
};


struct _CERT_POLICY_QUALIFIER_USER_NOTICE
{
  _CERT_POLICY_QUALIFIER_NOTICE_REFERENCE *pNoticeReference;
  unsigned __int16 *pszDisplayText;
};


struct __declspec(align(8)) _TAPE_STATISTICS
{
  unsigned int Version;
  unsigned int Flags;
  _LARGE_INTEGER RecoveredWrites;
  _LARGE_INTEGER UnrecoveredWrites;
  _LARGE_INTEGER RecoveredReads;
  _LARGE_INTEGER UnrecoveredReads;
  char CompressionRatioReads;
  char CompressionRatioWrites;
};


struct _ACE_HEADER
{
  char AceType;
  char AceFlags;
  unsigned __int16 AceSize;
};


struct HGLRC__
{
  int unused;
};


struct tagEMREXCLUDECLIPRECT
{
  tagEMR emr;
  _RECTL rclClip;
};


struct tagEMRPOLYPOLYLINE
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int nPolys;
  unsigned int cptl;
  unsigned int aPolyCounts[1];
  _POINTL aptl[1];
};


struct tagUSEROBJECTFLAGS
{
  int fInherit;
  int fReserved;
  unsigned int dwFlags;
};


struct midistrmbuffver_tag
{
  unsigned int dwVersion;
  unsigned int dwMid;
  unsigned int dwOEMVersion;
};


struct _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA
{
  unsigned int cbSize;
  unsigned int hCryptProv;
  _CMSG_MAIL_LIST_RECIPIENT_INFO *pMailList;
  unsigned int dwRecipientIndex;
  unsigned int dwKeyChoice;
  $444B8AF3F414656C8F88F98B3D40B8AE ___u5;
};


struct __declspec(align(4)) _CHANGER_EXCHANGE_MEDIUM
{
  _CHANGER_ELEMENT Transport;
  _CHANGER_ELEMENT Source;
  _CHANGER_ELEMENT Destination1;
  _CHANGER_ELEMENT Destination2;
  char Flip1;
  char Flip2;
};


struct fd_set
{
  unsigned int fd_count;
  unsigned int fd_array[128];
};


struct _NON_PAGED_DEBUG_INFO
{
  unsigned __int16 Signature;
  unsigned __int16 Flags;
  unsigned int Size;
  unsigned __int16 Machine;
  unsigned __int16 Characteristics;
  unsigned int TimeDateStamp;
  unsigned int CheckSum;
  unsigned int SizeOfImage;
  unsigned __int64 ImageBase;
};


struct _CRYPT_CREDENTIALS
{
  unsigned int cbSize;
  const char *pszCredentialsOid;
  void *pvCredentials;
};


struct __unaligned __declspec(align(2)) tagPDA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  HDC__ *hDC;
  unsigned int Flags;
  unsigned __int16 nFromPage;
  unsigned __int16 nToPage;
  unsigned __int16 nMinPage;
  unsigned __int16 nMaxPage;
  unsigned __int16 nCopies;
  HINSTANCE__ *hInstance;
  int lCustData;
  unsigned int (__stdcall *lpfnPrintHook)(HWND__ *, unsigned int, unsigned int, int);
  unsigned int (__stdcall *lpfnSetupHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpPrintTemplateName;
  const char *lpSetupTemplateName;
  void *hPrintTemplate;
  void *hSetupTemplate;
};


struct _CRYPT_HASH_INFO
{
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  _CRYPTOAPI_BLOB Hash;
};


struct _CERT_OTHER_NAME
{
  char *pszObjId;
  _CRYPTOAPI_BLOB Value;
};


union $4999FA140CCA504B85A94292F0D7568D
{
  _CERT_OTHER_NAME *pOtherName;
  unsigned __int16 *pwszRfc822Name;
  unsigned __int16 *pwszDNSName;
  _CRYPTOAPI_BLOB DirectoryName;
  unsigned __int16 *pwszURL;
  _CRYPTOAPI_BLOB IPAddress;
  char *pszRegisteredID;
};


struct _CERT_ALT_NAME_ENTRY
{
  unsigned int dwAltNameChoice;
  $4999FA140CCA504B85A94292F0D7568D ___u1;
};


struct _CERT_ACCESS_DESCRIPTION
{
  char *pszAccessMethod;
  _CERT_ALT_NAME_ENTRY AccessLocation;
};


struct HRGN__
{
  int unused;
};


struct tMIXERCONTROLDETAILS_UNSIGNED
{
  unsigned int dwValue;
};


struct __declspec(align(4)) _BYTE_BLOB
{
  unsigned int clSize;
  char abData[1];
};


union _userHENHMETAFILE___MIDL_IWinTypes_0006
{
  int hInproc;
  _BYTE_BLOB *hRemote;
  __int64 hInproc64;
};


struct _userHENHMETAFILE
{
  int fContext;
  _userHENHMETAFILE___MIDL_IWinTypes_0006 u;
};


struct IXMLDOMNode : IDispatch
{
};


struct IXMLDOMDocumentFragment : IXMLDOMNode
{
};


struct _CERT_SIGNED_CONTENT_INFO
{
  _CRYPTOAPI_BLOB ToBeSigned;
  _CRYPT_ALGORITHM_IDENTIFIER SignatureAlgorithm;
  _CRYPT_BIT_BLOB Signature;
};


struct _CMC_TAGGED_ATTRIBUTE
{
  unsigned int dwBodyPartID;
  _CRYPT_ATTRIBUTE Attribute;
};


struct tagOFN_NT4W
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  const unsigned __int16 *lpstrFilter;
  unsigned __int16 *lpstrCustomFilter;
  unsigned int nMaxCustFilter;
  unsigned int nFilterIndex;
  unsigned __int16 *lpstrFile;
  unsigned int nMaxFile;
  unsigned __int16 *lpstrFileTitle;
  unsigned int nMaxFileTitle;
  const unsigned __int16 *lpstrInitialDir;
  const unsigned __int16 *lpstrTitle;
  unsigned int Flags;
  unsigned __int16 nFileOffset;
  unsigned __int16 nFileExtension;
  const unsigned __int16 *lpstrDefExt;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpTemplateName;
};


struct _JOBOBJECT_JOBSET_INFORMATION
{
  unsigned int MemberLevel;
};


struct CM_Power_Data_s
{
  unsigned int PD_Size;
  _DEVICE_POWER_STATE PD_MostRecentPowerState;
  unsigned int PD_Capabilities;
  unsigned int PD_D1Latency;
  unsigned int PD_D2Latency;
  unsigned int PD_D3Latency;
  _DEVICE_POWER_STATE PD_PowerStateMapping[7];
  _SYSTEM_POWER_STATE PD_DeepestSystemWake;
};


struct BITMAPV5HEADER
{
  unsigned int bV5Size;
  int bV5Width;
  int bV5Height;
  unsigned __int16 bV5Planes;
  unsigned __int16 bV5BitCount;
  unsigned int bV5Compression;
  unsigned int bV5SizeImage;
  int bV5XPelsPerMeter;
  int bV5YPelsPerMeter;
  unsigned int bV5ClrUsed;
  unsigned int bV5ClrImportant;
  unsigned int bV5RedMask;
  unsigned int bV5GreenMask;
  unsigned int bV5BlueMask;
  unsigned int bV5AlphaMask;
  unsigned int bV5CSType;
  tagICEXYZTRIPLE bV5Endpoints;
  unsigned int bV5GammaRed;
  unsigned int bV5GammaGreen;
  unsigned int bV5GammaBlue;
  unsigned int bV5Intent;
  unsigned int bV5ProfileData;
  unsigned int bV5ProfileSize;
  unsigned int bV5Reserved;
};


struct tagANIMATIONINFO
{
  unsigned int cbSize;
  int iMinAnimate;
};


struct tagWAVEOUTCAPSA
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
};


struct _CTL_FIND_USAGE_PARA
{
  unsigned int cbSize;
  _CTL_USAGE SubjectUsage;
  _CRYPTOAPI_BLOB ListIdentifier;
  _CERT_INFO *pSigner;
};


struct _CTL_FIND_SUBJECT_PARA
{
  unsigned int cbSize;
  _CTL_FIND_USAGE_PARA *pUsagePara;
  unsigned int dwSubjectType;
  void *pvSubject;
};


struct get_storage_type<8>
{
};


struct _VIDEOPARAMETERS
{
  _GUID Guid;
  unsigned int dwOffset;
  unsigned int dwCommand;
  unsigned int dwFlags;
  unsigned int dwMode;
  unsigned int dwTVStandard;
  unsigned int dwAvailableModes;
  unsigned int dwAvailableTVStandard;
  unsigned int dwFlickerFilter;
  unsigned int dwOverScanX;
  unsigned int dwOverScanY;
  unsigned int dwMaxUnscaledX;
  unsigned int dwMaxUnscaledY;
  unsigned int dwPositionX;
  unsigned int dwPositionY;
  unsigned int dwBrightness;
  unsigned int dwContrast;
  unsigned int dwCPType;
  unsigned int dwCPCommand;
  unsigned int dwCPStandard;
  unsigned int dwCPKey;
  unsigned int bCP_APSTriggerBits;
  char bOEMCopyProtection[256];
};


struct _CMC_TAGGED_CONTENT_INFO
{
  unsigned int dwBodyPartID;
  _CRYPTOAPI_BLOB EncodedContentInfo;
};


struct _CMC_TAGGED_OTHER_MSG
{
  unsigned int dwBodyPartID;
  char *pszObjId;
  _CRYPTOAPI_BLOB Value;
};


struct _CMC_RESPONSE_INFO
{
  unsigned int cTaggedAttribute;
  _CMC_TAGGED_ATTRIBUTE *rgTaggedAttribute;
  unsigned int cTaggedContentInfo;
  _CMC_TAGGED_CONTENT_INFO *rgTaggedContentInfo;
  unsigned int cTaggedOtherMsg;
  _CMC_TAGGED_OTHER_MSG *rgTaggedOtherMsg;
};


struct tagBITMAPCOREHEADER
{
  unsigned int bcSize;
  unsigned __int16 bcWidth;
  unsigned __int16 bcHeight;
  unsigned __int16 bcPlanes;
  unsigned __int16 bcBitCount;
};


struct __declspec(align(2)) tagBITMAPCOREINFO
{
  tagBITMAPCOREHEADER bmciHeader;
  tagRGBTRIPLE bmciColors[1];
};


struct tagPIXELFORMATDESCRIPTOR
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
  char iLayerType;
  char bReserved;
  unsigned int dwLayerMask;
  unsigned int dwVisibleMask;
  unsigned int dwDamageMask;
};


struct tagEMRFILLPATH
{
  tagEMR emr;
  _RECTL rclBounds;
};


struct _CHANGER_SET_ACCESS
{
  _CHANGER_ELEMENT Element;
  unsigned int Control;
};


struct _REMSECURITY_ATTRIBUTES
{
  unsigned int nLength;
  unsigned int lpSecurityDescriptor;
  int bInheritHandle;
};


struct _WSAPROTOCOLCHAIN
{
  int ChainLen;
  unsigned int ChainEntries[7];
};


struct _WSAPROTOCOL_INFOA
{
  unsigned int dwServiceFlags1;
  unsigned int dwServiceFlags2;
  unsigned int dwServiceFlags3;
  unsigned int dwServiceFlags4;
  unsigned int dwProviderFlags;
  _GUID ProviderId;
  unsigned int dwCatalogEntryId;
  _WSAPROTOCOLCHAIN ProtocolChain;
  int iVersion;
  int iAddressFamily;
  int iMaxSockAddr;
  int iMinSockAddr;
  int iSocketType;
  int iProtocol;
  int iProtocolMaxOffset;
  int iNetworkByteOrder;
  int iSecurityScheme;
  unsigned int dwMessageSize;
  unsigned int dwProviderReserved;
  char szProtocol[256];
};


struct _FLOAT128
{
  __int64 LowPart;
  __int64 HighPart;
};


struct $5D1C4EAAE7086A2FC0593357DF78FB95
{
  char BaseMid;
  char Flags1;
  char Flags2;
  char BaseHi;
};


struct $A3BAC9569453E46653D4C53B8339026E
{
  unsigned __int32 BaseMid : 8;
  unsigned __int32 Type : 5;
  unsigned __int32 Dpl : 2;
  unsigned __int32 Pres : 1;
  unsigned __int32 LimitHi : 4;
  unsigned __int32 Sys : 1;
  unsigned __int32 Reserved_0 : 1;
  unsigned __int32 Default_Big : 1;
  unsigned __int32 Granularity : 1;
  unsigned __int32 BaseHi : 8;
};


union $D48F3AF7CD06E6FD0D6287B87AAA979E
{
  $5D1C4EAAE7086A2FC0593357DF78FB95 Bytes;
  $A3BAC9569453E46653D4C53B8339026E Bits;
};


struct _LDT_ENTRY
{
  unsigned __int16 LimitLow;
  unsigned __int16 BaseLow;
  $D48F3AF7CD06E6FD0D6287B87AAA979E HighWord;
};


struct __declspec(align(8)) _JOBOBJECT_BASIC_LIMIT_INFORMATION
{
  _LARGE_INTEGER PerProcessUserTimeLimit;
  _LARGE_INTEGER PerJobUserTimeLimit;
  unsigned int LimitFlags;
  unsigned int MinimumWorkingSetSize;
  unsigned int MaximumWorkingSetSize;
  unsigned int ActiveProcessLimit;
  unsigned int Affinity;
  unsigned int PriorityClass;
  unsigned int SchedulingClass;
};


struct __unaligned __declspec(align(2)) tagMETAHEADER
{
  unsigned __int16 mtType;
  unsigned __int16 mtHeaderSize;
  unsigned __int16 mtVersion;
  unsigned int mtSize;
  unsigned __int16 mtNoObjects;
  unsigned int mtMaxRecord;
  unsigned __int16 mtNoParameters;
};


struct tagWNDCLASSEXA
{
  unsigned int cbSize;
  unsigned int style;
  int (__stdcall *lpfnWndProc)(HWND__ *, unsigned int, unsigned int, int);
  int cbClsExtra;
  int cbWndExtra;
  HINSTANCE__ *hInstance;
  HICON__ *hIcon;
  HICON__ *hCursor;
  HBRUSH__ *hbrBackground;
  const char *lpszMenuName;
  const char *lpszClassName;
  HICON__ *hIconSm;
};


struct _CRYPT_SMIME_CAPABILITY
{
  char *pszObjId;
  _CRYPTOAPI_BLOB Parameters;
};


struct _CRYPT_SMIME_CAPABILITIES
{
  unsigned int cCapability;
  _CRYPT_SMIME_CAPABILITY *rgCapability;
};


struct _AUTHENTICODE_TS_EXTRA_CERT_CHAIN_POLICY_PARA
{
  unsigned int cbSize;
  unsigned int dwRegPolicySettings;
  int fCommercial;
};


struct SCARD_READERSTATEA
{
  const char *szReader;
  void *pvUserData;
  unsigned int dwCurrentState;
  unsigned int dwEventState;
  unsigned int cbAtr;
  char rgbAtr[36];
};


struct _tagCellID
{
};


struct HKL__
{
  int unused;
};


struct tagLOGFONTA
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
  char lfFaceName[32];
};


struct tagCWPRETSTRUCT
{
  int lResult;
  int lParam;
  unsigned int wParam;
  unsigned int message;
  HWND__ *hwnd;
};


struct HIMCC__
{
  int unused;
};


struct _MEMORY_BASIC_INFORMATION32
{
  unsigned int BaseAddress;
  unsigned int AllocationBase;
  unsigned int AllocationProtect;
  unsigned int RegionSize;
  unsigned int State;
  unsigned int Protect;
  unsigned int Type;
};


struct tagENHMETARECORD
{
  unsigned int iType;
  unsigned int nSize;
  unsigned int dParm[1];
};


struct __declspec(align(4)) tagTEXTMETRICA
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
};


struct tagAUXCAPS2W
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned __int16 wTechnology;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct tagMIXERCAPS2W
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned int fdwSupport;
  unsigned int cDestinations;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct OPENCARD_SEARCH_CRITERIAA
{
  unsigned int dwStructSize;
  char *lpstrGroupNames;
  unsigned int nMaxGroupNames;
  _GUID *rgguidInterfaces;
  unsigned int cguidInterfaces;
  char *lpstrCardNames;
  unsigned int nMaxCardNames;
  int (__stdcall *lpfnCheck)(unsigned int, unsigned int, void *);
  unsigned int (__stdcall *lpfnConnect)(unsigned int, char *, char *, void *);
  void (__stdcall *lpfnDisconnect)(unsigned int, unsigned int, void *);
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
};


struct OPENCARDNAME_EXA
{
  unsigned int dwStructSize;
  unsigned int hSCardContext;
  HWND__ *hwndOwner;
  unsigned int dwFlags;
  const char *lpstrTitle;
  const char *lpstrSearchDesc;
  HICON__ *hIcon;
  OPENCARD_SEARCH_CRITERIAA *pOpenCardSearchCriteria;
  unsigned int (__stdcall *lpfnConnect)(unsigned int, char *, char *, void *);
  void *pvUserData;
  unsigned int dwShareMode;
  unsigned int dwPreferredProtocols;
  char *lpstrRdr;
  unsigned int nMaxRdr;
  char *lpstrCard;
  unsigned int nMaxCard;
  unsigned int dwActiveProtocol;
  unsigned int hCardHandle;
};


struct HWINSTA__
{
  int unused;
};


struct _OFSTRUCT
{
  char cBytes;
  char fFixedDisk;
  unsigned __int16 nErrCode;
  unsigned __int16 Reserved1;
  unsigned __int16 Reserved2;
  char szPathName[128];
};


struct _FIXED
{
  unsigned __int16 fract;
  __int16 value;
};


struct _MAT2
{
  _FIXED eM11;
  _FIXED eM12;
  _FIXED eM21;
  _FIXED eM22;
};


struct __declspec(align(4)) tagEMRNAMEDESCAPE
{
  tagEMR emr;
  int iEscape;
  int cbDriver;
  int cbEscData;
  char EscData[1];
};


struct tagHELPINFO
{
  unsigned int cbSize;
  int iContextType;
  int iCtrlId;
  void *hItemHandle;
  unsigned int dwContextId;
  tagPOINT MousePos;
};


struct tagMSGBOXPARAMSA
{
  unsigned int cbSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  const char *lpszText;
  const char *lpszCaption;
  unsigned int dwStyle;
  const char *lpszIcon;
  unsigned int dwContextHelpId;
  void (__stdcall *lpfnMsgBoxCallback)(tagHELPINFO *);
  unsigned int dwLanguageId;
};


struct tagCLIENTCREATESTRUCT
{
  void *hWindowMenu;
  unsigned int idFirstChild;
};


struct _FORM_INFO_1W
{
  unsigned int Flags;
  unsigned __int16 *pName;
  tagSIZE Size;
  _RECTL ImageableArea;
};


struct _tagSOFTDISTINFO
{
  unsigned int cbSize;
  unsigned int dwFlags;
  unsigned int dwAdState;
  unsigned __int16 *szTitle;
  unsigned __int16 *szAbstract;
  unsigned __int16 *szHREF;
  unsigned int dwInstalledVersionMS;
  unsigned int dwInstalledVersionLS;
  unsigned int dwUpdateVersionMS;
  unsigned int dwUpdateVersionLS;
  unsigned int dwAdvertisedVersionMS;
  unsigned int dwAdvertisedVersionLS;
  unsigned int dwReserved;
};


struct SB_DefaultAllocator
{
};


struct _OUTPUT_DEBUG_STRING_INFO
{
  char *lpDebugStringData;
  unsigned __int16 fUnicode;
  unsigned __int16 nDebugStringLength;
};


struct IWaitMultiple : IUnknown
{
};


union $2889FFB5A2199B75ADC17E68272F8DB3
{
  tagTYPEDESC *lptdesc;
  tagARRAYDESC *lpadesc;
  unsigned int hreftype;
};


struct __declspec(align(4)) tagTYPEDESC
{
  $2889FFB5A2199B75ADC17E68272F8DB3 ___u0;
  unsigned __int16 vt;
};


struct __unaligned __declspec(align(4)) tagARRAYDESC
{
  tagTYPEDESC tdescElem;
  unsigned __int16 cDims;
  __declspec(align(4)) tagSAFEARRAYBOUND rgbounds[1];
};


struct tagPARAMDESCEX
{
  unsigned int cBytes;
  tagVARIANT varDefaultValue;
};


struct __declspec(align(4)) tagPARAMDESC
{
  tagPARAMDESCEX *pparamdescex;
  unsigned __int16 wParamFlags;
};


union $925D85F97E3EF697030402D55E75FB9E
{
  tagIDLDESC idldesc;
  tagPARAMDESC paramdesc;
};


struct tagELEMDESC
{
  tagTYPEDESC tdesc;
  $925D85F97E3EF697030402D55E75FB9E ___u1;
};


struct __declspec(align(4)) tagFUNCDESC
{
  int memid;
  int *lprgscode;
  tagELEMDESC *lprgelemdescParam;
  tagFUNCKIND funckind;
  tagINVOKEKIND invkind;
  tagCALLCONV callconv;
  __int16 cParams;
  __int16 cParamsOpt;
  __int16 oVft;
  __int16 cScodes;
  tagELEMDESC elemdescFunc;
  unsigned __int16 wFuncFlags;
};


struct $BD85036DCC0442AA317E9171D0F2179B
{
  char s_b1;
  char s_b2;
  char s_b3;
  char s_b4;
};


struct $CC608A129C88F312E26B04B0A6BA5EDC
{
  unsigned __int16 s_w1;
  unsigned __int16 s_w2;
};


union $88ED240534DBE762899E8ECCEA892421
{
  $BD85036DCC0442AA317E9171D0F2179B S_un_b;
  $CC608A129C88F312E26B04B0A6BA5EDC S_un_w;
  unsigned int S_addr;
};


struct in_addr
{
  $88ED240534DBE762899E8ECCEA892421 S_un;
};


struct ReferenceCountTemplate<1048576,3>
{
  ReferenceCountTemplate<1048576,3>Vtbl *vfptr;
  unsigned int m_cRef;
};


struct ReferenceCountTemplate<1048576,3>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ReferenceCountTemplate<1048576,3> *this, unsigned int);
};


struct tagEVENTMSG
{
  unsigned int message;
  unsigned int paramL;
  unsigned int paramH;
  unsigned int time;
  HWND__ *hwnd;
};


struct _UNIVERSAL_NAME_INFOA
{
  char *lpUniversalName;
};


struct tagMCI_STATUS_PARMS
{
  unsigned int dwCallback;
  unsigned int dwReturn;
  unsigned int dwItem;
  unsigned int dwTrack;
};


struct __declspec(align(4)) _WORD_BLOB
{
  unsigned int clSize;
  unsigned __int16 asData[1];
};


struct _IMAGE_DATA_DIRECTORY
{
  unsigned int VirtualAddress;
  unsigned int Size;
};


struct _IMAGE_OPTIONAL_HEADER64
{
  unsigned __int16 Magic;
  char MajorLinkerVersion;
  char MinorLinkerVersion;
  unsigned int SizeOfCode;
  unsigned int SizeOfInitializedData;
  unsigned int SizeOfUninitializedData;
  unsigned int AddressOfEntryPoint;
  unsigned int BaseOfCode;
  unsigned __int64 ImageBase;
  unsigned int SectionAlignment;
  unsigned int FileAlignment;
  unsigned __int16 MajorOperatingSystemVersion;
  unsigned __int16 MinorOperatingSystemVersion;
  unsigned __int16 MajorImageVersion;
  unsigned __int16 MinorImageVersion;
  unsigned __int16 MajorSubsystemVersion;
  unsigned __int16 MinorSubsystemVersion;
  unsigned int Win32VersionValue;
  unsigned int SizeOfImage;
  unsigned int SizeOfHeaders;
  unsigned int CheckSum;
  unsigned __int16 Subsystem;
  unsigned __int16 DllCharacteristics;
  unsigned __int64 SizeOfStackReserve;
  unsigned __int64 SizeOfStackCommit;
  unsigned __int64 SizeOfHeapReserve;
  unsigned __int64 SizeOfHeapCommit;
  unsigned int LoaderFlags;
  unsigned int NumberOfRvaAndSizes;
  _IMAGE_DATA_DIRECTORY DataDirectory[16];
};


struct tagEMRSETVIEWPORTEXTEX
{
  tagEMR emr;
  tagSIZE szlExtent;
};


struct tagCOMBOBOXINFO
{
  unsigned int cbSize;
  tagRECT rcItem;
  tagRECT rcButton;
  unsigned int stateButton;
  HWND__ *hwndCombo;
  HWND__ *hwndItem;
  HWND__ *hwndList;
};


struct tagCHOOSEFONTA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HDC__ *hDC;
  tagLOGFONTA *lpLogFont;
  int iPointSize;
  unsigned int Flags;
  unsigned int rgbColors;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpTemplateName;
  HINSTANCE__ *hInstance;
  char *lpszStyle;
  unsigned __int16 nFontType;
  unsigned __int16 ___MISSING_ALIGNMENT__;
  int nSizeMin;
  int nSizeMax;
};


const struct _s__RTTIBaseClassDescriptor
{
  _TypeDescriptor *pTypeDescriptor;
  unsigned int numContainedBases;
  _PMD where;
  unsigned int attributes;
};


const struct __unaligned __declspec(align(1)) _s__RTTIBaseClassArray
{
  _s__RTTIBaseClassDescriptor *arrayOfBaseClassDescriptors[];
};


struct _s__RTTIClassHierarchyDescriptor
{
  unsigned int signature;
  unsigned int attributes;
  unsigned int numBaseClasses;
  _s__RTTIBaseClassArray *pBaseClassArray;
};


struct _s__RTTICompleteObjectLocator
{
  unsigned int signature;
  unsigned int offset;
  unsigned int cdOffset;
  _TypeDescriptor *pTypeDescriptor;
  _s__RTTIClassHierarchyDescriptor *pClassDescriptor;
};


struct $9F5F1B3B62BF9BBBAE65D06E22EF4EC0
{
  unsigned __int16 Linenumber;
  unsigned __int16 Size;
};


union $C4B8121BF25DE38E1FC22AC55BB74102
{
  $9F5F1B3B62BF9BBBAE65D06E22EF4EC0 LnSz;
  unsigned int TotalSize;
};


struct $0267EABC91DDCC621C08D74192F36445
{
  unsigned int PointerToLinenumber;
  unsigned int PointerToNextFunction;
};


struct $72A87AE534D1DC1A4B7CCA877B33F564
{
  unsigned __int16 Dimension[4];
};


union $7CCCC14E2F1027C7BC5D7156967C458D
{
  $0267EABC91DDCC621C08D74192F36445 Function;
  $72A87AE534D1DC1A4B7CCA877B33F564 Array;
};


struct __unaligned __declspec(align(2)) $737D29888B4CC68BAC570F0E9852E492
{
  unsigned int TagIndex;
  $C4B8121BF25DE38E1FC22AC55BB74102 Misc;
  $7CCCC14E2F1027C7BC5D7156967C458D FcnAry;
  unsigned __int16 TvIndex;
};


struct $66EA94121FC5BA9E8F572A953AB6FE87
{
  char Name[18];
};


struct __declspec(align(2)) $B25D19047E6B4EFA2CA7947450284408
{
  unsigned int Length;
  unsigned __int16 NumberOfRelocations;
  unsigned __int16 NumberOfLinenumbers;
  unsigned int CheckSum;
  __int16 Number;
  char Selection;
};


union _IMAGE_AUX_SYMBOL
{
  $737D29888B4CC68BAC570F0E9852E492 Sym;
  $66EA94121FC5BA9E8F572A953AB6FE87 File;
  $B25D19047E6B4EFA2CA7947450284408 Section;
};


struct _BY_HANDLE_FILE_INFORMATION
{
  unsigned int dwFileAttributes;
  _FILETIME ftCreationTime;
  _FILETIME ftLastAccessTime;
  _FILETIME ftLastWriteTime;
  unsigned int dwVolumeSerialNumber;
  unsigned int nFileSizeHigh;
  unsigned int nFileSizeLow;
  unsigned int nNumberOfLinks;
  unsigned int nFileIndexHigh;
  unsigned int nFileIndexLow;
};


struct _CRYPT_X942_OTHER_INFO
{
  char *pszContentEncryptionObjId;
  char rgbCounter[4];
  char rgbKeyLength[4];
  _CRYPTOAPI_BLOB PubInfo;
};


struct tagCACLSID
{
  unsigned int cElems;
  _GUID *pElems;
};


struct _EVENTLOGRECORD
{
  unsigned int Length;
  unsigned int Reserved;
  unsigned int RecordNumber;
  unsigned int TimeGenerated;
  unsigned int TimeWritten;
  unsigned int EventID;
  unsigned __int16 EventType;
  unsigned __int16 NumStrings;
  unsigned __int16 EventCategory;
  unsigned __int16 ReservedFlags;
  unsigned int ClosingRecordNumber;
  unsigned int StringOffset;
  unsigned int UserSidLength;
  unsigned int UserSidOffset;
  unsigned int DataLength;
  unsigned int DataOffset;
};


struct tagSTYLESTRUCT
{
  unsigned int styleOld;
  unsigned int styleNew;
};


struct _cpinfoexA
{
  unsigned int MaxCharSize;
  char DefaultChar[2];
  char LeadByte[12];
  unsigned __int16 UnicodeDefaultChar;
  unsigned int CodePage;
  char CodePageName[260];
};


struct tagAUXCAPSW
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned __int16 wTechnology;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
};


struct timecaps_tag
{
  unsigned int wPeriodMin;
  unsigned int wPeriodMax;
};


struct tagMCI_OVLY_SAVE_PARMSW
{
  unsigned int dwCallback;
  const unsigned __int16 *lpfilename;
  tagRECT rc;
};


struct tagCADBL
{
  unsigned int cElems;
  long double *pElems;
};


struct tagMCI_VD_ESCAPE_PARMSA
{
  unsigned int dwCallback;
  const char *lpstrCommand;
};


struct HMONITOR__
{
  int unused;
};


struct tagEMRMODIFYWORLDTRANSFORM
{
  tagEMR emr;
  tagXFORM xform;
  unsigned int iMode;
};


struct __declspec(align(4)) tagEXTLOGFONTA
{
  tagLOGFONTA elfLogFont;
  char elfFullName[64];
  char elfStyle[32];
  unsigned int elfVersion;
  unsigned int elfStyleSize;
  unsigned int elfMatch;
  unsigned int elfReserved;
  char elfVendorId[4];
  unsigned int elfCulture;
  tagPANOSE elfPanose;
};


struct _PORT_INFO_3W
{
  unsigned int dwStatus;
  unsigned __int16 *pszStatus;
  unsigned int dwSeverity;
};


struct _tagPROTOCOLDATA
{
  unsigned int grfFlags;
  unsigned int dwState;
  void *pData;
  unsigned int cbData;
};


struct SerializationBehavior<SB_Default>
{
};


struct tagMENUITEMINFOA
{
  unsigned int cbSize;
  unsigned int fMask;
  unsigned int fType;
  unsigned int fState;
  unsigned int wID;
  HMENU__ *hSubMenu;
  HBITMAP__ *hbmpChecked;
  HBITMAP__ *hbmpUnchecked;
  unsigned int dwItemData;
  char *dwTypeData;
  unsigned int cch;
  HBITMAP__ *hbmpItem;
};


struct tagWAVEINCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned int dwFormats;
  unsigned __int16 wChannels;
  unsigned __int16 wReserved1;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct FileNodeName_Guid : IFileNodeName
{
  Turbine_GUID m_name;
};


struct _CERT_ALT_NAME_INFO
{
  unsigned int cAltEntry;
  _CERT_ALT_NAME_ENTRY *rgAltEntry;
};


struct _STORAGE_DEVICE_NUMBER
{
  unsigned int DeviceType;
  unsigned int DeviceNumber;
  unsigned int PartitionNumber;
};


struct _currencyfmtW
{
  unsigned int NumDigits;
  unsigned int LeadingZero;
  unsigned int Grouping;
  unsigned __int16 *lpDecimalSep;
  unsigned __int16 *lpThousandSep;
  unsigned int NegativeOrder;
  unsigned int PositiveOrder;
  unsigned __int16 *lpCurrencySymbol;
};


struct tagMCI_OPEN_PARMSW
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const unsigned __int16 *lpstrDeviceType;
  const unsigned __int16 *lpstrElementName;
  const unsigned __int16 *lpstrAlias;
};


struct _CERT_BASIC_CONSTRAINTS2_INFO
{
  int fCA;
  int fPathLenConstraint;
  unsigned int dwPathLenConstraint;
};


struct _BIN_RANGE
{
  _LARGE_INTEGER StartValue;
  _LARGE_INTEGER Length;
};


struct __declspec(align(8)) _BIN_COUNT
{
  _BIN_RANGE BinRange;
  unsigned int BinCount;
};


struct _BIN_RESULTS
{
  unsigned int NumberOfBins;
  _BIN_COUNT BinCounts[1];
};


struct IDataAdviseHolder : IUnknown
{
};


struct IXMLDOMNodeList : IDispatch
{
};


struct IXMLDOMNamedNodeMap : IDispatch
{
};


struct IXMLDOMDocument : IXMLDOMNode
{
};


struct _ACL
{
  char AclRevision;
  char Sbz1;
  unsigned __int16 AclSize;
  unsigned __int16 AceCount;
  unsigned __int16 Sbz2;
};


struct _TOKEN_DEFAULT_DACL
{
  _ACL *DefaultDacl;
};


struct $5ACE225D4D14CE0550A9F5A217E306C5
{
  __int16 dmOrientation;
  __int16 dmPaperSize;
  __int16 dmPaperLength;
  __int16 dmPaperWidth;
};


union $14A17E5AD746E9177C2A3EDFC045EF92
{
  $5ACE225D4D14CE0550A9F5A217E306C5 __s0;
  _POINTL dmPosition;
};


union $309666D137CBB19809FA597AD348B415
{
  unsigned int dmDisplayFlags;
  unsigned int dmNup;
};


struct _devicemodeA
{
  char dmDeviceName[32];
  unsigned __int16 dmSpecVersion;
  unsigned __int16 dmDriverVersion;
  unsigned __int16 dmSize;
  unsigned __int16 dmDriverExtra;
  unsigned int dmFields;
  $14A17E5AD746E9177C2A3EDFC045EF92 ___u6;
  __int16 dmScale;
  __int16 dmCopies;
  __int16 dmDefaultSource;
  __int16 dmPrintQuality;
  __int16 dmColor;
  __int16 dmDuplex;
  __int16 dmYResolution;
  __int16 dmTTOption;
  __int16 dmCollate;
  char dmFormName[32];
  unsigned __int16 dmLogPixels;
  unsigned int dmBitsPerPel;
  unsigned int dmPelsWidth;
  unsigned int dmPelsHeight;
  $309666D137CBB19809FA597AD348B415 ___u21;
  unsigned int dmDisplayFrequency;
  unsigned int dmICMMethod;
  unsigned int dmICMIntent;
  unsigned int dmMediaType;
  unsigned int dmDitherType;
  unsigned int dmReserved1;
  unsigned int dmReserved2;
  unsigned int dmPanningWidth;
  unsigned int dmPanningHeight;
};


struct tagEMRLINETO
{
  tagEMR emr;
  _POINTL ptl;
};


struct __declspec(align(4)) tagRemBRUSH
{
  unsigned int cbData;
  char data[1];
};


struct _SET_PARTITION_INFORMATION
{
  char PartitionType;
};


struct QOS_OBJECT_HDR
{
  unsigned int ObjectType;
  unsigned int ObjectLength;
};


struct $6E35CCFC02D81E31BD4C6BEDD77CB20A
{
  unsigned __int32 NameOffset : 31;
  unsigned __int32 NameIsString : 1;
};


union $1543901FFE3E72F337512D9C84A90CC2
{
  $6E35CCFC02D81E31BD4C6BEDD77CB20A __s0;
  unsigned int Name;
  unsigned __int16 Id;
};


struct $B2E03ED94C06E2E681F8D03FF7FF5CB3
{
  unsigned __int32 OffsetToDirectory : 31;
  unsigned __int32 DataIsDirectory : 1;
};


union $958ABFC980966BB302145810E33B82AB
{
  unsigned int OffsetToData;
  $B2E03ED94C06E2E681F8D03FF7FF5CB3 __s1;
};


struct _IMAGE_RESOURCE_DIRECTORY_ENTRY
{
  $1543901FFE3E72F337512D9C84A90CC2 ___u0;
  $958ABFC980966BB302145810E33B82AB ___u1;
};


struct _GRADIENT_TRIANGLE
{
  unsigned int Vertex1;
  unsigned int Vertex2;
  unsigned int Vertex3;
};


struct tagEMRROUNDRECT
{
  tagEMR emr;
  _RECTL rclBox;
  tagSIZE szlCorner;
};


struct tagMIXERCAPSW
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  unsigned __int16 szPname[32];
  unsigned int fdwSupport;
  unsigned int cDestinations;
};


struct FileNodeName_UInt32 : IFileNodeName
{
  unsigned int m_name;
};


struct _ADMINISTRATOR_POWER_POLICY
{
  _SYSTEM_POWER_STATE MinSleep;
  _SYSTEM_POWER_STATE MaxSleep;
  unsigned int MinVideoTimeout;
  unsigned int MaxVideoTimeout;
  unsigned int MinSpindownTimeout;
  unsigned int MaxSpindownTimeout;
};


struct _IMAGE_FILE_HEADER
{
  unsigned __int16 Machine;
  unsigned __int16 NumberOfSections;
  unsigned int TimeDateStamp;
  unsigned int PointerToSymbolTable;
  unsigned int NumberOfSymbols;
  unsigned __int16 SizeOfOptionalHeader;
  unsigned __int16 Characteristics;
};


struct _IMAGE_OPTIONAL_HEADER
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
  unsigned int ImageBase;
  unsigned int SectionAlignment;
  unsigned int FileAlignment;
  unsigned __int16 MajorOperatingSystemVersion;
  unsigned __int16 MinorOperatingSystemVersion;
  unsigned __int16 MajorImageVersion;
  unsigned __int16 MinorImageVersion;
  unsigned __int16 MajorSubsystemVersion;
  unsigned __int16 MinorSubsystemVersion;
  unsigned int Win32VersionValue;
  unsigned int SizeOfImage;
  unsigned int SizeOfHeaders;
  unsigned int CheckSum;
  unsigned __int16 Subsystem;
  unsigned __int16 DllCharacteristics;
  unsigned int SizeOfStackReserve;
  unsigned int SizeOfStackCommit;
  unsigned int SizeOfHeapReserve;
  unsigned int SizeOfHeapCommit;
  unsigned int LoaderFlags;
  unsigned int NumberOfRvaAndSizes;
  _IMAGE_DATA_DIRECTORY DataDirectory[16];
};


struct _IMAGE_NT_HEADERS
{
  unsigned int Signature;
  _IMAGE_FILE_HEADER FileHeader;
  _IMAGE_OPTIONAL_HEADER OptionalHeader;
};


struct _ASSEMBLY_FILE_DETAILED_INFORMATION
{
  unsigned int ulFlags;
  unsigned int ulFilenameLength;
  unsigned int ulPathLength;
  const unsigned __int16 *lpFileName;
  const unsigned __int16 *lpFilePath;
};


struct _UNLOAD_DLL_DEBUG_INFO
{
  void *lpBaseOfDll;
};


struct tagLOGPEN
{
  unsigned int lopnStyle;
  tagPOINT lopnWidth;
  unsigned int lopnColor;
};


struct _REMOTE_NAME_INFOW
{
  unsigned __int16 *lpUniversalName;
  unsigned __int16 *lpConnectionName;
  unsigned __int16 *lpRemainingPath;
};


struct tagMIDIOUTCAPS2W
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
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct _CRL_FIND_ISSUED_FOR_PARA
{
  _CERT_CONTEXT *pSubjectCert;
  _CERT_CONTEXT *pIssuerCert;
};


union $70FB0961F5E6A70FCD54E042B35C595F
{
  const unsigned __int16 *pszTemplate;
  DLGTEMPLATE *pResource;
};


union $5081588B5D1DA1CB8C31252C8B7A24CA
{
  HICON__ *hIcon;
  const unsigned __int16 *pszIcon;
};


struct _PROPSHEETPAGEW
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $70FB0961F5E6A70FCD54E042B35C595F ___u3;
  $5081588B5D1DA1CB8C31252C8B7A24CA ___u4;
  const unsigned __int16 *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEW *);
  unsigned int *pcRefParent;
  const unsigned __int16 *pszHeaderTitle;
  const unsigned __int16 *pszHeaderSubTitle;
  void *hActCtx;
};


struct HPALETTE__
{
  int unused;
};


union $4B8A0BB10F5C4B9D8BBE7645A6566273
{
  unsigned int nStartPage;
  const unsigned __int16 *pStartPage;
};


union $B6C5A451CFD806CB12DEDFE764D74732
{
  _PROPSHEETPAGEW *ppsp;
  _PSP **phpage;
};


union $3B790B30923A624A895139723B386418
{
  HBITMAP__ *hbmWatermark;
  const unsigned __int16 *pszbmWatermark;
};


union $4ABA3907D01C3875D5AE88C2AA2C9C46
{
  HBITMAP__ *hbmHeader;
  const unsigned __int16 *pszbmHeader;
};


struct _PROPSHEETHEADERW
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HWND__ *hwndParent;
  HINSTANCE__ *hInstance;
  $5081588B5D1DA1CB8C31252C8B7A24CA ___u4;
  const unsigned __int16 *pszCaption;
  unsigned int nPages;
  $4B8A0BB10F5C4B9D8BBE7645A6566273 ___u7;
  $B6C5A451CFD806CB12DEDFE764D74732 ___u8;
  int (__stdcall *pfnCallback)(HWND__ *, unsigned int, int);
  $3B790B30923A624A895139723B386418 ___u10;
  HPALETTE__ *hplWatermark;
  $4ABA3907D01C3875D5AE88C2AA2C9C46 ___u12;
};


struct tagCHOOSECOLORA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HWND__ *hInstance;
  unsigned int rgbResult;
  unsigned int *lpCustColors;
  unsigned int Flags;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpTemplateName;
};


struct _CMSG_SIGNER_INFO
{
  unsigned int dwVersion;
  _CRYPTOAPI_BLOB Issuer;
  _CRYPTOAPI_BLOB SerialNumber;
  _CRYPT_ALGORITHM_IDENTIFIER HashAlgorithm;
  _CRYPT_ALGORITHM_IDENTIFIER HashEncryptionAlgorithm;
  _CRYPTOAPI_BLOB EncryptedHash;
  _CRYPT_ATTRIBUTES AuthAttrs;
  _CRYPT_ATTRIBUTES UnauthAttrs;
};


struct _SYSTEMTIME
{
  unsigned __int16 wYear;
  unsigned __int16 wMonth;
  unsigned __int16 wDayOfWeek;
  unsigned __int16 wDay;
  unsigned __int16 wHour;
  unsigned __int16 wMinute;
  unsigned __int16 wSecond;
  unsigned __int16 wMilliseconds;
};


struct _JOB_INFO_2A
{
  unsigned int JobId;
  char *pPrinterName;
  char *pMachineName;
  char *pUserName;
  char *pDocument;
  char *pNotifyName;
  char *pDatatype;
  char *pPrintProcessor;
  char *pParameters;
  char *pDriverName;
  _devicemodeA *pDevMode;
  char *pStatus;
  void *pSecurityDescriptor;
  unsigned int Status;
  unsigned int Priority;
  unsigned int Position;
  unsigned int StartTime;
  unsigned int UntilTime;
  unsigned int TotalPages;
  unsigned int Size;
  _SYSTEMTIME Submitted;
  unsigned int Time;
  unsigned int PagesPrinted;
};


struct _JOB_INFO_3
{
  unsigned int JobId;
  unsigned int NextJobId;
  unsigned int Reserved;
};


struct _ADDJOB_INFO_1W
{
  unsigned __int16 *Path;
  unsigned int JobId;
};


struct _RIP_INFO
{
  unsigned int dwError;
  unsigned int dwType;
};


struct tagLOGBRUSH32
{
  unsigned int lbStyle;
  unsigned int lbColor;
  unsigned int lbHatch;
};


struct _SCARD_IO_REQUEST
{
  unsigned int dwProtocol;
  unsigned int cbPciLength;
};


struct tagLOGBRUSH
{
  unsigned int lbStyle;
  unsigned int lbColor;
  unsigned int lbHatch;
};


struct __unaligned __declspec(align(2)) waveformat_tag
{
  unsigned __int16 wFormatTag;
  unsigned __int16 nChannels;
  unsigned int nSamplesPerSec;
  unsigned int nAvgBytesPerSec;
  unsigned __int16 nBlockAlign;
};


struct _PROVIDOR_INFO_1A
{
  char *pName;
  char *pEnvironment;
  char *pDLLName;
};


struct __declspec(align(4)) tagCOLORMATCHTOTARGET
{
  tagEMR emr;
  unsigned int dwAction;
  unsigned int dwFlags;
  unsigned int cbName;
  unsigned int cbData;
  char Data[1];
};


struct tagMIXERCAPS2A
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned int fdwSupport;
  unsigned int cDestinations;
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct _CERT_POLICY_ID
{
  unsigned int cCertPolicyElementId;
  char **rgpszCertPolicyElementId;
};


struct _CERT_KEY_USAGE_RESTRICTION_INFO
{
  unsigned int cCertPolicyId;
  _CERT_POLICY_ID *rgCertPolicyId;
  _CRYPT_BIT_BLOB RestrictedKeyUsage;
};


struct _PRINTER_INFO_1W
{
  unsigned int Flags;
  unsigned __int16 *pDescription;
  unsigned __int16 *pName;
  unsigned __int16 *pComment;
};


struct _ABC
{
  int abcA;
  unsigned int abcB;
  int abcC;
};


struct tagJOYCAPS2A
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
  _GUID ManufacturerGuid;
  _GUID ProductGuid;
  _GUID NameGuid;
};


struct tagMCI_ANIM_OPEN_PARMSA
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const char *lpstrDeviceType;
  const char *lpstrElementName;
  const char *lpstrAlias;
  unsigned int dwStyle;
  HWND__ *hWndParent;
};


struct _NETINFOSTRUCT
{
  unsigned int cbStructure;
  unsigned int dwProviderVersion;
  unsigned int dwStatus;
  unsigned int dwCharacteristics;
  unsigned int dwHandle;
  unsigned __int16 wNetType;
  unsigned int dwPrinters;
  unsigned int dwDrives;
};


struct _SCHANNEL_ALG
{
  unsigned int dwUse;
  unsigned int Algid;
  unsigned int cBits;
  unsigned int dwFlags;
  unsigned int dwReserved;
};


struct _CERT_CREATE_CONTEXT_PARA
{
  unsigned int cbSize;
  void (__stdcall *pfnFree)(void *);
  void *pvFree;
};


struct RPC_DISPATCH_TABLE
{
  unsigned int DispatchTableCount;
  void (__stdcall **DispatchTable)(_RPC_MESSAGE *);
  int Reserved;
};


struct _MIDL_SYNTAX_INFO
{
  _RPC_SYNTAX_IDENTIFIER TransferSyntax;
  RPC_DISPATCH_TABLE *DispatchTable;
  const char *ProcString;
  const unsigned __int16 *FmtStringOffset;
  const char *TypeString;
  const void *aUserMarshalQuadruple;
  unsigned int pReserved1;
  unsigned int pReserved2;
};


struct ReferenceCountTemplate<1048576,1>
{
  ReferenceCountTemplate<1048576,1>Vtbl *vfptr;
  unsigned int m_cRef;
};


struct ReferenceCountTemplate<1048576,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(ReferenceCountTemplate<1048576,1> *this, unsigned int);
};


struct _ACCESS_ALLOWED_CALLBACK_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


struct HKEY__
{
  int unused;
};


struct tagEMRSELECTPALETTE
{
  tagEMR emr;
  unsigned int ihPal;
};


struct _DSSSEED
{
  unsigned int counter;
  char seed[20];
};


struct _PUBKEYVER3
{
  unsigned int magic;
  unsigned int bitlenP;
  unsigned int bitlenQ;
  unsigned int bitlenJ;
  _DSSSEED DSSSeed;
};


struct _CERT_REGISTRY_STORE_ROAMING_PARA
{
  HKEY__ *hKey;
  unsigned __int16 *pwszStoreDirectory;
};


struct _NDR_USER_MARSHAL_INFO_LEVEL1
{
  void *Buffer;
  unsigned int BufferSize;
  void *(__stdcall *pfnAllocate)(unsigned int);
  void (__stdcall *pfnFree)(void *);
  IRpcChannelBuffer *pRpcChannelBuffer;
  unsigned int Reserved[5];
};


struct _DATATYPES_INFO_1A
{
  char *pName;
};


struct __declspec(align(4)) _userBITMAP
{
  int bmType;
  int bmWidth;
  int bmHeight;
  int bmWidthBytes;
  unsigned __int16 bmPlanes;
  unsigned __int16 bmBitsPixel;
  unsigned int cbSize;
  char pBuffer[1];
};


union _userHBITMAP___MIDL_IWinTypes_0007
{
  int hInproc;
  _userBITMAP *hRemote;
  __int64 hInproc64;
};


struct _userHBITMAP
{
  int fContext;
  _userHBITMAP___MIDL_IWinTypes_0007 u;
};


struct tagLOGPALETTE
{
  unsigned __int16 palVersion;
  unsigned __int16 palNumEntries;
  tagPALETTEENTRY palPalEntry[1];
};


union _userHPALETTE___MIDL_IWinTypes_0008
{
  int hInproc;
  tagLOGPALETTE *hRemote;
  __int64 hInproc64;
};


struct _userHPALETTE
{
  int fContext;
  _userHPALETTE___MIDL_IWinTypes_0008 u;
};


union _GDI_OBJECT___MIDL_IAdviseSink_0002
{
  _userHBITMAP *hBitmap;
  _userHPALETTE *hPalette;
  _userHGLOBAL *hGeneric;
};


struct _GDI_OBJECT
{
  unsigned int ObjectType;
  _GDI_OBJECT___MIDL_IAdviseSink_0002 u;
};


struct _FLOATING_SAVE_AREA
{
  unsigned int ControlWord;
  unsigned int StatusWord;
  unsigned int TagWord;
  unsigned int ErrorOffset;
  unsigned int ErrorSelector;
  unsigned int DataOffset;
  unsigned int DataSelector;
  char RegisterArea[80];
  unsigned int Cr0NpxState;
};


struct _CONTEXT
{
  unsigned int ContextFlags;
  unsigned int Dr0;
  unsigned int Dr1;
  unsigned int Dr2;
  unsigned int Dr3;
  unsigned int Dr6;
  unsigned int Dr7;
  _FLOATING_SAVE_AREA FloatSave;
  unsigned int SegGs;
  unsigned int SegFs;
  unsigned int SegEs;
  unsigned int SegDs;
  unsigned int Edi;
  unsigned int Esi;
  unsigned int Ebx;
  unsigned int Edx;
  unsigned int Ecx;
  unsigned int Eax;
  unsigned int Ebp;
  unsigned int Eip;
  unsigned int SegCs;
  unsigned int EFlags;
  unsigned int Esp;
  unsigned int SegSs;
  char ExtendedRegisters[512];
};


struct IComThreadingInfo : IUnknown
{
};


struct tagCAUB
{
  unsigned int cElems;
  char *pElems;
};


struct _OLESTREAM
{
  _OLESTREAMVTBL *lpstbl;
};


struct _OLESTREAMVTBL
{
  unsigned int (__stdcall *Get)(_OLESTREAM *, void *, unsigned int);
  unsigned int (__stdcall *Put)(_OLESTREAM *, const void *, unsigned int);
};


struct hostent
{
  char *h_name;
  char **h_aliases;
  __int16 h_addrtype;
  __int16 h_length;
  char **h_addr_list;
};


struct tagDRAWTEXTPARAMS
{
  unsigned int cbSize;
  int iTabLength;
  int iLeftMargin;
  int iRightMargin;
  unsigned int uiLengthDrawn;
};


struct _PRINTER_INFO_8A
{
  _devicemodeA *pDevMode;
};


struct _WSAQuerySetW
{
  unsigned int dwSize;
  unsigned __int16 *lpszServiceInstanceName;
  _GUID *lpServiceClassId;
  _WSAVersion *lpVersion;
  unsigned __int16 *lpszComment;
  unsigned int dwNameSpace;
  _GUID *lpNSProviderId;
  unsigned __int16 *lpszContext;
  unsigned int dwNumberOfProtocols;
  _AFPROTOCOLS *lpafpProtocols;
  unsigned __int16 *lpszQueryString;
  unsigned int dwNumberOfCsAddrs;
  _CSADDR_INFO *lpcsaBuffer;
  unsigned int dwOutputFlags;
  tagBLOB *lpBlob;
};


struct __declspec(align(4)) tagPELARRAY
{
  int paXCount;
  int paYCount;
  int paXExt;
  int paYExt;
  char paRGBs;
};


struct tagMDICREATESTRUCTA
{
  const char *szClass;
  const char *szTitle;
  void *hOwner;
  int x;
  int y;
  int cx;
  int cy;
  unsigned int style;
  int lParam;
};


struct tagMCI_OPEN_PARMSA
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const char *lpstrDeviceType;
  const char *lpstrElementName;
  const char *lpstrAlias;
};


struct tagMCI_SAVE_PARMSW
{
  unsigned int dwCallback;
  const unsigned __int16 *lpfilename;
};


union $DD63D5EFBF9941617314B72521C6B5CB
{
  void **pAutoHandle;
  void **pPrimitiveHandle;
  __GENERIC_BINDING_INFO *pGenericBindingInfo;
};


struct _NDR_CS_SIZE_CONVERT_ROUTINES
{
  void (__stdcall *pfnNetSize)(void *, unsigned int, unsigned int, _IDL_CS_CONVERT *, unsigned int *, unsigned int *);
  void (__stdcall *pfnToNetCs)(void *, unsigned int, void *, unsigned int, char *, unsigned int *, unsigned int *);
  void (__stdcall *pfnLocalSize)(void *, unsigned int, unsigned int, _IDL_CS_CONVERT *, unsigned int *, unsigned int *);
  void (__stdcall *pfnFromNetCs)(void *, unsigned int, char *, unsigned int, unsigned int, void *, unsigned int *, unsigned int *);
};


struct _NDR_CS_ROUTINES
{
  _NDR_CS_SIZE_CONVERT_ROUTINES *pSizeConvertRoutines;
  void (__stdcall **pTagGettingRoutines)(void *, int, unsigned int *, unsigned int *, unsigned int *, unsigned int *);
};


struct tagSTYLEBUFW
{
  unsigned int dwStyle;
  unsigned __int16 szDescription[32];
};


struct _WSANSClassInfoA
{
  char *lpszName;
  unsigned int dwNameSpace;
  unsigned int dwValueType;
  unsigned int dwValueSize;
  void *lpValue;
};


struct _POINTFLOAT
{
  float x;
  float y;
};


struct _GLYPHMETRICSFLOAT
{
  float gmfBlackBoxX;
  float gmfBlackBoxY;
  _POINTFLOAT gmfptGlyphOrigin;
  float gmfCellIncX;
  float gmfCellIncY;
};


union $598610CC988E402B9A82B84B75BDDF21
{
  unsigned int dwValue;
  unsigned int Algid;
  unsigned int dwLength;
};


struct _CRYPT_OID_INFO
{
  unsigned int cbSize;
  const char *pszOID;
  const unsigned __int16 *pwszName;
  unsigned int dwGroupId;
  $598610CC988E402B9A82B84B75BDDF21 ___u4;
  _CRYPTOAPI_BLOB ExtraInfo;
};


struct _CRYPT_ASYNC_RETRIEVAL_COMPLETION
{
  void (__stdcall *pfnCompletion)(void *, unsigned int, const char *, char *, void *);
  void *pvCompletion;
};


struct _SYSTEM_ALARM_CALLBACK_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct _IMAGE_FUNCTION_ENTRY
{
  unsigned int StartingAddress;
  unsigned int EndingAddress;
  unsigned int EndOfPrologue;
};


struct tagFONTSIGNATURE
{
  unsigned int fsUsb[4];
  unsigned int fsCsb[2];
};


struct POWER_ACTION_POLICY
{
  POWER_ACTION Action;
  unsigned int Flags;
  unsigned int EventCode;
};


struct SYSTEM_POWER_LEVEL
{
  char Enable;
  char Spare[3];
  unsigned int BatteryLevel;
  POWER_ACTION_POLICY PowerPolicy;
  _SYSTEM_POWER_STATE MinSystemState;
};


struct _IMAGE_OS2_HEADER
{
  unsigned __int16 ne_magic;
  char ne_ver;
  char ne_rev;
  unsigned __int16 ne_enttab;
  unsigned __int16 ne_cbenttab;
  int ne_crc;
  unsigned __int16 ne_flags;
  unsigned __int16 ne_autodata;
  unsigned __int16 ne_heap;
  unsigned __int16 ne_stack;
  int ne_csip;
  int ne_sssp;
  unsigned __int16 ne_cseg;
  unsigned __int16 ne_cmod;
  unsigned __int16 ne_cbnrestab;
  unsigned __int16 ne_segtab;
  unsigned __int16 ne_rsrctab;
  unsigned __int16 ne_restab;
  unsigned __int16 ne_modtab;
  unsigned __int16 ne_imptab;
  int ne_nrestab;
  unsigned __int16 ne_cmovent;
  unsigned __int16 ne_align;
  unsigned __int16 ne_cres;
  char ne_exetyp;
  char ne_flagsothers;
  unsigned __int16 ne_pretthunks;
  unsigned __int16 ne_psegrefbytes;
  unsigned __int16 ne_swaparea;
  unsigned __int16 ne_expver;
};


struct _MESSAGE_RESOURCE_BLOCK
{
  unsigned int LowId;
  unsigned int HighId;
  unsigned int OffsetToEntries;
};


struct SCARD_T1_REQUEST
{
  _SCARD_IO_REQUEST ioRequest;
};


struct _DRIVER_INFO_4A
{
  unsigned int cVersion;
  char *pName;
  char *pEnvironment;
  char *pDriverPath;
  char *pDataFile;
  char *pConfigFile;
  char *pHelpFile;
  char *pDependentFiles;
  char *pMonitorName;
  char *pDefaultDataType;
  char *pszzPreviousNames;
};


struct _WSANAMESPACE_INFOA
{
  _GUID NSProviderId;
  unsigned int dwNameSpace;
  int fActive;
  unsigned int dwVersion;
  char *lpszIdentifier;
};


struct tagEMRSETDIBITSTODEVICE
{
  tagEMR emr;
  _RECTL rclBounds;
  int xDest;
  int yDest;
  int xSrc;
  int ySrc;
  int cxSrc;
  int cySrc;
  unsigned int offBmiSrc;
  unsigned int cbBmiSrc;
  unsigned int offBitsSrc;
  unsigned int cbBitsSrc;
  unsigned int iUsageSrc;
  unsigned int iStartScan;
  unsigned int cScans;
};


struct tagOBJECTDESCRIPTOR
{
  unsigned int cbSize;
  _GUID clsid;
  unsigned int dwDrawAspect;
  tagSIZE sizel;
  _POINTL pointl;
  unsigned int dwStatus;
  unsigned int dwFullUserTypeName;
  unsigned int dwSrcOfCopy;
};


struct _OFNOTIFYW
{
  tagNMHDR hdr;
  tagOFNW *lpOFN;
  unsigned __int16 *pszFile;
};


struct HSZ__
{
  int unused;
};


struct HCONV__
{
  int unused;
};


struct tagMONCONVSTRUCT
{
  unsigned int cb;
  int fConnect;
  unsigned int dwTime;
  void *hTask;
  HSZ__ *hszSvc;
  HSZ__ *hszTopic;
  HCONV__ *hConvClient;
  HCONV__ *hConvServer;
};


struct tagMCI_PLAY_PARMS
{
  unsigned int dwCallback;
  unsigned int dwFrom;
  unsigned int dwTo;
};


struct std__Init_locks
{
};


struct exception
{
  exceptionVtbl *vfptr;
  const char *_m_what;
  int _m_doFree;
};


struct exceptionVtbl
{
  void *(__thiscall *__vecDelDtor)(exception *this, unsigned int);
  const char *(__thiscall *what)(exception *this);
};


struct std_bad_exception : exception
{
};


struct std_nothrow_t
{
};


struct std__Lockit
{
  int _Locktype;
};


struct std__Mutex
{
  void *_Mtx;
};


struct std_bad_alloc : exception
{
};


struct _ACCESS_ALLOWED_OBJECT_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int Flags;
  _GUID ObjectType;
  _GUID InheritedObjectType;
  unsigned int SidStart;
};


union _CLIENT_CALL_RETURN
{
  void *Pointer;
  int Simple;
};


struct _ADDJOB_INFO_1A
{
  char *Path;
  unsigned int JobId;
};


struct tagCACY
{
  unsigned int cElems;
  tagCY *pElems;
};


struct tagMCI_WAVE_OPEN_PARMSA
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const char *lpstrDeviceType;
  const char *lpstrElementName;
  const char *lpstrAlias;
  unsigned int dwBufferSeconds;
};


struct _CERT_RDN_ATTR
{
  char *pszObjId;
  unsigned int dwValueType;
  _CRYPTOAPI_BLOB Value;
};


struct _CERT_RDN
{
  unsigned int cRDNAttr;
  _CERT_RDN_ATTR *rgRDNAttr;
};


struct _CERT_STORE_PROV_INFO
{
  unsigned int cbSize;
  unsigned int cStoreProvFunc;
  void **rgpvStoreProvFunc;
  void *hStoreProv;
  unsigned int dwStoreProvFlags;
  void *hStoreProvFuncAddr2;
};


struct IXMLDOMAttribute : IXMLDOMNode
{
};


struct sockaddr_storage
{
  __int16 ss_family;
  char __ss_pad1[6];
  __int64 __ss_align;
  char __ss_pad2[112];
};


struct ITypeMarshal : IUnknown
{
};


struct LIST_ENTRY32
{
  unsigned int Flink;
  unsigned int Blink;
};


union $E0927F6BE2F1645595F211B37EFD8766
{
  unsigned __int64 EndOfPrologue;
  unsigned __int64 UnwindInfoAddress;
};


struct _IMAGE_FUNCTION_ENTRY64
{
  unsigned __int64 StartingAddress;
  unsigned __int64 EndingAddress;
  $E0927F6BE2F1645595F211B37EFD8766 ___u2;
};


struct _EXIT_THREAD_DEBUG_INFO
{
  unsigned int dwExitCode;
};


struct tagMCI_GENERIC_PARMS
{
  unsigned int dwCallback;
};


struct _PRINTER_INFO_2A
{
  char *pServerName;
  char *pPrinterName;
  char *pShareName;
  char *pPortName;
  char *pDriverName;
  char *pComment;
  char *pLocation;
  _devicemodeA *pDevMode;
  char *pSepFile;
  char *pPrintProcessor;
  char *pDatatype;
  char *pParameters;
  void *pSecurityDescriptor;
  unsigned int Attributes;
  unsigned int Priority;
  unsigned int DefaultPriority;
  unsigned int StartTime;
  unsigned int UntilTime;
  unsigned int Status;
  unsigned int cJobs;
  unsigned int AveragePPM;
};


struct IOleContainer
{
  IOleContainerVtbl *lpVtbl;
};


struct IOleContainerVtbl
{
  int (__stdcall *QueryInterface)(IOleContainer *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IOleContainer *);
  unsigned int (__stdcall *Release)(IOleContainer *);
  int (__stdcall *ParseDisplayName)(IOleContainer *, IBindCtx *, unsigned __int16 *, unsigned int *, IMoniker **);
  int (__stdcall *EnumObjects)(IOleContainer *, unsigned int, IEnumUnknown **);
  int (__stdcall *LockContainer)(IOleContainer *, int);
};


struct IEnumUnknown
{
  IEnumUnknownVtbl *lpVtbl;
};


struct IEnumUnknownVtbl
{
  int (__stdcall *QueryInterface)(IEnumUnknown *, _GUID *const , void **);
  unsigned int (__stdcall *AddRef)(IEnumUnknown *);
  unsigned int (__stdcall *Release)(IEnumUnknown *);
  int (__stdcall *Next)(IEnumUnknown *, unsigned int, IUnknown **, unsigned int *);
  int (__stdcall *Skip)(IEnumUnknown *, unsigned int);
  int (__stdcall *Reset)(IEnumUnknown *);
  int (__stdcall *Clone)(IEnumUnknown *, IEnumUnknown **);
};


struct IOleItemContainer : IOleContainer
{
};


struct _SERVICE_STATUS_PROCESS
{
  unsigned int dwServiceType;
  unsigned int dwCurrentState;
  unsigned int dwControlsAccepted;
  unsigned int dwWin32ExitCode;
  unsigned int dwServiceSpecificExitCode;
  unsigned int dwCheckPoint;
  unsigned int dwWaitHint;
  unsigned int dwProcessId;
  unsigned int dwServiceFlags;
};


struct _ENUM_SERVICE_STATUS_PROCESSA
{
  char *lpServiceName;
  char *lpDisplayName;
  _SERVICE_STATUS_PROCESS ServiceStatusProcess;
};


struct servent
{
  char *s_name;
  char **s_aliases;
  __int16 s_port;
  char *s_proto;
};


struct IWindowForBindingUI : IUnknown
{
};


struct tagACCEL
{
  char fVirt;
  unsigned __int16 key;
  unsigned __int16 cmd;
};


struct _CMC_PEND_INFO
{
  _CRYPTOAPI_BLOB PendToken;
  _FILETIME PendTime;
};


union $7AE68627E1C6FAD49D8EE2ECA5F6E5B7
{
  unsigned int dwFailInfo;
  _CMC_PEND_INFO *pPendInfo;
};


struct _CMC_STATUS_INFO
{
  unsigned int dwStatus;
  unsigned int cBodyList;
  unsigned int *rgdwBodyList;
  unsigned __int16 *pwszStatusString;
  unsigned int dwOtherInfoChoice;
  $7AE68627E1C6FAD49D8EE2ECA5F6E5B7 ___u5;
};


struct _QUOTA_LIMITS
{
  unsigned int PagedPoolLimit;
  unsigned int NonPagedPoolLimit;
  unsigned int MinimumWorkingSetSize;
  unsigned int MaximumWorkingSetSize;
  unsigned int PagefileLimit;
  _LARGE_INTEGER TimeLimit;
};


struct tagSERIALKEYSW
{
  unsigned int cbSize;
  unsigned int dwFlags;
  unsigned __int16 *lpszActivePort;
  unsigned __int16 *lpszPort;
  unsigned int iBaudRate;
  unsigned int iPortState;
  unsigned int iActive;
};


struct tagMCI_ANIM_OPEN_PARMSW
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const unsigned __int16 *lpstrDeviceType;
  const unsigned __int16 *lpstrElementName;
  const unsigned __int16 *lpstrAlias;
  unsigned int dwStyle;
  HWND__ *hWndParent;
};


struct $F44AD71768F1B9A571A9943DA466E91B
{
  _LARGE_INTEGER Cylinders;
  _STORAGE_MEDIA_TYPE MediaType;
  unsigned int TracksPerCylinder;
  unsigned int SectorsPerTrack;
  unsigned int BytesPerSector;
  unsigned int NumberMediaSides;
  unsigned int MediaCharacteristics;
};


struct $9F5105A7C64D80EC6D4D8D1774F44889
{
  char MediumType;
  char DensityCode;
};


union $E2E01EC91B61B619AAB202DF225A8B18
{
  $9F5105A7C64D80EC6D4D8D1774F44889 ScsiInformation;
};


struct __declspec(align(4)) $3C76987E3E04639DA09897DBC2947D60
{
  _STORAGE_MEDIA_TYPE MediaType;
  unsigned int MediaCharacteristics;
  unsigned int CurrentBlockSize;
  _STORAGE_BUS_TYPE BusType;
  $E2E01EC91B61B619AAB202DF225A8B18 BusSpecificData;
};


union $1F36A89D5B389640602CD6E718AF60E6
{
  $F44AD71768F1B9A571A9943DA466E91B DiskInfo;
  $F44AD71768F1B9A571A9943DA466E91B RemovableDiskInfo;
  $3C76987E3E04639DA09897DBC2947D60 TapeInfo;
};


struct _DEVICE_MEDIA_INFO
{
  $1F36A89D5B389640602CD6E718AF60E6 DeviceSpecific;
};


struct _GET_MEDIA_TYPES
{
  unsigned int DeviceType;
  unsigned int MediaInfoCount;
  _DEVICE_MEDIA_INFO MediaInfo[1];
};


struct IInternetZoneManager : IUnknown
{
};


struct _ZONEATTRIBUTES
{
  unsigned int cbSize;
  unsigned __int16 szDisplayName[260];
  unsigned __int16 szDescription[200];
  unsigned __int16 szIconPath[260];
  unsigned int dwTemplateMinLevel;
  unsigned int dwTemplateRecommended;
  unsigned int dwTemplateCurrentLevel;
  unsigned int dwFlags;
};


struct ICreateTypeLib : IUnknown
{
};


struct ICreateTypeLib2 : ICreateTypeLib
{
};


struct tagPSDA
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  unsigned int Flags;
  tagPOINT ptPaperSize;
  tagRECT rtMinMargin;
  tagRECT rtMargin;
  HINSTANCE__ *hInstance;
  int lCustData;
  unsigned int (__stdcall *lpfnPageSetupHook)(HWND__ *, unsigned int, unsigned int, int);
  unsigned int (__stdcall *lpfnPagePaintHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpPageSetupTemplateName;
  void *hPageSetupTemplate;
};


struct _PRINTER_DEFAULTSA
{
  char *pDatatype;
  _devicemodeA *pDevMode;
  unsigned int DesiredAccess;
};


struct _NETCONNECTINFOSTRUCT
{
  unsigned int cbStructure;
  unsigned int dwFlags;
  unsigned int dwSpeed;
  unsigned int dwDelay;
  unsigned int dwOptDataSize;
};


struct _CMS_DH_KEY_INFO
{
  unsigned int dwVersion;
  unsigned int Algid;
  char *pszContentEncObjId;
  _CRYPTOAPI_BLOB PubInfo;
  void *pReserved;
};


struct $507ECED6EFA5CFD5AC2C04C0BCDE222D
{
  unsigned int Short;
  unsigned int Long;
};


union $0FF6F334D460CA5B7BFC69450013B050
{
  char ShortName[8];
  $507ECED6EFA5CFD5AC2C04C0BCDE222D Name;
  unsigned int LongName[2];
};


struct __unaligned __declspec(align(2)) _IMAGE_SYMBOL
{
  $0FF6F334D460CA5B7BFC69450013B050 N;
  unsigned int Value;
  __int16 SectionNumber;
  unsigned __int16 Type;
  char StorageClass;
  char NumberOfAuxSymbols;
};


struct __declspec(align(8)) _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION
{
  unsigned int ulFlags;
  unsigned int ulEncodedAssemblyIdentityLength;
  unsigned int ulManifestPathType;
  unsigned int ulManifestPathLength;
  _LARGE_INTEGER liManifestLastWriteTime;
  unsigned int ulPolicyPathType;
  unsigned int ulPolicyPathLength;
  _LARGE_INTEGER liPolicyLastWriteTime;
  unsigned int ulMetadataSatelliteRosterIndex;
  unsigned int ulManifestVersionMajor;
  unsigned int ulManifestVersionMinor;
  unsigned int ulPolicyVersionMajor;
  unsigned int ulPolicyVersionMinor;
  unsigned int ulAssemblyDirectoryNameLength;
  const unsigned __int16 *lpAssemblyEncodedAssemblyIdentity;
  const unsigned __int16 *lpAssemblyManifestPath;
  const unsigned __int16 *lpAssemblyPolicyPath;
  const unsigned __int16 *lpAssemblyDirectoryName;
  unsigned int ulFileCount;
};


struct IInternetProtocolRoot : IUnknown
{
};


struct IInternetProtocol : IInternetProtocolRoot
{
};


struct tagDROPSTRUCT
{
  HWND__ *hwndSource;
  HWND__ *hwndSink;
  unsigned int wFmt;
  unsigned int dwData;
  tagPOINT ptDrop;
  unsigned int dwControlData;
};


struct __declspec(align(4)) _SECURITY_QUALITY_OF_SERVICE
{
  unsigned int Length;
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
  char ContextTrackingMode;
  char EffectiveOnly;
};


struct tagCONVCONTEXT
{
  unsigned int cb;
  unsigned int wFlags;
  unsigned int wCountryID;
  int iCodePage;
  unsigned int dwLangID;
  unsigned int dwSecurity;
  _SECURITY_QUALITY_OF_SERVICE qos;
};


struct __declspec(align(4)) _PATHNAME_BUFFER
{
  unsigned int PathNameLength;
  unsigned __int16 Name[1];
};


struct _JOB_INFO_1A
{
  unsigned int JobId;
  char *pPrinterName;
  char *pMachineName;
  char *pUserName;
  char *pDocument;
  char *pDatatype;
  char *pStatus;
  unsigned int Status;
  unsigned int Priority;
  unsigned int Position;
  unsigned int TotalPages;
  unsigned int PagesPrinted;
  _SYSTEMTIME Submitted;
};


struct _TOKEN_GROUPS_AND_PRIVILEGES
{
  unsigned int SidCount;
  unsigned int SidLength;
  _SID_AND_ATTRIBUTES *Sids;
  unsigned int RestrictedSidCount;
  unsigned int RestrictedSidLength;
  _SID_AND_ATTRIBUTES *RestrictedSids;
  unsigned int PrivilegeCount;
  unsigned int PrivilegeLength;
  _LUID_AND_ATTRIBUTES *Privileges;
  _LUID AuthenticationId;
};


struct _SID
{
  char Revision;
  char SubAuthorityCount;
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
  unsigned int SubAuthority[1];
};


struct _CERTIFICATE_BLOB
{
  unsigned int dwCertEncodingType;
  unsigned int cbData;
  char *pbData;
};


struct _ENCRYPTION_CERTIFICATE
{
  unsigned int cbTotalLength;
  _SID *pUserSid;
  _CERTIFICATE_BLOB *pCertBlob;
};


struct _STORAGE_PREDICT_FAILURE
{
  unsigned int PredictFailure;
  char VendorSpecific[512];
};


struct tagIMEMENUITEMINFOA
{
  unsigned int cbSize;
  unsigned int fType;
  unsigned int fState;
  unsigned int wID;
  HBITMAP__ *hbmpChecked;
  HBITMAP__ *hbmpUnchecked;
  unsigned int dwItemData;
  char szString[80];
  HBITMAP__ *hbmpItem;
};


struct tagEXTLOGPEN
{
  unsigned int elpPenStyle;
  unsigned int elpWidth;
  unsigned int elpBrushStyle;
  unsigned int elpColor;
  unsigned int elpHatch;
  unsigned int elpNumEntries;
  unsigned int elpStyleEntry[1];
};


struct midievent_tag
{
  unsigned int dwDeltaTime;
  unsigned int dwStreamID;
  unsigned int dwEvent;
  unsigned int dwParms[1];
};


struct _OUTLINETEXTMETRICA
{
  unsigned int otmSize;
  tagTEXTMETRICA otmTextMetrics;
  char otmFiller;
  tagPANOSE otmPanoseNumber;
  unsigned int otmfsSelection;
  unsigned int otmfsType;
  int otmsCharSlopeRise;
  int otmsCharSlopeRun;
  int otmItalicAngle;
  unsigned int otmEMSquare;
  int otmAscent;
  int otmDescent;
  unsigned int otmLineGap;
  unsigned int otmsCapEmHeight;
  unsigned int otmsXHeight;
  tagRECT otmrcFontBox;
  int otmMacAscent;
  int otmMacDescent;
  unsigned int otmMacLineGap;
  unsigned int otmusMinimumPPEM;
  tagPOINT otmptSubscriptSize;
  tagPOINT otmptSubscriptOffset;
  tagPOINT otmptSuperscriptSize;
  tagPOINT otmptSuperscriptOffset;
  unsigned int otmsStrikeoutSize;
  int otmsStrikeoutPosition;
  int otmsUnderscoreSize;
  int otmsUnderscorePosition;
  char *otmpFamilyName;
  char *otmpFaceName;
  char *otmpStyleName;
  char *otmpFullName;
};


struct tagAUXCAPSA
{
  unsigned __int16 wMid;
  unsigned __int16 wPid;
  unsigned int vDriverVersion;
  char szPname[32];
  unsigned __int16 wTechnology;
  unsigned __int16 wReserved1;
  unsigned int dwSupport;
};


typedef unsigned __int16 wchar_t;


union _userCLIPFORMAT___MIDL_IWinTypes_0001
{
  unsigned int dwValue;
  wchar_t *pwszName;
};


struct _userCLIPFORMAT
{
  int fContext;
  _userCLIPFORMAT___MIDL_IWinTypes_0001 u;
};


struct _CRYPT_RC2_CBC_PARAMETERS
{
  unsigned int dwVersion;
  int fIV;
  char rgbIV[8];
};


struct _PREVENT_MEDIA_REMOVAL
{
  char PreventMediaRemoval;
};


struct _DOC_INFO_2A
{
  char *pDocName;
  char *pOutputFile;
  char *pDatatype;
  unsigned int dwMode;
  unsigned int JobId;
};


struct _RASTERIZER_STATUS
{
  __int16 nSize;
  __int16 wFlags;
  __int16 nLanguageID;
};


struct _PROPSHEETPAGEW_V3
{
  unsigned int dwSize;
  unsigned int dwFlags;
  HINSTANCE__ *hInstance;
  $70FB0961F5E6A70FCD54E042B35C595F ___u3;
  $5081588B5D1DA1CB8C31252C8B7A24CA ___u4;
  const unsigned __int16 *pszTitle;
  int (__stdcall *pfnDlgProc)(HWND__ *, unsigned int, unsigned int, int);
  int lParam;
  unsigned int (__stdcall *pfnCallback)(HWND__ *, unsigned int, _PROPSHEETPAGEW *);
  unsigned int *pcRefParent;
  const unsigned __int16 *pszHeaderTitle;
  const unsigned __int16 *pszHeaderSubTitle;
  void *hActCtx;
};


struct _PRINTER_INFO_4A
{
  char *pPrinterName;
  char *pServerName;
  unsigned int Attributes;
};


struct tagOFN_NT4A
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  HINSTANCE__ *hInstance;
  const char *lpstrFilter;
  char *lpstrCustomFilter;
  unsigned int nMaxCustFilter;
  unsigned int nFilterIndex;
  char *lpstrFile;
  unsigned int nMaxFile;
  char *lpstrFileTitle;
  unsigned int nMaxFileTitle;
  const char *lpstrInitialDir;
  const char *lpstrTitle;
  unsigned int Flags;
  unsigned __int16 nFileOffset;
  unsigned __int16 nFileExtension;
  const char *lpstrDefExt;
  int lCustData;
  unsigned int (__stdcall *lpfnHook)(HWND__ *, unsigned int, unsigned int, int);
  const char *lpTemplateName;
};


struct _OFNOTIFYA
{
  tagNMHDR hdr;
  tagOFNA *lpOFN;
  char *pszFile;
};


struct _WIN32_FIND_DATAW
{
  unsigned int dwFileAttributes;
  _FILETIME ftCreationTime;
  _FILETIME ftLastAccessTime;
  _FILETIME ftLastWriteTime;
  unsigned int nFileSizeHigh;
  unsigned int nFileSizeLow;
  unsigned int dwReserved0;
  unsigned int dwReserved1;
  unsigned __int16 cFileName[260];
  unsigned __int16 cAlternateFileName[14];
};


struct _CERT_FORTEZZA_DATA_PROP
{
  char SerialNumber[8];
  int CertIndex;
  char CertLabel[36];
};


struct _CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA
{
  unsigned int cbSize;
  unsigned int dwSignerIndex;
  unsigned int dwUnauthAttrIndex;
};


struct _devicemodeW
{
  unsigned __int16 dmDeviceName[32];
  unsigned __int16 dmSpecVersion;
  unsigned __int16 dmDriverVersion;
  unsigned __int16 dmSize;
  unsigned __int16 dmDriverExtra;
  unsigned int dmFields;
  $14A17E5AD746E9177C2A3EDFC045EF92 ___u6;
  __int16 dmScale;
  __int16 dmCopies;
  __int16 dmDefaultSource;
  __int16 dmPrintQuality;
  __int16 dmColor;
  __int16 dmDuplex;
  __int16 dmYResolution;
  __int16 dmTTOption;
  __int16 dmCollate;
  unsigned __int16 dmFormName[32];
  unsigned __int16 dmLogPixels;
  unsigned int dmBitsPerPel;
  unsigned int dmPelsWidth;
  unsigned int dmPelsHeight;
  $309666D137CBB19809FA597AD348B415 ___u21;
  unsigned int dmDisplayFrequency;
  unsigned int dmICMMethod;
  unsigned int dmICMIntent;
  unsigned int dmMediaType;
  unsigned int dmDitherType;
  unsigned int dmReserved1;
  unsigned int dmReserved2;
  unsigned int dmPanningWidth;
  unsigned int dmPanningHeight;
};


struct _PRINTER_INFO_8W
{
  _devicemodeW *pDevMode;
};


struct tagEMRTEXT
{
  _POINTL ptlReference;
  unsigned int nChars;
  unsigned int offString;
  unsigned int fOptions;
  _RECTL rcl;
  unsigned int offDx;
};


struct tagEMRPOLYTEXTOUTA
{
  tagEMR emr;
  _RECTL rclBounds;
  unsigned int iGraphicsMode;
  float exScale;
  float eyScale;
  int cStrings;
  tagEMRTEXT aemrtext[1];
};


struct pcmwaveformat_tag
{
  waveformat_tag wf;
  unsigned __int16 wBitsPerSample;
};


struct tagMCI_OVLY_OPEN_PARMSW
{
  unsigned int dwCallback;
  unsigned int wDeviceID;
  const unsigned __int16 *lpstrDeviceType;
  const unsigned __int16 *lpstrElementName;
  const unsigned __int16 *lpstrAlias;
  unsigned int dwStyle;
  HWND__ *hWndParent;
};


struct _DRIVER_INFO_1A
{
  char *pName;
};


struct _PRINTER_DEFAULTSW
{
  unsigned __int16 *pDatatype;
  _devicemodeW *pDevMode;
  unsigned int DesiredAccess;
};


struct IInternet : IUnknown
{
};


struct IInternetProtocolInfo : IUnknown
{
};


struct FileNodeName_Float : IFileNodeName
{
  float m_name;
};


struct tagEMRSTRETCHDIBITS
{
  tagEMR emr;
  _RECTL rclBounds;
  int xDest;
  int yDest;
  int xSrc;
  int ySrc;
  int cxSrc;
  int cySrc;
  unsigned int offBmiSrc;
  unsigned int cbBmiSrc;
  unsigned int offBitsSrc;
  unsigned int cbBitsSrc;
  unsigned int iUsageSrc;
  unsigned int dwRop;
  int cxDest;
  int cyDest;
};


struct _BINARY_CONTAINER
{
  unsigned int cbBuf;
  char *pData;
};


union $68114D0D4C7E20C2B51E027D26B6CADC
{
  int bData;
  int iData;
  unsigned __int16 *sData;
  float fData;
  _BINARY_CONTAINER biData;
};


struct _BIDI_DATA
{
  unsigned int dwBidiType;
  $68114D0D4C7E20C2B51E027D26B6CADC u;
};


struct _BIDI_RESPONSE_DATA
{
  unsigned int dwResult;
  unsigned int dwReqNumber;
  unsigned __int16 *pSchema;
  _BIDI_DATA data;
};


struct _BIDI_RESPONSE_CONTAINER
{
  unsigned int Version;
  unsigned int Flags;
  unsigned int Count;
  _BIDI_RESPONSE_DATA aData[1];
};


struct _STORAGE_HOTPLUG_INFO
{
  unsigned int Size;
  char MediaRemovable;
  char MediaHotplug;
  char DeviceHotplug;
  char WriteCacheEnableOverride;
};


struct IPropertyStorage : IUnknown
{
};


union $3CCD9A809E379FE498328B9C7C4CD0C6
{
  unsigned int propid;
  unsigned __int16 *lpwstr;
};


struct tagPROPSPEC
{
  unsigned int ulKind;
  $3CCD9A809E379FE498328B9C7C4CD0C6 ___u1;
};


struct tagCLIPDATA
{
  unsigned int cbSize;
  int ulClipFmt;
  char *pClipData;
};


struct tagBSTRBLOB
{
  unsigned int cbSize;
  char *pData;
};


struct tagVersionedStream
{
  _GUID guidVersion;
  IStream *pStream;
};


struct tagCAC
{
  unsigned int cElems;
  char *pElems;
};


struct tagCAI
{
  unsigned int cElems;
  __int16 *pElems;
};


struct tagCAUI
{
  unsigned int cElems;
  unsigned __int16 *pElems;
};


struct tagCAL
{
  unsigned int cElems;
  int *pElems;
};


struct tagCAUL
{
  unsigned int cElems;
  unsigned int *pElems;
};


struct tagCAH
{
  unsigned int cElems;
  _LARGE_INTEGER *pElems;
};


struct tagCAUH
{
  unsigned int cElems;
  _ULARGE_INTEGER *pElems;
};


struct tagCAFLT
{
  unsigned int cElems;
  float *pElems;
};


struct tagCABOOL
{
  unsigned int cElems;
  __int16 *pElems;
};


struct tagCASCODE
{
  unsigned int cElems;
  int *pElems;
};


struct tagCADATE
{
  unsigned int cElems;
  long double *pElems;
};


struct tagCAFILETIME
{
  unsigned int cElems;
  _FILETIME *pElems;
};


struct tagCACLIPDATA
{
  unsigned int cElems;
  tagCLIPDATA *pElems;
};


struct tagCABSTRBLOB
{
  unsigned int cElems;
  tagBSTRBLOB *pElems;
};


struct tagCALPSTR
{
  unsigned int cElems;
  char **pElems;
};


struct tagCALPWSTR
{
  unsigned int cElems;
  unsigned __int16 **pElems;
};


struct __unaligned __declspec(align(1)) $5DF3780F58367B9F2537DF425A8A812E
{
  unsigned __int16 vt;
  unsigned __int16 wReserved1;
  unsigned __int16 wReserved2;
  unsigned __int16 wReserved3;
  char cVal;
};


struct $6D336DA143C556260FF80C12817B08DB
{
  _BYTE gap0[8];
  int lVal;
};


struct $5A00B54AD7992014DF22AEBA2076B577
{
  _BYTE gap0[8];
  _LARGE_INTEGER hVal;
};


struct $3766CE08E8A69BD6421414AFC5DA5D53
{
  _BYTE gap0[8];
  _ULARGE_INTEGER uhVal;
};


struct $B7D5211FD27B3EEB866CE6445A947CBE
{
  _BYTE gap0[8];
  _FILETIME filetime;
};


struct $16A0B4D0DD1D10F45CD0F1C0DFD73366
{
  _BYTE gap0[8];
  _GUID *puuid;
};


struct $4A20137DDA1DCC7629F3A728D62C5EBA
{
  _BYTE gap0[8];
  tagCLIPDATA *pclipdata;
};


struct $78F275838D26884A85629EA5C3CA91DF
{
  _BYTE gap0[8];
  tagBSTRBLOB bstrblobVal;
};


struct $91A18C71D450FF00311F87B5D73C5C8D
{
  _BYTE gap0[8];
  tagBLOB blob;
};


struct $17BA733FE6B8BEB3CC80B954432F0727
{
  _BYTE gap0[8];
  char *pszVal;
};


struct $EBA1CD9B4FB6C45FF9EDB12F2AB230DE
{
  _BYTE gap0[8];
  unsigned __int16 *pwszVal;
};


struct $0AA2BBF3C0A19AB270F9EAE83E6B2544
{
  _BYTE gap0[8];
  IStream *pStream;
};


struct $4F23635CE6F8C49CB0F421E0209CD88E
{
  _BYTE gap0[8];
  IStorage *pStorage;
};


struct $1440A71CF432AA5BB611B5D623B76B83
{
  _BYTE gap0[8];
  tagVersionedStream *pVersionedStream;
};


struct $0077B3EB2D7415A30BF7B6767B4F4E5B
{
  _BYTE gap0[8];
  tagCAC cac;
};


struct $DCD3C70C8B5B58E77BCCB629DDE0EE74
{
  _BYTE gap0[8];
  tagCAUB caub;
};


struct $E1BC7C908B82D81D91673BC69A12B420
{
  _BYTE gap0[8];
  tagCAI cai;
};


struct $E4327355E064476AE21C5822A88A3CAB
{
  _BYTE gap0[8];
  tagCAUI caui;
};


struct $A29865643C38A8AEE4CBBFBBEDC7DC04
{
  _BYTE gap0[8];
  tagCAL cal;
};


struct $6F53A2A1A12950DEAC187A87FFA7F05B
{
  _BYTE gap0[8];
  tagCAUL caul;
};


struct $DA685B5D2352C5C9633C900710D1F7E3
{
  _BYTE gap0[8];
  tagCAH cah;
};


struct $D91BE1A7D5CAA5EE9D64FD332BA1DFDF
{
  _BYTE gap0[8];
  tagCAUH cauh;
};


struct $CF80EC259A3C67A301D74060631C0B10
{
  _BYTE gap0[8];
  tagCAFLT caflt;
};


struct $D29FCFFDDC7622CCC84D6B7FE2EC3AD5
{
  _BYTE gap0[8];
  tagCADBL cadbl;
};


struct $67509306F083320671E41F869D9F9EF3
{
  _BYTE gap0[8];
  tagCABOOL cabool;
};


struct $0F1C52766E6C4C9A100EFA6E892435A9
{
  _BYTE gap0[8];
  tagCASCODE cascode;
};


struct $FB475ADE9D82F62AB2F7A7B438EDCAD2
{
  _BYTE gap0[8];
  tagCACY cacy;
};


struct $A73E4F1B4983FA2F1DCE0649D1D7A542
{
  _BYTE gap0[8];
  tagCADATE cadate;
};


struct $00865294EE87F10EF3108D9908F5B4E4
{
  _BYTE gap0[8];
  tagCAFILETIME cafiletime;
};


struct $0FE12504AE3E0A14EA24F9DB2C7FA835
{
  _BYTE gap0[8];
  tagCACLSID cauuid;
};


struct $BD44B17C47415549EB0E70A21EA7EBEF
{
  _BYTE gap0[8];
  tagCACLIPDATA caclipdata;
};


struct $7DD2032A340BED09274C8E2F241DE4F3
{
  _BYTE gap0[8];
  tagCABSTR cabstr;
};


struct $F49A49443F56CA86A1F9593BCDC14C4B
{
  _BYTE gap0[8];
  tagCABSTRBLOB cabstrblob;
};


struct $2A012940E95034292C7152FA22CFA83B
{
  _BYTE gap0[8];
  tagCALPSTR calpstr;
};


struct $86CD87227DD8DAA100A3EDAC467884AA
{
  _BYTE gap0[8];
  tagCALPWSTR calpwstr;
};


struct tagCAPROPVARIANT
{
  unsigned int cElems;
  tagPROPVARIANT *pElems;
};


struct $8505AD5EF83C58DDE87F480B32341F57
{
  _BYTE gap0[8];
  tagCAPROPVARIANT capropvar;
};


struct $9D97ACEDA60C7A9A5CD6A0D6E32A118B
{
  _BYTE gap0[8];
  tagPROPVARIANT *pvarVal;
};


union $D2A8EDAE76A10BC420127CEA6879AA28
{
  $5DF3780F58367B9F2537DF425A8A812E __s0;
  tagDEC decVal;
  $F28A51B4B40B0D33C72915D739D42B4B __s2;
  $31126B8528A05AF3606C6D495FD178E8 __s3;
  $48802A31D3D0701BC13CEF9CEA041E7B __s4;
  $6D336DA143C556260FF80C12817B08DB __s5;
  $B644145F46FF1F932B106BFA6CC3F6D9 __s6;
  $5CA90CF57237397281FB12BFD52C1905 __s7;
  $E7F48E2F4EAA3149E57D87E5D1B2C6B8 __s8;
  $5A00B54AD7992014DF22AEBA2076B577 __s9;
  $3766CE08E8A69BD6421414AFC5DA5D53 __s10;
  $50230A970D9734D4E9774CFC619DF0F6 __s11;
  $4C0EC2258454B893CE739DAE89D8DB7B __s12;
  $6DB36323059316E675433BB10D285009 __s13;
  $8E3C8731874D1B3BC66617C4DD3163A6 __s14;
  $16737F06913DACF50224AD026FE5ED52 __s15;
  $E94952165EEA9EEA990FEB33603E1B19 __s16;
  $B7D5211FD27B3EEB866CE6445A947CBE __s17;
  $16A0B4D0DD1D10F45CD0F1C0DFD73366 __s18;
  $4A20137DDA1DCC7629F3A728D62C5EBA __s19;
  $C854646156F6772BF5D6F8470C9CCFAF __s20;
  $78F275838D26884A85629EA5C3CA91DF __s21;
  $91A18C71D450FF00311F87B5D73C5C8D __s22;
  $17BA733FE6B8BEB3CC80B954432F0727 __s23;
  $EBA1CD9B4FB6C45FF9EDB12F2AB230DE __s24;
  $C56EFDA68083C016D8A875D7F2DD48F5 __s25;
  $378BA351D229C158B43779FFC0A1B1AD __s26;
  $0AA2BBF3C0A19AB270F9EAE83E6B2544 __s27;
  $4F23635CE6F8C49CB0F421E0209CD88E __s28;
  $1440A71CF432AA5BB611B5D623B76B83 __s29;
  $EC718D470B5970BABF1B11757C9CCEF9 __s30;
  $0077B3EB2D7415A30BF7B6767B4F4E5B __s31;
  $DCD3C70C8B5B58E77BCCB629DDE0EE74 __s32;
  $E1BC7C908B82D81D91673BC69A12B420 __s33;
  $E4327355E064476AE21C5822A88A3CAB __s34;
  $A29865643C38A8AEE4CBBFBBEDC7DC04 __s35;
  $6F53A2A1A12950DEAC187A87FFA7F05B __s36;
  $DA685B5D2352C5C9633C900710D1F7E3 __s37;
  $D91BE1A7D5CAA5EE9D64FD332BA1DFDF __s38;
  $CF80EC259A3C67A301D74060631C0B10 __s39;
  $D29FCFFDDC7622CCC84D6B7FE2EC3AD5 __s40;
  $67509306F083320671E41F869D9F9EF3 __s41;
  $0F1C52766E6C4C9A100EFA6E892435A9 __s42;
  $FB475ADE9D82F62AB2F7A7B438EDCAD2 __s43;
  $A73E4F1B4983FA2F1DCE0649D1D7A542 __s44;
  $00865294EE87F10EF3108D9908F5B4E4 __s45;
  $0FE12504AE3E0A14EA24F9DB2C7FA835 __s46;
  $BD44B17C47415549EB0E70A21EA7EBEF __s47;
  $7DD2032A340BED09274C8E2F241DE4F3 __s48;
  $F49A49443F56CA86A1F9593BCDC14C4B __s49;
  $2A012940E95034292C7152FA22CFA83B __s50;
  $86CD87227DD8DAA100A3EDAC467884AA __s51;
  $8505AD5EF83C58DDE87F480B32341F57 __s52;
  $E1D71D20C3D01115E20D79FAE9629CE8 __s53;
  $166B1F81F6EA96F97683A65F38FB1A59 __s54;
  $76732A64405C0E287FCB302687644550 __s55;
  $5669F5A4AD19EF2CB42A5602080CB0A6 __s56;
  $E5FC128E66C26C95254032BA69D36E74 __s57;
  $886F8AE9D7C8B1B861B6CA58D67B682A __s58;
  $CDA73A427DD2A30CDA26CA3394C33CF0 __s59;
  $2516E53E690D8CC5659AAB7EDC49E664 __s60;
  $BF8CC88CDF129BD6E4FA4ABA13F521AD __s61;
  $2CABE618CF1C2625A4479554E4967E0A __s62;
  $AAA92DA1D6E1B0E8462F69216B62027C __s63;
  $B50888724FC9E0FCD5A9E53E9F05C27C __s64;
  $F7167AE7A8ABA03C094C204FB1564A28 __s65;
  $185EA5CCE4FDFFE8FC0365849B7F722B __s66;
  $6857AE69DB7C952EEFD665431A7B503A __s67;
  $0878F16B0390542D20060EB711608720 __s68;
  $6F5F61F0A274ACF41FA8A466582E5408 __s69;
  $A943E77B543534A3D0C9478F54935464 __s70;
  $72E36A8367E2F91461FE60B0028555C4 __s71;
  $9D97ACEDA60C7A9A5CD6A0D6E32A118B __s72;
};


struct tagPROPVARIANT
{
  $D2A8EDAE76A10BC420127CEA6879AA28 ___u0;
};


struct IEnumSTATPROPSTG : IUnknown
{
};


struct tagSTATPROPSETSTG
{
  _GUID fmtid;
  _GUID clsid;
  unsigned int grfFlags;
  _FILETIME mtime;
  _FILETIME ctime;
  _FILETIME atime;
  unsigned int dwOSVersion;
};


struct __unaligned __declspec(align(2)) tagPDW
{
  unsigned int lStructSize;
  HWND__ *hwndOwner;
  void *hDevMode;
  void *hDevNames;
  HDC__ *hDC;
  unsigned int Flags;
  unsigned __int16 nFromPage;
  unsigned __int16 nToPage;
  unsigned __int16 nMinPage;
  unsigned __int16 nMaxPage;
  unsigned __int16 nCopies;
  HINSTANCE__ *hInstance;
  int lCustData;
  unsigned int (__stdcall *lpfnPrintHook)(HWND__ *, unsigned int, unsigned int, int);
  unsigned int (__stdcall *lpfnSetupHook)(HWND__ *, unsigned int, unsigned int, int);
  const unsigned __int16 *lpPrintTemplateName;
  const unsigned __int16 *lpSetupTemplateName;
  void *hPrintTemplate;
  void *hSetupTemplate;
};


struct IMAGE_LOAD_CONFIG_DIRECTORY32
{
  unsigned int Characteristics;
  unsigned int TimeDateStamp;
  unsigned __int16 MajorVersion;
  unsigned __int16 MinorVersion;
  unsigned int GlobalFlagsClear;
  unsigned int GlobalFlagsSet;
  unsigned int CriticalSectionDefaultTimeout;
  unsigned int DeCommitFreeBlockThreshold;
  unsigned int DeCommitTotalFreeThreshold;
  unsigned int LockPrefixTable;
  unsigned int MaximumAllocationSize;
  unsigned int VirtualMemoryThreshold;
  unsigned int ProcessHeapFlags;
  unsigned int ProcessAffinityMask;
  unsigned __int16 CSDVersion;
  unsigned __int16 Reserved1;
  unsigned int EditList;
  unsigned int Reserved[1];
};


struct _TRIVERTEX
{
  int x;
  int y;
  unsigned __int16 Red;
  unsigned __int16 Green;
  unsigned __int16 Blue;
  unsigned __int16 Alpha;
};


struct _ACCESS_DENIED_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct __declspec(align(4)) tagTEXTMETRICW
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
};


struct _OUTLINETEXTMETRICW
{
  unsigned int otmSize;
  tagTEXTMETRICW otmTextMetrics;
  char otmFiller;
  tagPANOSE otmPanoseNumber;
  unsigned int otmfsSelection;
  unsigned int otmfsType;
  int otmsCharSlopeRise;
  int otmsCharSlopeRun;
  int otmItalicAngle;
  unsigned int otmEMSquare;
  int otmAscent;
  int otmDescent;
  unsigned int otmLineGap;
  unsigned int otmsCapEmHeight;
  unsigned int otmsXHeight;
  tagRECT otmrcFontBox;
  int otmMacAscent;
  int otmMacDescent;
  unsigned int otmMacLineGap;
  unsigned int otmusMinimumPPEM;
  tagPOINT otmptSubscriptSize;
  tagPOINT otmptSubscriptOffset;
  tagPOINT otmptSuperscriptSize;
  tagPOINT otmptSuperscriptOffset;
  unsigned int otmsStrikeoutSize;
  int otmsStrikeoutPosition;
  int otmsUnderscoreSize;
  int otmsUnderscorePosition;
  char *otmpFamilyName;
  char *otmpFaceName;
  char *otmpStyleName;
  char *otmpFullName;
};


struct _CERT_CRL_CONTEXT_PAIR
{
  _CERT_CONTEXT *pCertContext;
  _CRL_CONTEXT *pCrlContext;
};


struct __declspec(align(4)) tagRemHPALETTE
{
  unsigned int cbData;
  char data[1];
};


struct sockaddr_in
{
  __int16 sin_family;
  unsigned __int16 sin_port;
  in_addr sin_addr;
  char sin_zero[8];
};


struct _DOCINFOA
{
  int cbSize;
  const char *lpszDocName;
  const char *lpszOutput;
  const char *lpszDatatype;
  unsigned int fwType;
};


struct MENUITEMTEMPLATEHEADER
{
  unsigned __int16 versionNumber;
  unsigned __int16 offset;
};


struct HDDEDATA__
{
  int unused;
};


struct _DRIVER_INFO_6W
{
  unsigned int cVersion;
  unsigned __int16 *pName;
  unsigned __int16 *pEnvironment;
  unsigned __int16 *pDriverPath;
  unsigned __int16 *pDataFile;
  unsigned __int16 *pConfigFile;
  unsigned __int16 *pHelpFile;
  unsigned __int16 *pDependentFiles;
  unsigned __int16 *pMonitorName;
  unsigned __int16 *pDefaultDataType;
  unsigned __int16 *pszzPreviousNames;
  _FILETIME ftDriverDate;
  unsigned __int64 dwlDriverVersion;
  unsigned __int16 *pszMfgName;
  unsigned __int16 *pszOEMUrl;
  unsigned __int16 *pszHardwareID;
  unsigned __int16 *pszProvider;
};


struct _SYSTEM_AUDIT_CALLBACK_ACE
{
  _ACE_HEADER Header;
  unsigned int Mask;
  unsigned int SidStart;
};


struct __declspec(align(4)) _FLAGGED_WORD_BLOB
{
  unsigned int fFlags;
  unsigned int clSize;
  unsigned __int16 asData[1];
};


struct _CHANGER_ELEMENT_LIST
{
  _CHANGER_ELEMENT Element;
  unsigned int NumberOfElements;
};


struct __declspec(align(4)) _CHANGER_READ_ELEMENT_STATUS
{
  _CHANGER_ELEMENT_LIST ElementList;
  char VolumeTagInfo;
};


struct IUrlMon : IUnknown
{
};


struct BITMAPV4HEADER
{
  unsigned int bV4Size;
  int bV4Width;
  int bV4Height;
  unsigned __int16 bV4Planes;
  unsigned __int16 bV4BitCount;
  unsigned int bV4V4Compression;
  unsigned int bV4SizeImage;
  int bV4XPelsPerMeter;
  int bV4YPelsPerMeter;
  unsigned int bV4ClrUsed;
  unsigned int bV4ClrImportant;
  unsigned int bV4RedMask;
  unsigned int bV4GreenMask;
  unsigned int bV4BlueMask;
  unsigned int bV4AlphaMask;
  unsigned int bV4CSType;
  tagICEXYZTRIPLE bV4Endpoints;
  unsigned int bV4GammaRed;
  unsigned int bV4GammaGreen;
  unsigned int bV4GammaBlue;
};


struct _BLENDFUNCTION
{
  char BlendOp;
  char BlendFlags;
  char SourceConstantAlpha;
  char AlphaFormat;
};


struct _RPC_PROTSEQ_VECTORW
{
  unsigned int Count;
  unsigned __int16 *Protseq[1];
};


struct _PUBKEY
{
  unsigned int magic;
  unsigned int bitlen;
};


struct _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO
{
  unsigned int cbSize;
  _CRYPT_ALGORITHM_IDENTIFIER KeyEncryptionAlgorithm;
  void *pvKeyEncryptionAuxInfo;
  unsigned int hCryptProv;
  _CRYPT_BIT_BLOB RecipientPublicKey;
  _CERT_ID RecipientId;
};


union $39BAB1932D207E7B4271516C0A89F52A
{
  _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO *pKeyTrans;
  _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO *pKeyAgree;
  _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO *pMailList;
};


struct _CMSG_RECIPIENT_ENCODE_INFO
{
  unsigned int dwRecipientChoice;
  $39BAB1932D207E7B4271516C0A89F52A ___u1;
};


struct _CMSG_CONTENT_ENCRYPT_INFO
{
  unsigned int cbSize;
  unsigned int hCryptProv;
  _CRYPT_ALGORITHM_IDENTIFIER ContentEncryptionAlgorithm;
  void *pvEncryptionAuxInfo;
  unsigned int cRecipients;
  _CMSG_RECIPIENT_ENCODE_INFO *rgCmsRecipients;
  void *(__stdcall *pfnAlloc)(unsigned int);
  void (__stdcall *pfnFree)(void *);
  unsigned int dwEncryptFlags;
  unsigned int hContentEncryptKey;
  unsigned int dwFlags;
};


struct IPSFactoryBuffer : IUnknown
{
};


struct IRpcProxyBuffer : IUnknown
{
};


struct IRpcStubBuffer : IUnknown
{
};


struct IInternetProtocolSink : IUnknown
{
};


struct IXMLElement2 : IDispatch
{
};


struct IXMLElementCollection : IDispatch
{
};


struct __unaligned __declspec(align(2)) _SHFILEOPSTRUCTW
{
  HWND__ *hwnd;
  unsigned int wFunc;
  const unsigned __int16 *pFrom;
  const unsigned __int16 *pTo;
  unsigned __int16 fFlags;
  int fAnyOperationsAborted;
  void *hNameMappings;
  const unsigned __int16 *lpszProgressTitle;
};


struct IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1>
{
  IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1>Vtbl *vfptr;
  HashTableData<Turbine_GUID,Interface *> *m_aInplaceBuckets[23];
  HashTableData<Turbine_GUID,Interface *> **m_buckets;
  HashTableData<Turbine_GUID,Interface *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1> *this, unsigned int);
};


struct IntrusiveHashData<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *>
{
  Turbine_GUID m_hashKey;
  HashTableData<Turbine_GUID,Interface *> *m_hashNext;
};


struct HashTableData<Turbine_GUID,Interface *> : IntrusiveHashData<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *>
{
  Interface *m_data;
};


struct IntrusiveHashIterator<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1>
{
  IntrusiveHashTable<Turbine_GUID,HashTableData<Turbine_GUID,Interface *> *,1> *m_currHashTable;
  HashTableData<Turbine_GUID,Interface *> **m_currBucket;
  HashTableData<Turbine_GUID,Interface *> *m_currElement;
};
