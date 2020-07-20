using Portaled.Core.ACTypes;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Portaled.Core.WrappedTypes.DBObjs
{
    //Get all DBObj - dump them
    public unsafe class DBObjEx
    {
        //const IntPtr vfptr = 
        public DBObjEx()
        {
           /* DBObj obj = new DBObj()
            {
                m_AllowedInFreeList
            }*/
        }
    }


    public unsafe class ImgTexEx : DBObjEx
    {
        private IntPtr Underlying;

        public ImgTexEx(IntPtr handle)
        {
            this.Underlying = handle;
        }

        public ImgTexEx()
        {
          //  ImgTex* obj = new ImgTex();
          //  obj->graphics

                /*
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
                */


        }
    }

    public unsafe class GraphicsResourceEx
    {
        public GraphicsResourceEx()
        {

        }
    }
}
