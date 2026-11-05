#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class PackageValidationCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPackage@PackageValidationCache@@QEAAXPEAUHSTRING__@@E@Z
    void AddPackage(HSTRING__*, unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPackage@PackageValidationCache@@QEAA_NPEAUHSTRING__@@PEAE@Z
    bool GetPackage(HSTRING__*, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackageValidationCache@@QEAA@XZ
    ~PackageValidationCache();
};
