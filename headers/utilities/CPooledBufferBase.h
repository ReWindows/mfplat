#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CPooledBufferBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@CPooledBufferBase@@SAXPEAV1@@Z
    static void Destroy(CPooledBufferBase *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPooledBufferBase@@UEAAKXZ
    virtual unsigned long Release();
};
