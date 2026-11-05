#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 19 member(s).
class CMFCryptoSessionExtended {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFCryptoSessionExtended@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFCryptoSessionExtended@@QEAA@XZ
    CMFCryptoSessionExtended();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCPDUsable@CMFCryptoSessionExtended@@UEAAJPEAH@Z
    virtual long IsCPDUsable(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFCryptoSessionExtended@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFCryptoSessionExtended@@UEAAKXZ
    virtual unsigned long Release();
};
