#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
namespace MFD3D12Sync {
class OnFreeFenceSignaledAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnFreeFenceSignaledAsyncCallback@MFD3D12Sync@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace MFD3D12Sync
