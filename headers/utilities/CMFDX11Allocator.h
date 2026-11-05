#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 38 member(s).
class CMFDX11Allocator {
public:
    class OnInvokeDeleteAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFDX11Allocator@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateSample@CMFDX11Allocator@@UEAAJPEAPEAUIMFSample@@@Z
    virtual long AllocateSample(IMFSample * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFDX11Allocator@@SAJAEBU_GUID@@PEAPEAX@Z
    static long CreateInstance(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatorLimits@CMFDX11Allocator@@UEAAJPEAK00@Z
    virtual long GetAllocatorLimits(unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFreeSampleCount@CMFDX11Allocator@@UEAAJPEAJ@Z
    virtual long GetFreeSampleCount(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSampleAllocator@CMFDX11Allocator@@UEAAJKPEAUIMFMediaType@@@Z
    virtual long InitializeSampleAllocator(unsigned long, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSampleAllocatorEx@CMFDX11Allocator@@UEAAJKKPEAUIMFAttributes@@PEAUIMFMediaType@@@Z
    virtual long InitializeSampleAllocatorEx(unsigned long, unsigned long, IMFAttributes *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSampleAllocatorEx2@CMFDX11Allocator@@UEAAJKKKKPEAUIMFAttributes@@PEAUIMFMediaType@@@Z
    virtual long InitializeSampleAllocatorEx2(unsigned long, unsigned long, unsigned long, unsigned long, IMFAttributes *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeDelete@CMFDX11Allocator@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long OnInvokeDelete(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prune@CMFDX11Allocator@@UEAAJXZ
    virtual long Prune();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFDX11Allocator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFDX11Allocator@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMaxSampleCount@CMFDX11Allocator@@UEAAJKPEAK@Z
    virtual long ResetMaxSampleCount(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAllocatorLimits@CMFDX11Allocator@@UEAAJKK@Z
    virtual long SetAllocatorLimits(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@CMFDX11Allocator@@UEAAJPEAUIMFVideoSampleAllocatorNotify@@@Z
    virtual long SetCallback(IMFVideoSampleAllocatorNotify *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDirectXManager@CMFDX11Allocator@@UEAAJPEAUIUnknown@@@Z
    virtual long SetDirectXManager(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryInitializeSampleAllocatorEx@CMFDX11Allocator@@UEAAJKKKKPEAUIMFAttributes@@PEAUIMFMediaType@@PEAJ@Z
    virtual long TryInitializeSampleAllocatorEx(unsigned long, unsigned long, unsigned long, unsigned long, IMFAttributes *, IMFMediaType *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeSampleAllocator@CMFDX11Allocator@@UEAAJXZ
    virtual long UninitializeSampleAllocator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSample@CMFDX11Allocator@@AEAAJPEAUIMFMediaType@@PEAUIMFAttributes@@@Z
    long AddSample(IMFMediaType *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDX11VideoBuffer@CMFDX11Allocator@@AEAAJPEAUIMFAttributes@@PEAUIMFMediaType@@PEAUID3D11Device@@PEAPEAUIMFMediaBuffer@@@Z
    long AllocateDX11VideoBuffer(IMFAttributes *, IMFMediaType *, ID3D11Device *, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDX12VideoBuffer@CMFDX11Allocator@@AEAAJPEAUIMFAttributes@@PEAUIMFMediaType@@PEAUID3D12Device@@PEAPEAUIMFMediaBuffer@@@Z
    long AllocateDX12VideoBuffer(IMFAttributes *, IMFMediaType *, ID3D12Device *, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateDX9VideoBuffer@CMFDX11Allocator@@AEAAJPEAUIMFAttributes@@PEAUIMFMediaType@@PEAUIDirectXVideoProcessorService@@PEAPEAUIMFMediaBuffer@@@Z
    long AllocateDX9VideoBuffer(IMFAttributes *, IMFMediaType *, IDirectXVideoProcessorService *, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateSecureBuffer@CMFDX11Allocator@@AEAAJPEAUIMFMediaType@@PEAPEAUIMFMediaBuffer@@@Z
    long AllocateSecureBuffer(IMFMediaType *, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreMediaTypesEquivalent@CMFDX11Allocator@@AEAAHPEAUIMFMediaType@@0@Z
    int AreMediaTypesEquivalent(IMFMediaType *, IMFMediaType *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFDX11Allocator@@AEAA@PEAJ@Z
    CMFDX11Allocator(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanAllocateMemoryBuffer@CMFDX11Allocator@@AEAA_NPEAUIMFMediaType@@@Z
    bool CanAllocateMemoryBuffer(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseMediaBuffer@CMFDX11Allocator@@AEBAHPEAUIMFMediaType@@@Z
    int CanUseMediaBuffer(IMFMediaType *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckVideoDevice@CMFDX11Allocator@@AEAAJXZ
    long CheckVideoDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAllocatorInitializationAttributes@CMFDX11Allocator@@AEAAJPEAUIMFAttributes@@PEAH@Z
    long ReadAllocatorInitializationAttributes(IMFAttributes *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAllocator@CMFDX11Allocator@@AEAAJXZ
    long ResetAllocator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeSampleAllocatorInternal@CMFDX11Allocator@@AEAAXXZ
    void UninitializeSampleAllocatorInternal();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDX11Allocator@@AEAA@XZ
    ~CMFDX11Allocator();
};
