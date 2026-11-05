#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 22 member(s).
class CAsyncResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAsyncResult@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAsyncResult@@QEAA@PEAUIUnknown@@PEAUIMFAsyncCallback@@0@Z
    CAsyncResult(IUnknown *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CAsyncResult@@SAJPEAUIUnknown@@PEAUIMFAsyncCallback@@0PEAPEAV1@@Z
    static long CreateInstance(IUnknown *, IMFAsyncCallback *, IUnknown *, CAsyncResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureEvent@CAsyncResult@@SAJPEAUtagMFASYNCRESULT@@@Z
    static long EnsureEvent(tagMFASYNCRESULT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectW@CAsyncResult@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetObjectW(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CAsyncResult@@UEAAJPEAPEAUIUnknown@@@Z
    virtual long GetState(IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStateNoAddRef@CAsyncResult@@UEAAPEAUIUnknown@@XZ
    virtual IUnknown * GetStateNoAddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CAsyncResult@@UEAAJXZ
    virtual long GetStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeCallback@CAsyncResult@@SAXPEAUtagMFASYNCRESULT@@J@Z
    static void InvokeCallback(tagMFASYNCRESULT *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAsyncResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAsyncResult@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CAsyncResult@@QEAAXPEAUIMFAsyncCallback@@@Z
    void SetCallback(IMFAsyncCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetObject@CAsyncResult@@QEAAXPEAUIUnknown@@@Z
    void SetObject(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetState@CAsyncResult@@QEAAXPEAUIUnknown@@@Z
    void SetState(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@CAsyncResult@@UEAAJJ@Z
    virtual long SetStatus(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalEvent@CAsyncResult@@SAXPEAUtagMFASYNCRESULT@@@Z
    static void SignalEvent(tagMFASYNCRESULT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Wait@CAsyncResult@@QEAAKK@Z
    unsigned long Wait(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAsyncResult@@UEAA@XZ
    virtual ~CAsyncResult();
};
