#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CMFCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddElement@CMFCollection@@UEAAJPEAUIUnknown@@@Z
    virtual long AddElement(IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFCollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendCollection@CMFCollection@@SAJPEAUIMFCollection@@0@Z
    static long AppendCollection(IMFCollection *, IMFCollection *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@CMFCollection@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long GetElement(unsigned long, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCount@CMFCollection@@UEAAJPEAK@Z
    virtual long GetElementCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertElementAt@CMFCollection@@UEAAJKPEAUIUnknown@@@Z
    virtual long InsertElementAt(unsigned long, IUnknown *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFCollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllElements@CMFCollection@@UEAAJXZ
    virtual long RemoveAllElements();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveElement@CMFCollection@@UEAAJKPEAPEAUIUnknown@@@Z
    virtual long RemoveElement(unsigned long, IUnknown * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFCollection@@UEAA@XZ
    virtual ~CMFCollection();
};
