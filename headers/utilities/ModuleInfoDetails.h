#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class ModuleInfoDetails {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@ModuleInfoDetails@@SAHPEBX0@Z
    static int Compare(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ModuleInfoDetails@@QEAA_NPEAXPEAUHINSTANCE__@@@Z
    bool Initialize(void *, HINSTANCE__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ModuleInfoDetails@@QEAA@XZ
    ModuleInfoDetails();
    // Category: Dtor | Source: PE Export
    // Symbol: ??1ModuleInfoDetails@@QEAA@XZ
    ~ModuleInfoDetails();
};
