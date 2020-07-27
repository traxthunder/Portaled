using Portaled.Interop;
using System;
using System.Collections.Generic;
using System.Drawing;
using System.Linq;
using System.Text;

namespace Portaled.Service.DBObj
{
    public abstract class DBObjEx
    {
        internal static DBObjEx CreateFrom(Interop.DBObj obj, uint DBType)
        {
            switch(DBType)
            {
                case 7:
                    return new CSetup() 
                    { 
                        Underlying = Interop.CSetup.__CreateInstance(obj.__Instance) 
                    };
                case 11:
                    return new ImgTex()
                    {
                        Underlying = Interop.ImgTex.__CreateInstance(obj.__Instance)
                    };
                case 12:
                    return new RenderSurface()
                    {
                        Underlying = Interop.RenderSurface.__CreateInstance(obj.__Instance)
                    };
                case 13:
                    return new CSurface()
                    {
                        Underlying = Interop.CSurface.__CreateInstance(obj.__Instance)
                    };
                default:
                    throw new NotImplementedException();
            }
        }

        internal virtual void OnBeforeBlockingLoadInto() { }
        internal virtual void OnAfterBlockingLoadInto() { }
    }

    public abstract class DBObjEx<T> : DBObjEx
    {
        public T Underlying { get; internal set; }
    }
    public class DbObjEx : DBObjEx<Portaled.Interop.CLandBlock>
    {
    }

    public class CLandBlockInfo : DBObjEx<Portaled.Interop.CLandBlockInfo>
    {
    }

    public class CSetup : DBObjEx<Portaled.Interop.CSetup>
    {
    }

    public class ImgTex : DBObjEx<Portaled.Interop.ImgTex>
    {
        internal override void OnBeforeBlockingLoadInto()
        {
        }

        internal override void OnAfterBlockingLoadInto()
        {
        }
    }

    public class CSurface : DBObjEx<Portaled.Interop.CSurface>
    {
    }

    public class RenderSurface : DBObjEx<Portaled.Interop.RenderSurface>
    {
        static System.Drawing.Bitmap bmp; 
        static RenderSurface()
        {
            bmp = (Bitmap)Bitmap.FromFile(@"C:\dev\AC\ACClient\Portaled\src\Portaled.Service\bin\Debug\Assets\TimAllen.png");
            
        }

        public RenderSurface() { }
        public RenderSurface(IntPtr dbobj)
        {
            this.Underlying = Portaled.Interop.RenderSurface.__CreateInstance(dbobj);
        }

        public void Load()
        {
            var result = Underlying.Gfxresource.RestoreResource();
        }

        internal unsafe override void OnAfterBlockingLoadInto()
        {
            var bits = this.Underlying.SourceData.SourceBits;
            if (new IntPtr(bits) == IntPtr.Zero)
                return;
            if (this.Underlying.SourceData.PfDesc.Format == Portaled.Interop.PixelFormatID.PFID_A8R8G8B8)
            {
                ModifyBitsA8R8G8B8(bits);
            }
            
        }

        unsafe void ModifyBitsA8R8G8B8(sbyte* bits)
        {
            var sz = this.Underlying.SourceData.ImageSize;
            var height = this.Underlying.SourceData.Height;
            var width = this.Underlying.SourceData.Width;

            var bmp2 = new Bitmap(bmp, new Size((int)width, (int)height));
            
            int offset = 0;
            var srcbits = bmp2.LockBits(new Rectangle(0, 0, (int)width, (int)height), System.Drawing.Imaging.ImageLockMode.ReadOnly, System.Drawing.Imaging.PixelFormat.Format32bppArgb);
            var srcptr0 = (sbyte*)srcbits.Scan0.ToPointer();
            for (int y = 0; y < height; y++)
            {
                var srcoffset = srcbits.Stride * y;
                
                for (int x = 0; x < width; x++)
                {
                    var srcptr = srcptr0 + srcoffset;
                    var dataptr = bits + offset;
                    *(dataptr + 0) = *srcptr;
                    *(dataptr + 1) = *(srcptr+1);
                    *(dataptr + 2) = *(srcptr+2);
                    offset += 4;
                    srcoffset += 4;
                }
            }
        }
    }
}
