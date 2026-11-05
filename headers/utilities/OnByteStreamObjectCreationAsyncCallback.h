#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFSourceResolver {
class OnByteStreamObjectCreationAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@QEAA@XZ
    OnByteStreamObjectCreationAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnByteStreamObjectCreationAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceResolver
