#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CPooledAttributes {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CPooledAttributes@@SAJIPEAPEAV1@@Z
    static long CreateInstance(unsigned int, CPooledAttributes * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPooledAttributes@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinalRelease@CPooledAttributes@@UEAAXXZ
    virtual void _FinalRelease();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPooledAttributes@@UEAA@XZ
    virtual ~CPooledAttributes();
};
