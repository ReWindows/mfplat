#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CComLock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CComLock@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@CComLock@@UEAAJXZ
    virtual long LockExclusive();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CComLock@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CComLock@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockExclusive@CComLock@@UEAAJXZ
    virtual long UnlockExclusive();
};
