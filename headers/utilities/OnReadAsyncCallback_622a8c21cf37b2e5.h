#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CInputStreamOverByteStreamOperation {
class OnReadAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@QEAA@XZ
    OnReadAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnReadAsyncCallback@CInputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CInputStreamOverByteStreamOperation
