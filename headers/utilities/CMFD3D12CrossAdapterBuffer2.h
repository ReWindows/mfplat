#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 53 member(s).
class CMFD3D12CrossAdapterBuffer2 {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFD3D12CrossAdapterBuffer2@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFD3D12CrossAdapterBuffer2@@SAJAEBU_GUID@@PEAUIUnknown@@PEAUIMFMediaType@@IPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, IMFMediaType *, unsigned int, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CMFD3D12CrossAdapterBuffer2@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceForDevice@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetResourceForDevice(IUnknown *, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFD3D12CrossAdapterBuffer2@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndex@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAI@Z
    virtual long GetSubresourceIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndexForDevice@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAUIUnknown@@PEAI@Z
    virtual long GetSubresourceIndexForDevice(IUnknown *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFD3D12CrossAdapterBuffer2@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknownForDevice@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z
    virtual long GetUnknownForDevice(IUnknown *, _GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFD3D12CrossAdapterBuffer2@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFD3D12CrossAdapterBuffer2@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffer@CMFD3D12CrossAdapterBuffer2@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferReadOnly@CMFD3D12CrossAdapterBuffer2@@UEAAJH@Z
    virtual long SetBufferReadOnly(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFD3D12CrossAdapterBuffer2@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFD3D12CrossAdapterBuffer2@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknownForDevice@CMFD3D12CrossAdapterBuffer2@@UEAAJPEAUIUnknown@@AEBU_GUID@@0@Z
    virtual long SetUnknownForDevice(IUnknown *, _GUID const &, IUnknown *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFD3D12CrossAdapterBuffer2@@IEAA@PEAUID3D12Device@@IKKKI_KAEBUD3D12_RESOURCE_DESC@@PEAJ@Z
    CMFD3D12CrossAdapterBuffer2(ID3D12Device *, unsigned int, unsigned long, unsigned long, unsigned long, unsigned int, uint64_t, D3D12_RESOURCE_DESC const &, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateD3D12ResourceDescFromMediaType@CMFD3D12CrossAdapterBuffer2@@KAJPEAUIMFMediaType@@AEAUD3D12_RESOURCE_DESC@@@Z
    static long CreateD3D12ResourceDescFromMediaType(IMFMediaType *, D3D12_RESOURCE_DESC &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFD3D12CrossAdapterBuffer2@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFD3D12CrossAdapterBuffer2@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForFree@CMFD3D12CrossAdapterBuffer2@@IEAAJXZ
    long WaitForFree();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFD3D12CrossAdapterBuffer2@@MEAA@XZ
    virtual ~CMFD3D12CrossAdapterBuffer2();
};
