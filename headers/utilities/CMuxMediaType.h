#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CMuxMediaType {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMuxMediaType@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStreamConfiguration@CMuxMediaType@@UEAAJ_K@Z
    virtual long AddStreamConfiguration(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMuxStreamMediaType@CMuxMediaType@@SAJPEAUIMFCollection@@PEAPEAUIMFMuxStreamMediaTypeManager@@@Z
    static long CreateMuxStreamMediaType(IMFCollection *, IMFMuxStreamMediaTypeManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaType@CMuxMediaType@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetMediaType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamConfiguration@CMuxMediaType@@UEAAJKPEA_K@Z
    virtual long GetStreamConfiguration(unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamConfigurationCount@CMuxMediaType@@UEAAJPEAK@Z
    virtual long GetStreamConfigurationCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamCount@CMuxMediaType@@UEAAJPEAK@Z
    virtual long GetStreamCount(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMuxMediaType@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMuxMediaType@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveStreamConfiguration@CMuxMediaType@@UEAAJ_K@Z
    virtual long RemoveStreamConfiguration(uint64_t);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMuxMediaType@@IEAAJPEAUIMFCollection@@@Z
    long Initialize(IMFCollection *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMuxMediaType@@MEAA@XZ
    virtual ~CMuxMediaType();
};
