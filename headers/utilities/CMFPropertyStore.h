#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 24 member(s).
class CMFPropertyStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFPropertyStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CMFPropertyStore@@QEAAXXZ
    void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CMFPropertyStore@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyStore@CMFPropertyStore@@SAJPEAPEAUIPropertyStore@@@Z
    static long CreatePropertyStore(IPropertyStore * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePropertyStore@CMFPropertyStore@@SAJPEAPEAV1@@Z
    static long CreatePropertyStore(CMFPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CMFPropertyStore@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CMFPropertyStore@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMFPropertyStore@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CMFPropertyStore@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CMFPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CMFPropertyStore@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMFPropertyStore@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFPropertyStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFPropertyStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CMFPropertyStore@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAlternate@CMFPropertyStore@@UEAAJPEAUIPropertyStore@@@Z
    virtual long SetAlternate(IPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CMFPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFPropertyStore@@IEAA@XZ
    CMFPropertyStore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFPropertyStore@@MEAA@XZ
    virtual ~CMFPropertyStore();
};
