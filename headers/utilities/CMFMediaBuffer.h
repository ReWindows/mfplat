#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 18 member(s).
class CMFMediaBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMediaBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMFMediaBuffer@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMediaBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMediaBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffer@CMFMediaBuffer@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetIgnoreKeyedMutex@CMFMediaBuffer@@UEAAJH@Z
    virtual long SetIgnoreKeyedMutex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@CMFMediaBuffer@@UEAAJPEAUIMFSample@@@Z
    virtual long SetParent(IMFSample *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CMFMediaBuffer@@UEAAJXZ
    virtual long Unlock();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMediaBuffer@@IEAA@XZ
    CMFMediaBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaBuffer@@MEAA@XZ
    virtual ~CMFMediaBuffer();
};
