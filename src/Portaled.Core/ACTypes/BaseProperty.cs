using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct BaseProperty
    {
        public BasePropertyDesc* m_pcPropertyDesc;
        public BasePropertyValue* m_pcPropertyValue;
    };

    public struct BasePropertyValue
    {
        public ReferenceCountTemplate_1048576_0 referenceCountTemplate;
    }

    public struct ReferenceCountTemplate_1048576_0
    {
        public IntPtr pfptr;
        public uint m_cRef;
    };

    public struct AvailableProperty
    {
        public uint m_name; 
    }

    public struct AvailablePropertySet
    {
        public HashTable<uint, AvailableProperty> m_reqHash;
    }

    public enum PropertyInheritanceType
    {
      ClassOnly = 0x0,
      InstanceOnly = 0x1,
      Either = 0x2,
    };

    public enum PropertyDatFileType
    {
      ClientOnlyData = 0x0,
      ServerOnlyData = 0x1,
      SharedData = 0x2,
    };

    public enum PropertyPropagationType
    {
      NetPredictedSharedVisually = 0x0,
      NetPredictedSharedPrivately = 0x1,
      NetSharedVisually = 0x2,
      NetSharedPrivately = 0x3,
      NetNotShared = 0x4,
      WorldSharedWithServers = 0x5,
      WorldSharedWithServersAndClients = 0x6,
    };

    public enum PropertyCachingType
    {
      Global = 0x0,
      Internal = 0x1,
    };

    
    public unsafe struct BasePropertyDesc
    {
        public ReferenceCountTemplate_1048576_0 referenceCountTemplate;
        public uint m_propertyName;
        public uint m_propertyType;
        public uint m_propertyGroup;
        public uint m_propertyProvider;
        public uint m_data;
        public uint m_ePatchFlags;
        public BasePropertyValue* m_defaultValue;
        public BasePropertyValue* m_minValue;
        public BasePropertyValue* m_maxValue;
        public AvailablePropertySet m_availableProperties;
        public PropertyInheritanceType m_inheritanceType;
        public PropertyDatFileType m_datFileType;
        public PropertyPropagationType m_propagationType;
        public PropertyCachingType m_cachingType;
        public bool m_bRequired;
        public bool m_bReadOnly;
        public bool m_bPropagateToChildren;
        public bool m_bNoCheckpoint;
        public bool m_bAbsoluteTimeStamp;
        public bool m_bGroupable;
        public bool m_bAllAvailable;
        public bool m_bDoNotReplay;
        public bool m_bRecorded;
        public bool m_bToolOnly;
        public uint m_nMinElements;
        public uint m_nMaxElements;
        public PStringBase_char m_strHelp;
        public float m_fPredictionTimeout;
    }
}
