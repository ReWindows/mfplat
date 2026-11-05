#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 21 member(s).
class CPluginControl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CPluginControl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppServiceConnectionAllowedByPolicy@CPluginControl@@UEAAJPEBGH0W4MF_PLUGIN_CONTROL_POLICY@@PEAH@Z
    virtual long AppServiceConnectionAllowedByPolicy(unsigned short const *, int, unsigned short const *, int, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPluginControl@@QEAA@XZ
    CPluginControl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisabledByIndex@CPluginControl@@UEAAJKKPEAU_GUID@@@Z
    virtual long GetDisabledByIndex(unsigned long, unsigned long, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredClsid@CPluginControl@@UEAAJKPEBGPEAU_GUID@@@Z
    virtual long GetPreferredClsid(unsigned long, unsigned short const *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredClsidByIndex@CPluginControl@@UEAAJKKPEAPEAGPEAU_GUID@@@Z
    virtual long GetPreferredClsidByIndex(unsigned long, unsigned long, unsigned short * *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HardwareMFTAllowedByPolicy@CPluginControl@@UEAAJAEBU_GUID@@IW4MF_PLUGIN_CONTROL_POLICY@@PEAH@Z
    virtual long HardwareMFTAllowedByPolicy(_GUID const &, unsigned int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDisabled@CPluginControl@@UEAAJKAEBU_GUID@@@Z
    virtual long IsDisabled(unsigned long, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackagedMediaExtensionAllowedByPolicy@CPluginControl@@UEAAJKPEAUIMFActivate@@W4MF_PLUGIN_CONTROL_POLICY@@PEAH@Z
    virtual long PackagedMediaExtensionAllowedByPolicy(unsigned long, IMFActivate *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PluginAllowedByPolicy@CPluginControl@@UEAAJKAEBU_GUID@@W4MF_PLUGIN_CONTROL_POLICY@@PEAH@Z
    virtual long PluginAllowedByPolicy(unsigned long, _GUID const &, int, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPluginControl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPluginControl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisabled@CPluginControl@@UEAAJKAEBU_GUID@@H@Z
    virtual long SetDisabled(unsigned long, _GUID const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPolicy@CPluginControl@@UEAAJW4MF_PLUGIN_CONTROL_POLICY@@@Z
    virtual long SetPolicy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredClsid@CPluginControl@@UEAAJKPEBGPEBU_GUID@@@Z
    virtual long SetPreferredClsid(unsigned long, unsigned short const *, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPluginControl@@QEAA@XZ
    ~CPluginControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEffectivePolicy@CPluginControl@@AEAA?AW4MF_PLUGIN_CONTROL_POLICY@@W42@@Z
    int _GetEffectivePolicy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetListForPluginType@CPluginControl@@AEAAJKW4PluginListType@1@PEAPEAVCPluginList@@@Z
    long _GetListForPluginType(unsigned long, int, CPluginList * *);
};
