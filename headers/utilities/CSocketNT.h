#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 15 member(s).
class CSocketNT {
public:
    class OnFDConnectAsyncCallback;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginConnect@CSocketNT@@UEAAJPEBUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginConnect(sockaddr_storage const *, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSocketNT@@QEAA@XZ
    CSocketNT();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSocketNT@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSocketNT@@SAJHPEBUsockaddr_storage@@KPEAPEAUISocket@@@Z
    static long CreateInstance(int, sockaddr_storage const *, unsigned long, ISocket * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSocketNT@@SAJ_KHPEAUsockaddr@@H1HPEAPEAUISocket@@@Z
    static long CreateInstance(uint64_t, int, sockaddr *, int, sockaddr *, int, ISocket * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConnect@CSocketNT@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndConnect(IMFAsyncResult *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFDConnect@CSocketNT@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnFDConnect(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Connect@CSocketNT@@IEAAJPEAVCSocketResult@@PEAUsockaddr@@K@Z
    long _Connect(CSocketResult *, sockaddr *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ConnectMulticast@CSocketNT@@IEAAJPEAVCSocketResult@@PEAUsockaddr@@K@Z
    long _ConnectMulticast(CSocketResult *, sockaddr *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWSAReturnValue@CSocketNT@@IEAAJW4IoType@CSocketResult@@H@Z
    long _HandleWSAReturnValue(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginReceive@CSocketNT@@MEAAJPEAEKPEAVCSocketReceiveResult@@@Z
    virtual long _InternalBeginReceive(unsigned char *, unsigned long, CSocketReceiveResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginSend@CSocketNT@@MEAAJPEAU_MFNETIOBUFFER@@KPEBUsockaddr_storage@@PEAVCSocketSendResult@@@Z
    virtual long _InternalBeginSend(_MFNETIOBUFFER *, unsigned long, sockaddr_storage const *, CSocketSendResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalFinishInit@CSocketNT@@MEAAJXZ
    virtual long _InternalFinishInit();
};
