#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFSourceResolver {
class OnSchemeObjectCreationAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@QEAA@XZ
    OnSchemeObjectCreationAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnSchemeObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceResolver
