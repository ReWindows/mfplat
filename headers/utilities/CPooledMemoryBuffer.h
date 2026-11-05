#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CPooledMemoryBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementRefs@CPooledMemoryBuffer@@UEAAJXZ
    virtual long DecrementRefs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignedBuffer@CPooledMemoryBuffer@@UEAAPEAEXZ
    virtual unsigned char * GetAlignedBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CPooledMemoryBuffer@@UEAAKXZ
    virtual unsigned long GetMaxLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CPooledMemoryBuffer@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetParent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPooledMemoryBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPooledMemoryBuffer@@UEAA@XZ
    virtual ~CPooledMemoryBuffer();
};
