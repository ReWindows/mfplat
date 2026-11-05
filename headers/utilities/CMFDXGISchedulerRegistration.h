#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMFDXGISchedulerRegistration {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFDXGISchedulerRegistration@@QEAA@XZ
    CMFDXGISchedulerRegistration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPriority@CMFDXGISchedulerRegistration@@UEAAJPEAW4MF_DXGI_SCHEDULING_PRIORITY@@@Z
    virtual long GetPriority(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFDXGISchedulerRegistration@@QEAAJPEAVCMFDXGIScheduler2@@PEAUIUnknown@@I@Z
    long RuntimeClassInitialize(CMFDXGIScheduler2*, IUnknown *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPriority@CMFDXGISchedulerRegistration@@UEAAJW4MF_DXGI_SCHEDULING_PRIORITY@@@Z
    virtual long SetPriority(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDXGISchedulerRegistration@@UEAA@XZ
    virtual ~CMFDXGISchedulerRegistration();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyGlobalPriorityInternalAgility@CMFDXGISchedulerRegistration@@IEAAJIW4MF_DXGI_SCHEDULING_PRIORITY@@H@Z
    long ApplyGlobalPriorityInternalAgility(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyProcessPriorityInternalAgility@CMFDXGISchedulerRegistration@@IEAAJIW4MF_DXGI_SCHEDULING_PRIORITY@@H@Z
    long ApplyProcessPriorityInternalAgility(unsigned int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateParent@CMFDXGISchedulerRegistration@@IEAAXXZ
    void InvalidateParent();
};
