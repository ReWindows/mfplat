#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class SharedFenceManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFence@SharedFenceManager@@QEAAJPEAUID3D12Device@@PEAPEAUID3D12Fence@@@Z
    long GetFence(ID3D12Device *, ID3D12Fence * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SharedFenceManager@@QEAA@XZ
    ~SharedFenceManager();
};
