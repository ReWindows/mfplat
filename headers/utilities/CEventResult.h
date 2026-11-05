#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CEventResult {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CEventResult@@QEAA@PEAUIMFMediaEvent@@@Z
    CEventResult(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CEventResult@@SAJPEAUIMFMediaEvent@@PEAPEAV1@@Z
    static long CreateInstance(IMFMediaEvent *, CEventResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CEventResult@@UEAAXXZ
    virtual void Reset();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CEventResult@@UEAA@XZ
    virtual ~CEventResult();
};
