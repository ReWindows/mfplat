#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 49 member(s).
class CMFDXGIDeviceManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFDXGIDeviceManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseDeviceHandle@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long CloseDeviceHandle(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFDXGIDeviceManager@@SAJPEAIPEAPEAUIMFDXGIDeviceManager@@@Z
    static long CreateInstance(unsigned int *, IMFDXGIDeviceManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPriority@CMFDXGIDeviceManager@@UEAAJPEAK@Z
    virtual long GetCurrentPriority(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceMode@CMFDXGIDeviceManager@@SAJPEAUIUnknown@@PEAW4MF_DXGI_DEVICE_MANAGER_MODE@@@Z
    static long GetDeviceMode(IUnknown *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeviceMode@CMFDXGIDeviceManager@@UEAAJPEAXPEAW4MF_DXGI_DEVICE_MANAGER_MODE@@@Z
    virtual long GetDeviceMode(void *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCount@CMFDXGIDeviceManager@@UEAAJPEAXPEAK1@Z
    virtual long GetObjectCount(void *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CMFDXGIDeviceManager@@UEAAJPEAXKPEAPEAUIUnknown@@@Z
    virtual long GetObjectW(void *, unsigned long, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVideoService@CMFDXGIDeviceManager@@UEAAJPEAXAEBU_GUID@@PEAPEAX@Z
    virtual long GetVideoService(void *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasDeferredResetConsumer@CMFDXGIDeviceManager@@UEAAJPEAH@Z
    virtual long HasDeferredResetConsumer(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockDevice@CMFDXGIDeviceManager@@UEAAJPEAXAEBU_GUID@@PEAPEAXH@Z
    virtual long LockDevice(void *, _GUID const &, void * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenDeviceHandle@CMFDXGIDeviceManager@@UEAAJPEAPEAX@Z
    virtual long OpenDeviceHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PerformDeferredDeviceReset@CMFDXGIDeviceManager@@UEAAJI@Z
    virtual long PerformDeferredDeviceReset(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopDeferredDeviceReset@CMFDXGIDeviceManager@@UEAAJPEAIPEAPEAUIUnknown@@@Z
    virtual long PopDeferredDeviceReset(unsigned int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushDeferredDeviceReset@CMFDXGIDeviceManager@@UEAAJPEAUIUnknown@@@Z
    virtual long PushDeferredDeviceReset(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFDXGIDeviceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterChangeEvent@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long RegisterChangeEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterDeferredResetConsumer@CMFDXGIDeviceManager@@UEAAJXZ
    virtual long RegisterDeferredResetConsumer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@CMFDXGIDeviceManager@@UEAAJPEAXPEAUIUnknown@@@Z
    virtual long RegisterObject(void *, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFDXGIDeviceManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRequest@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long ReleaseRequest(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPriority@CMFDXGIDeviceManager@@UEAAJHPEAPEAX@Z
    virtual long RequestPriority(int, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@CMFDXGIDeviceManager@@UEAAJPEAUIUnknown@@I@Z
    virtual long ResetDevice(IUnknown *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceLost@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long SetDeviceLost(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestDevice@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long TestDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockDevice@CMFDXGIDeviceManager@@UEAAJPEAXH@Z
    virtual long UnlockDevice(void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterChangeEvent@CMFDXGIDeviceManager@@UEAAJPEAX@Z
    virtual long UnregisterChangeEvent(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterDeferredResetConsumer@CMFDXGIDeviceManager@@UEAAJXZ
    virtual long UnregisterDeferredResetConsumer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterObject@CMFDXGIDeviceManager@@UEAAJPEAXPEAUIUnknown@@@Z
    virtual long UnregisterObject(void *, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDXGIDeviceManager@@UEAA@XZ
    virtual ~CMFDXGIDeviceManager();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFDXGIDeviceManager@@IEAA@PEAIPEAJ@Z
    CMFDXGIDeviceManager(unsigned int *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindHandleFromDevice@CMFDXGIDeviceManager@@IEAAPEAUDXGIHandleEntry@@PEAXPEAPEAX@Z
    DXGIHandleEntry * FindHandleFromDevice(void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateDX11DeviceFromDX12@CMFDXGIDeviceManager@@IEAAJXZ
    long GenerateDX11DeviceFromDX12();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCheckDeviceInitialized@CMFDXGIDeviceManager@@IEAAJXZ
    long InternalCheckDeviceInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCloseDeviceHandle@CMFDXGIDeviceManager@@IEAAXPEAUDXGIHandleEntry@@@Z
    void InternalCloseDeviceHandle(DXGIHandleEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalTestDevice@CMFDXGIDeviceManager@@IEAAJPEAX@Z
    long InternalTestDevice(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyClients@CMFDXGIDeviceManager@@IEAAXXZ
    void NotifyClients();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePriorityRequests@CMFDXGIDeviceManager@@IEAAJXZ
    long UpdatePriorityRequests();
};
