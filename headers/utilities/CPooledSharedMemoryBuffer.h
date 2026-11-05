#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CPooledSharedMemoryBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecrementRefs@CPooledSharedMemoryBuffer@@UEAAJXZ
    virtual long DecrementRefs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlignedBuffer@CPooledSharedMemoryBuffer@@UEAAPEAEXZ
    virtual unsigned char * GetAlignedBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CPooledSharedMemoryBuffer@@UEAAKXZ
    virtual unsigned long GetMaxLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParent@CPooledSharedMemoryBuffer@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetParent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CPooledSharedMemoryBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPooledSharedMemoryBuffer@@UEAA@XZ
    virtual ~CPooledSharedMemoryBuffer();
};
