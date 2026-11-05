#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CMFDXGIScheduler2 {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPriority@CMFDXGIScheduler2@@UEAAJPEAK@Z
    virtual long GetCurrentPriority(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegisteredD3D11ObjectList@CMFDXGIScheduler2@@UEAAJPEAXW4MF_DXGI_SCHEDULING_PRIORITY@@PEAIPEAPEAPEAUIUnknown@@@Z
    virtual long GetRegisteredD3D11ObjectList(void *, int, unsigned int *, IUnknown * * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterObject@CMFDXGIScheduler2@@UEAAJPEAXPEAUIUnknown@@PEAPEAUIMFDXGISchedulerRegistration@@@Z
    virtual long RegisterObject(void *, IUnknown *, IMFDXGISchedulerRegistration * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRequest@CMFDXGIScheduler2@@UEAAJPEAX@Z
    virtual long ReleaseRequest(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPriority@CMFDXGIScheduler2@@UEAAJHPEAPEAX@Z
    virtual long RequestPriority(int, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGlobalPriorityD3D12@CMFDXGIScheduler2@@UEAAJPEAXW4MF_DXGI_SCHEDULING_PRIORITY@@H@Z
    virtual long SetGlobalPriorityD3D12(void *, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessPriorityD3D12@CMFDXGIScheduler2@@UEAAJPEAXW4MF_DXGI_SCHEDULING_PRIORITY@@H@Z
    virtual long SetProcessPriorityD3D12(void *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDXGIScheduler2@@UEAA@XZ
    virtual ~CMFDXGIScheduler2();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRegisteredObjects@CMFDXGIScheduler2@@IEAAJAEBUDXGIHandleEntry@@@Z
    long InvalidateRegisteredObjects(DXGIHandleEntry const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveRegistration@CMFDXGIScheduler2@@IEAAXPEAVCMFDXGISchedulerRegistration@@@Z
    void RemoveRegistration(CMFDXGISchedulerRegistration *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePriorityRequests@CMFDXGIScheduler2@@IEAAJXZ
    long UpdatePriorityRequests();
};
