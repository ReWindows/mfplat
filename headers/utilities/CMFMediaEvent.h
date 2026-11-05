#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CMFMediaEvent {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMediaEvent@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMediaEvent@@QEAA@XZ
    CMFMediaEvent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtendedType@CMFMediaEvent@@UEAAJPEAU_GUID@@@Z
    virtual long GetExtendedType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStatus@CMFMediaEvent@@UEAAJPEAJ@Z
    virtual long GetStatus(long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@CMFMediaEvent@@UEAAJPEAK@Z
    virtual long GetType(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CMFMediaEvent@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetValue(tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMediaEvent@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMediaEvent@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@CMFMediaEvent@@QEAAXJ@Z
    void SetStatus(long);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaEvent@@MEAA@XZ
    virtual ~CMFMediaEvent();
};
