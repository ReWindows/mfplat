#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CSocketSvc {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginConnect@CSocketSvc@@UEAAJPEBUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginConnect(sockaddr_storage const *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSocketSvc@@SAJ_KHPEAUsockaddr@@H1HPEAPEAUISocket@@@Z
    static long CreateInstance(uint64_t, int, sockaddr *, int, sockaddr *, int, ISocket * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConnect@CSocketSvc@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndConnect(IMFAsyncResult *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSocketSvc@@UEAA@XZ
    virtual ~CSocketSvc();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_HandleWSAReturnValue@CSocketSvc@@IEAAJW4IoType@CSocketResult@@H@Z
    long _HandleWSAReturnValue(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginReceive@CSocketSvc@@MEAAJPEAEKPEAVCSocketReceiveResult@@@Z
    virtual long _InternalBeginReceive(unsigned char *, unsigned long, CSocketReceiveResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginSend@CSocketSvc@@MEAAJPEAU_MFNETIOBUFFER@@KPEBUsockaddr_storage@@PEAVCSocketSendResult@@@Z
    virtual long _InternalBeginSend(_MFNETIOBUFFER *, unsigned long, sockaddr_storage const *, CSocketSendResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalFinishInit@CSocketSvc@@MEAAJXZ
    virtual long _InternalFinishInit();
};
