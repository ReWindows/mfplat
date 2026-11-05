#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace COutputStreamOverByteStreamOperation {
class OnWriteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@QEAA@XZ
    OnWriteAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OnWriteAsyncCallback@COutputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace COutputStreamOverByteStreamOperation
