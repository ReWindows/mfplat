#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMediaEventPooled {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMediaEventPooled@@SAJKAEBU_GUID@@JPEBUtagPROPVARIANT@@PEAPEAV1@@Z
    static long CreateInstance(unsigned long, _GUID const &, long, tagPROPVARIANT const *, CMediaEventPooled * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMediaEventPooled@@UEAAXXZ
    virtual void Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinalRelease@CMediaEventPooled@@UEAAXXZ
    virtual void _FinalRelease();
};
