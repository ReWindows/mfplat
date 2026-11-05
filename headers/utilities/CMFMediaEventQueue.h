#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFMediaEventQueue {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMediaEventQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginGetEvent@CMFMediaEventQueue@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginGetEvent(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndGetEvent@CMFMediaEventQueue@@UEAAJPEAUIMFAsyncResult@@PEAPEAUIMFMediaEvent@@@Z
    virtual long EndGetEvent(IMFAsyncResult *, IMFMediaEvent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CMFMediaEventQueue@@UEAAJKPEAPEAUIMFMediaEvent@@@Z
    virtual long GetEvent(unsigned long, IMFMediaEvent * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMediaEventQueue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CMFMediaEventQueue@@UEAAJPEAUIMFMediaEvent@@@Z
    virtual long QueueEvent(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEventParamUnk@CMFMediaEventQueue@@UEAAJKAEBU_GUID@@JPEAUIUnknown@@@Z
    virtual long QueueEventParamUnk(unsigned long, _GUID const &, long, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEventParamVar@CMFMediaEventQueue@@UEAAJKAEBU_GUID@@JPEBUtagPROPVARIANT@@@Z
    virtual long QueueEventParamVar(unsigned long, _GUID const &, long, tagPROPVARIANT const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMediaEventQueue@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFMediaEventQueue@@UEAAJXZ
    virtual long Shutdown();
};
