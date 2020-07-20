using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct PSRefBufferCharData_char
    {
        public fixed char m_data[16];
    }    
    public unsafe struct PStringBase_char
    {
        public PSRefBufferCharData_char* m_charbuffer;
    }

    public unsafe struct PSRefBufferCharData_ushort
    {
        public fixed ushort m_data[16];
    }
    public unsafe struct PStringBase_ushort
    {
        public PSRefBufferCharData_ushort* m_charbuffer;
    }
}
