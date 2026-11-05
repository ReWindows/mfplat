#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CMFPresentationDescriptor {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFPresentationDescriptor@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFPresentationDescriptor@@QEAA@XZ
    CMFPresentationDescriptor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CMFPresentationDescriptor@@UEAAJPEAPEAUIMFPresentationDescriptor@@@Z
    virtual long Clone(IMFPresentationDescriptor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFPresentationDescriptor@@SAJKPEAPEAUIMFStreamDescriptor@@PEAPEAUIMFPresentationDescriptor@@@Z
    static long CreateInstance(unsigned long, IMFStreamDescriptor * *, IMFPresentationDescriptor * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeselectStream@CMFPresentationDescriptor@@UEAAJK@Z
    virtual long DeselectStream(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamDescriptorByIndex@CMFPresentationDescriptor@@UEAAJKPEAHPEAPEAUIMFStreamDescriptor@@@Z
    virtual long GetStreamDescriptorByIndex(unsigned long, int *, IMFStreamDescriptor * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamDescriptorCount@CMFPresentationDescriptor@@UEAAJPEAK@Z
    virtual long GetStreamDescriptorCount(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFPresentationDescriptor@@QEAAJKPEAPEAUIMFStreamDescriptor@@@Z
    long Initialize(unsigned long, IMFStreamDescriptor * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFPresentationDescriptor@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFPresentationDescriptor@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectStream@CMFPresentationDescriptor@@UEAAJK@Z
    virtual long SelectStream(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFPresentationDescriptor@@UEAA@XZ
    virtual ~CMFPresentationDescriptor();
};
