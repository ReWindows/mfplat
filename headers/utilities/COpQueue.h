#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class COpQueue {
public:
    class ProcessMarshalledOperationsAsyncCallback;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COpQueue@@QEAA@PEAVCMFCSLock@@PEAJKK@Z
    COpQueue(CMFCSLock *, long *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessQueue@COpQueue@@UEAAJXZ
    virtual long ProcessQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueOperation@COpQueue@@QEAAJPEAVCBaseOperation@@H@Z
    long QueueOperation(CBaseOperation *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COpQueue@@UEAA@XZ
    virtual ~COpQueue();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshallProcessQueue@COpQueue@@IEAAJXZ
    long MarshallProcessQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMarshalledOperations@COpQueue@@IEAAXPEAUIMFAsyncResult@@@Z
    void ProcessMarshalledOperations(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@COpQueue@@IEAAXXZ
    void Unlock();
};
