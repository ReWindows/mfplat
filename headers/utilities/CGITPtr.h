#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CGITPtr {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@CGITPtr@@QEAAJAEBU_GUID@@PEAPEAX@Z
    long Get(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CGITPtr@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@CGITPtr@@QEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    long Set(_GUID const &, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGITPtr@@QEAA@XZ
    ~CGITPtr();
};
