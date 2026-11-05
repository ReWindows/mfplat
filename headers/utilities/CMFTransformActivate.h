#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 22 member(s).
class CMFTransformActivate {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFTransformActivate@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFTransformActivate@@SAJPEAPEAUIMFActivate@@@Z
    static long CreateInstance(IMFActivate * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClassID@CMFTransformActivate@@UEAAJPEAU_GUID@@@Z
    virtual long GetClassID(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeMax@CMFTransformActivate@@UEAAJPEAT_ULARGE_INTEGER@@@Z
    virtual long GetSizeMax(_ULARGE_INTEGER *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsDirty@CMFTransformActivate@@UEAAJXZ
    virtual long IsDirty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMFTransformActivate@@UEAAJPEAUIStream@@@Z
    virtual long Load(IStream *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFTransformActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFTransformActivate@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@CMFTransformActivate@@UEAAJPEAUIStream@@H@Z
    virtual long Save(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownObject@CMFTransformActivate@@UEAAJXZ
    virtual long ShutdownObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigFieldOfUse@CMFTransformActivate@@MEAAJXZ
    virtual long ConfigFieldOfUse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigTransform@CMFTransformActivate@@MEAAJXZ
    virtual long ConfigTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstantiateMediaObject@CMFTransformActivate@@MEAAJXZ
    virtual long InstantiateMediaObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstantiateTransform@CMFTransformActivate@@MEAAJXZ
    virtual long InstantiateTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDevProxyHwTransform@CMFTransformActivate@@IEAAJXZ
    long IsDevProxyHwTransform();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeFieldOfUseAttribute@CMFTransformActivate@@AEAAJPEAUIStream@@@Z
    long DeserializeFieldOfUseAttribute(IStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeFieldOfUseAttribute@CMFTransformActivate@@AEAAJPEAUIStream@@@Z
    long SerializeFieldOfUseAttribute(IStream *);
};
