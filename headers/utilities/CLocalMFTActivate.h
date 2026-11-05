#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CLocalMFTActivate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLocalMFTActivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLocalMFTActivate@@SAJPEAUIClassFactory@@PEAPEAUIMFActivate@@@Z
    static long CreateInstance(IClassFactory *, IMFActivate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CLocalMFTActivate@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLocalMFTActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLocalMFTActivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalMFTActivate@@UEAA@XZ
    virtual ~CLocalMFTActivate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstantiateMediaObject@CLocalMFTActivate@@EEAAJXZ
    virtual long InstantiateMediaObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MergeAttributes@CLocalMFTActivate@@AEAAJPEAUIMFAttributes@@@Z
    long MergeAttributes(IMFAttributes *);
};
