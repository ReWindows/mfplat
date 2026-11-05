#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFAppServiceConnectorBase {
class OnConnectionOpenOperationTimedOutAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@QEAA@XZ
    OnConnectionOpenOperationTimedOutAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnConnectionOpenOperationTimedOutAsyncCallback@CMFAppServiceConnectorBase@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFAppServiceConnectorBase
