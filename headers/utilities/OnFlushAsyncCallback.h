#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFByteStreamOnWinRTStream {
class _OnFlushAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_OnFlushAsyncCallback@CMFByteStreamOnWinRTStream@@QEAA@XZ
    _OnFlushAsyncCallback();
};
} // namespace CMFByteStreamOnWinRTStream
