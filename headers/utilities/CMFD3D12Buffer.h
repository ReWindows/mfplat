#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 45 member(s).
class CMFD3D12Buffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFD3D12Buffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFD3D12Buffer@@SAJAEBU_GUID@@PEAUIUnknown@@IPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, unsigned int, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetD3D12ResourceParams@CMFD3D12Buffer@@SAJPEAUID3D12Resource@@IPEAK11PEAIPEA_K@Z
    static long GetD3D12ResourceParams(ID3D12Resource *, unsigned int, unsigned long *, unsigned long *, unsigned long *, unsigned int *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFD3D12Buffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CMFD3D12Buffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFD3D12Buffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndex@CMFD3D12Buffer@@UEAAJPEAI@Z
    virtual long GetSubresourceIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFD3D12Buffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFD3D12Buffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFD3D12Buffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffer@CMFD3D12Buffer@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferReadOnly@CMFD3D12Buffer@@UEAAJH@Z
    virtual long SetBufferReadOnly(int);
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetCurrentLength@CMFD3D12Buffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFD3D12Buffer@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFD3D12Buffer@@IEAA@PEAUID3D12Resource@@IKKKI_KPEAJ@Z
    CMFD3D12Buffer(ID3D12Resource *, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, uint64_t, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFD3D12Buffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFD3D12Buffer@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFree@CMFD3D12Buffer@@IEAAJXZ
    long WaitForFree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFD3D12Buffer@@MEAA@XZ
    virtual ~CMFD3D12Buffer();
};
