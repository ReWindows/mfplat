#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMuxStreamAttributes {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMuxStreamAttributes@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMuxStreamAttributes@CMuxStreamAttributes@@SAJPEAUIMFCollection@@PEAPEAUIMFMuxStreamAttributesManager@@@Z
    static long CreateMuxStreamAttributes(IMFCollection *, IMFMuxStreamAttributesManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@CMuxStreamAttributes@@UEAAJKPEAPEAUIMFAttributes@@@Z
    virtual long GetAttributes(unsigned long, IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamCount@CMuxStreamAttributes@@UEAAJPEAK@Z
    virtual long GetStreamCount(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMuxStreamAttributes@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMuxStreamAttributes@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMuxStreamAttributes@@IEAA@XZ
    CMuxStreamAttributes();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMuxStreamAttributes@@IEAAJPEAUIMFCollection@@@Z
    long Initialize(IMFCollection *);
};
