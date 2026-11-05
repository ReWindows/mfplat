#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CSocketRIO {
class OnRIOCompleteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnRIOCompleteAsyncCallback@CSocketRIO@@QEAA@XZ
    OnRIOCompleteAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnRIOCompleteAsyncCallback@CSocketRIO@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CSocketRIO
