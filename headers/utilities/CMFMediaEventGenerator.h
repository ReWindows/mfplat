#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMFMediaEventGenerator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CMFMediaEventGenerator@@QEAAJKPEAPEAUIMFMediaEvent@@@Z
    long GetEvent(unsigned long, IMFMediaEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CMFMediaEventGenerator@@QEAAJKAEBU_GUID@@JPEBUtagPROPVARIANT@@@Z
    long QueueEvent(unsigned long, _GUID const &, long, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFMediaEventGenerator@@QEAAXXZ
    void Shutdown();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaEventGenerator@@UEAA@XZ
    virtual ~CMFMediaEventGenerator();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDispatchEvent@CMFMediaEventGenerator@@IEAAJXZ
    long CheckDispatchEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FlushEvents@CMFMediaEventGenerator@@IEAAJXZ
    long _FlushEvents();
};
