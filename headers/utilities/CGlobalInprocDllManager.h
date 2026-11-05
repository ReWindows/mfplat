#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CGlobalInprocDllManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGlobalInprocDllManager@@QEAA@XZ
    CGlobalInprocDllManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDllManager@CGlobalInprocDllManager@@QEAAJPEBGPEAPEAVCMFInprocDllManager@@@Z
    long GetDllManager(unsigned short const *, CMFInprocDllManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDllManager@CGlobalInprocDllManager@@QEAAXPEBGPEAVCMFInprocDllManager@@@Z
    void RemoveDllManager(unsigned short const *, CMFInprocDllManager *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGlobalInprocDllManager@@QEAA@XZ
    ~CGlobalInprocDllManager();
};
