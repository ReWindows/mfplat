#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 24 member(s).
class MFD3D12Sync {
public:
    class OnFreeFenceSignaledAsyncCallback;
    class QueuedFreeWait;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentFenceVal@MFD3D12Sync@@UEAA_KXZ
    virtual uint64_t CurrentFenceVal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueResourceReady@MFD3D12Sync@@UEAAJPEAUID3D12CommandQueue@@@Z
    virtual long EnqueueResourceReady(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueResourceReadyWait@MFD3D12Sync@@UEAAJPEAUID3D12CommandQueue@@@Z
    virtual long EnqueueResourceReadyWait(ID3D12CommandQueue *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnqueueResourceRelease@MFD3D12Sync@@UEAAJPEAUID3D12CommandQueue@@@Z
    virtual long EnqueueResourceRelease(ID3D12CommandQueue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReadyFenceValue@MFD3D12Sync@@UEAA_KXZ
    virtual uint64_t GetReadyFenceValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@MFD3D12Sync@@UEAAJW4_MF2DBuffer_LockFlags@@PEAX1@Z
    virtual long InternalLock2D(int, void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@MFD3D12Sync@@UEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MFD3D12Sync@@QEAA@XZ
    MFD3D12Sync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedHandleToFreeFence@MFD3D12Sync@@UEAAJPEAPEAX@Z
    virtual long OpenSharedHandleToFreeFence(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenSharedHandleToReadyFence@MFD3D12Sync@@UEAAJPEAPEAX@Z
    virtual long OpenSharedHandleToReadyFence(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterCallbackOnFinalResourceRelease@MFD3D12Sync@@UEAAJPEAUIMFAsyncCallback@@@Z
    virtual long RegisterCallbackOnFinalResourceRelease(IMFAsyncCallback *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@MFD3D12Sync@@UEAAJXZ
    virtual long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@MFD3D12Sync@@QEAAJPEAUID3D12Device@@_N@Z
    long RuntimeClassInitialize(ID3D12Device *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalEventOnFinalResourceRelease@MFD3D12Sync@@UEAAJPEAX@Z
    virtual long SignalEventOnFinalResourceRelease(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalEventOnResourceReady@MFD3D12Sync@@UEAAJPEAX@Z
    virtual long SignalEventOnResourceReady(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalResourceReady@MFD3D12Sync@@UEAAJPEAUID3D11DeviceContext4@@@Z
    virtual long SignalResourceReady(ID3D11DeviceContext4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalResourceRelease@MFD3D12Sync@@UEAAJPEAUID3D11DeviceContext4@@@Z
    virtual long SignalResourceRelease(ID3D11DeviceContext4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForResourceReady@MFD3D12Sync@@UEAAJPEAUID3D11DeviceContext4@@@Z
    virtual long WaitForResourceReady(ID3D11DeviceContext4*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MFD3D12Sync@@UEAA@XZ
    virtual ~MFD3D12Sync();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateReadyFence11@MFD3D12Sync@@IEAAJPEAUID3D11DeviceContext4@@@Z
    long CreateReadyFence11(ID3D11DeviceContext4*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFreeFenceSignaled@MFD3D12Sync@@IEAAJPEAUIMFAsyncResult@@@Z
    long OnFreeFenceSignaled(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleFreeWait@MFD3D12Sync@@IEAAJAEAPEAXPEAUID3D12Fence@@PEAUID3D11Fence@@@Z
    long ScheduleFreeWait(void * &, ID3D12Fence *, ID3D11Fence *);
};
