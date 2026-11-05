#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 6 member(s).
class CObjectPool {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CObjectPool@@QEAA@K@Z
    CObjectPool(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CObjectPool@@QEAAXXZ
    void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackObject@CObjectPool@@QEAAXPEAVCPooledObject@@@Z
    void TrackObject(CPooledObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CObjectPool@@UEAA@XZ
    virtual ~CObjectPool();
};
