#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMuxSample {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMuxSample@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMuxStreamSample@CMuxSample@@SAJPEAUIMFCollection@@PEA_J1PEAPEAUIMFMuxStreamSampleManager@@@Z
    static long CreateMuxStreamSample(IMFCollection *, int64_t *, int64_t *, IMFMuxStreamSampleManager * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSample@CMuxSample@@UEAAJKPEAPEAUIMFSample@@@Z
    virtual long GetSample(unsigned long, IMFSample * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamConfiguration@CMuxSample@@UEAA_KXZ
    virtual uint64_t GetStreamConfiguration();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamCount@CMuxSample@@UEAAJPEAK@Z
    virtual long GetStreamCount(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMuxSample@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMuxSample@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMuxSample@@IEAAJPEAUIMFCollection@@@Z
    long Initialize(IMFCollection *);
};
