#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CGITWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CGITWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteHost@CGITWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetRemoteHost(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemoteObject@CGITWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetRemoteObject(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CGITWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGITWrapper@@UEAAKXZ
    virtual unsigned long Release();
};
