using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Portaled.Core.ACTypes;
using Portaled.Core.WrappedTypes;

namespace Portaled.Core
{
    public static unsafe class DBObjManager
    {
        static DBObjManager()
        {

        }

        public static void OnDBObjGetRequest(IntPtr dbocache, uint qdid, byte arg3)
        {
            if (qdid == 0)
                return;
            if (qdid == 0x06003D44)
            {
                var cache = new DBOCacheEx(dbocache);
                cache.Test(qdid);
                
                //if (cache.ContainsDID(qdid))
                //{
                //    var dbobj = cache.GetDBObj(qdid);
                //}
            }
        }
    }
}
