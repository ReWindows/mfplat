#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 32 member(s).
class CMFWinRTActivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateObject@CMFWinRTActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ActivateObject(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFWinRTActivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFWinRTActivate@@SAJPEBGPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(unsigned short const *, IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFWinRTActivate@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long CreateInstance(IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachObject@CMFWinRTActivate@@UEAAJXZ
    virtual long DetachObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CMFWinRTActivate@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFWinRTActivate@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CMFWinRTActivate@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CMFWinRTActivate@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMFWinRTActivate@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPropertiesFromIStream@CMFWinRTActivate@@SAJPEAUIStream@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    static long LoadPropertiesFromIStream(IStream *, WindissectOpaque * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LockServer@CMFWinRTActivate@@UEAAJH@Z
    virtual long LockServer(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFWinRTActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFWinRTActivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CMFWinRTActivate@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SavePropertiesToIStream@CMFWinRTActivate@@SAJPEAUIStream@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z
    static long SavePropertiesToIStream(IStream *, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownObject@CMFWinRTActivate@@UEAAJXZ
    virtual long ShutdownObject();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWinRTActivate@@UEAA@XZ
    virtual ~CMFWinRTActivate();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFWinRTActivate@@IEAA@XZ
    CMFWinRTActivate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateObject@CMFWinRTActivate@@AEAAJPEAPEAUIInspectable@@@Z
    long _CreateObject(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMFWinRTActivate@@AEAAJPEBGPEAUIUnknown@@@Z
    long _Initialize(unsigned short const *, IUnknown *);
};
