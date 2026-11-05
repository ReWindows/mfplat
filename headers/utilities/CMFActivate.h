#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFActivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateObject@CMFActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ActivateObject(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFActivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachObject@CMFActivate@@UEAAJXZ
    virtual long DetachObject();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFActivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownObject@CMFActivate@@UEAAJXZ
    virtual long ShutdownObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Release@CMFActivate@@QEAAKXZ
    unsigned long _Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFActivate@@UEAA@XZ
    virtual ~CMFActivate();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFActivate@@IEAA@XZ
    CMFActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoActivate@CMFActivate@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long DoActivate(_GUID const &, void * *);
};
