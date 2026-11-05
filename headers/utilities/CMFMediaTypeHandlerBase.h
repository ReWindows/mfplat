#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class CMFMediaTypeHandlerBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CMFMediaTypeHandlerBase@@QEAAJXZ
    long Cleanup();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentMediaType@CMFMediaTypeHandlerBase@@UEAAJPEAPEAUIMFMediaType@@@Z
    virtual long GetCurrentMediaType(IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMajorType@CMFMediaTypeHandlerBase@@UEAAJPEAU_GUID@@@Z
    virtual long GetMajorType(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaTypeByIndex@CMFMediaTypeHandlerBase@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetMediaTypeByIndex(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaTypeCount@CMFMediaTypeHandlerBase@@UEAAJPEAK@Z
    virtual long GetMediaTypeCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFMediaTypeHandlerBase@@QEAAJKPEAPEAUIMFMediaType@@@Z
    long Initialize(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMediaTypeSupported@CMFMediaTypeHandlerBase@@UEAAJPEAUIMFMediaType@@PEAPEAU2@@Z
    virtual long IsMediaTypeSupported(IMFMediaType *, IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProtectMediaType@CMFMediaTypeHandlerBase@@QEAAJPEBU_GUID@@@Z
    long ProtectMediaType(_GUID const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentMediaType@CMFMediaTypeHandlerBase@@UEAAJPEAUIMFMediaType@@@Z
    virtual long SetCurrentMediaType(IMFMediaType *);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetMediaType@CMFMediaTypeHandlerBase@@UEAAJPEAUIMFMediaType@@@Z
    virtual long SetMediaType(IMFMediaType *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaTypeHandlerBase@@QEAA@XZ
    ~CMFMediaTypeHandlerBase();
};
