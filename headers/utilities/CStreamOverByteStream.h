#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CStreamOverByteStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CStreamOverByteStream@@QEAAJXZ
    long Close();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStreamOverByteStream@@IEAA@PEAVCWrappedStreamState@@PEAVCPositionTracker@@@Z
    CStreamOverByteStream(CWrappedStreamState *, CPositionTracker *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStreamOverByteStream@@MEAA@XZ
    virtual ~CStreamOverByteStream();
};
