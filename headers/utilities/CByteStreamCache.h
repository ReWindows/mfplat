#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CByteStreamCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CByteStreamCache@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainsOffset@CByteStreamCache@@QEAAH_K@Z
    int ContainsOffset(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CByteStreamCache@@QEAAJ_KPEAEKPEAK@Z
    long GetBuffer(uint64_t, unsigned char *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessBuffer@CByteStreamCache@@QEAAJ_KPEAEK@Z
    long ProcessBuffer(uint64_t, unsigned char *, unsigned long);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureEntryArray@CByteStreamCache@@IEAAJXZ
    long _EnsureEntryArray();
};
