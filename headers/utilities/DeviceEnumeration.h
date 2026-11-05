#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
namespace MF {
class DeviceEnumeration {
public:
    class CDeviceInfo;
    class CEnumInternalState;
    class CEnumPnp;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOnePnpMoniker@DeviceEnumeration@MF@@YAJPEAVCEnumPnp@12@PEAPEAVCDeviceInfo@12@PEAPEBU_GUID@@PEAUCEnumInternalState@12@@Z
    long CreateOnePnpMoniker(WindissectOpaque *, WindissectOpaque * *, _GUID const * *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumeratePnPDevices@DeviceEnumeration@MF@@YAJPEAVCEnumPnp@12@AEAV?$CTPtrArray@VCDeviceInfo@DeviceEnumeration@MF@@$0BE@@@AEBU_GUID@@@Z
    long EnumeratePnPDevices(WindissectOpaque *, WindissectOpaque &, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KsSynchronousDeviceControl@DeviceEnumeration@MF@@YAJPEAXK0K0KPEAK@Z
    long KsSynchronousDeviceControl(void *, unsigned long, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapAmCatToKsCat@DeviceEnumeration@MF@@YAJAEBU_GUID@@PEAPEBU3@@Z
    long MapAmCatToKsCat(_GUID const &, _GUID const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenKSDevice@DeviceEnumeration@MF@@YAJKPEAPEAX@Z
    long OpenKSDevice(unsigned long, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshFilterDataCache@DeviceEnumeration@MF@@YAJPEAVCDeviceInfo@12@PEAVCEnumPnp@12@@Z
    long RefreshFilterDataCache(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VariantArrayHelper@DeviceEnumeration@MF@@YAJPEAUtagVARIANT@@PEAEK@Z
    long VariantArrayHelper(tagVARIANT *, unsigned char *, unsigned long);
};
} // namespace MF
