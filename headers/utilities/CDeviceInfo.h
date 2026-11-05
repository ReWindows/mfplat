#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
namespace MF::DeviceEnumeration {
class CDeviceInfo {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDeviceInfo@DeviceEnumeration@MF@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilitiesKey@CDeviceInfo@DeviceEnumeration@MF@@UEAAJPEAVCEnumPnp@23@PEAPEAUHKEY__@@@Z
    virtual long GetCapabilitiesKey(WindissectOpaque *, HKEY__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CDeviceInfo@DeviceEnumeration@MF@@QEAAJPEBG@Z
    long Init(unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDeviceInfo@DeviceEnumeration@MF@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CDeviceInfo@DeviceEnumeration@MF@@UEAAJPEAVCEnumPnp@23@PEBGPEAUtagVARIANT@@@Z
    virtual long Read(WindissectOpaque *, unsigned short const *, tagVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDeviceInfo@DeviceEnumeration@MF@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegConvertToVariant@CDeviceInfo@DeviceEnumeration@MF@@AEAAJPEAUtagVARIANT@@PEAUHKEY__@@PEBG@Z
    long RegConvertToVariant(tagVARIANT *, HKEY__*, unsigned short const *);
};
} // namespace MF::DeviceEnumeration
