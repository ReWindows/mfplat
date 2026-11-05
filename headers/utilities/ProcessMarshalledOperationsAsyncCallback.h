#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace COpQueue {
class ProcessMarshalledOperationsAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProcessMarshalledOperationsAsyncCallback@COpQueue@@QEAA@XZ
    ProcessMarshalledOperationsAsyncCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ProcessMarshalledOperationsAsyncCallback@COpQueue@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace COpQueue
