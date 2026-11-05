#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFDX11Allocator {
class OnInvokeDeleteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@QEAA@XZ
    OnInvokeDeleteAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnInvokeDeleteAsyncCallback@CMFDX11Allocator@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFDX11Allocator
