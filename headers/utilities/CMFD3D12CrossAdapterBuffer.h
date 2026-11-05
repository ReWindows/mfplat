#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 52 member(s).
class CMFD3D12CrossAdapterBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFD3D12CrossAdapterBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFD3D12CrossAdapterBuffer@@SAJAEBU_GUID@@PEAUIUnknown@@PEAUIMFMediaType@@IPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, IMFMediaType *, unsigned int, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMFD3D12CrossAdapterBuffer@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFD3D12CrossAdapterBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CMFD3D12CrossAdapterBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceForDevice@CMFD3D12CrossAdapterBuffer@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetResourceForDevice(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFD3D12CrossAdapterBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndex@CMFD3D12CrossAdapterBuffer@@UEAAJPEAI@Z
    virtual long GetSubresourceIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndexForDevice@CMFD3D12CrossAdapterBuffer@@UEAAJPEAUIUnknown@@PEAI@Z
    virtual long GetSubresourceIndexForDevice(IUnknown *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFD3D12CrossAdapterBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknownForDevice@CMFD3D12CrossAdapterBuffer@@UEAAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z
    virtual long GetUnknownForDevice(IUnknown *, _GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFD3D12CrossAdapterBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFD3D12CrossAdapterBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffer@CMFD3D12CrossAdapterBuffer@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferReadOnly@CMFD3D12CrossAdapterBuffer@@UEAAJH@Z
    virtual long SetBufferReadOnly(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFD3D12CrossAdapterBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFD3D12CrossAdapterBuffer@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknownForDevice@CMFD3D12CrossAdapterBuffer@@UEAAJPEAUIUnknown@@AEBU_GUID@@0@Z
    virtual long SetUnknownForDevice(IUnknown *, _GUID const &, IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFD3D12CrossAdapterBuffer@@IEAA@PEAUID3D12Device@@IKKKIUD3D12_RESOURCE_DESC@@PEAJ@Z
    CMFD3D12CrossAdapterBuffer(ID3D12Device *, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, D3D12_RESOURCE_DESC, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFD3D12CrossAdapterBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFD3D12CrossAdapterBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFree@CMFD3D12CrossAdapterBuffer@@IEAAJXZ
    long WaitForFree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFD3D12CrossAdapterBuffer@@MEAA@XZ
    virtual ~CMFD3D12CrossAdapterBuffer();
};
