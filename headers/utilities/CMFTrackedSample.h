#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 19 member(s).
class CMFTrackedSample {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBuffer@CMFTrackedSample@@UEAAJPEAUIMFMediaBuffer@@@Z
    virtual long AddBuffer(IMFMediaBuffer *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFTrackedSample@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSample@CMFTrackedSample@@UEAAJXZ
    virtual long ClearSample();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFTrackedSample@@SAJPEAPEAUIMFSample@@@Z
    static long CreateInstance(IMFSample * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFTrackedSample@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFTrackedSample@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllBuffers@CMFTrackedSample@@UEAAJXZ
    virtual long RemoveAllBuffers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllocator@CMFTrackedSample@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long SetAllocator(IMFAsyncCallback *, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFTrackedSample@@UEAA@XZ
    virtual ~CMFTrackedSample();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentOnBuffers@CMFTrackedSample@@AEAAXPEAUIMFSample@@@Z
    void SetParentOnBuffers(IMFSample *);
};
