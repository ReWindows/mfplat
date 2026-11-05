#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 15 member(s).
class CMFSystemUnderlyingClock {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSystemUnderlyingClock@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustSpeed@CMFSystemUnderlyingClock@@UEAAJN_J@Z
    virtual long AdjustSpeed(double, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSystemUnderlyingClock@@QEAA@XZ
    CMFSystemUnderlyingClock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockCharacteristics@CMFSystemUnderlyingClock@@UEAAJPEAK@Z
    virtual long GetClockCharacteristics(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContinuityKey@CMFSystemUnderlyingClock@@UEAAJPEAK@Z
    virtual long GetContinuityKey(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelatedTime@CMFSystemUnderlyingClock@@UEAAJKPEA_J0@Z
    virtual long GetCorrelatedTime(unsigned long, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CMFSystemUnderlyingClock@@UEAAJPEAU_MFCLOCK_PROPERTIES@@@Z
    virtual long GetProperties(_MFCLOCK_PROPERTIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMFSystemUnderlyingClock@@UEAAJKPEAW4_MFCLOCK_STATE@@@Z
    virtual long GetState(unsigned long, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSystemUnderlyingClock@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSystemUnderlyingClock@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMFSystemUnderlyingClock@@UEAAJXZ
    virtual long Reset();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalAdjustRate@CMFSystemUnderlyingClock@@MEAAJXZ
    virtual long InternalAdjustRate();
};
