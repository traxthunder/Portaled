using Decal.Adapter;
using Decal.Adapter.Wrappers;
using Decal.Interop.Core;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Runtime.Remoting;
using System.Security.Cryptography.X509Certificates;
using System.Text;

namespace Portaled.Service
{

    [FriendlyName("Portaled Engine")]
    public class PortaledLoader : FilterBase
    {
        internal static bool pluginsReady = false;
        public static PortaledLoader Instance { get; set; }
        public static DateTime BeginTime { get; set; }
        public new NetServiceHost Host { get { return base.Host; } }

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
                BeginTime = DateTime.Now;
                Instance = this;
                Managers.DatIOManager.Initialize();
                Hook.HookMain.HookAll();

                base.CommandLineText += PortaledLoader_CommandLineText;
               //base.CharacterFilter.LoginComplete += CharacterFilter_LoginComplete;
                
                

            }
            catch (Exception ex)
            {
                // Utils.LogException(ex); 
            }
        }

        private const string prefix = "/sr ";
        private void PortaledLoader_CommandLineText(object sender, ChatParserInterceptEventArgs e)
        {
            if (e.Text.StartsWith(prefix) && e.Text.Length > prefix.Length)
            {
                e.Eat = true;
                ProcessCmd(e.Text.Substring(prefix.Length));
            }
        }

        public static float Friction = 0.95f;
        private void ProcessCmd(string cmd)
        {
            var c = CommandParser.ParseCmd(cmd);
            switch (c.Prefix)
            {
                case "friction":
                    try
                    {
                        Friction = float.Parse(c.Args);
                    }
                    catch { }
                    break;
                default:
                    break;
            }
        }

        public class CommandParser
        {
            public static CommandPart ParseCmd(string cmd)
            {
                cmd = cmd.Trim();
                var cmdarray = cmd.Split(' ');
                CommandPart part = new CommandPart();
                if (cmdarray.Length != 0)
                {
                    part.Prefix = cmdarray[0].Trim();
                    if (cmd.Length > part.Prefix.Length + 1)
                        part.Args = cmd.Substring(part.Prefix.Length + 1).Trim();
                }
                return part;
            }
        }

        public class CommandPart
        {
            public string Prefix { get; set; }
            public string Args { get; set; }
        }

        private void CharacterFilter_LoginComplete(object sender, EventArgs e)
        {
            var a = 2;
            Core.Actions.AddChatText("Login Complete", 1);
        }

        protected override void Shutdown()
        {
            base.CommandLineText -= PortaledLoader_CommandLineText;
        }
    }
}
