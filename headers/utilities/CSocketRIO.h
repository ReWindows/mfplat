#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 20 member(s).
class CSocketRIO {
public:
    class CRIOSendResult;
    class OnRIOCompleteAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSocketRIO@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginReceiveBuffer@CSocketRIO@@QEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long BeginReceiveBuffer(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSendBuffers@CSocketRIO@@QEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long BeginSendBuffers(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSendUSOBuffer@CSocketRIO@@QEAAJKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long BeginSendUSOBuffer(unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSocketRIO@@QEAA@XZ
    CSocketRIO();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSocketRIO@@QEAAXXZ
    void Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndReceiveBuffer@CSocketRIO@@QEAAJPEAUIMFAsyncResult@@PEAPEAEPEAK2@Z
    long EndReceiveBuffer(IMFAsyncResult *, unsigned char * *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSendBuffers@CSocketRIO@@QEAAJPEAUIMFAsyncResult@@PEAK1@Z
    long EndSendBuffers(IMFAsyncResult *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSendUSOBuffer@CSocketRIO@@QEAAJPEAUIMFAsyncResult@@PEAK@Z
    long EndSendUSOBuffer(IMFAsyncResult *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CSocketRIO@@QEAAPEAEK@Z
    unsigned char * GetBuffer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUSOBuffer@CSocketRIO@@QEAAPEAEXZ
    unsigned char * GetUSOBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRIO@CSocketRIO@@QEAAJ_KKK@Z
    long InitializeRIO(uint64_t, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUSO@CSocketRIO@@QEAAJ_KKK@Z
    long InitializeUSO(uint64_t, unsigned long, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSocketRIO@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CSocketRIO@@QEAAXKK@Z
    void ReleaseBuffer(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReceiveBuffer@CSocketRIO@@QEAAJK@Z
    long ReleaseReceiveBuffer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartReceiveBuffers@CSocketRIO@@QEAAJXZ
    long StartReceiveBuffers();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSocketRIO@@QEAA@XZ
    ~CSocketRIO();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_DrainCompletionQueue@CSocketRIO@@IEAAXXZ
    void _DrainCompletionQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReceiveNewBuffers@CSocketRIO@@IEAAJXZ
    long _ReceiveNewBuffers();
};
