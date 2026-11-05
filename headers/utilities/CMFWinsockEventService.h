#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMFWinsockEventService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFWinsockEventService@@QEAAJPEAUISocket@@@Z
    long Initialize(ISocket *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterEvent@CMFWinsockEventService@@QEAAJJPEAVCAsyncResult@@@Z
    long RegisterEvent(long, CAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFWinsockEventService@@QEAAKXZ
    unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFWinsockEventService@@QEAAJXZ
    long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAllEvents@CMFWinsockEventService@@QEAAJXZ
    long UnregisterAllEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterEvent@CMFWinsockEventService@@QEAAJJ@Z
    long UnregisterEvent(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitOrTimerCallback@CMFWinsockEventService@@SAXPEAXE@Z
    static void WaitOrTimerCallback(void *, unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWinsockEventService@@QEAA@XZ
    ~CMFWinsockEventService();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitOnce@CMFWinsockEventService@@IEAAJXZ
    long InitOnce();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@CMFWinsockEventService@@IEAAXXZ
    void ProcessEvent();
};
