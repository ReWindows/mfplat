#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 26 member(s).
class CMFMediaBufferWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMediaBufferWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CMFMediaBufferWrapper@@UEAAJPEAPEAUIMFMediaBuffer@@@Z
    virtual long GetBuffer(IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMFMediaBufferWrapper@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFMediaBufferWrapper@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffset@CMFMediaBufferWrapper@@UEAAJPEAK@Z
    virtual long GetOffset(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMFMediaBufferWrapper@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMediaBufferWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMediaBufferWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PE Export
    // Symbol: ?ResetBuffer@CMFMediaBufferWrapper@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFMediaBufferWrapper@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIgnoreKeyedMutex@CMFMediaBufferWrapper@@UEAAJH@Z
    virtual long SetIgnoreKeyedMutex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMFMediaBufferWrapper@@UEAAJPEAUIMFSample@@@Z
    virtual long SetParent(IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CMFMediaBufferWrapper@@UEAAJXZ
    virtual long Unlock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMFMediaBufferWrapper@@MEAAXXZ
    virtual void Reset();
};
