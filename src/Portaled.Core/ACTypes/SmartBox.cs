using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Portaled.Core.ACTypes
{
    public unsafe struct SmartBox
    {
        public IntPtr vfptr;
        public int testMode;
        public Position viewer;
        public CObjCell* viewer_cell;
        public uint head_index;
        public Position viewer_sought_position;
        public CameraManager* camera_manager;
        public CellManager* cell_manager;
        public CPhysics* physics;
        public CObjectMaint* m_pObjMaint;
        public LScape* lscape;
        public Ambient* ambient_sounds;
        public CommandInterpreter* cmdinterp;
        public int creature_mode;
        public float m_fGameFOV;
        public float m_fViewDistFOV;
        public bool m_bUseViewDistance;
        public float game_ambient_level;
        public uint game_ambient_color;
        public int game_degrades_disabled;
        public int hidden;
        public int position_update_complete;
        public int waiting_for_teleport;
        public int has_been_teleported;
        public NIList<NetBlob*>* in_queue;
        public NIList<NetBlob*>* netblob_list;
        public _iobuf* position_and_movement_file;
        public uint player_id;
        public CPhysicsObj* player;
        public uint target_object_id;
        public void (__cdecl* target_callback) (unsigned int, ObjectSelectStatus, tagRECT*, const float);
        public uint num_cells;
        public CEnvCell** cells;
        public uint num_objects;
        public CPhysicsObj** objects;
        //public void (__cdecl* m_renderingCallback) ();
        public void* m_renderingCallback;
    };
}
