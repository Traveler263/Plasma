/*==LICENSE==*

CyanWorlds.com Engine - MMOG client, server and tools
Copyright (C) 2011  Cyan Worlds, Inc.

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Additional permissions under GNU GPL version 3 section 7

If you modify this Program, or any covered work, by linking or
combining it with any of RAD Game Tools Bink SDK, Autodesk 3ds Max SDK,
NVIDIA PhysX SDK, Microsoft DirectX SDK, OpenSSL library, Independent
JPEG Group JPEG library, Microsoft Windows Media SDK, or Apple QuickTime SDK
(or a modified version of those libraries),
containing parts covered by the terms of the Bink SDK EULA, 3ds Max EULA,
PhysX SDK EULA, DirectX SDK EULA, OpenSSL and SSLeay licenses, IJG
JPEG Library README, Windows Media SDK EULA, or QuickTime SDK EULA, the
licensors of this Program grant you additional
permission to convey the resulting work. Corresponding Source for a
non-source form of such a combination shall include the source code for
the parts of OpenSSL and IJG JPEG Library used as well as that of the covered
work.

You can contact Cyan Worlds, Inc. by email legal@cyan.com
 or by snail mail at:
      Cyan Worlds, Inc.
      14617 N Newport Hwy
      Mead, WA   99021

*==LICENSE==*/

#include "HeadSpin.h"

#include "MaxComponent/plComponentMgr.h"
#include "MaxCompat.h"


#include <custcont.h>
#include <direct.h>
#include <istdplug.h>

// "TEMP" -- who's gonna rewrite that now? >.<
#include <CustAttrib.h>
#include <ICustAttribContainer.h>

#include "MaxExport/SimpleExport.h"
#include "MaxPlasmaMtls/plMtlImport.h"

extern ClassDesc* GetGUPDesc();
extern ClassDesc* GetComponentUtilDesc();
extern ClassDesc* GetComponentMgrDesc();
extern ClassDesc* GetMaxFileDataDesc();
extern ClassDesc* GetMaxUtilsDesc();

static HSClassDesc2 HSDesc;
HINSTANCE hInstance = NULL;

/*inline*/ TCHAR *GetString(int id)
{
    static TCHAR buf[256];
    if (hInstance)
        return LoadString(hInstance, id, buf, sizeof(buf)) ? buf : NULL;
    return NULL;
}

//
// return a string to be displayed if the DLL is not found
//
__declspec(dllexport) const TCHAR *LibDescription() 
{ 
    return "Plasma 2.0"; 
}

//
// the number of plugin classes in the dll
//
__declspec(dllexport) int LibNumberClasses() 
{ 
    return 7 + plComponentMgr::Inst().Count() + plPlasmaMtlImport::GetNumMtlDescs(); 
}

//
// return the i'th class descriptor defined by the plugin
//

// TEMP //
class plGeneralAttribClassDesc;
extern plGeneralAttribClassDesc theGeneralAttribClassDesc;
// TEMP //

__declspec(dllexport) ClassDesc *LibClassDesc(int i) 
{
    switch(i) 
    { 
        case 0: 
            return &HSDesc;
        case 1:
            return GetGUPDesc();
        case 2:
            return (ClassDesc*)&theGeneralAttribClassDesc;
        case 3:
            return GetComponentUtilDesc();
        case 4:
            return GetComponentMgrDesc();
        case 5:
            return GetMaxFileDataDesc();
        case 6:
            return GetMaxUtilsDesc();
        default: 
            {
                int numMtls = plPlasmaMtlImport::GetNumMtlDescs();
                if( i - 7 < numMtls )
                    return plPlasmaMtlImport::GetMtlDesc( i - 7 );
                return plComponentMgr::Inst().Get( i - 7 - numMtls );
            }
    }
}

//
// Return version so can detect obsolete DLLs
//
__declspec(dllexport) ULONG LibVersion() 
{ 
    return VERSION_3DSMAX; 
}

//
// DLLMAIN
//
BOOL WINAPI DllMain(HINSTANCE hinstDLL,ULONG fdwReason,LPVOID lpvReserved) 
{
    hInstance = hinstDLL;

    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            INIT_CUSTOM_CONTROLS(hInstance);
            break;
        case DLL_THREAD_ATTACH:
            break;
        case DLL_THREAD_DETACH:
            break;
        case DLL_PROCESS_DETACH:
            break;
    }

    return TRUE;
}

//////////////////////////////////////////////////////////////////////////////////
// TEMP
//////////////////////////////////////////////////////////////////////////////////

#define PL_GEN_ATTRIB_CLASS_ID Class_ID(0x24c36e6e, 0x53ec2ce4)

class plGeneralAttrib : public CustAttrib
{
public:
    ClassDesc2  *fClassDesc;
    IParamBlock2 *fPBlock;

    plGeneralAttrib();

    RefResult NotifyRefChanged(Interval changeInt, RefTargetHandle hTarget,
                               PartID& partID, RefMessage message) override { return REF_SUCCEED; }

    int NumParamBlocks() override { return 1; }                  // return number of ParamBlocks in this instance
    IParamBlock2* GetParamBlock(int i) override { return fPBlock; } // return i'th ParamBlock
    IParamBlock2* GetParamBlockByID(BlockID id) override { return (fPBlock->ID() == id) ? fPBlock : NULL; } // return id'd ParamBlock

    int NumRefs() override { return 1; }
    RefTargetHandle GetReference(int i) override { if (i == 0) return fPBlock; else return NULL; }
    void SetReference(int i, RefTargetHandle rtarg) override { if (i == 0) fPBlock = (IParamBlock2 *)rtarg; }

    int NumSubs() override { return 1; }
    Animatable* SubAnim(int i) override { return fPBlock; }
    TSTR SubAnimName(int i) override { return fClassDesc->ClassName(); }


    void BeginEditParams(IObjParam *ip,ULONG flags,Animatable *prev) override;
    void EndEditParams(IObjParam *ip, ULONG flags, Animatable *next) override;
    SClass_ID       SuperClassID() override { return CUST_ATTRIB_CLASS_ID; }
    Class_ID        ClassID() override { return fClassDesc->ClassID(); }

    ReferenceTarget *Clone(RemapDir &remap = DEFAULTREMAP) override;
    bool CheckCopyAttribTo(ICustAttribContainer *to) override { return true; }
    
    GETNAME_RETURN_TYPE GetName() override { return (GETNAME_RETURN_TYPE)_T(fClassDesc->ClassName()); }
    void DeleteThis() override { delete this; }
};


class plGeneralAttribClassDesc : public ClassDesc2
{
public:
    int             IsPublic() override     { return 1; }
    void*           Create(BOOL loading) override { return new plGeneralAttrib; }
    const TCHAR*    ClassName() override    { return _T("Plasma Attrib"); }
    SClass_ID       SuperClassID() override { return CUST_ATTRIB_CLASS_ID; }
    Class_ID        ClassID() override      { return PL_GEN_ATTRIB_CLASS_ID; }
    const TCHAR*    Category() override     { return _T(""); }
    const TCHAR*    InternalName() override { return _T("PlasmaAttrib"); }
    HINSTANCE       HInstance() override    { return hInstance; }
};
static plGeneralAttribClassDesc theGeneralAttribClassDesc;

//
// Parameter Block Description
//
enum
{
    kRoomName = 0
};

ParamBlockDesc2 generalAttribBlock
(
    1, _T("GeneralAttribs"), 0, &theGeneralAttribClassDesc, P_AUTO_CONSTRUCT, 0,

    // params
    kRoomName,      _T("roomName"),         TYPE_STRING,        0,  0,
    p_default,      "", 
    end,

    end
);

plGeneralAttrib::plGeneralAttrib() : fClassDesc(&theGeneralAttribClassDesc), fPBlock(NULL)
{
    fClassDesc->MakeAutoParamBlocks(this);
}

void plGeneralAttrib::BeginEditParams(IObjParam *ip,ULONG flags,Animatable *prev)
{
    fClassDesc->BeginEditParams(ip,this,flags,prev);
}

void plGeneralAttrib::EndEditParams(IObjParam *ip, ULONG flags, Animatable *next)
{
    fClassDesc->EndEditParams(ip,this,flags,next);
}

ReferenceTarget *plGeneralAttrib::Clone(RemapDir &remap)
{
    plGeneralAttrib *pnew = (plGeneralAttrib*) fClassDesc->Create(false);
    pnew->SetReference(0, remap.CloneRef(fPBlock));
    BaseClone(this, pnew, remap);
    return pnew;
}
//////////////////////////////////////////////////////////////////////////////////
// TEMP
//////////////////////////////////////////////////////////////////////////////////
