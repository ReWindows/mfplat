#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace COOPMFTProxy {
class OutputSampleOnInvokeDeleteAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@QEAA@XZ
    OutputSampleOnInvokeDeleteAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@OutputSampleOnInvokeDeleteAsyncCallback@COOPMFTProxy@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace COOPMFTProxy
