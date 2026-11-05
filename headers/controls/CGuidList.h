#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CGuidList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddEntry@CGuidList@@QEAAHAEBU_GUID@@@Z
    int AddEntry(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveEntry@CGuidList@@QEAAHKAEAU_GUID@@@Z
    int RemoveEntry(unsigned long, _GUID &);
};
