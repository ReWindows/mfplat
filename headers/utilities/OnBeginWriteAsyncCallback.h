#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFByteStreamOnWinRTStream {
class _OnBeginWriteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0_OnBeginWriteAsyncCallback@CMFByteStreamOnWinRTStream@@QEAA@XZ
    _OnBeginWriteAsyncCallback();
};
} // namespace CMFByteStreamOnWinRTStream
