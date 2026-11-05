#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
namespace XWinRT {
class XPlex {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@XPlex@XWinRT@@SAPEAU12@AEAPEAU12@_K1@Z
    static WindissectOpaque * Create(WindissectOpaque * &, uint64_t, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeDataChain@XPlex@XWinRT@@QEAAXXZ
    void FreeDataChain();
};
} // namespace XWinRT
