#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMFMediaBufferAllocator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMediaBufferAllocator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateBuffer@CMFMediaBufferAllocator@@QEAAJKKPEAPEAUIMFMediaBuffer@@@Z
    long AllocateBuffer(unsigned long, unsigned long, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFMediaBufferAllocator@@SAJ_NPEBGPEAPEAV1@@Z
    static long CreateInstance(bool, unsigned short const *, CMFMediaBufferAllocator * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMediaBufferAllocator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMediaBufferAllocator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CMFMediaBufferAllocator@@QEAAXPEAVCPooledBufferBase@@@Z
    void ReleaseBuffer(CPooledBufferBase *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMediaBufferAllocator@@AEAA@_N@Z
    CMFMediaBufferAllocator(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaBufferAllocator@@AEAA@XZ
    ~CMFMediaBufferAllocator();
};
