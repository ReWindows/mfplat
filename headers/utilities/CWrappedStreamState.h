#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CWrappedStreamState {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWrappedStreamState@@QEAA@PEAUIMFByteStream@@PEAJ@Z
    CWrappedStreamState(IMFByteStream *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyEndIO@CWrappedStreamState@@QEAAXXZ
    void NotifyEndIO();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWrappedStreamState@@UEAA@XZ
    virtual ~CWrappedStreamState();
};
