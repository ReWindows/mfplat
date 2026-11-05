#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class RealTimeClientHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadsEx@RealTimeClientHelper@@SAJPEAUIMFContentProtectionDevice@@KPEBGJ@Z
    static long RegisterThreadsEx(IMFContentProtectionDevice *, unsigned long, unsigned short const *, long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueueEx@RealTimeClientHelper@@SAJPEAUIMFContentProtectionDevice@@KJ@Z
    static long SetWorkQueueEx(IMFContentProtectionDevice *, unsigned long, long);
};
