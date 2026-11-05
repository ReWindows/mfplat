#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class CMFAttributes {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFAttributes@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFAttributes@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFAttributes@@UEAAKXZ
    virtual unsigned long Release();
};
