#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CDeviceManagerAdaptor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDeviceHandle@CDeviceManagerAdaptor@@UEAAJPEAX@Z
    virtual long CloseDeviceHandle(void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoService@CDeviceManagerAdaptor@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long GetVideoService(void *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDeviceManagerAdaptor@@QEAAJPEAUIUnknown@@@Z
    long Initialize(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockDevice@CDeviceManagerAdaptor@@UEAAJPEAXAEBU_GUID@@PEAPEAXH@Z
    virtual long LockDevice(void *, _GUID const &, void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDeviceHandle@CDeviceManagerAdaptor@@UEAAJPEAPEAX@Z
    virtual long OpenDeviceHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@CDeviceManagerAdaptor@@UEAAJPEAUIUnknown@@I@Z
    virtual long ResetDevice(IUnknown *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestDevice@CDeviceManagerAdaptor@@UEAAJPEAX@Z
    virtual long TestDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockDevice@CDeviceManagerAdaptor@@UEAAJPEAXH@Z
    virtual long UnlockDevice(void *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDeviceManagerAdaptor@@QEAA@XZ
    ~CDeviceManagerAdaptor();
};
