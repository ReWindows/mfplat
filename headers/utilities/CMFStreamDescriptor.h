#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFStreamDescriptor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFStreamDescriptor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFStreamDescriptor@@QEAA@XZ
    CMFStreamDescriptor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaTypeHandler@CMFStreamDescriptor@@UEAAJPEAPEAUIMFMediaTypeHandler@@@Z
    virtual long GetMediaTypeHandler(IMFMediaTypeHandler * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIdentifier@CMFStreamDescriptor@@UEAAJPEAK@Z
    virtual long GetStreamIdentifier(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFStreamDescriptor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFStreamDescriptor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFStreamDescriptor@@UEAA@XZ
    virtual ~CMFStreamDescriptor();
};
