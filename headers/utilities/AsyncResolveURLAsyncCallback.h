#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFSourceResolver {
class AsyncResolveURLAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AsyncResolveURLAsyncCallback@CMFSourceResolver@@QEAA@XZ
    AsyncResolveURLAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@AsyncResolveURLAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceResolver
