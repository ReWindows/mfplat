#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class BaseMTAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@BaseMTAsyncCallback@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseMTAsyncCallback@@QEAA@XZ
    BaseMTAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@BaseMTAsyncCallback@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@BaseMTAsyncCallback@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@BaseMTAsyncCallback@@UEAAKXZ
    virtual unsigned long Release();
};
