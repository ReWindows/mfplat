#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CMFMultiBuffer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMultiBuffer@@QEAA@XZ
    CMFMultiBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleDuration@CMFMultiBuffer@@UEAAJPEA_J@Z
    virtual long GetSampleDuration(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleFlags@CMFMultiBuffer@@UEAAJPEAK@Z
    virtual long GetSampleFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleTime@CMFMultiBuffer@@UEAAJPEA_J@Z
    virtual long GetSampleTime(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleDuration@CMFMultiBuffer@@UEAAJ_J@Z
    virtual long SetSampleDuration(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleFlags@CMFMultiBuffer@@UEAAJK@Z
    virtual long SetSampleFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleTime@CMFMultiBuffer@@UEAAJ_J@Z
    virtual long SetSampleTime(int64_t);
};
