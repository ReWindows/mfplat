#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CDxDeviceContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CDxDeviceContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCDxDeviceContext@CDxDeviceContext@@SAJPEAXPEAUID3D12Device@@UD3D12_RESOURCE_DESC@@PEAPEAUIMFDXGIBuffer@@@Z
    static long CreateCDxDeviceContext(void *, ID3D12Device *, D3D12_RESOURCE_DESC, IMFDXGIBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CDxDeviceContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndex@CDxDeviceContext@@UEAAJPEAI@Z
    virtual long GetSubresourceIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CDxDeviceContext@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CDxDeviceContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CDxDeviceContext@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CDxDeviceContext@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDxDeviceContext@@IEAAJPEAXPEAUID3D12Device@@UD3D12_RESOURCE_DESC@@@Z
    long Initialize(void *, ID3D12Device *, D3D12_RESOURCE_DESC);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDxDeviceContext@@MEAA@XZ
    virtual ~CDxDeviceContext();
};
