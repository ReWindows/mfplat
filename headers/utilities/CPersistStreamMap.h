#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 6 member(s).
class CPersistStreamMap {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindIdByPtr@CPersistStreamMap@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long FindIdByPtr(IUnknown *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindPtrById@CPersistStreamMap@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long FindPtrById(unsigned long, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CPersistStreamMap@@QEAAJXZ
    long Init();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapIdToPtr@CPersistStreamMap@@UEAAJKPEAUIUnknown@@@Z
    virtual long MapIdToPtr(unsigned long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPtrToId@CPersistStreamMap@@UEAAJPEAUIUnknown@@PEAK@Z
    virtual long MapPtrToId(IUnknown *, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPersistStreamMap@@QEAA@XZ
    ~CPersistStreamMap();
};
