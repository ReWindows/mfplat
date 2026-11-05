#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
namespace MF::DeviceEnumeration {
class CEnumPnp {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDevicePath@CEnumPnp@DeviceEnumeration@MF@@QEAAJPEAPEAGPEAPEBU_GUID@@PEAUCEnumInternalState@23@@Z
    long GetDevicePath(unsigned short * *, _GUID const * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDevRegKey@CEnumPnp@DeviceEnumeration@MF@@QEAAJPEAPEAUHKEY__@@PEAGH@Z
    long OpenDevRegKey(HKEY__* *, unsigned short *, int);
};
} // namespace MF::DeviceEnumeration
