#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 37 member(s).
class CMFSystemTimeSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSystemTimeSource@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustSpeed@CMFSystemTimeSource@@UEAAJN_J@Z
    virtual long AdjustSpeed(double, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSystemTimeSource@@QEAA@PEAJ@Z
    CMFSystemTimeSource(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWrapper@CMFSystemTimeSource@@UEAAJ_JPEAPEAUIMFPresentationTimeSource@@@Z
    virtual long CreateWrapper(int64_t, IMFPresentationTimeSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClockCharacteristics@CMFSystemTimeSource@@UEAAJPEAK@Z
    virtual long GetClockCharacteristics(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContinuityKey@CMFSystemTimeSource@@UEAAJPEAK@Z
    virtual long GetContinuityKey(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCorrelatedTime@CMFSystemTimeSource@@UEAAJKPEA_J0@Z
    virtual long GetCorrelatedTime(unsigned long, int64_t *, int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperties@CMFSystemTimeSource@@UEAAJPEAU_MFCLOCK_PROPERTIES@@@Z
    virtual long GetProperties(_MFCLOCK_PROPERTIES *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CMFSystemTimeSource@@UEAAJKPEAW4_MFCLOCK_STATE@@@Z
    virtual long GetState(unsigned long, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnderlyingClock@CMFSystemTimeSource@@UEAAJPEAPEAUIMFClock@@@Z
    virtual long GetUnderlyingClock(IMFClock * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockPause@CMFSystemTimeSource@@UEAAJ_J@Z
    virtual long OnClockPause(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockRestart@CMFSystemTimeSource@@UEAAJ_J@Z
    virtual long OnClockRestart(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockSetRate@CMFSystemTimeSource@@UEAAJ_JM@Z
    virtual long OnClockSetRate(int64_t, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockStart@CMFSystemTimeSource@@UEAAJ_J0@Z
    virtual long OnClockStart(int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClockStop@CMFSystemTimeSource@@UEAAJ_J@Z
    virtual long OnClockStop(int64_t);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSystemTimeSource@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSystemTimeSource@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMFSystemTimeSource@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stall@CMFSystemTimeSource@@UEAAJ_J@Z
    virtual long Stall(int64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSystemTimeSource@@UEAA@XZ
    virtual ~CMFSystemTimeSource();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoStall@CMFSystemTimeSource@@IEAAJ_J00@Z
    long DoStall(int64_t, int64_t, int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndStall@CMFSystemTimeSource@@IEAAJXZ
    long EndStall();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeIfStalling@CMFSystemTimeSource@@IEAAJPEA_J0PEAH@Z
    long GetTimeIfStalling(int64_t *, int64_t *, int *);
};
