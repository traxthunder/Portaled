using System;
using System.Runtime.InteropServices;
using System.Reflection;
using System.Diagnostics;
using Decal.Interop.Core;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using System.IO;
using Decal.Interop.Inject;
using Portaled.Core;
using Portaled.Service;
using Portaled.Core.ACTypes;
using Portaled.Interop;

namespace Portaled.Hook
{
    public static unsafe class Hook
    {
        public static DeviareLiteInterop.HookLib cHook;

        static Hook()
        {
            cHook = new DeviareLiteInterop.HookLib();
        }

        class Memloc
        {
            public string Key { get; set; }
            public string Value { get; set; }
            public bool MemlocIsAddr { get { return !Value.StartsWith("0x0000"); } }
        }
    }

    unsafe static class HookMain
    {
        public static class DBCache
        {
            public static class Get
            {
                static IntPtr addr = new IntPtr(0x413b80);

                [UnmanagedFunctionPointer(CallingConvention.Cdecl)]
                public delegate IntPtr Del(uint qdid, uint type);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((qdid, type) => {
                        var result = oldDel(qdid, type);
                        PortaledLoader.Instance.WriteToChat($"DBCache::Get({qdid.ToString("X4")},{type})");
                        return result;

                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
            public static class PreFetch
            {
                static IntPtr addr = new IntPtr(0x414fe0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate float Del(void* dbCacheThis, Structures.QualifiedDataID* qdid);

                public static Del oldDel =
                    (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbCacheThis, qdid) => {
                        PortaledLoader.Instance.WriteToChat($"DBCache::PreFetch({new IntPtr(dbCacheThis).ToInt32()}{qdid->Type}-{qdid->ID.Unknown1}");
                        return oldDel(dbCacheThis, qdid);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class DBOCache
        {
            public static class GetIfInMemory
            {
                static IntPtr addr = new IntPtr(0x416eb0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr dbocache, uint qdid, int arg3);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((dbocache, qdid, arg3) =>
                    {
                        var retval = oldDel(dbocache, qdid, arg3);

                        if (DateTime.Now - PortaledLoader.BeginTime > TimeSpan.FromSeconds(2))
                        {
                            var cmdInterp = PortaledLoader.Instance?.Host?.Actions?.CommandInterpreter;
                            if (cmdInterp != null)
                            {
                                var intptr = new IntPtr(cmdInterp.Value);
                                var cmdInterpEx = Interop.CommandInterpreter.__CreateInstance(intptr);
                                if (cmdInterpEx.Smartbox == null)
                                    return retval;

                                var sbox = cmdInterpEx.Smartbox;
                                var physicsObjPlayer = cmdInterpEx.Player;
                                if (physicsObjPlayer == null)
                                    return retval;

                                /*
                                 * 
                                CPartArray* partArray = physicsObjPlayer.part_array;
                                CPhysicsPart** parts = partArray->parts;
                                CPhysicsPart* parts2 = *parts;
                                CPhysicsPart parts3 = *parts2; 

                                Core.ACTypes.CSurface* surfaces = *(Core.ACTypes.CSurface**)parts2->surfaces;
                                CGfxObj* gfx = *parts2->gfxobj;

                                Core.ACTypes.ImgTex* tex = (Core.ACTypes.ImgTex*)surfaces->base1map;*/
                                physicsObjPlayer.Friction = Portaled.Service.PortaledLoader.Friction;
                            }
                        }
                        

                        if (qdid == 0x06003D44)
                        {
                            var Obj = oldDel(dbocache, qdid, arg3);
                            var tex = (Portaled.Core.ACTypes.ImgTex*)Obj.ToPointer();
                            
                            var cache = new Portaled.Core.WrappedTypes.DBOCacheEx(dbocache);
                            cache.Test(qdid);

                            //if (cache.ContainsDID(qdid))
                            //{
                            //    var dbobj = cache.GetDBObj(qdid);
                            //}
                        }

                        if (arg3 != 0)
                        {

                        }
                        DBObjManager.OnDBObjGetRequest(dbocache, qdid, 0);
                        return retval;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class CLOCache
        {
            public static class Ctor
            {
                static IntPtr addr = new IntPtr(0x4fd0a0);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr thisptr, IntPtr allocatorFunction, uint dbtype);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));


                public static List<IntPtr> DBOCaches = new List<IntPtr>();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((thisptr, allocatorFunction, dbtype) =>
                    {
                        DBOCaches.Add(thisptr);
                        return oldDel(thisptr, allocatorFunction, dbtype);
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

        }

        public static class CSurface
        {
            public static class InitEnd
            {
                static IntPtr addr = new IntPtr(0x537140);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr csurface, int init_type);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                static List<int> textureIds = new List<int>();
                static Random r = new Random();
                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((surface, type) =>
                    {
                        var tex = oldDel(surface, type);
                        var obj = (Portaled.Core.ACTypes.CSurface*)surface.ToPointer();

                        //Log id
                        textureIds.Add(obj->orig_texture_id.id);
                        
                        //Replace texture with random texture that we've encountered
                        var newId = textureIds[r.Next(textureIds.Count - 1)];
                        obj->orig_texture_id.id = newId;

                        var texobj = (Portaled.Core.ACTypes.ImgTex*)tex.ToPointer();
                        return tex;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class ImgTex
        {
            public static class Serialize
            {
                static IntPtr addr = new IntPtr(0x540290);

                [UnmanagedFunctionPointer(CallingConvention.ThisCall)]
                public delegate IntPtr Del(IntPtr tex, IntPtr archive);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((tex, archive) =>
                    {
                        var texobj = (Portaled.Core.ACTypes.ImgTex*)tex.ToPointer();
                        
                        var result = oldDel(tex, archive);
                        var texobj2 = (Portaled.Core.ACTypes.ImgTex*)result.ToPointer();
                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }
        }

        public static class SmartBox
        {
            //DOESN'T WORK, CRASHES RANDOMLY
            public static class ProcessObjectNetBlobs
            {
                static IntPtr addr = new IntPtr(0x454bc0);

                [UnmanagedFunctionPointer(CallingConvention.StdCall)]
                public delegate uint Del(IntPtr smartbox, IntPtr physicsObj);

                public static Del oldDel = (Del)Marshal.GetDelegateForFunctionPointer(addr, typeof(Del));

                public static void H()
                {
                    var newFuncAddr = Marshal.GetFunctionPointerForDelegate(new Del((smartbox, physicsObj) =>
                    {
                       

                        var obj = (Portaled.Core.ACTypes.SmartBox*)smartbox.ToPointer();
                        var pobj = (Portaled.Core.ACTypes.CPhysicsObj*)physicsObj.ToPointer();


                        var result = oldDel(smartbox, physicsObj);

                        return result;
                    }));
                    Hook.cHook.Hook(addr, newFuncAddr);
                }
            }

        }
        static bool hooked = false;
        public static void HookAll()
        {
            if (hooked)
                return;

            hooked = true;
            //  DBCache.PreFetch.H();
            DBCache.Get.H();
            DBOCache.GetIfInMemory.H();
           // CSurface.InitEnd.H();
            ImgTex.Serialize.H();
            CLOCache.Ctor.H();
          //  SmartBox.ProcessObjectNetBlobs.H();
        }

        
    }

    public static class Structures
    {
        public struct QualifiedDataID
        {
            public long Type { get; set; }
            public IDClass__tagDataID_32_0 ID { get; set;  }
        }

        public struct IDClass__tagDataID_32_0
        {
            public int Unknown1;
        }
    }

}
