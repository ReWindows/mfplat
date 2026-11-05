#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFByteStreamOnInputStream {
class _OnReadCompleteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_OnReadCompleteAsyncCallback@CMFByteStreamOnInputStream@@QEAA@XZ
    _OnReadCompleteAsyncCallback();
};
} // namespace CMFByteStreamOnInputStream
