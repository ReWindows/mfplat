#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 37 member(s).
class CMFDXGIDeviceManager2 {
public:
    class ActiveDeviceTracker;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFDXGIDeviceManager2@@QEAA@XZ
    CMFDXGIDeviceManager2();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDeviceHandle@CMFDXGIDeviceManager2@@UEAAJPEAX@Z
    virtual long CloseDeviceHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFDXGIDeviceManager2@@SAJPEAIPEAPEAUIMFDXGIDeviceManager@@@Z
    static long CreateInstance(unsigned int *, IMFDXGIDeviceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceMode@CMFDXGIDeviceManager2@@UEAAJPEAXPEAW4MF_DXGI_DEVICE_MANAGER_MODE@@@Z
    virtual long GetDeviceMode(void *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoService@CMFDXGIDeviceManager2@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long GetVideoService(void *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDeferredResetConsumer@CMFDXGIDeviceManager2@@UEAAJPEAH@Z
    virtual long HasDeferredResetConsumer(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockDevice@CMFDXGIDeviceManager2@@UEAAJPEAXAEBU_GUID@@PEAPEAXH@Z
    virtual long LockDevice(void *, _GUID const &, void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDeviceHandle@CMFDXGIDeviceManager2@@UEAAJPEAPEAX@Z
    virtual long OpenDeviceHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDeviceHandle2@CMFDXGIDeviceManager2@@UEAAJAEBU_GUID@@U_LUID@@PEAPEAX@Z
    virtual long OpenDeviceHandle2(_GUID const &, _LUID, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDeferredDeviceReset@CMFDXGIDeviceManager2@@UEAAJI@Z
    virtual long PerformDeferredDeviceReset(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopDeferredDeviceReset@CMFDXGIDeviceManager2@@UEAAJPEAIPEAPEAUIUnknown@@@Z
    virtual long PopDeferredDeviceReset(unsigned int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDeferredDeviceReset@CMFDXGIDeviceManager2@@UEAAJPEAUIUnknown@@@Z
    virtual long PushDeferredDeviceReset(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterChangeEvent@CMFDXGIDeviceManager2@@UEAAJPEAX@Z
    virtual long RegisterChangeEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeferredResetConsumer@CMFDXGIDeviceManager2@@UEAAJXZ
    virtual long RegisterDeferredResetConsumer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@CMFDXGIDeviceManager2@@UEAAJPEAUIUnknown@@I@Z
    virtual long ResetDevice(IUnknown *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice2@CMFDXGIDeviceManager2@@UEAAJAEBU_GUID@@U_LUID@@PEAUIUnknown@@I@Z
    virtual long ResetDevice2(_GUID const &, _LUID, IUnknown *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFDXGIDeviceManager2@@UEAAJPEAI@Z
    virtual long RuntimeClassInitialize(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultDeviceAndAdapter@CMFDXGIDeviceManager2@@UEAAJAEBU_GUID@@U_LUID@@I@Z
    virtual long SetDefaultDeviceAndAdapter(_GUID const &, _LUID, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceLost@CMFDXGIDeviceManager2@@UEAAJPEAX@Z
    virtual long SetDeviceLost(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestDevice@CMFDXGIDeviceManager2@@UEAAJPEAX@Z
    virtual long TestDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockDevice@CMFDXGIDeviceManager2@@UEAAJPEAXH@Z
    virtual long UnlockDevice(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterChangeEvent@CMFDXGIDeviceManager2@@UEAAJPEAX@Z
    virtual long UnregisterChangeEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeferredResetConsumer@CMFDXGIDeviceManager2@@UEAAJXZ
    virtual long UnregisterDeferredResetConsumer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDXGIDeviceManager2@@UEAA@XZ
    virtual ~CMFDXGIDeviceManager2();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindHandleFromDevice@CMFDXGIDeviceManager2@@MEAA_NQEAXAEAUDXGIHandleEntry@@@Z
    virtual bool FindHandleFromDevice(void * const, DXGIHandleEntry &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDX11DeviceFromDX12@CMFDXGIDeviceManager2@@IEAAJI@Z
    long GenerateDX11DeviceFromDX12(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultD3D11Device@CMFDXGIDeviceManager2@@MEAAPEAUID3D11Device@@XZ
    virtual ID3D11Device * GetDefaultD3D11Device();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMapIndexForInterfaceAndLUID@CMFDXGIDeviceManager2@@IEAAIAEBU_GUID@@U_LUID@@@Z
    unsigned int GetMapIndexForInterfaceAndLUID(_GUID const &, _LUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCheckDeviceInitialized@CMFDXGIDeviceManager2@@IEAAJI@Z
    long InternalCheckDeviceInitialized(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCloseDeviceHandle@CMFDXGIDeviceManager2@@IEAAXAEAUDXGIHandleEntry@@@Z
    void InternalCloseDeviceHandle(DXGIHandleEntry &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetVideoService@CMFDXGIDeviceManager2@@IEAAJAEBUDXGIHandleEntry@@AEBU_GUID@@PEAPEAX@Z
    long InternalGetVideoService(DXGIHandleEntry const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalTestDevice@CMFDXGIDeviceManager2@@IEAAJAEBUDXGIHandleEntry@@@Z
    long InternalTestDevice(DXGIHandleEntry const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateAllHandles@CMFDXGIDeviceManager2@@IEAAXI@Z
    void InvalidateAllHandles(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyClients@CMFDXGIDeviceManager2@@IEAAXXZ
    void NotifyClients();
};
