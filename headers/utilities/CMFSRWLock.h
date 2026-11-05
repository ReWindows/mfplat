#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CMFSRWLock {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSRWLock@@QEAA@XZ
    CMFSRWLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockExclusive@CMFSRWLock@@QEAAXXZ
    void LockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockShared@CMFSRWLock@@QEAAXXZ
    void LockShared();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockExclusive@CMFSRWLock@@QEAAXXZ
    void UnlockExclusive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockShared@CMFSRWLock@@QEAAXXZ
    void UnlockShared();
};
