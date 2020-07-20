using Decal.Adapter;
using Decal.Adapter.Wrappers;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.Remoting;
using System.Text;

namespace Portaled.Service
{

    [FriendlyName("Portaled Engine")]
    public class PortaledLoader : FilterBase
    {
        internal static bool pluginsReady = false;
        public static PortaledLoader Instance { get; set; }
        //public new NetServiceHost Host { get { return base.Host; } }

        public static string PluginAssemblyDirectory
        {
            get
            {
                string fullPath = System.Reflection.Assembly.GetAssembly(typeof(PortaledLoader)).Location;
                return System.IO.Path.GetDirectoryName(fullPath);
            }
        }

        public void WriteToChat(string msg)
        {
            
        }

        protected override void Startup()
        {
            try
            {
                Instance = this;
                Hook.HookMain.HookAll();
            }
            catch (Exception ex)
            {
                // Utils.LogException(ex); 
            }
        }

        protected override void Shutdown()
        {
        }
    }
}
