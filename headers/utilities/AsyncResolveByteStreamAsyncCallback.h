#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFSourceResolver {
class AsyncResolveByteStreamAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@QEAA@XZ
    AsyncResolveByteStreamAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncResolveByteStreamAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceResolver
