#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class CMFTimeSourceWrapper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFTimeSourceWrapper@@QEAA@XZ
    CMFTimeSourceWrapper();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockCharacteristics@CMFTimeSourceWrapper@@UEAAJPEAK@Z
    virtual long GetClockCharacteristics(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContinuityKey@CMFTimeSourceWrapper@@UEAAJPEAK@Z
    virtual long GetContinuityKey(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelatedTime@CMFTimeSourceWrapper@@UEAAJKPEA_J0@Z
    virtual long GetCorrelatedTime(unsigned long, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CMFTimeSourceWrapper@@UEAAJPEAU_MFCLOCK_PROPERTIES@@@Z
    virtual long GetProperties(_MFCLOCK_PROPERTIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMFTimeSourceWrapper@@UEAAJKPEAW4_MFCLOCK_STATE@@@Z
    virtual long GetState(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingClock@CMFTimeSourceWrapper@@UEAAJPEAPEAUIMFClock@@@Z
    virtual long GetUnderlyingClock(IMFClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFTimeSourceWrapper@@QEAAJPEAUIMFPresentationTimeSource@@_J@Z
    long RuntimeClassInitialize(IMFPresentationTimeSource *, int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFTimeSourceWrapper@@UEAA@XZ
    virtual ~CMFTimeSourceWrapper();
};
