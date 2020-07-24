


struct LongNIValHashIter<GlobalVoyeurInfo> : HashBaseIter<unsigned long>
{
};


struct LongNIValHashData<GlobalVoyeurInfo> : HashBaseData<unsigned long>
{
  GlobalVoyeurInfo data;
};


struct SmartArray<BSPNODE *,1>
{
  BSPNODE **m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CSWVertex
{
  $D554C44E56C320449443B6F5D299EEA7 ___u0;
  __int16 vert_id;
  unsigned __int16 num_uvs;
  CVec2Duv *uvs;
  AC1Legacy_Vector3 normal;
};


struct SerializationBehavior<SB_AsDataID<0> >
{
};


struct SB_AsDataID<0> : SerializationBehavior<SB_AsDataID<0> >
{
};


struct SerializationBehavior<SB_AsPackObj<0> >
{
};


struct SB_AsPackObj<0> : SerializationBehavior<SB_AsPackObj<0> >
{
};


struct SerializationBehavior<SB_Alloc<SB_DefaultAllocator,0,SB_AsPackObj<0> > >
{
};


struct SB_Alloc<SB_DefaultAllocator,0,SB_AsPackObj<0> > : SerializationBehavior<SB_Alloc<SB_DefaultAllocator,0,SB_AsPackObj<0> > >
{
};


struct BSPPORTAL : BSPNODE
{
  unsigned int num_portals;
  CPortalPoly **in_portals;
};


struct BSPLEAF : BSPNODE
{
  unsigned int leaf_index;
  int solid;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ImgTex *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,ImgTex *> *,0> *m_currHashTable;
  HashTableData<unsigned long,ImgTex *> **m_currBucket;
  HashTableData<unsigned long,ImgTex *> *m_currElement;
};


struct HashIterator<unsigned long,ImgTex *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,ImgTex *> *,0> m_iter;
};


struct COptionalHeaderAllocatorTemplate<256,COnePrimHeader<256,96,CServerSwitchStruct> >
{
};


struct COptionalHeaderAllocatorTemplate<16384,COnePrimHeader<16384,1,unsigned long> >
{
};


struct COptionalHeaderAllocatorTemplate<512,COnePrimHeader<512,7,sockaddr_in> >
{
};


struct COnePrimHeader<512,7,sockaddr_in> : COptionalHeader
{
  sockaddr_in m_Prim;
};


struct COptionalHeaderAllocatorTemplate<2048,COnePrimHeader<2048,1073741922,CReferralStruct> >
{
};


struct COptionalHeaderAllocatorTemplate<1048576,CPackObjHeader<NetError,1048576,7> >
{
};


struct __declspec(align(4)) CPackObjHeader<NetError,1048576,7> : COptionalHeader
{
  char *m_pAdoptedData;
  unsigned int m_cbAdoptedData;
  NetError m_Obj;
  bool m_bObjValid;
};


struct COptionalHeaderAllocatorTemplate<2097152,CPackObjHeader<NetError,2097152,2> >
{
};


struct __declspec(align(4)) CPackObjHeader<NetError,2097152,2> : COptionalHeader
{
  char *m_pAdoptedData;
  unsigned int m_cbAdoptedData;
  NetError m_Obj;
  bool m_bObjValid;
};


struct COptionalHeaderAllocatorTemplate<4096,CSeqIDListHeader<4096,33> >
{
};


struct COptionalHeaderAllocatorTemplate<8192,CSeqIDListHeader<8192,33> >
{
};


struct COptionalHeaderFactory_CPlugin
{
  unsigned int dwMask;
  COptionalHeader *(__cdecl *pAllocator)(CBufferIterator *);
};


struct COptionalHeaderFactory
{
};


struct COptionalHeaderAllocatorTemplate<134217728,COnePrimHeader<134217728,16,CFlowStruct> >
{
};


struct __declspec(align(4)) COnePrimHeader<134217728,16,CFlowStruct> : COptionalHeader
{
  CFlowStruct m_Prim;
};


struct InterfaceEnumerator
{
  NetInitializer AutoStartup_;
  int numInterfaces_;
  in_addr *interfaces_;
};


struct COptionalHeaderAllocatorTemplate<32768,CEmptyHeader<32768,3> >
{
};


struct CEmptyHeader<32768,3> : COptionalHeader
{
  unsigned int m_NullBuff;
};


struct COptionalHeaderAllocatorTemplate<524288,COnePrimHeader<524288,536870919,unsigned __int64> >
{
};


struct COnePrimHeader<524288,536870919,unsigned __int64> : COptionalHeader
{
  unsigned __int64 m_Prim;
};


struct COptionalHeaderAllocatorTemplate<131072,COnePrimHeader<131072,7,unsigned __int64> >
{
};


struct COnePrimHeader<131072,7,unsigned __int64> : COptionalHeader
{
  unsigned __int64 m_Prim;
};


struct _STL__Numeric_limits_base<unsigned short>
{
};


struct _STL__Integer_limits<unsigned short,0,65535,-1,1> : _STL__Numeric_limits_base<unsigned short>
{
};


struct HashBaseIter<unsigned __int64>
{
  HashBase<unsigned __int64> *myHash_;
  unsigned int curBucket_;
  HashBaseData<unsigned __int64> *curPtr_;
  HashBaseData<unsigned __int64> *lastThisChain_;
  int fEnd_;
};


struct UI64HashIter<NetBlob> : HashBaseIter<unsigned __int64>
{
};


struct UI64HashIter<ArrivedEphInfo> : HashBaseIter<unsigned __int64>
{
};


struct NIListIter<unsigned long>
{
  NIList<unsigned long> *list_;
  NIListElement<unsigned long> *cur_;
  NIListElement<unsigned long> *prev_;
};


struct COptionalHeaderAllocatorTemplate<4194304,COnePrimHeader<4194304,7,CICMDCommandStruct> >
{
};


struct COnePrimHeader<4194304,7,CICMDCommandStruct> : COptionalHeader
{
  CICMDCommandStruct m_Prim;
};


struct NIListIter<NetPacket *>
{
  NIList<NetPacket *> *list_;
  NIListElement<NetPacket *> *cur_;
  NIListElement<NetPacket *> *prev_;
};


struct ClassFactoryPlugin<CObjectMaint> : IObjectFactory
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct CSphereNode
{
  CSphere sphere;
  unsigned int num_kids;
  CSphere **kids;
};


struct RenderAllocator
{
};


struct CSphereTree : PackObj
{
  CSphere top_sphere;
  unsigned __int16 num_level1;
  CSphereNode *level1_spherenodes;
  unsigned __int16 num_level2;
  CSphere *level2_spheres;
};


struct INTRACKSTATE
{
  unsigned int fdwTrack;
  unsigned int dwTrackLength;
  unsigned int dwLeftInBuffer;
  char *pTrackStart;
  char *pTrackCurrent;
  unsigned int tkNextEventDue;
  char byRunningStatus;
  unsigned int foTrackStart;
  unsigned int foNextReadStart;
  unsigned int dwLeftOnDisk;
};


struct INFILESTATE
{
  unsigned int cbFileLength;
  unsigned int dwTimeDivision;
  unsigned int dwFormat;
  unsigned int dwTrackCount;
  INTRACKSTATE *pitsTracks;
};


struct _ConvertInfo
{
  midihdr_tag mhBuffer;
  unsigned int dwStartOffset;
  unsigned int dwMaxLength;
  unsigned int dwBytesRecorded;
  unsigned int tkStart;
  int bTimesUp;
};


struct MIDIFILEHDR
{
  unsigned __int16 wFormat;
  unsigned __int16 wTrackCount;
  unsigned __int16 wTimeDivision;
};


struct TEMPEVENT
{
  unsigned int tkEvent;
  char byShortData[4];
  unsigned int dwEventLength;
  char *pLongData;
};


struct HACMSTREAM__
{
  int unused;
};


struct CPluginManagerTemplate<TurbineDwExceptionFilter_WatsonCrashReportHelper> : CPluginManager
{
};


struct TurbineDwExceptionFilter_TurnOnDwExceptionHandler : CPluginManagerTemplate<TurbineDwExceptionFilter_WatsonCrashReportHelper>
{
  char m_szWatsonServer[261];
  unsigned __int16 m_wzExtraDllsForDataCapture[261];
  unsigned __int16 m_wzExtraFilesForDataCapture[1024];
  unsigned int m_dwIndexIntoExtraDlls;
  int m_fInstalled;
  int (__stdcall *m_oldFilter)(_EXCEPTION_POINTERS *);
};


struct _DWSharedMem15
{
  unsigned int dwSize;
  unsigned int pid;
  unsigned int tid;
  unsigned int eip;
  _EXCEPTION_POINTERS *pep;
  void *hEventDone;
  void *hEventNotifyDone;
  void *hEventAlive;
  void *hMutex;
  void *hProc;
  unsigned int bfDWBehaviorFlags;
  unsigned int msoctdsResult;
  int fReportProblem;
  unsigned int bfmsoctdsOffer;
  unsigned int bfmsoctdsNotify;
  unsigned int bfmsoctdsLetRun;
  int iPingCurrent;
  int iPingEnd;
  unsigned __int16 wzFormalAppName[56];
  unsigned __int16 wzModuleFileName[260];
  unsigned __int16 wzErrorMessage[260];
  unsigned __int16 wzErrorText[260];
  unsigned __int16 wzCaption[260];
  unsigned __int16 wzHeader[260];
  unsigned __int16 wzReportee[56];
  unsigned __int16 wzPlea[260];
  unsigned __int16 wzReportBtn[56];
  unsigned __int16 wzNoReportBtn[56];
  char szServer[260];
  char szLCIDKeyValue[260];
  char szPIDRegKey[260];
  unsigned int lcidUI;
  char szRegSubPath[200];
  unsigned __int16 wzDotDataDlls[260];
  unsigned __int16 wzAdditionalFile[1024];
  char szBrand[56];
};


struct AC1Legacy_Resource
{
};


struct CSpinLock<100000,0>
{
  volatile int m_Lock;
  unsigned int m_hCurThread;
  unsigned int m_nEnterCount;
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0>Vtbl *vfptr;
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *m_aInplaceBuckets[23];
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> **m_buckets;
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> **m_firstInterestingBucket;
  unsigned int m_numBuckets;
  unsigned int m_numElements;
};


struct HashTable<unsigned long,Logger_ITextFileOutputHandler *,0>
{
  HashTable<unsigned long,Logger_ITextFileOutputHandler *,0>Vtbl *vfptr;
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0> m_intrusiveTable;
};


struct HashTable<unsigned long,Logger_ITextFileOutputHandler *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(HashTable<unsigned long,Logger_ITextFileOutputHandler *,0> *this, unsigned int);
};


struct IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0>Vtbl
{
  void *(__thiscall *__vecDelDtor)(IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0> *this, unsigned int);
};


struct IntrusiveHashData<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *>
{
  unsigned int m_hashKey;
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *m_hashNext;
};


struct HashTableData<unsigned long,Logger_ITextFileOutputHandler *> : IntrusiveHashData<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *>
{
  Logger_ITextFileOutputHandler *m_data;
};


struct MultiThreadOutputRouter : Logger_ITextFileOutputHandler
{
  CSpinLock<100000,0> m_critsec;
  HashTable<unsigned long,Logger_ITextFileOutputHandler *,0> m_hash;
};


struct IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0>
{
  IntrusiveHashTable<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0> *m_currHashTable;
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> **m_currBucket;
  HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *m_currElement;
};


struct HashIterator<unsigned long,Logger_ITextFileOutputHandler *,0>
{
  IntrusiveHashIterator<unsigned long,HashTableData<unsigned long,Logger_ITextFileOutputHandler *> *,0> m_iter;
};


struct ServerLog
{
};


struct InterpolationNode : LListData
{
  unsigned int type;
  Position p;
  AC1Legacy_Vector3 v;
  float extent;
};


struct _STL___Named_exception : exception
{
  char _M_name[256];
};


struct _STL_runtime_error : _STL___Named_exception
{
};


struct _STL_logic_error : _STL___Named_exception
{
};


struct _STL_length_error : _STL_logic_error
{
};


struct _STL_invalid_argument : _STL_logic_error
{
};


struct _STL_underflow_error : _STL_runtime_error
{
};


struct _STL_domain_error : _STL_logic_error
{
};


struct _STL_overflow_error : _STL_runtime_error
{
};


struct _STL_range_error : _STL_runtime_error
{
};


struct _STL_out_of_range : _STL_logic_error
{
};


struct CParseXml
{
};


struct _com_IIID<MSXML2_IXMLDOMDocument2,&_GUID_2933bf95_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMNode : IDispatch
{
};


struct MSXML2_IXMLDOMDocument : MSXML2_IXMLDOMNode
{
};


struct MSXML2_IXMLDOMDocument2 : MSXML2_IXMLDOMDocument
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMDocument2,&_GUID_2933bf95_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMDocument2 *m_pInterface;
};


struct _variant_t : tagVARIANT
{
};


struct _com_IIID<MSXML2_IXMLDOMDocument,&_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60>
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMDocument,&_GUID_2933bf81_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMDocument *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMCDATASection,&_GUID_2933bf8a_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMCharacterData : MSXML2_IXMLDOMNode
{
};


struct MSXML2_IXMLDOMText : MSXML2_IXMLDOMCharacterData
{
};


struct MSXML2_IXMLDOMCDATASection : MSXML2_IXMLDOMText
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMCDATASection,&_GUID_2933bf8a_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMCDATASection *m_pInterface;
};


struct MSXML2_IXSLTemplate : IDispatch
{
};


struct _com_IIID<MSXML2_IXSLTemplate,&_GUID_2933bf93_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_ISchemaItem : IDispatch
{
};


struct MSXML2_ISchemaParticle : MSXML2_ISchemaItem
{
};


struct MSXML2_ISchemaElement : MSXML2_ISchemaParticle
{
};


struct _com_IIID<MSXML2_ISchemaElement,&_GUID_50ea08b7_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_IIID<IUnknown,&_GUID_00000000_0000_0000_c000_000000000046>
{
};


struct _com_ptr_t<_com_IIID<IUnknown,&_GUID_00000000_0000_0000_c000_000000000046> >
{
  IUnknown *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMText,&_GUID_2933bf87_7b36_11d2_b20e_00c04f983e60>
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMText,&_GUID_2933bf87_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMText *m_pInterface;
};


struct MSXML2_IXMLDOMDocumentType : MSXML2_IXMLDOMNode
{
};


struct _com_IIID<MSXML2_IXMLDOMDocumentType,&_GUID_2933bf8b_7b36_11d2_b20e_00c04f983e60>
{
};


struct _com_IIID<MSXML2_ISAXEntityResolver,&_GUID_99bca7bd_e8c4_4d5f_a0cf_6d907901ff07>
{
};


struct MSXML2_ISAXEntityResolver : IUnknown
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISAXEntityResolver,&_GUID_99bca7bd_e8c4_4d5f_a0cf_6d907901ff07> >
{
  MSXML2_ISAXEntityResolver *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMAttribute,&_GUID_2933bf85_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMAttribute : MSXML2_IXMLDOMNode
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMAttribute,&_GUID_2933bf85_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMAttribute *m_pInterface;
};


struct MSXML2_ISchemaType : MSXML2_ISchemaItem
{
};


struct _com_IIID<MSXML2_ISchemaType,&_GUID_50ea08b8_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_IIID<MSXML2_IXMLDOMNamedNodeMap,&_GUID_2933bf83_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMNamedNodeMap : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMNamedNodeMap,&_GUID_2933bf83_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMNamedNodeMap *m_pInterface;
};


struct _com_IIID<MSXML2_ISAXXMLReader,&_GUID_a4f96ed0_f829_476e_81c0_cdc7bd2a0802>
{
};


struct MSXML2_ISAXXMLReader : IUnknown
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISAXXMLReader,&_GUID_a4f96ed0_f829_476e_81c0_cdc7bd2a0802> >
{
  MSXML2_ISAXXMLReader *m_pInterface;
};


struct _com_IIID<MSXML2_IXSLProcessor,&_GUID_2933bf92_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXSLProcessor : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXSLProcessor,&_GUID_2933bf92_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXSLProcessor *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMComment,&_GUID_2933bf88_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMComment : MSXML2_IXMLDOMCharacterData
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMComment,&_GUID_2933bf88_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMComment *m_pInterface;
};


struct MSXML2_IXMLDOMImplementation : IDispatch
{
};


struct _com_IIID<MSXML2_IXMLDOMImplementation,&_GUID_2933bf8f_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IVBSAXDTDHandler : IDispatch
{
};


struct _com_IIID<MSXML2_IVBSAXDTDHandler,&_GUID_24fb3297_302d_4620_ba39_3a732d850558>
{
};


struct _com_IIID<MSXML2_ISchemaItem,&_GUID_50ea08b3_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaItem,&_GUID_50ea08b3_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaItem *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMDocumentFragment,&_GUID_3efaa413_272f_11d2_836f_0000f87a7782>
{
};


struct MSXML2_IXMLDOMDocumentFragment : MSXML2_IXMLDOMNode
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMDocumentFragment,&_GUID_3efaa413_272f_11d2_836f_0000f87a7782> >
{
  MSXML2_IXMLDOMDocumentFragment *m_pInterface;
};


struct _com_IIID<MSXML2_ISchemaIdentityConstraint,&_GUID_50ea08bd_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct MSXML2_ISchemaIdentityConstraint : MSXML2_ISchemaItem
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaIdentityConstraint,&_GUID_50ea08bd_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaIdentityConstraint *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLElement,&_GUID_3f7f31ac_e15f_11d0_9c25_00c04fc99c8e>
{
};


struct MSXML2_IXMLElement : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLElement,&_GUID_3f7f31ac_e15f_11d0_9c25_00c04fc99c8e> >
{
  MSXML2_IXMLElement *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaElement,&_GUID_50ea08b7_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaElement *m_pInterface;
};


struct MSXML2_IVBSAXAttributes : IDispatch
{
};


struct _com_IIID<MSXML2_IVBSAXAttributes,&_GUID_10dc0586_132b_4cac_8bb3_db00ac8b7ee0>
{
};


struct _com_IIID<IDispatch,&_GUID_00020400_0000_0000_c000_000000000046>
{
};


struct _com_ptr_t<_com_IIID<IDispatch,&_GUID_00020400_0000_0000_c000_000000000046> >
{
  IDispatch *m_pInterface;
};


struct MSXML2_ISchema : MSXML2_ISchemaItem
{
};


struct _com_IIID<MSXML2_ISchema,&_GUID_50ea08b4_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_IIID<MSXML2_IMXNamespacePrefixes,&_GUID_c90352f4_643c_4fbc_bb23_e996eb2d51fd>
{
};


struct MSXML2_IMXNamespacePrefixes : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IMXNamespacePrefixes,&_GUID_c90352f4_643c_4fbc_bb23_e996eb2d51fd> >
{
  MSXML2_IMXNamespacePrefixes *m_pInterface;
};


struct _com_IIID<MSXML2_IVBSAXEntityResolver,&_GUID_0c05d096_f45b_4aca_ad1a_aa0bc25518dc>
{
};


struct MSXML2_IVBSAXEntityResolver : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXEntityResolver,&_GUID_0c05d096_f45b_4aca_ad1a_aa0bc25518dc> >
{
  MSXML2_IVBSAXEntityResolver *m_pInterface;
};


struct MSXML2_IXMLDOMSchemaCollection : IDispatch
{
};


struct _com_IIID<MSXML2_IXMLDOMSchemaCollection,&_GUID_373984c8_b845_449b_91e7_45ac83036ade>
{
};


struct _com_IIID<MSXML2_ISchemaComplexType,&_GUID_50ea08b9_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct MSXML2_ISchemaComplexType : MSXML2_ISchemaType
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaComplexType,&_GUID_50ea08b9_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaComplexType *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLElementCollection,&_GUID_65725580_9b5d_11d0_9bfe_00c04fc99c8e>
{
};


struct MSXML2_IXMLElementCollection : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLElementCollection,&_GUID_65725580_9b5d_11d0_9bfe_00c04fc99c8e> >
{
  MSXML2_IXMLElementCollection *m_pInterface;
};


struct MSXML2_IXMLDOMParseError : IDispatch
{
};


struct _com_IIID<MSXML2_IXMLDOMParseError,&_GUID_3efaa426_272f_11d2_836f_0000f87a7782>
{
};


struct _bstr_t_Data_t
{
  wchar_t *m_wstr;
  char *m_str;
  unsigned int m_RefCount;
};


struct _bstr_t
{
  _bstr_t_Data_t *m_Data;
};


struct MSXML2_ISchemaNotation : MSXML2_ISchemaItem
{
};


struct MSXML2_IXTLRuntime : MSXML2_IXMLDOMNode
{
};


struct MSXML2_ISchemaItemCollection : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaItemCollection,&_GUID_50ea08b2_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaItemCollection *m_pInterface;
};


struct MSXML2_ISchemaModelGroup : MSXML2_ISchemaParticle
{
};


struct _com_IIID<MSXML2_IXMLDOMSelection,&_GUID_aa634fc7_5888_44a7_a257_3a47150d3a0e>
{
};


struct MSXML2_IXMLDOMNodeList : IDispatch
{
};


struct MSXML2_IXMLDOMSelection : MSXML2_IXMLDOMNodeList
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMSelection,&_GUID_aa634fc7_5888_44a7_a257_3a47150d3a0e> >
{
  MSXML2_IXMLDOMSelection *m_pInterface;
};


struct MSXML2_ISchemaAny : MSXML2_ISchemaParticle
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaAny,&_GUID_50ea08bc_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaAny *m_pInterface;
};


struct MSXML2_ISchemaAttributeGroup : MSXML2_ISchemaItem
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMSchemaCollection,&_GUID_373984c8_b845_449b_91e7_45ac83036ade> >
{
  MSXML2_IXMLDOMSchemaCollection *m_pInterface;
};


struct MSXML2_ISAXLexicalHandler : IUnknown
{
};


struct MSXML2_IVBMXNamespaceManager : IDispatch
{
};


struct _com_IIID<MSXML2_IVBSAXContentHandler,&_GUID_2ed7290a_4dd5_4b46_bb26_4e4155e77faa>
{
};


struct MSXML2_IVBSAXContentHandler : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXContentHandler,&_GUID_2ed7290a_4dd5_4b46_bb26_4e4155e77faa> >
{
  MSXML2_IVBSAXContentHandler *m_pInterface;
};


struct MSXML2_ISchemaStringCollection : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaStringCollection,&_GUID_50ea08b1_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaStringCollection *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMDocumentType,&_GUID_2933bf8b_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMDocumentType *m_pInterface;
};


struct MSXML2_IVBSAXLexicalHandler : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchema,&_GUID_50ea08b4_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchema *m_pInterface;
};


struct MSXML2_IVBSAXXMLReader : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXDTDHandler,&_GUID_24fb3297_302d_4620_ba39_3a732d850558> >
{
  MSXML2_IVBSAXDTDHandler *m_pInterface;
};


struct MSXML2_IVBSAXErrorHandler : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXErrorHandler,&_GUID_d963d3fe_173c_4862_9095_b92f66995f52> >
{
  MSXML2_IVBSAXErrorHandler *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXAttributes,&_GUID_10dc0586_132b_4cac_8bb3_db00ac8b7ee0> >
{
  MSXML2_IVBSAXAttributes *m_pInterface;
};


struct MSXML2_IXMLHTTPRequest : IDispatch
{
};


struct MSXML2_IServerXMLHTTPRequest : MSXML2_IXMLHTTPRequest
{
};


struct MSXML2_IServerXMLHTTPRequest2 : MSXML2_IServerXMLHTTPRequest
{
};


struct _com_IIID<MSXML2_IXMLDOMNodeList,&_GUID_2933bf82_7b36_11d2_b20e_00c04f983e60>
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMNodeList,&_GUID_2933bf82_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMNodeList *m_pInterface;
};


struct MSXML2_IXMLDOMElement : MSXML2_IXMLDOMNode
{
};


struct _com_IIID<MSXML2_ISAXDTDHandler,&_GUID_e15c1baf_afb3_4d60_8c36_19a8c45defed>
{
};


struct MSXML2_ISAXDTDHandler : IUnknown
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISAXDTDHandler,&_GUID_e15c1baf_afb3_4d60_8c36_19a8c45defed> >
{
  MSXML2_ISAXDTDHandler *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMNode,&_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMNode *m_pInterface;
};


struct MSXML2_IDSOControl : IDispatch
{
};


struct MSXML2_IXMLDOMNotation : MSXML2_IXMLDOMNode
{
};


struct MSXML2_IXMLDOMEntity : MSXML2_IXMLDOMNode
{
};


struct MSXML2_IMXSchemaDeclHandler : IDispatch
{
};


struct _com_IIID<MSXML2_IXMLDOMProcessingInstruction,&_GUID_2933bf89_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMProcessingInstruction : MSXML2_IXMLDOMNode
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMProcessingInstruction,&_GUID_2933bf89_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMProcessingInstruction *m_pInterface;
};


struct _com_IIID<MSXML2_IVBSAXErrorHandler,&_GUID_d963d3fe_173c_4862_9095_b92f66995f52>
{
};


struct MSXML2_IVBSAXLocator : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXSLTemplate,&_GUID_2933bf93_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXSLTemplate *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IVBSAXXMLReader,&_GUID_8c033caa_6cd6_4f73_b728_4531af74945f> >
{
  MSXML2_IVBSAXXMLReader *m_pInterface;
};


struct MSXML2_IVBSAXXMLFilter : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMImplementation,&_GUID_2933bf8f_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMImplementation *m_pInterface;
};


struct _com_IIID<MSXML2_ISchemaStringCollection,&_GUID_50ea08b1_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct MSXML2_IXMLElement2 : IDispatch
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLElement2,&_GUID_2b8de2ff_8d2d_11d1_b2fc_00c04fd915a9> >
{
  MSXML2_IXMLElement2 *m_pInterface;
};


struct MSXML2_ISAXDeclHandler : IUnknown
{
};


struct _com_IIID<MSXML2_ISchemaItemCollection,&_GUID_50ea08b2_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct MSXML2_ISAXXMLFilter : MSXML2_ISAXXMLReader
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaType,&_GUID_50ea08b8_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaType *m_pInterface;
};


struct MSXML2_ISchemaAttribute : MSXML2_ISchemaItem
{
};


struct _com_IIID<MSXML2_IXMLElement2,&_GUID_2b8de2ff_8d2d_11d1_b2fc_00c04fd915a9>
{
};


struct MSXML2_IXMLDocument : IDispatch
{
};


struct MSXML2_IMXAttributes : IDispatch
{
};


struct MSXML2_IXMLDocument2 : IDispatch
{
};


struct MSXML2_ISAXContentHandler : IUnknown
{
};


struct MSXML2_ISAXLocator : IUnknown
{
};


struct MSXML2_ISAXAttributes : IUnknown
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISAXContentHandler,&_GUID_1545cdfa_9e4e_4497_a8a4_2bf7d0112c44> >
{
  MSXML2_ISAXContentHandler *m_pInterface;
};


struct MSXML2_ISAXErrorHandler : IUnknown
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISAXErrorHandler,&_GUID_a60511c4_ccf5_479e_98a3_dc8dc545b7d0> >
{
  MSXML2_ISAXErrorHandler *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMEntityReference,&_GUID_2933bf8e_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IXMLDOMEntityReference : MSXML2_IXMLDOMNode
{
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMEntityReference,&_GUID_2933bf8e_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMEntityReference *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMParseError,&_GUID_3efaa426_272f_11d2_836f_0000f87a7782> >
{
  MSXML2_IXMLDOMParseError *m_pInterface;
};


struct MSXML2_IMXWriter : IDispatch
{
};


struct _com_IIID<MSXML2_IVBSAXXMLReader,&_GUID_8c033caa_6cd6_4f73_b728_4531af74945f>
{
};


struct MSXML2_IXMLDOMSchemaCollection2 : MSXML2_IXMLDOMSchemaCollection
{
};


struct MSXML2_IXMLError : IUnknown
{
};


struct MSXML2__xml_error
{
  unsigned int _nLine;
  unsigned __int16 *_pchBuf;
  unsigned int _cchBuf;
  unsigned int _ich;
  unsigned __int16 *_pszFound;
  unsigned __int16 *_pszExpected;
  unsigned int _reserved1;
  unsigned int _reserved2;
};


struct _com_IIID<MSXML2_IXMLDOMNode,&_GUID_2933bf80_7b36_11d2_b20e_00c04f983e60>
{
};


struct _com_IIID<MSXML2_ISchemaModelGroup,&_GUID_50ea08bb_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_ptr_t<_com_IIID<MSXML2_ISchemaModelGroup,&_GUID_50ea08bb_dd1b_4664_9a50_c2f40f4bd79a> >
{
  MSXML2_ISchemaModelGroup *m_pInterface;
};


struct _com_ptr_t<_com_IIID<MSXML2_IXMLDOMElement,&_GUID_2933bf86_7b36_11d2_b20e_00c04f983e60> >
{
  MSXML2_IXMLDOMElement *m_pInterface;
};


struct _com_IIID<MSXML2_IXMLDOMElement,&_GUID_2933bf86_7b36_11d2_b20e_00c04f983e60>
{
};


struct MSXML2_IMXNamespaceManager : IUnknown
{
};


struct MSXML2_IMXReaderControl : IDispatch
{
};


struct MSXML2_XMLDOMDocumentEvents : IDispatch
{
};


struct MSXML2_IXMLAttribute : IDispatch
{
};


struct _com_IIID<MSXML2_ISchemaAny,&_GUID_50ea08bc_dd1b_4664_9a50_c2f40f4bd79a>
{
};


struct _com_IIID<MSXML2_ISAXErrorHandler,&_GUID_a60511c4_ccf5_479e_98a3_dc8dc545b7d0>
{
};


struct _com_IIID<MSXML2_ISAXContentHandler,&_GUID_1545cdfa_9e4e_4497_a8a4_2bf7d0112c44>
{
};


struct MSXML2_IVBSAXDeclHandler : IDispatch
{
};


struct _com_error
{
  _com_errorVtbl *vfptr;
  const int m_hresult;
  IErrorInfo *m_perrinfo;
  char *m_pszMsg;
};


struct _com_errorVtbl
{
  void *(__thiscall *__vecDelDtor)(_com_error *this, unsigned int);
};


struct gmCLCache : CLCache
{
};


struct ClassFactoryPlugin<ClientObjMaintSystem> : IObjectFactory
{
  Turbine_RefCount m_cTurbineRefCount;
};


struct ACCmdInterp : CommandInterpreter, gmNoticeHandler
{
  HashTable<unsigned long,unsigned long,0> m_hashEmoteInputActionsToCommands;
};


struct ACSmartBox : SmartBox
{
};


struct MaterialTypeEnumMapper
{
};


struct CombatEnumMapper
{
};


struct CombatManeuver : PackObj
{
  unsigned int style;
  ATTACK_HEIGHT attack_height;
  AttackType attack_type;
  unsigned int min_skill_level;
  unsigned int motion;
};


struct CombatManeuverTable : SerializeUsingPackDBObj
{
  unsigned int _num_combat_maneuvers;
  CombatManeuver *_cmt;
};


struct BodyPartEnumMapper
{
};


struct EmapToDisplay
{
};


struct WeenieLogEnumMapper
{
};


struct MagicEnumMapper
{
};


struct FixedArray<char *>
{
  char **m_data;
  unsigned int m_num;
};


struct ComponentObjectData
{
  unsigned int objectID;
  unsigned int number;
};


struct RefCountIUnknown<gmCCommunicationSystem_uiChatInterfaceProvider> : gmCCommunicationSystem_uiChatInterfaceProvider, ReferenceCountTemplate_1048576_0
{
};


struct __declspec(align(8)) ExperienceTable : SerializeUsingPackDBObj
{
  unsigned int _max_attribute_level;
  unsigned int *_attribute_table;
  unsigned int _max_attribute2nd_level;
  unsigned int *_attribute2nd_table;
  unsigned int _max_trained_skill_level;
  unsigned int *_trained_skill_table;
  unsigned int _max_specialized_skill_level;
  unsigned int *_specialized_skill_table;
  unsigned int _max_level;
  unsigned __int64 *_level_table;
  unsigned int *_credit_table;
};


struct PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestDef>
{
  AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> > _key;
  QuestDef _data;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestDef> *_next;
  int _hashVal;
};


struct PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestDef> : PackObj
{
  int m_fThrowawayDuplicateKeysOnUnPack;
  PackableHashData<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestDef> **_buckets;
  unsigned int _table_size;
  unsigned int _currNum;
};


struct __declspec(align(8)) QuestDefDB : SerializeUsingPackDBObj
{
  PackableHashTable<AC1Legacy_CaseInsensitiveStringBase<AC1Legacy_PStringBase<char> >,QuestDef> _defs;
};


struct CQuestDefDB : QuestDefDB
{
};


struct __declspec(align(8)) ACQualityFilter : QualityFilter
{
  int *_attribute_stat_filter;
  int *_attribute2nd_stat_filter;
  int *_skill_stat_filter;
};


struct gmMasterDBMap : MasterDBMap
{
};


struct LongHashIter<IconData> : HashBaseIter<unsigned long>
{
};


struct PackableHashIterator<unsigned long,__int64>
{
  PackableHashIterator<unsigned long,__int64>Vtbl *vfptr;
  PackableHashData<unsigned long,__int64> *_current;
  PackableHashData<unsigned long,__int64> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,__int64>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,__int64> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,double>
{
  PackableHashIterator<unsigned long,double>Vtbl *vfptr;
  PackableHashData<unsigned long,double> *_current;
  PackableHashData<unsigned long,double> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,double>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,double> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,AC1Legacy_PStringBase<char> >
{
  PackableHashIterator<unsigned long,AC1Legacy_PStringBase<char> >Vtbl *vfptr;
  PackableHashData<unsigned long,AC1Legacy_PStringBase<char> > *_current;
  PackableHashData<unsigned long,AC1Legacy_PStringBase<char> > **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,AC1Legacy_PStringBase<char> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,AC1Legacy_PStringBase<char> > *this, unsigned int);
};


struct PackableHashIterator<unsigned long,IDClass<_tagDataID,32,0> >
{
  PackableHashIterator<unsigned long,IDClass<_tagDataID,32,0> >Vtbl *vfptr;
  PackableHashData<unsigned long,IDClass<_tagDataID,32,0> > *_current;
  PackableHashData<unsigned long,IDClass<_tagDataID,32,0> > **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,IDClass<_tagDataID,32,0> >Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,IDClass<_tagDataID,32,0> > *this, unsigned int);
};


struct PackableLLIter<CreationProfile>
{
  PackableLLIter<CreationProfile>Vtbl *vfptr;
  PackableLLNode<CreationProfile> *_current;
};


struct PackableLLIter<CreationProfile>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableLLIter<CreationProfile> *this, unsigned int);
};


struct PackableHashIterator<unsigned long,Skill>
{
  PackableHashIterator<unsigned long,Skill>Vtbl *vfptr;
  PackableHashData<unsigned long,Skill> *_current;
  PackableHashData<unsigned long,Skill> **_buckets;
  unsigned int _table_size;
};


struct PackableHashIterator<unsigned long,Skill>Vtbl
{
  void *(__thiscall *__vecDelDtor)(PackableHashIterator<unsigned long,Skill> *this, unsigned int);
};


struct PKSystem
{
};


struct SpellIDEnumMapper
{
};


struct DBObjGrabber<CSpellTable>
{
  CSpellTable *m_object;
};


struct EnchantmentSpell : Spell
{
  long double _duration;
  float _degrade_modifier;
  float _degrade_limit;
  unsigned int _etype;
  unsigned int _uImbuedEffect;
  int _SlayerCreatureType;
  float _SlayerDamageBonus;
  long double _critical_frequency;
  long double _critical_multiplier;
  int _ignore_magic_resist;
  long double _resistanceModifier;
  long double _ElementalModifier;
  int _weapon_is_loot;
  int _damage_over_time;
};


struct FellowshipEnchantmentSpell : EnchantmentSpell
{
};


struct ProjectileSpell : Spell
{
};


struct BoostSpell : Spell
{
};


struct FellowshipBoostSpell : BoostSpell
{
};


struct TransferSpell : Spell
{
};


struct PortalLinkSpell : Spell
{
};


struct PortalRecallSpell : Spell
{
};


struct PortalSummonSpell : Spell
{
  long double _portal_lifetime;
};


struct PortalSendingSpell : Spell
{
};


struct FellowshipPortalSendingSpell : PortalSendingSpell
{
};


struct DispelSpell : Spell
{
};


struct FellowshipDispelSpell : DispelSpell
{
};


struct ProjectileLifeSpell : ProjectileSpell
{
};


struct ProjectileEnchantmentSpell : ProjectileSpell
{
};


struct ShopSystem
{
};


struct CUSTOM_D3D_L_VERTEX2
{
  float x;
  float y;
  float z;
  unsigned int diffuse;
  float tu1;
  float tv1;
  float tu2;
  float tv2;
};


struct CUSTOM_D3D_L_VERTEX
{
  float x;
  float y;
  float z;
  unsigned int diffuse;
  float tu;
  float tv;
};


struct CUSTOM_D3D_TL_VERTEX
{
  float x;
  float y;
  float z;
  float rhw;
  unsigned int diffuse;
  float tu;
  float tv;
};


struct CUSTOM_D3D_VERTEX2
{
  float x;
  float y;
  float z;
  float nx;
  float ny;
  float nz;
  unsigned int diffuse;
  float tu1;
  float tv1;
  float tu2;
  float tv2;
};


struct MeshBatchType
{
  unsigned int m_FirstTriangleIndex;
  unsigned int m_NumTriangles;
  unsigned int m_CurTriangleIndex;
  unsigned int m_FirstVertexIndex;
  unsigned int m_LastVertexIndex;
};


struct SmartArray<MeshBatchType,0>
{
  MeshBatchType *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<_D3DXATTRIBUTERANGE,0>
{
  _D3DXATTRIBUTERANGE *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct CUSTOM_D3D_VERTEX
{
  float x;
  float y;
  float z;
  float nx;
  float ny;
  float nz;
  unsigned int diffuse;
  float tu;
  float tv;
};


struct PaletteTemplateIDEnumMapper
{
};


struct COptionalHeaderAllocatorTemplate<1024,CEmptyHeader<1024,7> >
{
};


struct CEmptyHeader<1024,7> : COptionalHeader
{
  unsigned int m_NullBuff;
};


struct OldPublicWeenieDesc : WeenieDesc
{
  AC1Legacy_PStringBase<char> _name;
  AC1Legacy_PStringBase<char> _plural_name;
  IDClass<_tagDataID,32,0> _wcid;
  IDClass<_tagDataID,32,0> _iconID;
  IDClass<_tagDataID,32,0> _iconOverlayID;
  unsigned int _containerID;
  unsigned int _wielderID;
  unsigned int _priority;
  unsigned int _valid_locations;
  unsigned int _location;
  int _itemsCapacity;
  int _containersCapacity;
  ITEM_TYPE _type;
  unsigned int _value;
  ITEM_USEABLE _useability;
  float _useRadius;
  ITEM_TYPE _targetType;
  unsigned int _effects;
  AMMO_TYPE _ammoType;
  COMBAT_USE _combatUse;
  unsigned int _structure;
  unsigned int _maxStructure;
  unsigned int _stackSize;
  unsigned int _maxStackSize;
  unsigned int _bitfield;
  int _blipColor;
  RadarEnum _radar_enum;
  float _obvious_distance;
  IDClass<_tagDataID,32,0> _vndwcid;
  unsigned int _spellID;
  unsigned int _house_owner_iid;
  RestrictionDB *_db;
  PScriptType _pscript;
  unsigned int _hook_type;
  ITEM_TYPE _hook_item_types;
  unsigned int _monarch;
  int _material_type;
};


struct AC1Legacy_NullBufferCleaner<char>
{
};


struct AC1Legacy_NullBufferCleaner<unsigned short>
{
};


struct OldHashTable<unsigned long,unsigned long>
{
  OldHashTable<unsigned long,unsigned long>Vtbl *vfptr;
  OldHashData<unsigned long,unsigned long> **_buckets;
  unsigned int _num_buckets;
  unsigned int _num_elements;
};


struct OldHashTable<unsigned long,unsigned long>Vtbl
{
  void *(__thiscall *__vecDelDtor)(OldHashTable<unsigned long,unsigned long> *this, unsigned int);
  unsigned int (__thiscall *hash)(OldHashTable<unsigned long,unsigned long> *this, const unsigned int *);
  int (__thiscall *is_keys_equiv)(OldHashTable<unsigned long,unsigned long> *this, const unsigned int *, const unsigned int *);
};


struct OldHashData<unsigned long,unsigned long>
{
  unsigned int _key;
  unsigned int _data;
  OldHashData<unsigned long,unsigned long> *_next;
};


struct OldPHashTable<unsigned long,unsigned long> : OldHashTable<unsigned long,unsigned long>, PackObj
{
};


struct OldHashIterator<unsigned long,unsigned long>
{
  OldHashData<unsigned long,unsigned long> *_current;
  OldHashTable<unsigned long,unsigned long> *_table;
};


struct _STL__Numeric_limits_base<unsigned int>
{
};


struct _STL__Integer_limits<unsigned int,0,-1,-1,1> : _STL__Numeric_limits_base<unsigned int>
{
};


struct AC1Legacy_monty
{
  AC1Legacy_vlong m;
  AC1Legacy_vlong n1;
  AC1Legacy_vlong T;
  AC1Legacy_vlong k;
  unsigned int N;
  AC1Legacy_vlong R;
  AC1Legacy_vlong R1;
};


struct AC1Modern_AFrame
{
  Vector3 m_vOrigin;
  Quaternion m_qOrientation;
};


struct TransformBase
{
  Vector3 offset;
  float scale;
  Quaternion qt;
};


struct AC1Modern_Frame : AC1Modern_AFrame
{
  float fl2gv[9];
};


struct SerializationBehavior<SB_Container<SB_Default,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SB_Container<SB_Default,&SB_DEFAULT_ITEM_NAME> : SerializationBehavior<SB_Container<SB_Default,&SB_DEFAULT_ITEM_NAME> >
{
};


struct SerializationBehavior<SB_MemCpy<1> >
{
};


struct SB_MemCpy<1> : SerializationBehavior<SB_MemCpy<1> >
{
};


struct StatIDEnumMapper
{
};


struct AllegianceSystem
{
};


struct CheckpointData
{
  void *_data;
  void *_start;
  unsigned int _size;
  int _ialloc;
  int _pretty;
};


struct SerializationBehavior<SB_Hash<SB_Default,SB_Default,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_Default,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> : SerializationBehavior<SB_Hash<SB_Default,SB_Default,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME> >
{
};


struct SB_Hash<SB_Default,SB_Default,&SB_DEFAULT_ITEM_NAME,&SB_DEFAULT_KEY_NAME,&SB_DEFAULT_VALUE_NAME>_SB_HashData
{
};


struct SerializationBehavior<SB_AsPackObj<1> >
{
};


struct SB_AsPackObj<1> : SerializationBehavior<SB_AsPackObj<1> >
{
};


struct DBObjGrabber<ACCharGenData>
{
  ACCharGenData *m_object;
};


struct DBObjGrabber<ExperienceTable>
{
  ExperienceTable *m_object;
};


struct ComputeMinMaxCurve<0,500,1_e66,1_e66>
{
  long double result;
};


struct _____$2B1A4197686722557092EC31_$20AEC_$0BCM_$0A_$ComputeMinMaxCurve
{
  long double result;
};


struct WLogSystem
{
};


struct CreationEnumMapper
{
};


struct GenerateEnumMapper
{
};


struct AllegianceChatBlob : TurbineChatBlob
{
  unsigned int m_monarchID;
};


struct LongNIHash<int>
{
  LongNIHashData **buckets;
  int table_size;
};


struct BodyPartSelectionNode
{
  int part;
  float chance;
};


struct DBObjGrabber<QuestDefDB>
{
  QuestDefDB *m_object;
};


struct LOAD_UVPAIR
{
  float tcPair[2];
};


struct LOAD_WEIGHTS
{
  unsigned int matrix_index;
  float matrix_weight;
};


struct SmartArray<LOAD_UVPAIR,1>
{
  LOAD_UVPAIR *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct SmartArray<LOAD_WEIGHTS,1>
{
  LOAD_WEIGHTS *m_data;
  unsigned int m_sizeAndDeallocate;
  unsigned int m_num;
};


struct BudgetStatInfoArray
{
};


struct ConnectionCache_Entry
{
  _STL_basic_string<unsigned short,_STL_char_traits<unsigned short>,_STL_allocator<unsigned short> > hostName;
  const unsigned int hostPort;
  void *hostConnection;
};


struct _STL__Deque_iterator_base<ConnectionCache_Entry>
{
  ConnectionCache_Entry *_M_cur;
  ConnectionCache_Entry *_M_first;
  ConnectionCache_Entry *_M_last;
  ConnectionCache_Entry **_M_node;
};


struct _STL__Deque_iterator<ConnectionCache_Entry,_STL__Nonconst_traits<ConnectionCache_Entry> > : _STL__Deque_iterator_base<ConnectionCache_Entry>
{
};


struct _STL_allocator<ConnectionCache_Entry *>
{
};


struct _STL__STLP_alloc_proxy<ConnectionCache_Entry * *,ConnectionCache_Entry *,_STL_allocator<ConnectionCache_Entry *> > : _STL_allocator<ConnectionCache_Entry *>
{
  ConnectionCache_Entry **_M_data;
};


struct _STL_allocator<ConnectionCache_Entry>
{
};


struct _STL__STLP_alloc_proxy<unsigned int,ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> > : _STL_allocator<ConnectionCache_Entry>
{
  unsigned int _M_data;
};


struct _STL__Deque_base<ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> >
{
  _STL__Deque_iterator<ConnectionCache_Entry,_STL__Nonconst_traits<ConnectionCache_Entry> > _M_start;
  _STL__Deque_iterator<ConnectionCache_Entry,_STL__Nonconst_traits<ConnectionCache_Entry> > _M_finish;
  _STL__STLP_alloc_proxy<ConnectionCache_Entry * *,ConnectionCache_Entry *,_STL_allocator<ConnectionCache_Entry *> > _M_map;
  _STL__STLP_alloc_proxy<unsigned int,ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> > _M_map_size;
};


struct _STL_deque<ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> > : _STL__Deque_base<ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> >
{
};


struct ConnectionCache
{
  _STL_deque<ConnectionCache_Entry,_STL_allocator<ConnectionCache_Entry> > m_cache;
};


struct WinInetImplementation : HttpClientImplementation
{
  ConnectionCache *m_connectionCache;
  IHttpClientListener *m_listener;
  unsigned int m_throttleBytesPerSecond;
};


struct URL_COMPONENTSW
{
  unsigned int dwStructSize;
  unsigned __int16 *lpszScheme;
  unsigned int dwSchemeLength;
  INTERNET_SCHEME nScheme;
  unsigned __int16 *lpszHostName;
  unsigned int dwHostNameLength;
  unsigned __int16 nPort;
  unsigned __int16 *lpszUserName;
  unsigned int dwUserNameLength;
  unsigned __int16 *lpszPassword;
  unsigned int dwPasswordLength;
  unsigned __int16 *lpszUrlPath;
  unsigned int dwUrlPathLength;
  unsigned __int16 *lpszExtraInfo;
  unsigned int dwExtraInfoLength;
};


struct _STL_allocator<ConnectionCache_Entry>_rebind<ConnectionCache_Entry>
{
};


struct _STL_allocator<ConnectionCache_Entry>_rebind<ConnectionCache_Entry *>
{
};


struct _STL__BothPtrType<unsigned short *,unsigned short *>
{
};


struct _STL__IsPOD<unsigned short>
{
};


struct _STL__OKToMemCpy<unsigned short,unsigned short>
{
};


struct _STL_unary_function<ConnectionCache_Entry,void>
{
};


struct ConnectionCache_CloseConnection : _STL_unary_function<ConnectionCache_Entry,void>
{
};


struct _STL__OKToMemCpy<ConnectionCache_Entry *,ConnectionCache_Entry *>
{
};


struct _STL__BothPtrType<ConnectionCache_Entry * *,ConnectionCache_Entry * *>
{
};


struct __declspec(align(4)) UIPreferenceItemBool : UIPreferenceItem
{
  bool m_bCache;
};


struct UIPreferenceItemEnum : UIPreferenceItem
{
  unsigned int m_nCache;
  SmartArray<unsigned long,1> m_arrayChoices;
};


struct UIPreferenceItemFloat : UIPreferenceItem
{
  float m_nCache;
  float m_nMin;
  float m_nMax;
};


struct UIPreferenceItemInt : UIPreferenceItem
{
  int m_nCache;
  int m_nMin;
  int m_nMax;
};


struct UIPreferenceItemString : UIPreferenceItem
{
  PStringBase<char> m_strCache;
};


struct _startupinfo
{
  int newmode;
};


struct TypeDescriptor
{
  unsigned int hash;
  void *spare;
  char name[];
};


struct PMD
{
  int mdisp;
  int pdisp;
  int vdisp;
};


struct _s_CatchableType
{
  unsigned int properties;
  TypeDescriptor *pType;
  PMD thisDisplacement;
  int sizeOrOffset;
  void (__cdecl *copyFunction)();
};


struct _s_CatchableTypeArray
{
  int nCatchableTypes;
  _s_CatchableType *arrayOfCatchableTypes[];
};


struct _s_ThrowInfo
{
  unsigned int attributes;
  void (__cdecl *pmfnUnwind)();
  int (*pForwardCompat)(...);
  _s_CatchableTypeArray *pCatchableTypeArray;
};


struct EHExceptionRecord_EHParameters
{
  unsigned int magicNumber;
  void *pExceptionObject;
  _s_ThrowInfo *pThrowInfo;
};


struct EHExceptionRecord
{
  unsigned int ExceptionCode;
  unsigned int ExceptionFlags;
  _EXCEPTION_RECORD *ExceptionRecord;
  void *ExceptionAddress;
  unsigned int NumberParameters;
  EHExceptionRecord_EHParameters params;
};


union FT
{
  unsigned __int64 ft_scalar;
  _FILETIME ft_struct;
};


typedef tagMSGBOXPARAMSW *PMSGBOXPARAMSW;


typedef _MESSAGE_RESOURCE_ENTRY *PMESSAGE_RESOURCE_ENTRY;


typedef void (__stdcall *WAITORTIMERCALLBACKFUNC)(void *, char);


typedef HDC__ *HDC;


typedef tagAUXCAPS2A *NPAUXCAPS2A;


typedef tagMIXERCAPSA *PMIXERCAPS;


typedef tagEMRSELECTCLIPPATH *PEMRSELECTCLIPPATH;


typedef tagAUXCAPS2A *LPAUXCAPS2A;


typedef _PORT_INFO_1W *LPPORT_INFO_1W;


typedef _IMAGE_DEBUG_DIRECTORY *PIMAGE_DEBUG_DIRECTORY;


typedef _PORT_INFO_3W *LPPORT_INFO_3W;


typedef _PRINTER_INFO_1A *LPPRINTER_INFO_1A;


typedef int (__stdcall *PFN_CERT_STORE_PROV_FIND_CERT)(void *, _CERT_STORE_PROV_FIND_INFO *, _CERT_CONTEXT *, unsigned int, void **, _CERT_CONTEXT **);


typedef _PORT_INFO_2W *LPPORT_INFO_2W;


typedef _CTL_ENTRY *PCTL_ENTRY;


typedef tagAUXCAPS2W *LPAUXCAPS2W;


typedef _DOC_INFO_3A *PDOC_INFO_3A;


typedef tagEVENTMSG *PEVENTMSGMSG;


typedef unsigned int HeritageGroup;


typedef tagAUXCAPS2W *NPAUXCAPS2W;


typedef IUnknown *LPUNKNOWN;


typedef _NON_PAGED_DEBUG_INFO *PNON_PAGED_DEBUG_INFO;


typedef tagMIXERCAPS2A *PMIXERCAPS2;


typedef void __stdcall RPCNOTIFICATION_ROUTINE(_RPC_ASYNC_STATE *, void *, _RPC_ASYNC_EVENT);


typedef unsigned int HCRYPTHASH;


typedef unsigned int (__stdcall *LPOFNHOOKPROC)(HWND__ *, unsigned int, unsigned int, int);


typedef SCARD_READERSTATEA *LPSCARD_READERSTATEA;


typedef _IMAGE_RESOURCE_DIRECTORY_ENTRY *PIMAGE_RESOURCE_DIRECTORY_ENTRY;


typedef _PRINTER_INFO_1W *LPPRINTER_INFO_1W;


typedef tagIMEMENUITEMINFOA *PIMEMENUITEMINFO;


typedef sockaddr *PSOCKADDR;


typedef tagEMRLINETO *PEMRLINETO;


typedef tagEVENTMSG *PEVENTMSG;


typedef IAddrExclusionControl *LPADDREXCLUSIONCONTROL;


typedef HKEY__ **PHKEY;


typedef tagMCI_LOAD_PARMSW *LPMCI_LOAD_PARMSW;


typedef _DISK_GEOMETRY *PDISK_GEOMETRY;


typedef tagHIGHCONTRASTA *LPHIGHCONTRASTA;


typedef unsigned __int16 CharType;


typedef unsigned __int16 PROPVAR_PAD2;


typedef int (__stdcall *VERIFY_SIGNATURE_FN)(_SecHandle *, _SecBufferDesc *, unsigned int, unsigned int *);


typedef _RIP_INFO *LPRIP_INFO;


typedef tagKERNINGPAIR *LPKERNINGPAIR;


typedef _OSVERSIONINFOW *POSVERSIONINFOW;


typedef tagMCI_OVLY_LOAD_PARMSA *LPMCI_OVLY_LOAD_PARMS;


typedef tagVARDESC *LPVARDESC;


typedef tagMCI_WAVE_DELETE_PARMS *PMCI_WAVE_DELETE_PARMS;


typedef int *LPFXPT16DOT16;


typedef _PRINTER_ENUM_VALUESW *LPPRINTER_ENUM_VALUESW;


typedef _DOC_INFO_2A *PDOC_INFO_2A;


typedef _PROVIDOR_INFO_2W *LPPROVIDOR_INFO_2W;


typedef _PORT_INFO_3A *PPORT_INFO_3;


typedef _PROVIDOR_INFO_1W *LPPROVIDOR_INFO_1W;


typedef tagHIGHCONTRASTW *LPHIGHCONTRASTW;


typedef tagMCI_LOAD_PARMSA *LPMCI_LOAD_PARMSA;


typedef tagEMRPOLYLINE *PEMRPOLYBEZIER;


typedef void (__stdcall *PIMAGE_TLS_CALLBACK)(void *, unsigned int, void *);


typedef _GUID *const RIID;


typedef HWINSTA__ *HWINSTA;


typedef IKeystoneResourceKSML *LPKEYSTONERESOURCEKSML;


typedef _CRYPT_HASH_MESSAGE_PARA *PCRYPT_HASH_MESSAGE_PARA;


typedef char BlockCoordinate;


typedef _OSVERSIONINFOA *POSVERSIONINFOA;


typedef unsigned __int64 *PDWORDLONG;


typedef _IMAGE_FUNCTION_ENTRY *PIMAGE_FUNCTION_ENTRY;


typedef tagMINMAXINFO *LPMINMAXINFO;


typedef _currencyfmtA *LPCURRENCYFMTA;


typedef _ADDJOB_INFO_1A *LPADDJOB_INFO_1;


typedef unsigned int ID;


typedef _RPC_PROTSEQ_ENDPOINT *PRPC_PROTSEQ_ENDPOINT;


typedef ITypeLib2 *LPTYPELIB2;


typedef tagMIXERCAPSA *PMIXERCAPSA;


typedef tagMIXERLINEA *LPMIXERLINEA;


typedef tagAUXCAPS2A *NPAUXCAPS2;


typedef tagEMREXTFLOODFILL *PEMREXTFLOODFILL;


typedef tagAUXCAPS2A *LPAUXCAPS2;


typedef _BIDI_RESPONSE_CONTAINER *PBIDI_RESPONSE_CONTAINER;


typedef _TRIVERTEX *PTRIVERTEX;


typedef _BIN_RANGE *PBIN_RANGE;


typedef tagIMEMENUITEMINFOW *PIMEMENUITEMINFOW;


typedef _FSCTL_QUERY_FAT_BPB_BUFFER *PFSCTL_QUERY_FAT_BPB_BUFFER;


typedef void *LOCALHANDLE;


typedef _PRINTER_INFO_1A *LPPRINTER_INFO_1;


typedef int (__stdcall *FARPROC)();


typedef _IMAGE_EXPORT_DIRECTORY *PIMAGE_EXPORT_DIRECTORY;


typedef IConnectionPoint *LPCONNECTIONPOINT;


typedef char value_type;


typedef tagMIXERCAPSW *PMIXERCAPSW;


typedef _DOC_INFO_1A *PDOC_INFO_1A;


typedef unsigned int GetSubDataIDsType;


typedef _BINARY_CONTAINER *PBINARY_CONTAINER;


typedef _SYSTEM_INFO *LPSYSTEM_INFO;


typedef DLGTEMPLATE *LPDLGTEMPLATEA;


typedef _EXCEPTION_RECORD *LPEXCEPTION_RECORD;


typedef _BIDI_RESPONSE_CONTAINER *LPBIDI_RESPONSE_CONTAINER;


typedef tagIMEMENUITEMINFOA *PIMEMENUITEMINFOA;


typedef tagOLERENDER *LPOLERENDER;


typedef unsigned int UIFlowModeID;


typedef tagMCI_OVLY_WINDOW_PARMSA *LPMCI_OVLY_WINDOW_PARMSA;


typedef POWER_ACTION *PPOWER_ACTION;


typedef tagGUITHREADINFO *LPGUITHREADINFO;


typedef tagHIGHCONTRASTA *LPHIGHCONTRAST;


typedef _PORT_INFO_3W *PPORT_INFO_3W;


typedef void *voidpf;


typedef _PRINTER_INFO_8A *PPRINTER_INFO_8;


typedef _PRINTER_INFO_9A *PPRINTER_INFO_9;


typedef _PRINTER_INFO_6 *PPRINTER_INFO_6;


typedef void *HCERTSTOREPROV;


typedef _PRINTER_INFO_7A *PPRINTER_INFO_7;


typedef _PRINTER_INFO_4A *PPRINTER_INFO_4;


typedef _PRINTER_INFO_5A *PPRINTER_INFO_5;


typedef _PRINTER_INFO_2A *PPRINTER_INFO_2;


typedef _PRINTER_INFO_3 *PPRINTER_INFO_3;


typedef tagGCP_RESULTSW *LPGCP_RESULTSW;


typedef tagHELPINFO *LPHELPINFO;


typedef _PRINTER_INFO_1A *PPRINTER_INFO_1;


typedef char *PTCH;


typedef tagCANDIDATELIST *PCANDIDATELIST;


typedef _NCB *PNCB;


typedef _STARTUPINFOA *LPSTARTUPINFOA;


typedef unsigned int WeenieCategory;


typedef _PORT_INFO_3A *PPORT_INFO_3A;


typedef tagMCI_LOAD_PARMSA *LPMCI_LOAD_PARMS;


typedef unsigned int AllegianceHouseAction;


typedef unsigned __int64 *PUINT64;


typedef tagBITMAP *NPBITMAP;


typedef tagBITMAP *LPBITMAP;


typedef tagMCI_SYSINFO_PARMSW *LPMCI_SYSINFO_PARMSW;


typedef _OSVERSIONINFOA *POSVERSIONINFO;


typedef tagDDEML_MSG_HOOK_DATA *PDDEML_MSG_HOOK_DATA;


typedef int (__stdcall *DRIVERPROC)(unsigned int, HDRVR__ *, unsigned int, int, int);


typedef void *HGDIOBJ;


typedef _userHMETAFILE *wireHMETAFILE;


typedef _CMSG_CTRL_DECRYPT_PARA *PCMSG_CTRL_DECRYPT_PARA;


typedef _CMSG_CONTENT_ENCRYPT_INFO *PCMSG_CONTENT_ENCRYPT_INFO;


typedef int (__stdcall *COMPLETE_AUTH_TOKEN_FN)(_SecHandle *, _SecBufferDesc *);


typedef _GET_CHANGER_PARAMETERS *PGET_CHANGER_PARAMETERS;


typedef tagEMRSTRETCHDIBITS *PEMRSTRETCHDIBITS;


typedef _WSAServiceClassInfoA *LPWSASERVICECLASSINFOA;


typedef _JOBOBJECT_BASIC_LIMIT_INFORMATION *PJOBOBJECT_BASIC_LIMIT_INFORMATION;


typedef tagMIXERCAPS2A *LPMIXERCAPS2;


typedef _OSVERSIONINFOEXA *POSVERSIONINFOEX;


typedef _CERT_CHAIN_ENGINE_CONFIG *PCERT_CHAIN_ENGINE_CONFIG;


typedef int (__stdcall *PFN_CERT_STORE_PROV_FREE_FIND_CTL)(void *, _CTL_CONTEXT *, void *, unsigned int);


typedef _WSACOMPLETIONTYPE *PWSACOMPLETIONTYPE;


typedef tagSCROLLBARINFO *PSCROLLBARINFO;


typedef IInternetProtocol *LPIINTERNETPROTOCOL;


typedef _HTTPSPolicyCallbackData *PHTTPSPolicyCallbackData;


typedef fd_set *PFD_SET;


typedef _CERT_X942_DH_VALIDATION_PARAMS *PCERT_X942_DH_VALIDATION_PARAMS;


typedef tagOLEUIPASTEENTRYW *LPOLEUIPASTEENTRYW;


typedef unsigned int uIntf;


typedef tagMDICREATESTRUCTA *LPMDICREATESTRUCTA;


typedef _CERT_ALT_NAME_INFO *PCERT_ALT_NAME_INFO;


typedef _MONITOR_INFO_2W *LPMONITOR_INFO_2W;


typedef unsigned int __stdcall PM_QUERY_PROC(unsigned int *, void **, unsigned int *, unsigned int *);


typedef HMIXEROBJ__ **LPHMIXEROBJ;


typedef _REASSIGN_BLOCKS *PREASSIGN_BLOCKS;


typedef unsigned int *PULONG32;


typedef Turbine_GUID *ClassTypeRef;


typedef void (__stdcall *LPSERVICE_MAIN_FUNCTIONW)(unsigned int, unsigned __int16 **);


typedef IAddrTrackingControl *LPADDRTRACKINGCONTROL;


typedef _CRYPT_CONTENT_INFO_SEQUENCE_OF_ANY *PCRYPT_CONTENT_INFO_SEQUENCE_OF_ANY;


typedef int bound_t;


typedef tagPARAMDESC *LPPARAMDESC;


typedef IErrorLog *LPERRORLOG;


typedef HCONV__ *HCONV;


typedef unsigned int NoticeID;


typedef tagLOGCOLORSPACEW *LPLOGCOLORSPACEW;


typedef tagSAFEARRAYBOUND *LPSAFEARRAYBOUND;


typedef tagEMRTEXT *PEMRTEXT;


typedef int *PBOOL;


typedef _MONITOR_INFO_2A *LPMONITOR_INFO_2A;


typedef _UNIVERSAL_NAME_INFOA *LPUNIVERSAL_NAME_INFO;


typedef tagPOINT *PPOINT;


typedef _IMAGE_AUX_SYMBOL *PIMAGE_AUX_SYMBOL;


typedef protoent *LPPROTOENT;


typedef DIEFFECT *LPCDIEFFECT;


typedef float FLOAT;


typedef bool _Bool;


typedef _PERF_BIN *PPERF_BIN;


typedef _OUTLINETEXTMETRICW *NPOUTLINETEXTMETRICW;


typedef _RTL_VERIFIER_DLL_DESCRIPTOR *PRTL_VERIFIER_DLL_DESCRIPTOR;


typedef tagVARIANT *LPVARIANT;


typedef _OUTLINETEXTMETRICW *LPOUTLINETEXTMETRICW;


typedef char uint8;


typedef char *PINT8;


typedef tagMIXERCAPS2W *LPMIXERCAPS2W;


typedef _OSVERSIONINFOEXW *POSVERSIONINFOEXW;


typedef void (__stdcall *PFN_RPCNOTIFICATION_ROUTINE)(_RPC_ASYNC_STATE *, void *, _RPC_ASYNC_EVENT);


typedef _CRL_ENTRY *PCRL_ENTRY;


typedef HRESULT (__stdcall *LPLOADTYPELIB)(const unsigned __int16 *, ITypeLib **);


typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEW;


typedef IClassFactory *LPCLASSFACTORY;


typedef _OSVERSIONINFOEXW *LPOSVERSIONINFOEXW;


typedef tagEMRSETARCDIRECTION *PEMRSETARCDIRECTION;


typedef long double REFTIME;


typedef unsigned int header_t;


typedef tagMIXERCAPS2A *LPMIXERCAPS2A;


typedef _OSVERSIONINFOEXA *POSVERSIONINFOEXA;


typedef tagEMRGRADIENTFILL *PEMRGRADIENTFILL;


typedef _TOKEN_DEFAULT_DACL *PTOKEN_DEFAULT_DACL;


typedef float *PFLOAT;


typedef unsigned int uint;


typedef unsigned int status_t;


typedef void (__stdcall *LPDRVCALLBACK)(HDRVR__ *, unsigned int, unsigned int, unsigned int, unsigned int);


typedef unsigned int *PULONG;


typedef tagLOCALESIGNATURE *PLOCALESIGNATURE;


typedef unsigned __int16 BAD_TRACK_NUMBER;


typedef _ACCESS_DENIED_CALLBACK_ACE *PACCESS_DENIED_CALLBACK_ACE;


typedef int *PINT;


typedef int sint;


typedef tagMINIMIZEDMETRICS *PMINIMIZEDMETRICS;


typedef _CMSG_SIGNER_ENCODE_INFO *PCMSG_SIGNER_ENCODE_INFO;


typedef tagOLEUIBUSYW *LPOLEUIBUSYW;


typedef tagEMRPOLYLINE *PEMRPOLYLINE;


typedef tagMCI_WAVE_SET_PARMS *LPMCI_WAVE_SET_PARMS;


typedef hostent *LPHOSTENT;


typedef _EFS_HASH_BLOB *PEFS_HASH_BLOB;


typedef _GLYPHMETRICS *LPGLYPHMETRICS;


typedef _QOS_SD_MODE *LPQOS_SD_MODE;


typedef unsigned int (__stdcall *PFNRECONCILEPROFILEA)(const char *, const char *, unsigned int);


typedef _CMSG_KEY_AGREE_RECIPIENT_INFO *PCMSG_KEY_AGREE_RECIPIENT_INFO;


typedef tagPOINTS *PPOINTS;


typedef HRGN__ *HRGN;


typedef unsigned int EXECUTION_STATE;


typedef unsigned int RPC_LENGTH;


typedef _MONITOR_INFO_2A *LPMONITOR_INFO_2;


typedef _POINTL *PPOINTL;


typedef tagWNDCLASSEXW *PWNDCLASSEXW;


typedef int (__stdcall *PFN_CERT_STORE_PROV_CONTROL)(void *, unsigned int, unsigned int, const void *);


typedef tagOLEUILINKPROPSW *LPOLEUILINKPROPSW;


typedef _SERVICE_DESCRIPTIONW *LPSERVICE_DESCRIPTIONW;


typedef _PRINTPROCESSOR_CAPS_1 *PPRINTPROCESSOR_CAPS_1;


typedef _numberfmtW *LPNUMBERFMTW;


typedef tMIXERCONTROLDETAILS_BOOLEAN *PMIXERCONTROLDETAILS_BOOLEAN;


typedef _SOCKET_ADDRESS *PSOCKET_ADDRESS;


typedef IOleUIObjInfoW *LPOLEUIOBJINFOW;


typedef midihdr_tag *LPMIDIHDR;


typedef _FLOAT128 *PFLOAT128;


typedef _IMAGE_RESOURCE_DIR_STRING_U *PIMAGE_RESOURCE_DIR_STRING_U;


typedef _IMAGE_THUNK_DATA32 *PIMAGE_THUNK_DATA;


typedef _CHANGER_DEVICE_PROBLEM_TYPE *PCHANGER_DEVICE_PROBLEM_TYPE;


typedef midihdr_tag *NPMIDIHDR;


typedef int *LPFXPT2DOT30;


typedef HMONITOR__ *HMONITOR;


typedef tagHELPWININFOA *PHELPWININFOA;


typedef _RGNDATAHEADER *PRGNDATAHEADER;


typedef unsigned __int16 PlatformStringID;


typedef void *IJL_HANDLE;


typedef tagIMECHARPOSITION *PIMECHARPOSITION;


typedef _QUERY_SERVICE_LOCK_STATUSA *LPQUERY_SERVICE_LOCK_STATUS;


typedef _SYSTEM_AUDIT_CALLBACK_OBJECT_ACE *PSYSTEM_AUDIT_CALLBACK_OBJECT_ACE;


typedef _CROSS_CERT_DIST_POINTS_INFO *PCROSS_CERT_DIST_POINTS_INFO;


typedef IGlobalInterfaceTable *LPGLOBALINTERFACETABLE;


typedef _SE_IMPERSONATION_STATE *PSE_IMPERSONATION_STATE;


typedef unsigned __int16 physics_ts;


typedef tagMETAHEADER *PMETAHEADER;


typedef int BondedStatus;


typedef _DISCDLGSTRUCTA *LPDISCDLGSTRUCTA;


typedef int LCSCSTYPE;


typedef _CMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO *PCMSG_MAIL_LIST_RECIPIENT_ENCODE_INFO;


typedef int (__stdcall *PFN_IMPORT_PRIV_KEY_FUNC)(unsigned int, _CRYPT_PRIVATE_KEY_INFO *, unsigned int, void *);


typedef CEm *PEM;


typedef tagHELPWININFOW *PHELPWININFOW;


typedef unsigned int ATTRIBUTE_STAT;


typedef _PROVIDOR_INFO_2A *PPROVIDOR_INFO_2;


typedef int LCSGAMUTMATCH;


typedef tagCLIENTCREATESTRUCT *LPCLIENTCREATESTRUCT;


typedef int (__stdcall *HOOKPROC)(int, unsigned int, int);


typedef unsigned int EventResult;


typedef unsigned int mousebutton;


typedef CEd *PED;


typedef IKeystone *(__cdecl *FNKEYSTONECREATE)(HWND__ *, IDirect3DDevice9 *, const unsigned __int16 *, HRESULT (__cdecl *)(IDirect3DDevice9 *, const void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, _D3DFORMAT, _D3DPOOL, unsigned int, unsigned int, unsigned int, _D3DXIMAGE_INFO *, tagPALETTEENTRY *, IDirect3DTexture9 **), HRESULT (__cdecl *)(unsigned int, unsigned int, unsigned int, _D3DPOOL, IDirect3DVertexBuffer9 **), void *(__cdecl *)(unsigned int), void (__cdecl *)(void *));


typedef IDirect3DIndexBuffer9 *LPDIRECT3DINDEXBUFFER9;


typedef _DISPLAY_DEVICEW *PDISPLAY_DEVICEW;


typedef tagEMRFILLRGN *PEMRFILLRGN;


typedef tagNEWTEXTMETRICA *PNEWTEXTMETRICA;


typedef _KEY_EVENT_RECORD *PKEY_EVENT_RECORD;


typedef RPC_DISPATCH_TABLE *PRPC_DISPATCH_TABLE;


typedef _COMMCONFIG *LPCOMMCONFIG;


typedef tagMCI_OVLY_LOAD_PARMSA *LPMCI_OVLY_LOAD_PARMSA;


typedef unsigned __int16 PROPVAR_PAD3;


typedef _PRINTPROCESSOR_INFO_1A *PPRINTPROCESSOR_INFO_1;


typedef bool (__cdecl *HResultMappingFunction)(HResultDebugData *);


typedef _CERT_NAME_VALUE *PCERT_NAME_VALUE;


typedef _STORAGE_MEDIA_TYPE *PSTORAGE_MEDIA_TYPE;


typedef unsigned int DetectionStatus;


typedef int __stdcall RPC_IF_CALLBACK_FN(void *, void *);


typedef _SHNAMEMAPPINGW *LPSHNAMEMAPPINGW;


typedef unsigned __int16 unichar;


typedef _RGNDATA *LPRGNDATA;


typedef _RGNDATA *NPRGNDATA;


typedef _PORT_INFO_2A *PPORT_INFO_2;


typedef unsigned int *LPSCARDCONTEXT;


typedef tagNEWTEXTMETRICW *PNEWTEXTMETRICW;


typedef _JOBOBJECT_JOBSET_INFORMATION *PJOBOBJECT_JOBSET_INFORMATION;


typedef unsigned int LanguageType;


typedef ICreateErrorInfo *LPCREATEERRORINFO;


typedef IParseDisplayName *LPPARSEDISPLAYNAME;


typedef unsigned int MeshTypeID;


typedef tagMONCONVSTRUCT *PMONCONVSTRUCT;


typedef tagMCI_SAVE_PARMSW *PMCI_SAVE_PARMSW;


typedef unsigned int COLORREF;


typedef int (__stdcall *PFN_CERT_STORE_PROV_WRITE_CTL)(void *, _CTL_CONTEXT *, unsigned int);


typedef unsigned __int16 *PWCHAR;


typedef _CERT_CONTEXT *PCERT_CONTEXT;


typedef ICodeInstall *LPCODEINSTALL;


typedef tagMULTIKEYHELPW *PMULTIKEYHELPW;


typedef tagHELPWININFOA *PHELPWININFO;


typedef _SOCKET_ADDRESS_LIST *LPSOCKET_ADDRESS_LIST;


typedef IDirect3DDevice9 *LPDIRECT3DDEVICE9;


typedef OPENCARDNAMEW *POPENCARDNAMEW;


typedef tagEMRPIXELFORMAT *PEMRPIXELFORMAT;


typedef _currencyfmtA *LPCURRENCYFMT;


typedef _CRYPTOAPI_BLOB *PCRYPT_HASH_BLOB;


typedef unsigned int PatchFlags;


typedef _IMAGE_RUNTIME_FUNCTION_ENTRY *PIMAGE_RUNTIME_FUNCTION_ENTRY;


typedef _PROVIDOR_INFO_2W *PPROVIDOR_INFO_2W;


typedef _WGLSWAP *LPWGLSWAP;


typedef int (__stdcall *PFN_CERT_STORE_PROV_READ_CRL)(void *, _CRL_CONTEXT *, unsigned int, _CRL_CONTEXT **);


typedef _EVENTSFORLOGFILE *PEVENTSFORLOGFILE;


typedef unsigned __int64 _ULonglong;


typedef _ASSEMBLY_FILE_DETAILED_INFORMATION *PASSEMBLY_FILE_DETAILED_INFORMATION;


typedef _PROVIDOR_INFO_2A *PPROVIDOR_INFO_2A;


typedef unsigned __int64 *PULONGLONG;


typedef tagSAFEARRAY *LPSAFEARRAY;


typedef IPersistFile *LPPERSISTFILE;


typedef DLGTEMPLATE *LPDLGTEMPLATE;


typedef _CRYPT_KEY_PROV_INFO *PCRYPT_KEY_PROV_INFO;


typedef tagNEWTEXTMETRICA *PNEWTEXTMETRIC;


typedef _JOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION *PJOBOBJECT_BASIC_AND_IO_ACCOUNTING_INFORMATION;


typedef _PORT_INFO_2W *PPORT_INFO_2W;


typedef _ASSEMBLY_FILE_DETAILED_INFORMATION *PCASSEMBLY_FILE_DETAILED_INFORMATION;


typedef _PRINTPROCESSOR_INFO_1A *PPRINTPROCESSOR_INFO_1A;


typedef tagMCI_OPEN_PARMSA *PMCI_OPEN_PARMS;


typedef _QualityOfService *LPQOS;


typedef tagEMRCREATEBRUSHINDIRECT *PEMRCREATEBRUSHINDIRECT;


typedef unsigned int LogTextType;


typedef _CRYPT_PRIVATE_KEY_INFO *PCRYPT_PRIVATE_KEY_INFO;


typedef unsigned __int16 *PUSHORT;


typedef _PRINTPROCESSOR_INFO_1W *PPRINTPROCESSOR_INFO_1W;


typedef _ACL *PACL;


typedef tagMCI_OVLY_OPEN_PARMSW *LPMCI_OVLY_OPEN_PARMSW;


typedef _PORT_INFO_2A *PPORT_INFO_2A;


typedef tagTEXTMETRICA *PTEXTMETRICA;


typedef tagEMRGDICOMMENT *PEMRGDICOMMENT;


typedef int (__stdcall *ICMENUMPROCA)(char *, int);


typedef IOleContainer *LPOLECONTAINER;


typedef IWindowForBindingUI *LPWINDOWFORBINDINGUI;


typedef _STARTUPINFOA *LPSTARTUPINFO;


typedef _SCARD_ATRMASK *PSCARD_ATRMASK;


typedef __int16 INT16;


typedef HMIXEROBJ__ *HMIXEROBJ;


typedef tagMENUITEMINFOW *LPCMENUITEMINFOW;


typedef unsigned int __stdcall PM_COLLECT_PROC(unsigned __int16 *, void **, unsigned int *, unsigned int *);


typedef IKeystoneDocument *LPKEYSTONEDOCUMENT;


typedef unsigned int *PSECURITY_INFORMATION;


typedef unsigned __int64 bit64;


typedef joyinfoex_tag *LPJOYINFOEX;


typedef int _off_t;


typedef joyinfoex_tag *NPJOYINFOEX;


typedef tagHANDLETABLE *LPHANDLETABLE;


typedef int (__stdcall *PFN_CERT_STORE_PROV_READ_CTL)(void *, _CTL_CONTEXT *, unsigned int, _CTL_CONTEXT **);


typedef _CMS_KEY_INFO *PCMS_KEY_INFO;


typedef _WSAServiceClassInfoA *LPWSASERVICECLASSINFO;


typedef _INPUT_RECORD *PINPUT_RECORD;


typedef _WSANSClassInfoA *PWSANSCLASSINFOA;


typedef unsigned int Command;


typedef unsigned int WClassID;


typedef _userSTGMEDIUM *wireASYNC_STGMEDIUM;


typedef void (__cdecl *RenderExtrasCallback)();


typedef unsigned int *PKAFFINITY;


typedef tagCBTACTIVATESTRUCT *LPCBTACTIVATESTRUCT;


typedef _DIOBJECTDATAFORMAT *LPDIOBJECTDATAFORMAT;


typedef unsigned int WealthRating;


typedef tagMDICREATESTRUCTA *LPMDICREATESTRUCT;


typedef int GEOID;


typedef unsigned int MaterialType;


typedef unsigned int (__stdcall *PGET_MODULE_BASE_ROUTINE)(void *, unsigned int);


typedef _DRAGINFOA *LPDRAGINFOA;


typedef _DICONFIGUREDEVICESPARAMSA *LPDICONFIGUREDEVICESPARAMSA;


typedef tagBIND_OPTS *LPBIND_OPTS;


typedef tagEMRPOLYTEXTOUTA *PEMRPOLYTEXTOUTA;


typedef int (__stdcall *CODEPAGE_ENUMPROCW)(unsigned __int16 *);


typedef _DRAGINFOW *LPDRAGINFOW;


typedef CUnknown *(__stdcall *LPFNNewCOMObject)(IUnknown *, HRESULT *);


typedef unsigned int *PDWORD;


typedef tagEMRSETVIEWPORTORGEX *PEMRSETWINDOWORGEX;


typedef LIST_ENTRY32 *PLIST_ENTRY32;


typedef _UNIVERSAL_NAME_INFOA *LPUNIVERSAL_NAME_INFOA;


typedef int sdword;


typedef unsigned int LCTYPE;


typedef HRESULT (__stdcall *LPLOADREGTYPELIB)(_GUID *, unsigned __int16, unsigned __int16, unsigned int, ITypeLib **);


typedef int (__stdcall *PFN_CMSG_IMPORT_MAIL_LIST)(_CRYPT_ALGORITHM_IDENTIFIER *, _CMSG_CTRL_MAIL_LIST_DECRYPT_PARA *, unsigned int, void *, unsigned int *);


typedef waveformat_tag *PWAVEFORMAT;


typedef unsigned int *PDWORD32;


typedef int (__stdcall *PFN_CERT_CHAIN_FIND_BY_ISSUER_CALLBACK)(_CERT_CONTEXT *, void *);


typedef tagINTERFACEDATA *LPINTERFACEDATA;


typedef unsigned int uintptr_t;


typedef _WSANAMESPACE_INFOW *LPWSANAMESPACE_INFOW;


typedef tagRECONVERTSTRING *PRECONVERTSTRING;


typedef tagENUMLOGFONTEXW *LPENUMLOGFONTEXW;


typedef _NAME_BUFFER *PNAME_BUFFER;


typedef __int64 LONG64;


typedef _AUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA *PAUTHENTICODE_EXTRA_CERT_CHAIN_POLICY_PARA;


typedef _ACTIVATION_CONTEXT_DETAILED_INFORMATION *PCACTIVATION_CONTEXT_DETAILED_INFORMATION;


typedef _tagADDRESS *LPADDRESS;


typedef tagWINDOWPLACEMENT *LPWINDOWPLACEMENT;


typedef tagLOGBRUSH *LPPATTERN;


typedef _CRL_CONTEXT *PCCRL_CONTEXT;


typedef tagLOGBRUSH *NPPATTERN;


typedef _PRINTER_NOTIFY_INFO *PPRINTER_NOTIFY_INFO;


typedef tagCURSORSHAPE *LPCURSORSHAPE;


typedef _RTL_CRITICAL_SECTION_DEBUG *PCRITICAL_SECTION_DEBUG;


typedef void (__stdcall *CS_TYPE_TO_NETCS_ROUTINE)(void *, unsigned int, void *, unsigned int, char *, unsigned int *, unsigned int *);


typedef _RECTL *PRECTL;


typedef unsigned int Quadrant;


typedef _DRAGINFOA *LPDRAGINFO;


typedef void (__stdcall *WORKERCALLBACKFUNC)(void *);


typedef int (__stdcall *QUERY_SECURITY_PACKAGE_INFO_FN_W)(unsigned __int16 *, _SecPkgInfoW **);


typedef tagMONITORINFOEXW *LPMONITORINFOEXW;


typedef tagDEVNAMES *LPDEVNAMES;


typedef tagEXTLOGFONTA *PEXTLOGFONT;


typedef _AMOVIESETUP_FILTER *LPAMOVIESETUP_FILTER;


typedef IDispatch *LPDISPATCH;


typedef tagJOYCAPS2W *PJOYCAPS2W;


typedef _SCONTEXT_QUEUE *PSCONTEXT_QUEUE;


typedef _CERTIFICATE_BLOB *PEFS_CERTIFICATE_BLOB;


typedef IOleClientSite *LPOLECLIENTSITE;


typedef SCARD_T0_COMMAND *LPSCARD_T0_COMMAND;


typedef unsigned int HSEMAPHORE;


typedef char *va_list;


typedef void (__stdcall *WINEVENTPROC)(HWINEVENTHOOK__ *, unsigned int, HWND__ *, int, int, unsigned int, unsigned int);


typedef _DATATYPES_INFO_1A *PDATATYPES_INFO_1;


typedef _EXCEPTION_POINTERS *LPEXCEPTION_POINTERS;


typedef _DOCINFOW *LPDOCINFOW;


typedef unsigned int ATTRIBUTE_2ND_STAT;


typedef unsigned int Type;


typedef tagBLOB *LPBLOB;


typedef __int16 HALF_PTR;


typedef tagWINDOWPOS *LPWINDOWPOS;


typedef _CRYPT_PASSWORD_CREDENTIALSW *PCRYPT_PASSWORD_CREDENTIALSW;


typedef tagBITMAPINFOHEADER *PBITMAPINFOHEADER;


typedef tagMCI_ANIM_OPEN_PARMSA *PMCI_ANIM_OPEN_PARMS;


typedef int OAFilterState;


typedef tagCBT_CREATEWNDA *LPCBT_CREATEWNDA;


typedef _PROVIDOR_INFO_1A *PPROVIDOR_INFO_1;


typedef _BIDI_REQUEST_DATA *PBIDI_REQUEST_DATA;


typedef _CERT_STORE_PROV_INFO *PCERT_STORE_PROV_INFO;


typedef tagPOLYTEXTW *PPOLYTEXTW;


typedef tagSOUNDSENTRYA *LPSOUNDSENTRY;


typedef HACCEL__ *HACCEL;


typedef tagICEXYZTRIPLE *LPCIEXYZTRIPLE;


typedef IWinInetHttpInfo *LPWININETHTTPINFO;


typedef _PROPSHEETHEADERW *LPPROPSHEETHEADERW;


typedef unsigned int (__cdecl *ChecksumFunction)(const char *, unsigned int);


typedef unsigned __int16 LBIPackMaskEnum;


typedef tagSIZE *LPSIZE;


typedef unsigned int (__stdcall *LPFNPSPCALLBACKW)(HWND__ *, unsigned int, _PROPSHEETPAGEW *);


typedef void (__stdcall *CS_TYPE_FROM_NETCS_ROUTINE)(void *, unsigned int, char *, unsigned int, unsigned int, void *, unsigned int *, unsigned int *);


typedef _PORT_INFO_1A *PPORT_INFO_1;


typedef int (__stdcall *LPDIENUMDEVICEOBJECTSCALLBACKA)(DIDEVICEOBJECTINSTANCEA *, void *);


typedef char _TCHAR;


typedef tagLOGFONTA *NPLOGFONTA;


typedef tagLOGFONTA *LPLOGFONTA;


typedef _LDT_ENTRY *LPLDT_ENTRY;


typedef tagMIXERCONTROLA *LPMIXERCONTROL;


typedef unsigned int (__stdcall *ATLGETTHREADACP)();


typedef char *PTCHAR;


typedef unsigned int StringTableID;


typedef tagABORTPATH *PEMRBEGINPATH;


typedef tagABORTPATH *PEMRFLATTENPATH;


typedef _LUID_AND_ATTRIBUTES LUID_AND_ATTRIBUTES_ARRAY[1];


typedef tagMCI_ANIM_OPEN_PARMSW *PMCI_ANIM_OPEN_PARMSW;


typedef _CERT_CRL_CONTEXT_PAIR *PCERT_CRL_CONTEXT_PAIR;


typedef tagAUXCAPSA *LPAUXCAPS;


typedef ITypeLib *LPTYPELIB;


typedef tagAUXCAPSA *NPAUXCAPS;


typedef IViewObject2 *LPVIEWOBJECT2;


typedef _IMAGE_TLS_DIRECTORY64 *PIMAGE_TLS_DIRECTORY64;


typedef tagABORTPATH *PEMRWIDENPATH;


typedef _PRINTER_INFO_3 *LPPRINTER_INFO_3;


typedef _CERT_KEY_CONTEXT *PCERT_KEY_CONTEXT;


typedef _PRINTER_INFO_9A *PPRINTER_INFO_9A;


typedef _PROVIDOR_INFO_1W *PPROVIDOR_INFO_1W;


typedef _IMAGE_SYMBOL *PIMAGE_SYMBOL;


typedef unsigned int SchoolOfMagic;


typedef _WIN32_FIND_DATAW *LPWIN32_FIND_DATAW;


typedef tagMCI_ANIM_OPEN_PARMSA *PMCI_ANIM_OPEN_PARMSA;


typedef _READ_ELEMENT_ADDRESS_INFO *PREAD_ELEMENT_ADDRESS_INFO;


typedef tagOLEUICHANGESOURCEW *LPOLEUICHANGESOURCEW;


typedef _CMC_ADD_ATTRIBUTES_INFO *PCMC_ADD_ATTRIBUTES_INFO;


typedef void (__stdcall *PRPC_RUNDOWN)(void *);


typedef int (__stdcall *QUERY_CONTEXT_ATTRIBUTES_FN_W)(_SecHandle *, unsigned int, void *);


typedef _PROVIDOR_INFO_1A *PPROVIDOR_INFO_1A;


typedef void *PV;


typedef IViewObject *LPVIEWOBJECT;


typedef tagMCI_ANIM_PLAY_PARMS *LPMCI_ANIM_PLAY_PARMS;


typedef _CERT_POLICY95_QUALIFIER1 *PCERT_POLICY95_QUALIFIER1;


typedef _IMAGE_RUNTIME_FUNCTION_ENTRY *_PIMAGE_RUNTIME_FUNCTION_ENTRY;


typedef void (__cdecl *RTL_VERIFIER_DLL_UNLOAD_CALLBACK)(unsigned __int16 *, void *, unsigned int, void *);


typedef DIDEVICEINSTANCEA *LPCDIDEVICEINSTANCEA;


typedef POWER_ACTION_POLICY *PPOWER_ACTION_POLICY;


typedef tagMIXERCONTROLW *LPMIXERCONTROLW;


typedef tagSIZE *LPSIZEL;


typedef _CERT_CHAIN_POLICY_PARA *PCERT_CHAIN_POLICY_PARA;


typedef _PORT_INFO_1W *PPORT_INFO_1W;


typedef tagOLEUIVIEWPROPSW *LPOLEUIVIEWPROPSW;


typedef _PROCESSOR_POWER_POLICY_INFO *PPROCESSOR_POWER_POLICY_INFO;


typedef unsigned int SeqID;


typedef int (__stdcall *MAKE_SIGNATURE_FN)(_SecHandle *, unsigned int, _SecBufferDesc *, unsigned int);


typedef unsigned int serverID;


typedef tagEMRINVERTRGN *PEMRINVERTRGN;


typedef _PRINTER_INFO_8A *PPRINTER_INFO_8A;


typedef DIEFFECTINFOA *LPDIEFFECTINFOA;


typedef void (__stdcall *NDR_NOTIFY2_ROUTINE)(char);


typedef IPersist *LPPERSIST;


typedef _WSAQuerySetW *LPWSAQUERYSETW;


typedef _PORT_INFO_1A *PPORT_INFO_1A;


typedef _GUID *LPCGUID;


typedef tagMIXERCONTROLA *LPMIXERCONTROLA;


typedef _CRYPT_RC2_CBC_PARAMETERS *PCRYPT_RC2_CBC_PARAMETERS;


typedef _BIDI_RESPONSE_DATA *PBIDI_RESPONSE_DATA;


typedef unsigned int *LPCOLORREF;


typedef tagMENUBARINFO *LPMENUBARINFO;


typedef void (__stdcall *MSGBOXCALLBACK)(tagHELPINFO *);


typedef IInternetProtocolSinkStackable *LPIINTERNETPROTOCOLSINKStackable;


typedef SCARD_READERSTATEA *PSCARD_READERSTATEA;


typedef _REPARSE_GUID_DATA_BUFFER *PREPARSE_GUID_DATA_BUFFER;


typedef int FXPT16DOT16;


typedef unsigned int FontID;


typedef tagMIDIINCAPS2A *LPMIDIINCAPS2;


typedef tagMIDIINCAPS2A *NPMIDIINCAPS2;


typedef tagWINDOWPOS *PWINDOWPOS;


typedef SCARD_READERSTATEW *PSCARD_READERSTATEW;


typedef char byte;


typedef unsigned int (__stdcall *LPPAGEPAINTHOOK)(HWND__ *, unsigned int, unsigned int, int);


typedef HRESULT (__cdecl *FNEXECUTEPLUGIN)(IKeystone *, unsigned __int16 *(__cdecl *)(const unsigned __int16 *), void *);


typedef tagMIDIINCAPSA *NPMIDIINCAPS;


typedef int (__stdcall *PFNPROPSHEETCALLBACK)(HWND__ *, unsigned int, int);


typedef tagMIDIINCAPSA *LPMIDIINCAPS;


typedef _CRYPT_KEY_PROV_PARAM *PCRYPT_KEY_PROV_PARAM;


typedef _JOBOBJECT_END_OF_JOB_TIME_INFORMATION *PJOBOBJECT_END_OF_JOB_TIME_INFORMATION;


typedef tagMCI_VD_ESCAPE_PARMSA *LPMCI_VD_ESCAPE_PARMS;


typedef _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;


typedef _CHANGER_INITIALIZE_ELEMENT_STATUS *PCHANGER_INITIALIZE_ELEMENT_STATUS;


typedef tagDRAWTEXTPARAMS *LPDRAWTEXTPARAMS;


typedef HMIXER__ **LPHMIXER;


typedef HPEN__ *HPEN;


typedef _IMAGE_BASE_RELOCATION *PIMAGE_BASE_RELOCATION;


typedef unsigned int DID_STAT;


typedef IMessageFilter *LPMESSAGEFILTER;


typedef _ENCRYPTION_CERTIFICATE_HASH *PENCRYPTION_CERTIFICATE_HASH;


typedef _ENUM_SERVICE_STATUSW *LPENUM_SERVICE_STATUSW;


typedef _CERT_OTHER_NAME *PCERT_OTHER_NAME;


typedef unsigned __int16 OLECHAR;


typedef unsigned int PortalEnum;


typedef _SERVICE_STATUS_PROCESS *LPSERVICE_STATUS_PROCESS;


typedef unsigned int IID_STAT;


typedef unsigned int UIAttributeIcon;


typedef unsigned int globalID;


typedef _FILE_PREFETCH *PFILE_PREFETCH;


typedef _userHGLOBAL *wireHGLOBAL;


typedef SCARD_READERSTATEA *PSCARD_READERSTATE;


typedef unsigned int uint32;


typedef tagMIDIINCAPSW *LPMIDIINCAPSW;


typedef BITMAPV4HEADER *PBITMAPV4HEADER;


typedef tagMIDIINCAPSW *NPMIDIINCAPSW;


typedef BITMAPV5HEADER *PBITMAPV5HEADER;


typedef int *PINT32;


typedef tagWAVEINCAPS2W *NPWAVEINCAPS2W;


typedef _FAT_STATISTICS *PFAT_STATISTICS;


typedef tagWAVEINCAPS2W *LPWAVEINCAPS2W;


typedef _CERT_EXTENSION *PCERT_EXTENSION;


typedef _CERT_CREATE_CONTEXT_PARA *PCERT_CREATE_CONTEXT_PARA;


typedef tagBITMAPINFOHEADER *LPBITMAPINFOHEADER;


typedef HRESULT __stdcall _ATL_CREATORARGFUNC(void *, _GUID *, void **, unsigned int);


typedef _CERT_STORE_PROV_FIND_INFO *PCERT_STORE_PROV_FIND_INFO;


typedef char Bytef;


typedef IDirect3DTexture9 *LPDIRECT3DTEXTURE9;


typedef IMonikerProp *LPMONIKERPROP;


typedef int (__stdcall *EDITWORDBREAKPROC)(char *, int, int, int);


typedef int (__stdcall *ENHMFENUMPROC)(HDC__ *, tagHANDLETABLE *, tagENHMETARECORD *, int, int);


typedef unsigned int MCIERROR;


typedef tagEMRSELECTCLIPPATH *PEMRSETICMMODE;


typedef tagMIDIINCAPSA *NPMIDIINCAPSA;


typedef _CRYPTOAPI_BLOB *PCRYPT_UINT_BLOB;


typedef _AFPROTOCOLS *PAFPROTOCOLS;


typedef tagMIDIINCAPSA *LPMIDIINCAPSA;


typedef _CRL_REVOCATION_INFO *PCRL_REVOCATION_INFO;


typedef _VIDEOPARAMETERS *LPVIDEOPARAMETERS;


typedef _CMC_DATA_INFO *PCMC_DATA_INFO;


typedef _WSANETWORKEVENTS *LPWSANETWORKEVENTS;


typedef _CRYPT_OID_FUNC_ENTRY *PCRYPT_OID_FUNC_ENTRY;


typedef unsigned int TextureArg;


typedef int (__stdcall *MFENUMPROC)(HDC__ *, tagHANDLETABLE *, tagMETARECORD *, int, int);


typedef const unsigned __int16 *LPCUWSTR;


typedef tagCWPSTRUCT *PCWPSTRUCT;


typedef const char *LPCUTSTR;


typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_RESOURCE_DEBUG;


typedef IKeystoneWindow *LPKEYSTONEWINDOW;


typedef ITypeChangeEvents *LPTYPECHANGEEVENTS;


typedef midiproptimediv_tag *LPMIDIPROPTIMEDIV;


typedef _PERF_COUNTER_DEFINITION *PPERF_COUNTER_DEFINITION;


typedef tagEMRPOLYLINE16 *PEMRPOLYGON16;


typedef unsigned int SERVICETYPE;


typedef void (__stdcall *LINEDDAPROC)(int, int, int);


typedef _RPC_SECURITY_QOS *PRPC_SECURITY_QOS;


typedef tagMIXERCONTROLDETAILS_LISTTEXTW *PMIXERCONTROLDETAILS_LISTTEXTW;


typedef _CONNECTDLGSTRUCTW *LPCONNECTDLGSTRUCTW;


typedef tagFONTSIGNATURE *PFONTSIGNATURE;


typedef _DIDATAFORMAT *LPDIDATAFORMAT;


typedef _DATATYPES_INFO_1A *PDATATYPES_INFO_1A;


typedef unsigned int mousecoord;


typedef _PRINTER_INFO_2A *LPPRINTER_INFO_2A;


typedef DIDRIVERVERSIONS *LPDIDRIVERVERSIONS;


typedef tagMCI_GENERIC_PARMS *LPMCI_GENERIC_PARMS;


typedef DRVCONFIGINFOEX *PDRVCONFIGINFOEX;


typedef int (__stdcall *DATEFMT_ENUMPROCA)(char *);


typedef IBindHost *LPBINDHOST;


typedef _TOKEN_TYPE *PTOKEN_TYPE;


typedef _ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;


typedef _CONNECTDLGSTRUCTA *LPCONNECTDLGSTRUCTA;


typedef int (__stdcall *DATEFMT_ENUMPROCW)(unsigned __int16 *);


typedef tagCOMPAREITEMSTRUCT *PCOMPAREITEMSTRUCT;


typedef _PRINTER_INFO_2W *LPPRINTER_INFO_2W;


typedef OPENCARDNAMEA *LPOPENCARDNAME;


typedef _PRINTER_INFO_2A *PPRINTER_INFO_2A;


typedef const unsigned __int16 *LPCWCH;


typedef unsigned __int16 PROPVAR_PAD1;


typedef bool __cdecl InputFilter(unsigned __int16);


typedef tagLAYERPLANEDESCRIPTOR *PLAYERPLANEDESCRIPTOR;


typedef unsigned int SpellCategory;


typedef tagSOUNDSENTRYA *LPSOUNDSENTRYA;


typedef unsigned int TreasureItemClass;


typedef unsigned int __cdecl QUERYHANDLER(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);


typedef int DISPID;


typedef int PDISKERR_t;


typedef char *key_type;


typedef unsigned int UIAsset;


typedef char *PUCHAR;


typedef tagLOGFONTA *NPLOGFONT;


typedef tagLOGFONTA *LPLOGFONT;


typedef _CHANGER_ELEMENT_STATUS_EX *PCHANGER_ELEMENT_STATUS_EX;


typedef tagEXTLOGPEN *LPEXTLOGPEN;


typedef _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;


typedef tagEXTLOGPEN *NPEXTLOGPEN;


typedef unsigned int (__stdcall *DbgHelpSymLoadModule)(void *, void *, char *, char *, unsigned int, unsigned int);


typedef unsigned __int64 DWORDLONG;


typedef _PRINTER_INFO_1A *PPRINTER_INFO_1A;


typedef int (__stdcall *PFN_CMSG_STREAM_OUTPUT)(const void *, char *, unsigned int, int);


typedef OPENCARDNAMEW *LPOPENCARDNAMEW;


typedef int (__stdcall *PFN_CERT_STORE_PROV_SET_CRL_PROPERTY)(void *, _CRL_CONTEXT *, unsigned int, unsigned int, const void *);


typedef _PRINTER_INFO_2A *LPPRINTER_INFO_2;


typedef char *reference;


typedef tagAUXCAPSA *LPAUXCAPSA;


typedef _CRL_DIST_POINT_NAME *PCRL_DIST_POINT_NAME;


typedef int (__stdcall *LOCALE_ENUMPROCA)(char *);


typedef _WSABUF *LPWSABUF;


typedef tagAUXCAPSA *NPAUXCAPSA;


typedef tagEMRCREATEDIBPATTERNBRUSHPT *PEMRCREATEDIBPATTERNBRUSHPT;


typedef _ImageArchitectureEntry *PIMAGE_ARCHITECTURE_ENTRY;


typedef _CERT_CONTEXT *PCCERT_CONTEXT;


typedef _CONNECTDLGSTRUCTA *LPCONNECTDLGSTRUCT;


typedef _ACL_SIZE_INFORMATION *PACL_SIZE_INFORMATION;


typedef OPENCARDNAMEA *LPOPENCARDNAMEA;


typedef int (__stdcall *PFN_CERT_STORE_PROV_GET_CRL_PROPERTY)(void *, _CRL_CONTEXT *, unsigned int, unsigned int, void *, unsigned int *);


typedef tagMIXERCAPS2A *PMIXERCAPS2A;


typedef _CERT_USAGE_MATCH *PCERT_USAGE_MATCH;


typedef _AFPROTOCOLS *LPAFPROTOCOLS;


typedef _IMAGE_DOS_HEADER *PIMAGE_DOS_HEADER;


typedef _ADDJOB_INFO_1A *LPADDJOB_INFO_1A;


typedef tagOLEUIEDITLINKSW *LPOLEUIEDITLINKSW;


typedef const void *LPCVOID;


typedef unsigned int (__cdecl *PQUERYHANDLER)(void *, val_context *, unsigned int, void *, unsigned int *, unsigned int);


typedef pvalueA *PPVALUEA;


typedef unsigned __int16 *PWCH;


typedef ID3DXMesh *LPD3DXMESH;


typedef tagELEMDESC *LPELEMDESC;


typedef int *LPINT;


typedef _SYSTEMTIME *LPSYSTEMTIME;


typedef tagPAINTSTRUCT *NPPAINTSTRUCT;


typedef tMIXERCONTROLDETAILS_UNSIGNED *PMIXERCONTROLDETAILS_UNSIGNED;


typedef tagPAINTSTRUCT *LPPAINTSTRUCT;


typedef unsigned int EnchantmentType;


typedef _DOC_INFO_3A *PDOC_INFO_3;


typedef unsigned int GroupEnum;


typedef _DOC_INFO_2A *PDOC_INFO_2;


typedef void *(__stdcall *PFN_CMSG_ALLOC)(unsigned int);


typedef _DOC_INFO_1A *PDOC_INFO_1;


typedef tagPOLYTEXTW *LPPOLYTEXTW;


typedef _PRINTER_INFO_7A *PPRINTER_INFO_7A;


typedef tagPOLYTEXTW *NPPOLYTEXTW;


typedef _OSVERSIONINFOA *LPOSVERSIONINFOA;


typedef SYSTEM_POWER_CAPABILITIES *PSYSTEM_POWER_CAPABILITIES;


typedef int int32;


typedef tagMIDIINCAPS2A *LPMIDIINCAPS2A;


typedef tagMIDIINCAPS2A *NPMIDIINCAPS2A;


typedef int (__stdcall *LPDIENUMCREATEDEFFECTOBJECTSCALLBACK)(IDirectInputEffect *, void *);


typedef _KDHELP *PKDHELP;


typedef KSWNDCLASS *LPKSWNDCLASS;


typedef tagWAVEINCAPSW *PWAVEINCAPSW;


typedef tagWAVEOUTCAPS2W *PWAVEOUTCAPS2W;


typedef ISurrogate *LPSURROGATE;


typedef unsigned int CategoryHandlerContext;


typedef unsigned int NetAuthType;


typedef _NETCONNECTINFOSTRUCT *LPNETCONNECTINFOSTRUCT;


typedef _CMSG_RECIPIENT_ENCRYPTED_KEY_INFO *PCMSG_RECIPIENT_ENCRYPTED_KEY_INFO;


typedef tagMCI_OVLY_SAVE_PARMSA *PMCI_OVLY_SAVE_PARMS;


typedef unsigned int GEOCLASS;


typedef tagPOLYTEXTA *NPPOLYTEXTA;


typedef int (__stdcall *LPCONDITIONPROC)(_WSABUF *, _WSABUF *, _QualityOfService *, _QualityOfService *, _WSABUF *, _WSABUF *, unsigned int *, unsigned int);


typedef DIFILEEFFECT *LPCDIFILEEFFECT;


typedef tagPOLYTEXTA *LPPOLYTEXTA;


typedef tagMIXERCAPSA *LPMIXERCAPSA;


typedef tagEMRSETTEXTCOLOR *PEMRSETBKCOLOR;


typedef _LOAD_DLL_DEBUG_INFO *LPLOAD_DLL_DEBUG_INFO;


typedef tagMIXERLINECONTROLSA *LPMIXERLINECONTROLSA;


typedef value_entA *PVALENTA;


typedef tagMCI_SYSINFO_PARMSA *PMCI_SYSINFO_PARMSA;


typedef tagEMRARC *PEMRPIE;


typedef _MONITOR_INFO_1W *LPMONITOR_INFO_1W;


typedef _SHELLEXECUTEINFOW *LPSHELLEXECUTEINFOW;


typedef float float32;


typedef unsigned int MMVERSION;


typedef tagRGBQUAD *LPRGBQUAD;


typedef pcmwaveformat_tag *PPCMWAVEFORMAT;


typedef tagMCI_VD_ESCAPE_PARMSA *LPMCI_VD_ESCAPE_PARMSA;


typedef IDirect3DSurface9 *LPDIRECT3DSURFACE9;


typedef _CERT_CHAIN_FIND_BY_ISSUER_PARA *PCERT_CHAIN_FIND_ISSUER_PARA;


typedef _MONITOR_INFO_1A *LPMONITOR_INFO_1A;


typedef void (__cdecl *GRPVariableChangedCallbackFP)(PStringBase<char> *);


typedef _CRYPT_KEY_VERIFY_MESSAGE_PARA *PCRYPT_KEY_VERIFY_MESSAGE_PARA;


typedef tagMCI_SYSINFO_PARMSW *PMCI_SYSINFO_PARMSW;


typedef void (__cdecl *MIDIStartCallback_t)();


typedef tagIMECHARPOSITION *NPIMECHARPOSITION;


typedef _SYSTEM_NUMA_INFORMATION *PSYSTEM_NUMA_INFORMATION;


typedef tagSCROLLBARINFO *LPSCROLLBARINFO;


typedef tagIMECHARPOSITION *LPIMECHARPOSITION;


typedef void (__stdcall *CS_TYPE_NET_SIZE_ROUTINE)(void *, unsigned int, unsigned int, _IDL_CS_CONVERT *, unsigned int *, unsigned int *);


typedef _SYSTEM_ALARM_CALLBACK_OBJECT_ACE *PSYSTEM_ALARM_CALLBACK_OBJECT_ACE;


typedef _MENU_EVENT_RECORD *PMENU_EVENT_RECORD;


typedef _SHELLEXECUTEINFOA *LPSHELLEXECUTEINFOA;


typedef unsigned int UIPanelID;


typedef IRecordInfo *LPRECORDINFO;


typedef _PRINTER_INFO_5A *PPRINTER_INFO_5A;


typedef tagMCI_OVLY_SAVE_PARMSW *PMCI_OVLY_SAVE_PARMSW;


typedef _MMCKINFO *NPMMCKINFO;


typedef _MMCKINFO *LPMMCKINFO;


typedef int (__stdcall *DESKTOPENUMPROC)(char *, int);


typedef void (__stdcall *PAPCFUNC)(unsigned int);


typedef _PROPSHEETPAGEW_V3 *LPCPROPSHEETPAGEW_LATEST;


typedef unsigned int PropertyName;


typedef unsigned int VendorEmoteType;


typedef int (__cdecl *pfCreateACPlugin)(IAsheronsCall **, IACPlugin **);


typedef _JOBOBJECT_BASIC_ACCOUNTING_INFORMATION *PJOBOBJECT_BASIC_ACCOUNTING_INFORMATION;


typedef int (__stdcall *NEARPROC)();


typedef char *PBOOLEAN;


typedef unsigned int RegionID;


typedef tagRECT *LPCBORDERWIDTHS;


typedef _EXCEPTION_RECORD64 *PEXCEPTION_RECORD64;


typedef tagPOLYTEXTA *NPPOLYTEXT;


typedef unsigned int SCARDCONTEXT;


typedef tagDIBSECTION *LPDIBSECTION;


typedef tagMCI_OVLY_SAVE_PARMSA *PMCI_OVLY_SAVE_PARMSA;


typedef tagPOLYTEXTA *LPPOLYTEXT;


typedef _DISK_LOGGING *PDISK_LOGGING;


typedef tagPOINTFX *LPPOINTFX;


typedef _HMAC_Info *PHMAC_INFO;


typedef IUnknown *PUNK;


typedef _PROPSHEETPAGEA_V3 *LPCPROPSHEETPAGEA_LATEST;


typedef int (__stdcall *EDITWORDBREAKPROCA)(char *, int, int, int);


typedef tagCWPSTRUCT *NPCWPSTRUCT;


typedef void *SC_LOCK;


typedef tagCWPSTRUCT *LPCWPSTRUCT;


typedef tagICONMETRICSW *LPICONMETRICSW;


typedef tagDRVCONFIGINFO *PDRVCONFIGINFO;


typedef _PRINTER_INFO_4A *PPRINTER_INFO_4A;


typedef _CERT_REVOCATION_INFO *PCERT_REVOCATION_INFO;


typedef _CHANGER_ELEMENT *PCHANGER_ELEMENT;


typedef tagMCI_SYSINFO_PARMSA *PMCI_SYSINFO_PARMS;


typedef IEnumSTATPROPSTG *LPENUMSTATPROPSTG;


typedef void (__cdecl *RPCLT_PDU_FILTER_FUNC)(void *, unsigned int, int);


typedef unsigned int CreatureType;


typedef tagLOGPEN *PLOGPEN;


typedef unsigned int TextTagType;


typedef _IMAGE_THUNK_DATA32 *PIMAGE_THUNK_DATA32;


typedef _MESSAGE_RESOURCE_BLOCK *PMESSAGE_RESOURCE_BLOCK;


typedef _GRADIENT_RECT *PGRADIENT_RECT;


typedef IDataFilter *LPDATAFILTER;


typedef IInternetPriority *LPIINTERNETPRIORITY;


typedef _MONITOR_INFO_1A *LPMONITOR_INFO_1;


typedef tagACCESSTIMEOUT *LPACCESSTIMEOUT;


typedef _RemotableHandle *wireHFONT;


typedef unsigned int TreasureType;


typedef _CMSG_SIGNER_INFO *PCMSG_SIGNER_INFO;


typedef tagEMRPOLYLINE16 *PEMRPOLYBEZIERTO16;


typedef unsigned int INT64_STAT;


typedef _CMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO *PCMSG_SIGNED_AND_ENVELOPED_ENCODE_INFO;


typedef unsigned int *LPUINT;


typedef _SHELLEXECUTEINFOA *LPSHELLEXECUTEINFO;


typedef tagMCI_ANIM_RECT_PARMS *LPMCI_ANIM_RECT_PARMS;


typedef _DOCINFOA *LPDOCINFOA;


typedef int (__stdcall *DRAWSTATEPROC)(HDC__ *, int, unsigned int, int, int);


typedef _MMCKINFO *LPCMMCKINFO;


typedef void (__cdecl *PacketLoggingFunction)(PacketInfo *, unsigned int);


typedef tagEMRPOLYLINE16 *PEMRPOLYBEZIER16;


typedef _TOKEN_GROUPS_AND_PRIVILEGES *PTOKEN_GROUPS_AND_PRIVILEGES;


typedef _PRINTER_INFO_5A *LPPRINTER_INFO_5A;


typedef _CRYPT_DECODE_PARA *PCRYPT_DECODE_PARA;


typedef tagMCI_SEQ_SET_PARMS *PMCI_SEQ_SET_PARMS;


typedef _CTL_ANY_SUBJECT_INFO *PCTL_ANY_SUBJECT_INFO;


typedef void **PPV;


typedef IInternetProtocolRoot *LPIINTERNETPROTOCOLROOT;


typedef tagMSGBOXPARAMSA *LPMSGBOXPARAMSA;


typedef unsigned int TextJustificationType;


typedef char *PTBYTE;


typedef HMIDI__ **LPHMIDI;


typedef _CRYPT_PASSWORD_CREDENTIALSA *PCRYPT_PASSWORD_CREDENTIALSA;


typedef sockaddr *LPSOCKADDR;


typedef unsigned __int16 *PARAM_OFFSETTABLE;


typedef IInternetProtocolSink *LPIINTERNETPROTOCOLSINK;


typedef int (__stdcall *PFN_CMSG_EXPORT_KEY_AGREE)(_CMSG_CONTENT_ENCRYPT_INFO *, _CMSG_KEY_AGREE_RECIPIENT_ENCODE_INFO *, _CMSG_KEY_AGREE_ENCRYPT_INFO *, unsigned int, void *);


typedef _TAPE_GET_POSITION *PTAPE_GET_POSITION;


typedef unsigned int (__stdcall *LPFNDEVMODE)(HWND__ *, HINSTANCE__ *, _devicemodeA *, char *, char *, _devicemodeA *, char *, unsigned int);


typedef tagMSGBOXPARAMSW *LPMSGBOXPARAMSW;


typedef void (__cdecl *BlitFunction)(BlitArgs *);


typedef unsigned int EdgeAttachmentType;


typedef _HIDP_PREPARSED_DATA *PHIDP_PREPARSED_DATA;


typedef tagCBT_CREATEWNDW *LPCBT_CREATEWNDW;


typedef int (__stdcall *PFN_EXPORT_PRIV_KEY_FUNC)(unsigned int, unsigned int, char *, unsigned int, void *, _CRYPT_PRIVATE_KEY_INFO *, unsigned int *);


typedef tagFUNCDESC *LPFUNCDESC;


typedef _PSP *HPROPSHEETPAGE;


typedef _ACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION *PACTIVATION_CONTEXT_ASSEMBLY_DETAILED_INFORMATION;


typedef _PRINTER_INFO_5W *LPPRINTER_INFO_5W;


typedef tagPOLYTEXTA *PPOLYTEXTA;


typedef tagHANDLETABLE *PHANDLETABLE;


typedef tagLOGPEN *NPLOGPEN;


typedef tagLOGPEN *LPLOGPEN;


typedef COptionalHeader *(__cdecl *COptionalHeaderAllocator)(CBufferIterator *);


typedef _PROPSHEETHEADERA *LPPROPSHEETHEADERA;


typedef int (__stdcall *WNDENUMPROC)(HWND__ *, int);


typedef _FORM_INFO_1A *PFORM_INFO_1;


typedef _IMAGE_SEPARATE_DEBUG_HEADER *PIMAGE_SEPARATE_DEBUG_HEADER;


typedef HWAVEIN__ *HWAVEIN;


typedef int (__stdcall *PFN_CERT_STORE_PROV_WRITE_CERT)(void *, _CERT_CONTEXT *, unsigned int);


typedef unsigned int (__stdcall *LPFNPSPCALLBACKA)(HWND__ *, unsigned int, _PROPSHEETPAGEA *);


typedef tagSTICKYKEYS *LPSTICKYKEYS;


typedef tagLOGFONTW *LPLOGFONTW;


typedef _HTTPSPolicyCallbackData *PSSL_EXTRA_CERT_CHAIN_POLICY_PARA;


typedef tagLOGFONTA *PLOGFONT;


typedef tagLOGFONTW *NPLOGFONTW;


typedef _CERT_REQUEST_INFO *PCERT_REQUEST_INFO;


typedef unsigned int UILayout;


typedef tagEMRSETWORLDTRANSFORM *PEMRSETWORLDTRANSFORM;


typedef _CTL_FIND_SUBJECT_PARA *PCTL_FIND_SUBJECT_PARA;


typedef int (__cdecl *RPC_BLOCKING_FN)(void *, void *, void *);


typedef _CMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO *PCMSG_KEY_TRANS_RECIPIENT_ENCODE_INFO;


typedef DIENVELOPE *LPDIENVELOPE;


typedef int (__stdcall *PCRYPT_RESOLVE_HCRYPTPROV_FUNC)(_CRYPT_PRIVATE_KEY_INFO *, unsigned int *, void *);


typedef _PRINTER_INFO_5A *LPPRINTER_INFO_5;


typedef _IMAGE_TLS_DIRECTORY32 *PIMAGE_TLS_DIRECTORY32;


typedef _PRINTER_INFO_9W *PPRINTER_INFO_9W;


typedef _OSVERSIONINFOEXW *PRTL_OSVERSIONINFOEXW;


typedef tagMSGBOXPARAMSA *LPMSGBOXPARAMS;


typedef __int64 *PLONGLONG;


typedef tagMEASUREITEMSTRUCT *PMEASUREITEMSTRUCT;


typedef _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;


typedef _CRYPT_OID_INFO *PCRYPT_OID_INFO;


typedef tWAVEFORMATEX *NPWAVEFORMATEX;


typedef unsigned __int64 ULONGLONG;


typedef tWAVEFORMATEX *LPWAVEFORMATEX;


typedef _AppBarData *PAPPBARDATA;


typedef _FILESYSTEM_STATISTICS *PFILESYSTEM_STATISTICS;


typedef _SID_AND_ATTRIBUTES (*PSID_AND_ATTRIBUTES_ARRAY)[1];


typedef __int64 _Longlong;


typedef int (__stdcall *CALINFO_ENUMPROCA)(char *);


typedef tagEVENTMSG *NPEVENTMSG;


typedef tagMSG *PMSG;


typedef _GUID *LPIID;


typedef tagLOGFONTW *PLOGFONTW;


typedef int (__stdcall *QUERY_CREDENTIALS_ATTRIBUTES_FN_W)(_SecHandle *, unsigned int, void *);


typedef tagEVENTMSG *LPEVENTMSG;


typedef _RemotableHandle *wireHACCEL;


typedef HMIDIIN__ **LPHMIDIIN;


typedef _FORM_INFO_1A *PFORM_INFO_1A;


typedef IBindStatusCallback *LPBINDSTATUSCALLBACK;


typedef HMIDI__ *HMIDI;


typedef unsigned int HANDLE_PTR;


typedef _CHANGER_SET_ACCESS *PCHANGER_SET_ACCESS;


typedef tagMCI_ANIM_STEP_PARMS *LPMCI_ANIM_STEP_PARMS;


typedef char *LPCH;


typedef _PRINTER_INFO_8W *PPRINTER_INFO_8W;


typedef unsigned int InputMapID;


typedef _CMC_TAGGED_ATTRIBUTE *PCMC_TAGGED_ATTRIBUTE;


typedef unsigned int WeenieLog;


typedef _CRL_DIST_POINTS_INFO *PCRL_DIST_POINTS_INFO;


typedef _WINDOW_BUFFER_SIZE_RECORD *PWINDOW_BUFFER_SIZE_RECORD;


typedef _WSAQuerySetA *LPWSAQUERYSETA;


typedef tagLOGFONTA *PLOGFONTA;


typedef _PREVENT_MEDIA_REMOVAL *PPREVENT_MEDIA_REMOVAL;


typedef unsigned int WeenieType;


typedef tagEMRSELECTCLIPPATH *PEMRSETSTRETCHBLTMODE;


typedef int (__stdcall *CALINFO_ENUMPROCW)(unsigned __int16 *);


typedef void **PHDEVNOTIFY;


typedef unsigned __int64 DatFileID;


typedef _CMSG_KEY_AGREE_ENCRYPT_INFO *PCMSG_KEY_AGREE_ENCRYPT_INFO;


typedef tagSIZE *PSIZE;


typedef unsigned int SECURITY_INFORMATION;


typedef _FORM_INFO_1W *PFORM_INFO_1W;


typedef tagWAVEOUTCAPS2A *PWAVEOUTCAPS2;


typedef void *HGLOBAL;


typedef IDropSource *LPDROPSOURCE;


typedef void **LPHANDLE;


typedef unsigned int dev_t;


typedef tagFONTSIGNATURE *LPFONTSIGNATURE;


typedef void *HCRYPTDEFAULTCONTEXT;


typedef _IMAGE_IMPORT_DESCRIPTOR *PIMAGE_IMPORT_DESCRIPTOR;


typedef unsigned int bit32;


typedef unsigned __int16 wint_t;


typedef tagEMRARC *PEMRARCTO;


typedef tagWAVEOUTCAPSA *PWAVEOUTCAPS;


typedef _CMC_TAGGED_CONTENT_INFO *PCMC_TAGGED_CONTENT_INFO;


typedef _SHCREATEPROCESSINFOW *PSHCREATEPROCESSINFOW;


typedef tagDRVCONFIGINFO *LPDRVCONFIGINFO;


typedef tagEXTLOGFONTA *LPEXTLOGFONT;


typedef tagDRVCONFIGINFO *NPDRVCONFIGINFO;


typedef _CREATE_PROCESS_DEBUG_INFO *LPCREATE_PROCESS_DEBUG_INFO;


typedef void **SPHANDLE;


typedef tagEXTLOGFONTA *NPEXTLOGFONT;


typedef unsigned int __stdcall PM_CLOSE_PROC();


typedef _OSVERSIONINFOW *PRTL_OSVERSIONINFOW;


typedef _CRYPTOAPI_BLOB *PCERT_BLOB;


typedef tagEMRSELECTOBJECT *PEMRDELETEOBJECT;


typedef void (__stdcall *RPC_DISPATCH_FUNCTION)(_RPC_MESSAGE *);


typedef _FILE_NOTIFY_INFORMATION *PFILE_NOTIFY_INFORMATION;


typedef IWinInetInfo *LPWININETINFO;


typedef unsigned int UIGlobalMessage;


typedef _SHFILEOPSTRUCTW *LPSHFILEOPSTRUCTW;


typedef void *PVOID64;


typedef HIDGROUPCAPS *PHIDGROUPCAPS;


typedef _OUTLINETEXTMETRICA *POUTLINETEXTMETRIC;


typedef tagEXCEPINFO *LPEXCEPINFO;


typedef _ENUM_SERVICE_STATUSA *LPENUM_SERVICE_STATUSA;


typedef _CRYPT_PKCS8_IMPORT_PARAMS *PCRYPT_PRIVATE_KEY_BLOB_AND_PARAMS;


typedef IDirectInputDevice8A *LPDIRECTINPUTDEVICE8A;


typedef void (__stdcall *TIMERPROC)(HWND__ *, unsigned int, unsigned int, unsigned int);


typedef LIST_ENTRY64 *PLIST_ENTRY64;


typedef bool (__cdecl *GRPCommandWithArgsFP)(PStringBaseArray<char> *);


typedef _SHFILEOPSTRUCTA *LPSHFILEOPSTRUCTA;


typedef OPENCARD_SEARCH_CRITERIAA *LPOPENCARD_SEARCH_CRITERIA;


typedef tagEMREXTCREATEPEN *PEMREXTCREATEPEN;


typedef tagEMRCREATEPALETTE *PEMRCREATEPALETTE;


typedef int (__stdcall *PREAD_PROCESS_MEMORY_ROUTINE)(void *, unsigned int, void *, unsigned int, unsigned int *);


typedef tagWAVEOUTCAPSW *PWAVEOUTCAPSW;


typedef __int64 *PINT64;


typedef unsigned __int64 uint64;


typedef tagEXTLOGFONTW *NPEXTLOGFONTW;


typedef tagWAVEINCAPS2A *LPWAVEINCAPS2A;


typedef IMultiQI *LPMULTIQI;


typedef int (__stdcall *PFNPROCESSPOLICIESA)(HWND__ *, const char *, const char *, const char *, unsigned int);


typedef tagEXTLOGFONTW *LPEXTLOGFONTW;


typedef tagWAVEINCAPS2A *NPWAVEINCAPS2A;


typedef IOleUILinkContainerW *LPOLEUILINKCONTAINERW;


typedef _TAPE_GET_MEDIA_PARAMETERS *PTAPE_GET_MEDIA_PARAMETERS;


typedef tagWAVEOUTCAPSA *PWAVEOUTCAPSA;


typedef tagNMHDR *LPNMHDR;


typedef unsigned int StringToken;


typedef tagWINDOWINFO *LPWINDOWINFO;


typedef _ENCRYPTION_CERTIFICATE_HASH_LIST *PENCRYPTION_CERTIFICATE_HASH_LIST;


typedef tagEXTLOGFONTA *LPEXTLOGFONTA;


typedef tagNEWTEXTMETRICA *LPNEWTEXTMETRIC;


typedef tagEXTLOGFONTA *NPEXTLOGFONTA;


typedef tagNEWTEXTMETRICA *NPNEWTEXTMETRIC;


typedef int (__stdcall *PFNPROCESSPOLICIESW)(HWND__ *, const unsigned __int16 *, const unsigned __int16 *, const unsigned __int16 *, unsigned int);


typedef joyinfo_tag *LPJOYINFO;


typedef joyinfo_tag *NPJOYINFO;


typedef IErrorInfo *LPERRORINFO;


typedef _CONSOLE_SCREEN_BUFFER_INFO *PCONSOLE_SCREEN_BUFFER_INFO;


typedef _BIDI_REQUEST_DATA *LPBIDI_REQUEST_DATA;


typedef _OUTLINETEXTMETRICW *POUTLINETEXTMETRICW;


typedef _SCARD_IO_REQUEST *LPSCARD_IO_REQUEST;


typedef tagICONMETRICSA *LPICONMETRICS;


typedef _OFSTRUCT *LPOFSTRUCT;


typedef _CMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA *PCMSG_CTRL_DEL_SIGNER_UNAUTH_ATTR_PARA;


typedef float BV_BBox[2][3];


typedef OPENCARD_SEARCH_CRITERIAW *LPOPENCARD_SEARCH_CRITERIAW;


typedef unsigned __int16 ATOM;


typedef _OUTLINETEXTMETRICA *POUTLINETEXTMETRICA;


typedef _CRYPT_PKCS8_IMPORT_PARAMS *PCRYPT_PKCS8_IMPORT_PARAMS;


typedef IDirectInputDevice8A *LPDIRECTINPUTDEVICE8;


typedef _CSADDR_INFO *PCSADDR_INFO;


typedef _DSBCAPS *LPDSBCAPS;


typedef _SHFILEOPSTRUCTA *LPSHFILEOPSTRUCT;


typedef OPENCARD_SEARCH_CRITERIAA *LPOPENCARD_SEARCH_CRITERIAA;


typedef tagEMRCREATEMONOBRUSH *PEMRCREATEMONOBRUSH;


typedef _CMSG_RECIPIENT_ENCODE_INFO *PCMSG_RECIPIENT_ENCODE_INFO;


typedef tagMIXERCONTROLDETAILS_LISTTEXTA *PMIXERCONTROLDETAILS_LISTTEXTA;


typedef _CRYPT_SMIME_CAPABILITY *PCRYPT_SMIME_CAPABILITY;


typedef unsigned int TradeListID;


typedef tagDEBUGHOOKINFO *LPDEBUGHOOKINFO;


typedef _CRYPT_ENCODE_PARA *PCRYPT_ENCODE_PARA;


typedef tagDEBUGHOOKINFO *NPDEBUGHOOKINFO;


typedef unsigned int (__stdcall *LPSETUPHOOKPROC)(HWND__ *, unsigned int, unsigned int, int);


typedef tMIXERCONTROLDETAILS_SIGNED *LPMIXERCONTROLDETAILS_SIGNED;


typedef _DOCINFOA *LPDOCINFO;


typedef _EFS_RPC_BLOB *PEFS_RPC_BLOB;


typedef z_stream_s *z_streamp;


typedef _PRINTER_INFO_4A *LPPRINTER_INFO_4A;


typedef HDROP__ *HDROP;


typedef _NOTIFYICONDATAA *PNOTIFYICONDATA;


typedef _DATATYPES_INFO_1W *PDATATYPES_INFO_1W;


typedef _CERT_SYSTEM_STORE_RELOCATE_PARA *PCERT_SYSTEM_STORE_RELOCATE_PARA;


typedef tagMCI_OPEN_PARMSA *LPMCI_OPEN_PARMS;


typedef int (__stdcall *PFN_CERT_STORE_PROV_DELETE_CTL)(void *, _CTL_CONTEXT *, unsigned int);


typedef DIPROPHEADER *LPDIPROPHEADER;


typedef tagPALETTEENTRY *LPPALETTEENTRY;


typedef tagPOLYTEXTA *PPOLYTEXT;


typedef CSurface *PCSurface;


typedef _CERT_CRL_CONTEXT_PAIR *PCCERT_CRL_CONTEXT_PAIR;


typedef int (__stdcall *PFN_CERT_STORE_PROV_DELETE_CRL)(void *, _CRL_CONTEXT *, unsigned int);


typedef mmtime_tag *NPMMTIME;


typedef mmtime_tag *LPMMTIME;


typedef _TAPE_STATISTICS *PTAPE_STATISTICS;


typedef _PRINTER_INFO_4W *LPPRINTER_INFO_4W;


typedef _LDT_ENTRY *PLDT_ENTRY;


typedef tagENHMETAHEADER *PENHMETAHEADER;


typedef tagOLEUIOBJECTPROPSW *LPOLEUIOBJECTPROPSW;


typedef tagNCCALCSIZE_PARAMS *LPNCCALCSIZE_PARAMS;


typedef _GENERIC_BINDING_ROUTINE_PAIR *PGENERIC_BINDING_ROUTINE_PAIR;


typedef _POINTFLOAT *PPOINTFLOAT;


typedef _PRINTER_INFO_2W *PPRINTER_INFO_2W;


typedef BATTERY_REPORTING_SCALE *PBATTERY_REPORTING_SCALE;


typedef tagEMRELLIPSE *PEMRELLIPSE;


typedef void (__stdcall *PTIMERAPCROUTINE)(void *, unsigned int, unsigned int);


typedef IDirectInputEffect *LPDIRECTINPUTEFFECT;


typedef unsigned int GRDetailLevel;


typedef tagSOUNDSENTRYW *LPSOUNDSENTRYW;


typedef _TRIVERTEX *LPTRIVERTEX;


typedef int __stl_atomic_t;


typedef _CRYPTOAPI_BLOB *PDATA_BLOB;


typedef _SecHandle *PSecHandle;


typedef IKeystoneResourceImage *LPKEYSTONERESOURCEIMAGE;


typedef _MMCKINFO *PMMCKINFO;


typedef unsigned int *LPSCARDHANDLE;


typedef int *PSCODE;


typedef DIEFFESCAPE *LPDIEFFESCAPE;


typedef _SecBuffer *PSecBuffer;


typedef __int16 sshort;


typedef void (__stdcall *APC_CALLBACK_FUNCTION)(unsigned int, void *, void *);


typedef char *iterator;


typedef __int16 *PSHORT;


typedef unsigned __int16 word;


typedef _TAPE_PREPARE *PTAPE_PREPARE;


typedef _PRINTER_INFO_1W *PPRINTER_INFO_1W;


typedef unsigned __int16 ushort;


typedef tagMCI_OPEN_PARMSW *LPMCI_OPEN_PARMSW;


typedef _CMSG_KEY_AGREE_KEY_ENCRYPT_INFO *PCMSG_KEY_AGREE_KEY_ENCRYPT_INFO;


typedef int (__stdcall *PFN_CERT_STORE_PROV_SET_CTL_PROPERTY)(void *, _CTL_CONTEXT *, unsigned int, unsigned int, const void *);


typedef _PRINTER_INFO_4A *LPPRINTER_INFO_4;


typedef int (__stdcall *LOCALE_ENUMPROCW)(unsigned __int16 *);


typedef tagAUXCAPSW *NPAUXCAPSW;


typedef _OUTPUT_DEBUG_STRING_INFO *LPOUTPUT_DEBUG_STRING_INFO;


typedef tagAUXCAPSW *LPAUXCAPSW;


typedef tagDRAWITEMSTRUCT *PDRAWITEMSTRUCT;


typedef tagMCI_OPEN_PARMSA *LPMCI_OPEN_PARMSA;


typedef tagMCI_ANIM_UPDATE_PARMS *LPMCI_ANIM_UPDATE_PARMS;


typedef unsigned __int16 FSHORT;


typedef IDirectSound3DBuffer *LPDIRECTSOUND3DBUFFER;


typedef _WIN32_FIND_DATAA *LPWIN32_FIND_DATA;


typedef in_addr *PIN_ADDR;


typedef tagDELETEITEMSTRUCT *PDELETEITEMSTRUCT;


typedef unsigned int (__stdcall *DbgHelpSymSetOptions)(unsigned int);


typedef tagMIXERCAPS2W *PMIXERCAPS2W;


typedef int (__stdcall *PFN_CERT_STORE_PROV_GET_CTL_PROPERTY)(void *, _CTL_CONTEXT *, unsigned int, unsigned int, void *, unsigned int *);


typedef tagWINDOWPLACEMENT *PWINDOWPLACEMENT;


typedef int (__stdcall *SERVER_ROUTINE)();


typedef tagOLEUIPASTESPECIALW *LPOLEUIPASTESPECIALW;


typedef _ADDJOB_INFO_1W *LPADDJOB_INFO_1W;


typedef tagEMRSETCOLORADJUSTMENT *PEMRSETCOLORADJUSTMENT;


typedef pvalueW *PPVALUEW;


typedef tagCY *LPCY;


typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;


typedef servent *PSERVENT;


typedef _CERT_POLICY_CONSTRAINTS_INFO *PCERT_POLICY_CONSTRAINTS_INFO;


typedef bool (__thiscall *tCmdFunc)(ClientCommunicationSystem *this, int, char **);


typedef tagRECONVERTSTRING *NPRECONVERTSTRING;


typedef _TOKEN_PRIVILEGES *PTOKEN_PRIVILEGES;


typedef tagRECONVERTSTRING *LPRECONVERTSTRING;


typedef void *HCRYPTASYNC;


typedef _WSAQuerySetA *LPWSAQUERYSET;


typedef _GLYPHMETRICSFLOAT *LPGLYPHMETRICSFLOAT;


typedef unsigned int *PUINT32;


typedef provider_info *PPROVIDER;


typedef tagWAVEINCAPSW *LPWAVEINCAPSW;


typedef _OSVERSIONINFOW *LPOSVERSIONINFOW;


typedef _FIND_NAME_BUFFER *PFIND_NAME_BUFFER;


typedef _CHANGER_ELEMENT_LIST *PCHANGER_ELEMENT_LIST;


typedef tagWAVEINCAPSW *NPWAVEINCAPSW;


typedef _PRINTER_INFO_7W *PPRINTER_INFO_7W;


typedef IAdviseSink2 *LPADVISESINK2;


typedef tagMIDIINCAPS2W *NPMIDIINCAPS2W;


typedef int (__stdcall *PFN_CERT_STORE_PROV_FREE_FIND_CERT)(void *, _CERT_CONTEXT *, void *, unsigned int);


typedef tagMIDIINCAPS2W *LPMIDIINCAPS2W;


typedef _IMAGEHLP_MODULE *PIMAGEHLP_MODULE;


typedef _IMAGE_DATA_DIRECTORY *PIMAGE_DATA_DIRECTORY;


typedef _SECURITY_IMPERSONATION_LEVEL *PSECURITY_IMPERSONATION_LEVEL;


typedef tagCUSTDATAITEM *LPCUSTDATAITEM;


typedef tagWAVEOUTCAPS2A *PWAVEOUTCAPS2A;


typedef _CTL_USAGE *PCERT_ENHKEY_USAGE;


typedef tagWAVEINCAPSA *PWAVEINCAPSA;


typedef tagMCI_VD_ESCAPE_PARMSA *PMCI_VD_ESCAPE_PARMSA;


typedef int MEMBERID;


typedef int (__stdcall *LPDIENUMDEVICESBYSEMANTICSCBA)(DIDEVICEINSTANCEA *, IDirectInputDevice8A *, unsigned int, unsigned int, void *);


typedef int __stdcall RPC_FORWARD_FUNCTION(_GUID *, _RPC_VERSION *, _GUID *, char *, void **);


typedef IKeystoneResourceFont *LPKEYSTONERESOURCEFONT;


typedef _CRYPTOAPI_BLOB *PCRL_BLOB;


typedef tagWAVEINCAPSA *NPWAVEINCAPSA;


typedef IAdviseSink *LPADVISESINK;


typedef _CHANGER_SET_POSITION *PCHANGER_SET_POSITION;


typedef tagWAVEINCAPSA *LPWAVEINCAPSA;


typedef WSAData *LPWSADATA;


typedef _WSAPROTOCOLCHAIN *LPWSAPROTOCOLCHAIN;


typedef int SHANDLE_PTR;


typedef tagMIXERCAPSW *LPMIXERCAPSW;


typedef tagMCI_VD_ESCAPE_PARMSW *PMCI_VD_ESCAPE_PARMSW;


typedef tagMCI_LOAD_PARMSA *PMCI_LOAD_PARMS;


typedef int off_t;


typedef _CRYPT_X942_OTHER_INFO *PCRYPT_X942_OTHER_INFO;


typedef HMIDIOUT__ *HMIDIOUT;


typedef _cpinfo *LPCPINFO;


typedef value_entW *PVALENTW;


typedef unsigned __int16 *LPWORD;


typedef tagEMREXTTEXTOUTA *PEMREXTTEXTOUTA;


typedef _EVENTLOG_FULL_INFORMATION *LPEVENTLOG_FULL_INFORMATION;


typedef tagMIXERLINECONTROLSW *LPMIXERLINECONTROLSW;


typedef _COORD *PCOORD;


typedef tagEMRSELECTOBJECT *PEMRSELECTOBJECT;


typedef tagCUSTDATA *LPCUSTDATA;


typedef tagMENUITEMINFOA *LPMENUITEMINFOA;


typedef _PRINTER_NOTIFY_OPTIONS *PPRINTER_NOTIFY_OPTIONS;


typedef HRESULT (__stdcall *LPDIRECTINPUTCREATE)(HINSTANCE__ *, unsigned int, _GUID *, void **, IUnknown *);


typedef unsigned int TalkFocus;


typedef ITypeComp *LPTYPECOMP;


typedef _WSACOMPLETION *LPWSACOMPLETION;


typedef tagMCI_VD_ESCAPE_PARMSW *LPMCI_VD_ESCAPE_PARMSW;


typedef int OAEVENT;


typedef tagEMRFILLPATH *PEMRFILLPATH;


typedef tagMENUITEMINFOW *LPMENUITEMINFOW;


typedef HFONT__ *HFONT;


typedef Region *LPREGION;


typedef tagEMREXTTEXTOUTA *PEMREXTTEXTOUTW;


typedef tagEMREOF *PEMREOF;


typedef ICreateTypeLib2 *LPCREATETYPELIB2;


typedef _ENUM_SERVICE_STATUSA *LPENUM_SERVICE_STATUS;


typedef tagEMRPOLYPOLYLINE *PEMRPOLYPOLYGON;


typedef _PRINTER_INFO_5W *PPRINTER_INFO_5W;


typedef tagWAVEINCAPS2A *LPWAVEINCAPS2;


typedef int *LPLONG;


typedef unsigned int FLOAT_STAT;


typedef _EXCEPTION_RECORD *PEXCEPTION_RECORD;


typedef tagWAVEINCAPS2A *NPWAVEINCAPS2;


typedef tagMENUINFO *LPMENUINFO;


typedef unsigned __int16 *PPARAM_OFFSETTABLE;


typedef unsigned int CALID;


typedef tagMCI_VD_ESCAPE_PARMSA *PMCI_VD_ESCAPE_PARMS;


typedef int (__stdcall *PFN_CERT_DLL_OPEN_STORE_PROV_FUNC)(const char *, unsigned int, unsigned int, unsigned int, const void *, void *, _CERT_STORE_PROV_INFO *);


typedef tagWAVEINCAPSA *NPWAVEINCAPS;


typedef tagWAVEINCAPSA *LPWAVEINCAPS;


typedef tagEMRLINETO *PEMRMOVETOEX;


typedef unsigned int SpellBackground;


typedef _CHANGER_READ_ELEMENT_STATUS *PCHANGER_READ_ELEMENT_STATUS;


typedef int (__stdcall *EDITWORDBREAKPROCW)(unsigned __int16 *, int, int, int);


typedef IExternalConnection *LPEXTERNALCONNECTION;


typedef tagICONMETRICSA *LPICONMETRICSA;


typedef _PRINTER_INFO_4W *PPRINTER_INFO_4W;


typedef _CONSOLE_FONT_INFO *PCONSOLE_FONT_INFO;


typedef tagEMRSETVIEWPORTEXTEX *PEMRSETVIEWPORTEXTEX;


typedef HRASCONN__ *HRASCONN;


typedef _CMC_ADD_EXTENSIONS_INFO *PCMC_ADD_EXTENSIONS_INFO;


typedef unsigned int AudienceType;


typedef tagMENUITEMINFOA *LPMENUITEMINFO;


typedef _ACCESS_ALLOWED_OBJECT_ACE *PACCESS_ALLOWED_OBJECT_ACE;


typedef tagEMRPOLYLINE *PEMRPOLYBEZIERTO;


typedef tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;


typedef unsigned int MaterialTypeID;


typedef int (__stdcall *FREE_CONTEXT_BUFFER_FN)(void *);


typedef tagCURSORINFO *PCURSORINFO;


typedef _CERT_ISSUER_SERIAL_NUMBER *PCERT_ISSUER_SERIAL_NUMBER;


typedef _TOKEN_GROUPS *PTOKEN_GROUPS;


typedef void (__stdcall *LPTIMECALLBACK)(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


typedef IMarshal2 *LPMARSHAL2;


typedef tagMIXERCONTROLDETAILS_LISTTEXTA *PMIXERCONTROLDETAILS_LISTTEXT;


typedef bool _Rb_tree_Color_type;


typedef unsigned __int16 SECURITY_DESCRIPTOR_CONTROL;


typedef unsigned int DialogQueueID;


typedef tagCOMPOSITIONFORM *NPCOMPOSITIONFORM;


typedef tagMSGBOXPARAMSA *PMSGBOXPARAMSA;


typedef tagCOMPOSITIONFORM *LPCOMPOSITIONFORM;


typedef _PORT_INFO_3A *LPPORT_INFO_3A;


typedef _PORT_INFO_2A *LPPORT_INFO_2A;


typedef _PORT_INFO_1A *LPPORT_INFO_1A;


typedef _PRINTER_INFO_7A *LPPRINTER_INFO_7A;


typedef _CRYPT_KEY_SIGN_MESSAGE_PARA *PCRYPT_KEY_SIGN_MESSAGE_PARA;


typedef unsigned __int64 *PULONG64;


typedef IDataAdviseHolder *LPDATAADVISEHOLDER;


typedef IEnumString *LPENUMSTRING;


typedef _DOC_INFO_3W *PDOC_INFO_3W;


typedef _WSACOMPLETION *PWSACOMPLETION;


typedef _FILETIME *LPFILETIME;


typedef IInternetProtocolInfo *LPIINTERNETPROTOCOLINFO;


typedef SCARD_READERSTATEW *LPSCARD_READERSTATEW;


typedef char map_type;


typedef unsigned int EtherealityType;


typedef _PRINTER_INFO_7W *LPPRINTER_INFO_7W;


typedef timeval *PTIMEVAL;


typedef _ACCESS_DENIED_CALLBACK_OBJECT_ACE *PACCESS_DENIED_CALLBACK_OBJECT_ACE;


typedef unsigned int GRDetailLevels;


typedef _SCARD_IO_REQUEST *PSCARD_IO_REQUEST;


typedef tagMENUGETOBJECTINFO *PMENUGETOBJECTINFO;


typedef unsigned int ChatType;


typedef const char *__stdcall _ATL_DESCRIPTIONFUNC();


typedef _IMAGE_FUNCTION_ENTRY64 *PIMAGE_FUNCTION_ENTRY64;


typedef int (__stdcall *WINSTAENUMPROC)(char *, int);


typedef IBinding *LPBINDING;


typedef unsigned int (__stdcall *check_func)(unsigned int, const char *, unsigned int);


typedef _RTL_CRITICAL_SECTION *PCRITICAL_SECTION;


typedef unsigned int BOOL_STAT;


typedef _PROVIDOR_INFO_1A *LPPROVIDOR_INFO_1A;


typedef _PRINTER_ENUM_VALUESA *LPPRINTER_ENUM_VALUESA;


typedef _DOC_INFO_2W *PDOC_INFO_2W;


typedef _PROVIDOR_INFO_2A *LPPROVIDOR_INFO_2A;


typedef _MODEMDEVCAPS *LPMODEMDEVCAPS;


typedef void (__cdecl *_se_translator_function)(unsigned int, _EXCEPTION_POINTERS *);


typedef _COMMPROP *LPCOMMPROP;


typedef tagSTYLESTRUCT *LPSTYLESTRUCT;


typedef tagMULTIKEYHELPA *PMULTIKEYHELP;


typedef _CERT_NAME_CONSTRAINTS_INFO *PCERT_NAME_CONSTRAINTS_INFO;


typedef void **PHANDLE;


typedef _QUOTA_LIMITS *PQUOTA_LIMITS;


typedef _SECURITY_ATTRIBUTES *PSECURITY_ATTRIBUTES;


typedef tagPAINTSTRUCT *PPAINTSTRUCT;


typedef _userFLAG_STGMEDIUM *wireFLAG_STGMEDIUM;


typedef _currencyfmtW *LPCURRENCYFMTW;


typedef tagMIXERLINEW *LPMIXERLINEW;


typedef _RemotableHandle *wireHDC;


typedef IRootStorage *LPROOTSTORAGE;


typedef DIDEVICEINSTANCEA *LPDIDEVICEINSTANCEA;


typedef tagUSEROBJECTFLAGS *PUSEROBJECTFLAGS;


typedef _CRYPT_URL_INFO *PCRYPT_URL_INFO;


typedef _DRIVE_LAYOUT_INFORMATION *PDRIVE_LAYOUT_INFORMATION;


typedef HKL__ **LPHKL;


typedef _PRINTER_INFO_7A *LPPRINTER_INFO_7;


typedef OPENCARDNAMEA *POPENCARDNAME;


typedef _CREATE_THREAD_DEBUG_INFO *LPCREATE_THREAD_DEBUG_INFO;


typedef tagFILTERKEYS *LPFILTERKEYS;


typedef _DOC_INFO_1W *PDOC_INFO_1W;


typedef DLGTEMPLATE *LPDLGTEMPLATEW;


typedef tagEMREXTESCAPE *PEMREXTESCAPE;


typedef tagBITMAPFILEHEADER *PBITMAPFILEHEADER;


typedef int (__stdcall *MINIDUMP_CALLBACK_ROUTINE)(void *, _MINIDUMP_CALLBACK_INPUT *const , _MINIDUMP_CALLBACK_OUTPUT *);


typedef tagHSZPAIR *PHSZPAIR;


typedef _TAPE_SET_MEDIA_PARAMETERS *PTAPE_SET_MEDIA_PARAMETERS;


typedef void __stdcall RPC_SECURITY_CALLBACK_FN(void *);


typedef _IMAGE_TLS_DIRECTORY32 *PIMAGE_TLS_DIRECTORY;


typedef tagMCI_OVLY_WINDOW_PARMSW *LPMCI_OVLY_WINDOW_PARMSW;


typedef DIDEVICEINSTANCEW *LPDIDEVICEINSTANCEW;


typedef HACMSTREAM__ *HACMSTREAM;


typedef unsigned int (__stdcall *LPHANDLER_FUNCTION_EX)(unsigned int, unsigned int, void *, void *);


typedef ReferenceCountTemplate_1048576_0 *(__thiscall *local_bool)(IntrusiveSmartPointer<ReferenceCountTemplate_1048576_0 > *this);


typedef tagEMRGLSRECORD *PEMRGLSRECORD;


typedef _ENCRYPTION_CERTIFICATE *PENCRYPTION_CERTIFICATE;


typedef ID3DXBuffer *LPD3DXBUFFER;


typedef tagABORTPATH *PEMRCLOSEFIGURE;


typedef char charf;


typedef tagCONVINFO *PCONVINFO;


typedef int (__stdcall *PFNrqvea)(HKEY__ *, const char *, unsigned int *, unsigned int *, char *, unsigned int *);


typedef int (__stdcall *WINSTAENUMPROCA)(char *, int);


typedef tagGCP_RESULTSA *LPGCP_RESULTSA;


typedef int (__stdcall *LPDIENUMEFFECTSCALLBACKA)(DIEFFECTINFOA *, void *);


typedef tagEMRTRANSPARENTBLT *PEMRTRANSPARENTBLT;


typedef unsigned int *PUINT;


typedef int (__stdcall *LANGUAGEGROUP_ENUMPROCA)(unsigned int, char *, char *, unsigned int, int);


typedef _STARTUPINFOW *LPSTARTUPINFOW;


typedef tMIXERCONTROLDETAILS_BOOLEAN *LPMIXERCONTROLDETAILS_BOOLEAN;


typedef _IMAGE_VXD_HEADER *PIMAGE_VXD_HEADER;


typedef _FOCUS_EVENT_RECORD *PFOCUS_EVENT_RECORD;


typedef _CTL_VERIFY_USAGE_PARA *PCTL_VERIFY_USAGE_PARA;


typedef tagMCI_OVLY_OPEN_PARMSA *LPMCI_OVLY_OPEN_PARMS;


typedef HMIDIOUT__ **LPHMIDIOUT;


typedef tagMCI_SYSINFO_PARMSA *LPMCI_SYSINFO_PARMSA;


typedef int (__stdcall *LANGUAGEGROUP_ENUMPROCW)(unsigned int, unsigned __int16 *, unsigned __int16 *, unsigned int, int);


typedef _DS3DLISTENER *LPCDS3DLISTENER;


typedef _MINIDUMP_CALLBACK_INFORMATION *PMINIDUMP_CALLBACK_INFORMATION;


typedef bool (__cdecl *GRPCommandFP)();


typedef int (__stdcall *WINSTAENUMPROCW)(unsigned __int16 *, int);


typedef _ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;


typedef tagMCI_ANIM_WINDOW_PARMSA *PMCI_ANIM_WINDOW_PARMSA;


typedef tagPOINTS *LPPOINTS;


typedef tagWAVEINCAPS2A *PWAVEINCAPS2;


typedef __int64 INT64;


typedef _TAPE_SET_POSITION *PTAPE_SET_POSITION;


typedef unsigned int UIStateID;


typedef tagBITMAPCOREINFO *PBITMAPCOREINFO;


typedef _NETINFOSTRUCT *LPNETINFOSTRUCT;


typedef unsigned __int16 bit16;


typedef Region *LPLAYOUTAREA;


typedef tagMCI_STATUS_PARMS *PMCI_STATUS_PARMS;


typedef tagCHOOSEFONTW *LPCHOOSEFONTW;


typedef HCONVLIST__ *HCONVLIST;


typedef tagXFORM *PXFORM;


typedef tagMCI_SEEK_PARMS *LPMCI_SEEK_PARMS;


typedef unsigned __int16 FILEOP_FLAGS;


typedef unsigned __int16 *LPCLIPFORMAT;


typedef CM_Power_Data_s *PCM_POWER_DATA;


typedef _WSAServiceClassInfoW *LPWSASERVICECLASSINFOW;


typedef int (__stdcall *PFN_CERT_STORE_PROV_FREE_FIND_CRL)(void *, _CRL_CONTEXT *, void *, unsigned int);


typedef tagMCI_ANIM_WINDOW_PARMSW *PMCI_ANIM_WINDOW_PARMSW;


typedef _NT_TIB *PNT_TIB;


typedef tagCHOOSEFONTA *LPCHOOSEFONTA;


typedef int intf;


typedef void *(__cdecl *FNNEW)(unsigned int);


typedef unsigned __int64 BlobTypeFlags;


typedef tagEMRFORMAT *PEMRFORMAT;


typedef tagMDICREATESTRUCTW *LPMDICREATESTRUCTW;


typedef int (__stdcall *LPTOP_LEVEL_EXCEPTION_FILTER)(_EXCEPTION_POINTERS *);


typedef tagMCI_OVLY_RECT_PARMS *PMCI_OVLY_RECT_PARMS;


typedef tagSTATDATA *LPSTATDATA;


typedef IPropertyBag *LPPROPERTYBAG;


typedef int (__stdcall *GEO_ENUMPROC)(int);


typedef _PACKEDEVENTINFO *PPACKEDEVENTINFO;


typedef long double float64;


typedef int (__stdcall *PROPENUMPROCEXW)(HWND__ *, unsigned __int16 *, void *, unsigned int);


typedef void (__stdcall *LPSERVICE_MAIN_FUNCTIONA)(unsigned int, char **);


typedef tagJOYCAPSA *PJOYCAPSA;


typedef _ITEMIDLIST *LPCITEMIDLIST;


typedef bool (__cdecl *pfCreateChatClient)(IChatClient **, int, unsigned int);


typedef _CERT_REVOCATION_CRL_INFO *PCERT_REVOCATION_CRL_INFO;


typedef IEnumOLEVERB *LPENUMOLEVERB;


typedef tagLOGCOLORSPACEA *LPLOGCOLORSPACEA;


typedef _ENCRYPTION_CERTIFICATE_LIST *PENCRYPTION_CERTIFICATE_LIST;


typedef unsigned __int16 *PUHALF_PTR;


typedef midihdr_tag *PMIDIHDR;


typedef ImgTex *PImgTex;


typedef tagJOYCAPSW *PJOYCAPSW;


typedef _CMC_RESPONSE_INFO *PCMC_RESPONSE_INFO;


typedef int (__stdcall *DbgHelpSymGetLineFromAddr)(void *, unsigned int, unsigned int *, _IMAGEHLP_LINE *);


typedef int (__stdcall *PROPENUMPROCEXA)(HWND__ *, char *, void *, unsigned int);


typedef _OUTLINETEXTMETRICA *LPOUTLINETEXTMETRICA;


typedef _PROCESS_INFORMATION *LPPROCESS_INFORMATION;


typedef _OUTLINETEXTMETRICA *NPOUTLINETEXTMETRICA;


typedef int category;


typedef tagWAVEINCAPS2A *PWAVEINCAPS2A;


typedef tagMCI_ANIM_WINDOW_PARMSA *PMCI_ANIM_WINDOW_PARMS;


typedef HMETAFILE__ *HMETAFILE;


typedef tagPRINTPAGERANGE *LPPRINTPAGERANGE;


typedef _SET_PARTITION_INFORMATION *PSET_PARTITION_INFORMATION;


typedef BITMAPV4HEADER *LPBITMAPV4HEADER;


typedef int (__stdcall *PFN_CERT_ENUM_PHYSICAL_STORE)(const void *, unsigned int, const unsigned __int16 *, _CERT_PHYSICAL_STORE_INFO *, void *, void *);


typedef unsigned __int16 uint16;


typedef unsigned int CharacterTitle;


typedef _OLESTREAMVTBL *LPOLESTREAMVTBL;


typedef void *RPC_AUTH_IDENTITY_HANDLE;


typedef _PRINTER_NOTIFY_OPTIONS_TYPE *PPRINTER_NOTIFY_OPTIONS_TYPE;


typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEA;


typedef __int16 *PINT16;


typedef _CERT_POLICY_ID *PCERT_POLICY_ID;


typedef void *PMIDL_XMIT_TYPE;


typedef tagIDLDESC *LPIDLDESC;


typedef unsigned int __stdcall PM_OPEN_PROC(unsigned __int16 *);


typedef IServiceProvider *LPSERVICEPROVIDER;


typedef unsigned int UIAttribute2ndIcon;


typedef unsigned int KSPIN_LOCK;


typedef tagMCI_RECORD_PARMS *LPMCI_RECORD_PARMS;


typedef int (__stdcall *IMPORT_SECURITY_CONTEXT_FN_W)(unsigned __int16 *, _SecBuffer *, void *, _SecHandle *);


typedef _OSVERSIONINFOEXA *LPOSVERSIONINFOEXA;


typedef int (__stdcall *PFN_CMSG_IMPORT_KEY_TRANS)(_CRYPT_ALGORITHM_IDENTIFIER *, _CMSG_CTRL_KEY_TRANS_DECRYPT_PARA *, unsigned int, void *, unsigned int *);


typedef _EXCEPTION_RECORD32 *PEXCEPTION_RECORD32;


typedef tagWAVEINCAPS2W *PWAVEINCAPS2W;


typedef tagCHOOSEFONTA *LPCHOOSEFONT;


typedef _CERT_KEY_USAGE_RESTRICTION_INFO *PCERT_KEY_USAGE_RESTRICTION_INFO;


typedef unsigned __int16 RecipientID;


typedef _BIDI_REQUEST_CONTAINER *LPBIDI_REQUEST_CONTAINER;


typedef _CMSG_SIGNED_ENCODE_INFO *PCMSG_SIGNED_ENCODE_INFO;


typedef tagEMRMASKBLT *PEMRMASKBLT;


typedef void (__stdcall *RPC_AUTH_KEY_RETRIEVAL_FN)(void *, unsigned __int16 *, unsigned int, void **, int *);


typedef HRESULT (__cdecl *FNCREATETEXTURE)(IDirect3DDevice9 *, const void *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, _D3DFORMAT, _D3DPOOL, unsigned int, unsigned int, unsigned int, _D3DXIMAGE_INFO *, tagPALETTEENTRY *, IDirect3DTexture9 **);


typedef _CHANGER_PRODUCT_DATA *PCHANGER_PRODUCT_DATA;


typedef _AUDIT_EVENT_TYPE *PAUDIT_EVENT_TYPE;


typedef _IMAGE_THUNK_DATA64 *PIMAGE_THUNK_DATA64;


typedef HRESULT (__cdecl *KSWNDPROC)(IKeystoneWindow *, unsigned int, unsigned int, int);


typedef sockaddr_in *LPSOCKADDR_IN;


typedef unsigned int (__stdcall *PFNRECONCILEPROFILEW)(const unsigned __int16 *, const unsigned __int16 *, unsigned int);


typedef tagJOYCAPSA *PJOYCAPS;


typedef _SESSION_HEADER *PSESSION_HEADER;


typedef _CERT_PRIVATE_KEY_VALIDITY *PCERT_PRIVATE_KEY_VALIDITY;


typedef _STL__Rb_tree_node<unsigned char *> *_Link_type;


typedef tagEMRPOLYLINE16 *PEMRPOLYLINE16;


typedef _TOKEN_PRIMARY_GROUP *PTOKEN_PRIMARY_GROUP;


typedef _HIDP_DATA *PHIDP_DATA;


typedef _EFS_KEY_INFO *PEFS_KEY_INFO;


typedef long double DOUBLE;


typedef tagFORMATETC *LPFORMATETC;


typedef tagWNDCLASSEXA *PWNDCLASSEXA;


typedef unsigned __int16 terrain_mask;


typedef _SCARD_IO_REQUEST *LPCSCARD_IO_REQUEST;


typedef tagPIXELFORMATDESCRIPTOR *PPIXELFORMATDESCRIPTOR;


typedef _MODEMSETTINGS *PMODEMSETTINGS;


typedef _SERVICE_DESCRIPTIONA *LPSERVICE_DESCRIPTIONA;


typedef _numberfmtA *LPNUMBERFMTA;


typedef int (__stdcall *PROPENUMPROCEX)(HWND__ *, char *, void *, unsigned int);


typedef unsigned int AllegianceLockAction;


typedef tagMCI_ANIM_WINDOW_PARMSA *LPMCI_ANIM_WINDOW_PARMS;


typedef tagJOYCAPS2A *PJOYCAPS2;


typedef char *PSZ;


typedef _PORT_INFO_3A *LPPORT_INFO_3;


typedef int streampos;


typedef _PORT_INFO_2A *LPPORT_INFO_2;


typedef _CRYPT_SEQUENCE_OF_ANY *PCRYPT_SEQUENCE_OF_ANY;


typedef _PORT_INFO_1A *LPPORT_INFO_1;


typedef _CERT_SYSTEM_STORE_INFO *PCERT_SYSTEM_STORE_INFO;


typedef tagMSGBOXPARAMSA *PMSGBOXPARAMS;


typedef _TOKEN_USER *PTOKEN_USER;


typedef _DISCDLGSTRUCTW *LPDISCDLGSTRUCTW;


typedef char *PCH;


typedef __int64 USN;


typedef _MINIDUMP_EXCEPTION_INFORMATION *PMINIDUMP_EXCEPTION_INFORMATION;


typedef char uch;


typedef IStorage *LPSTORAGE;


typedef unsigned __int16 ush;


typedef int (__stdcall *DbgHelpSymCleanup)(void *);


typedef HSZ__ *HSZ;


typedef unsigned int HELPPOLY;


typedef _CTL_INFO *PCTL_INFO;


typedef IDirectSound *LPDIRECTSOUND;


typedef tagOLEUIGNRLPROPSW *LPOLEUIGNRLPROPSW;


typedef int (__stdcall *LPOCNCHKPROC)(unsigned int, unsigned int, void *);


typedef HDDEDATA__ *HDDEDATA;


typedef _DISPLAY_DEVICEA *PDISPLAY_DEVICEA;


typedef tagTTPOLYGONHEADER *LPTTPOLYGONHEADER;


typedef ATTNAMESSTRUCT *LPATTNAMESSTRUCT;


typedef unsigned int EmapperID;


typedef tagTOGGLEKEYS *LPTOGGLEKEYS;


typedef _QUERY_SERVICE_CONFIGA *LPQUERY_SERVICE_CONFIGA;


typedef _SOCKET_ADDRESS *LPSOCKET_ADDRESS;


typedef unsigned int ControlActivationType;


typedef _CMSG_ENCRYPTED_ENCODE_INFO *PCMSG_ENCRYPTED_ENCODE_INFO;


typedef tMIXERCONTROLDETAILS *PMIXERCONTROLDETAILS;


typedef _PRINTER_NOTIFY_OPTIONS_TYPE *LPPRINTER_NOTIFY_OPTIONS_TYPE;


typedef RPC_IMPORT_CONTEXT_P *PRPC_IMPORT_CONTEXT_P;


typedef tagMCI_OVLY_LOAD_PARMSW *LPMCI_OVLY_LOAD_PARMSW;


typedef unsigned int VersionToken;


typedef _LUID_AND_ATTRIBUTES *PLUID_AND_ATTRIBUTES;


typedef _LUID_AND_ATTRIBUTES (*PLUID_AND_ATTRIBUTES_ARRAY)[1];


typedef _CRYPT_ATTRIBUTES *PCRYPT_ATTRIBUTES;


typedef _SHNAMEMAPPINGA *LPSHNAMEMAPPINGA;


typedef unsigned __int16 *LPPATCHARRAY;


typedef unsigned int ToggleType;


typedef joyinfo_tag *PJOYINFO;


typedef tagABORTPATH *PEMRSAVEDC;


typedef _QUERY_SERVICE_CONFIGW *LPQUERY_SERVICE_CONFIGW;


typedef _PROVIDOR_INFO_1A *LPPROVIDOR_INFO_1;


typedef _PROCESS_HEAP_ENTRY *PPROCESS_HEAP_ENTRY;


typedef _PRINTER_ENUM_VALUESA *LPPRINTER_ENUM_VALUES;


typedef tagLAYERPLANEDESCRIPTOR *LPLAYERPLANEDESCRIPTOR;


typedef int (__stdcall *PFN_CERT_STORE_PROV_WRITE_CRL)(void *, _CRL_CONTEXT *, unsigned int);


typedef tagMCI_SAVE_PARMSA *PMCI_SAVE_PARMSA;


typedef _PROVIDOR_INFO_2A *LPPROVIDOR_INFO_2;


typedef __int16 VARIANT_BOOL;


typedef tagMULTIKEYHELPA *PMULTIKEYHELPA;


typedef tagCOMPAREITEMSTRUCT *LPCOMPAREITEMSTRUCT;


typedef void (__cdecl *unexpected_function)();


typedef OPENCARDNAMEA *POPENCARDNAMEA;


typedef _RemotableHandle *wireHBRUSH;


typedef _COMMTIMEOUTS *LPCOMMTIMEOUTS;


typedef _PRINTER_INFO_6 *LPPRINTER_INFO_6;


typedef tagEMRSETTEXTCOLOR *PEMRSETTEXTCOLOR;


typedef IOleInPlaceObject *LPOLEINPLACEOBJECT;


typedef _FORMAT_EX_PARAMETERS *PFORMAT_EX_PARAMETERS;


typedef _CERT_CHAIN_PARA *PCERT_CHAIN_PARA;


typedef IOleUILinkInfoW *LPOLEUILINKINFOW;


typedef _IMAGE_ARCHIVE_MEMBER_HEADER *PIMAGE_ARCHIVE_MEMBER_HEADER;


typedef _ACTIVATION_CONTEXT_QUERY_INDEX *PACTIVATION_CONTEXT_QUERY_INDEX;


typedef _FILETIME *PFILETIME;


typedef DBObj *(__cdecl *DBObjAllocatorFunction)();


typedef _CMS_DH_KEY_INFO *PCMS_DH_KEY_INFO;


typedef void __stdcall TIMECALLBACK(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


typedef _CRYPTOAPI_BLOB *PCRYPT_OBJID_BLOB;


typedef CHid *PCHID;


typedef int _TINT;


typedef _QUERY_SERVICE_CONFIGA *LPQUERY_SERVICE_CONFIG;


typedef unsigned __int16 Posf;


typedef tagGCP_RESULTSA *LPGCP_RESULTS;


typedef int HFILE;


typedef _CMSG_SP3_COMPATIBLE_AUX_INFO *PCMSG_SP3_COMPATIBLE_AUX_INFO;


typedef unsigned __int64 *PDWORD64;


typedef _JOBOBJECT_SECURITY_LIMIT_INFORMATION *PJOBOBJECT_SECURITY_LIMIT_INFORMATION;


typedef unsigned int *PUINT_PTR;


typedef tagEMRSELECTCLIPPATH *PEMRSETROP2;


typedef tagMCI_OVLY_OPEN_PARMSA *LPMCI_OVLY_OPEN_PARMSA;


typedef FLASHWINFO *PFLASHWINFO;


typedef const char *PCCH;


typedef fd_set *LPFD_SET;


typedef tagTEXTMETRICW *PTEXTMETRICW;


typedef int (__stdcall *PFN_CMSG_IMPORT_ENCRYPT_KEY)(unsigned int, unsigned int, _CRYPT_ALGORITHM_IDENTIFIER *, _CRYPT_ALGORITHM_IDENTIFIER *, char *, unsigned int, unsigned int *);


typedef int (__stdcall *ICMENUMPROCW)(unsigned __int16 *, int);


typedef _CSADDR_INFO *LPCSADDR_INFO;


typedef void __stdcall RPC_OBJECT_INQ_FN(_GUID *, _GUID *, int *);


typedef unsigned __int16 *PUINT16;


typedef _CRYPT_ATTRIBUTE *PCRYPT_ATTRIBUTE;


typedef int (__stdcall *ENCRYPT_MESSAGE_FN)(_SecHandle *, unsigned int, _SecBufferDesc *, unsigned int);


typedef int (__stdcall *PFN_CMSG_GEN_ENCRYPT_KEY)(unsigned int *, _CRYPT_ALGORITHM_IDENTIFIER *, void *, _CERT_PUBLIC_KEY_INFO *, void *(__stdcall *)(unsigned int), unsigned int *, char **, unsigned int *);


typedef unsigned int EmoteCategory;


typedef _IMAGE_DEBUG_MISC *PIMAGE_DEBUG_MISC;


typedef DIDEVICEOBJECTINSTANCEA *LPDIDEVICEOBJECTINSTANCEA;


typedef tagMENUITEMINFOA *LPCMENUITEMINFOA;


typedef int (__stdcall *FONTENUMPROC)(tagLOGFONTA *, tagTEXTMETRICA *, unsigned int, int);


typedef void (__cdecl *DialogCallBackFunc)(PropertyCollection *);


typedef char SECURITY_CONTEXT_TRACKING_MODE;


typedef tagLOGBRUSH *NPLOGBRUSH;


typedef _CRYPT_RETRIEVE_AUX_INFO *PCRYPT_RETRIEVE_AUX_INFO;


typedef _JOBOBJECT_BASIC_UI_RESTRICTIONS *PJOBOBJECT_BASIC_UI_RESTRICTIONS;


typedef tagLOGBRUSH *LPLOGBRUSH;


typedef unsigned __int64 NetBlobID;


typedef _CONTEXT *LPCONTEXT;


typedef DIDEVICEOBJECTINSTANCEW *LPDIDEVICEOBJECTINSTANCEW;


typedef IMoniker *LPMONIKER;


typedef tagMCI_GETDEVCAPS_PARMS *LPMCI_GETDEVCAPS_PARMS;


typedef tagEMRSELECTCLIPPATH *PEMRSETBKMODE;


typedef unsigned int RadarBlipEnum;


typedef _DSCAPS *LPDSCAPS;


typedef _wireSAFEARRAY *wireSAFEARRAY;


typedef _REMOTE_NAME_INFOA *LPREMOTE_NAME_INFO;


typedef _WSANSClassInfoW *PWSANSCLASSINFOW;


typedef tagCOLORMATCHTOTARGET *PEMRCOLORMATCHTOTARGET;


typedef tagEMRFILLPATH *PEMRSTROKEANDFILLPATH;


typedef HIMC__ *HIMC;


typedef unsigned int TradeStatus;


typedef HRESULT (__cdecl *FNTERMINATEPLUGIN)();


typedef tagPARAMDATA *LPPARAMDATA;


typedef _DATATYPES_INFO_1W *LPDATATYPES_INFO_1W;


typedef unsigned int INT_STAT;


typedef tagEXTLOGPEN *PEXTLOGPEN;


typedef ISupportErrorInfo *LPSUPPORTERRORINFO;


typedef _CRYPT_ENCRYPTED_PRIVATE_KEY_INFO *PCRYPT_ENCRYPTED_PRIVATE_KEY_INFO;


typedef unsigned int VertexFormatType;


typedef UIElement *(__cdecl *CreateMethod_t)(LayoutDesc *, ElementDesc *);


typedef tagEMRPOLYTEXTOUTA *PEMRPOLYTEXTOUTW;


typedef _WSAPROTOCOL_INFOA *LPWSAPROTOCOL_INFO;


typedef tagMCI_SEQ_SET_PARMS *LPMCI_SEQ_SET_PARMS;


typedef unsigned int LinkState;


typedef wavehdr_tag *LPWAVEHDR;


typedef tagMETARECORD *LPMETARECORD;


typedef int (__stdcall *CODEPAGE_ENUMPROCA)(char *);


typedef wavehdr_tag *NPWAVEHDR;


typedef int (__stdcall *PHANDLER_ROUTINE)(unsigned int);


typedef _SecHandle *PCtxtHandle;


typedef _DATATYPES_INFO_1A *LPDATATYPES_INFO_1A;


typedef _UNIVERSAL_NAME_INFOW *LPUNIVERSAL_NAME_INFOW;


typedef tagQOCINFO *LPQOCINFO;


typedef _BIDI_DATA *LPBIDI_DATA;


typedef unsigned int REGSAM;


typedef long double timetype;


typedef tagENHMETAHEADER *LPENHMETAHEADER;


typedef _CERT_PUBLIC_KEY_INFO *PCERT_PUBLIC_KEY_INFO;


typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATE;


typedef DLGTEMPLATE *PROPSHEETPAGE_RESOURCE;
