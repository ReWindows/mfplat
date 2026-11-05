#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CSharedMemory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CSharedMemory@@SAJPEBGPEAU_SECURITY_ATTRIBUTES@@KKPEAHPEAPEAV1@@Z
    static long Create(unsigned short const *, _SECURITY_ATTRIBUTES *, unsigned long, unsigned long, int *, CSharedMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Map@CSharedMemory@@QEAAJKKKPEAX@Z
    long Map(unsigned long, unsigned long, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CSharedMemory@@SAJQEAXPEAPEAV1@@Z
    static long Open(void * const, CSharedMemory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unmap@CSharedMemory@@QEAAJXZ
    long Unmap();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSharedMemory@@UEAA@XZ
    virtual ~CSharedMemory();
};
