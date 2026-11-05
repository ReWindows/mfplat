#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 19 member(s).
class CMFMetadataProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFMetadataProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFMetadataProxy@@SAJPEAUIMFMetadata@@PEAPEAU2@@Z
    static long CreateInstance(IMFMetadata *, IMFMetadata * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteProperty@CMFMetadataProxy@@UEAAJPEBG@Z
    virtual long DeleteProperty(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllLanguages@CMFMetadataProxy@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetAllLanguages(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllPropertyNames@CMFMetadataProxy@@UEAAJPEAUtagPROPVARIANT@@@Z
    virtual long GetAllPropertyNames(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLanguage@CMFMetadataProxy@@UEAAJPEAPEAG@Z
    virtual long GetLanguage(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CMFMetadataProxy@@UEAAJPEBGPEAUtagPROPVARIANT@@@Z
    virtual long GetProperty(unsigned short const *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFMetadataProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFMetadataProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLanguage@CMFMetadataProxy@@UEAAJPEBG@Z
    virtual long SetLanguage(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CMFMetadataProxy@@UEAAJPEBGPEBUtagPROPVARIANT@@@Z
    virtual long SetProperty(unsigned short const *, tagPROPVARIANT const *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMetadataProxy@@IEAA@XZ
    CMFMetadataProxy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMetadataProxy@@MEAA@XZ
    virtual ~CMFMetadataProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFMetadataProxy@@AEAAJPEAUIMFMetadata@@@Z
    long Initialize(IMFMetadata *);
};
