#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CNetworkAdapters {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdaptersAddresses@CNetworkAdapters@@QEAAJHPEAPEAU_IP_ADAPTER_ADDRESSES_LH@@@Z
    long GetAdaptersAddresses(int, _IP_ADAPTER_ADDRESSES_LH * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CNetworkAdapters@@QEAA@XZ
    ~CNetworkAdapters();
};
