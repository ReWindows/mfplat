#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 53 member(s).
class CSocket {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSocket@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginMultipleSend@CSocket@@UEAAJPEAU_MFNETIOBUFFER@@KPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginMultipleSend(_MFNETIOBUFFER *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginMultipleSendTo@CSocket@@UEAAJPEAU_MFNETIOBUFFER@@KPEBUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginMultipleSendTo(_MFNETIOBUFFER *, unsigned long, sockaddr_storage const *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginReceive@CSocket@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginReceive(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginReceiveBuffer@CSocket@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginReceiveBuffer(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginReceiveFrom@CSocket@@UEAAJPEAEKPEAUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginReceiveFrom(unsigned char *, unsigned long, sockaddr_storage *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSend@CSocket@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginSend(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSendBuffers@CSocket@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginSendBuffers(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSendUSOBuffer@CSocket@@UEAAJKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginSendUSOBuffer(unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSocket@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndConnect@CSocket@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndConnect(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMultipleSend@CSocket@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndMultipleSend(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndMultipleSendTo@CSocket@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndMultipleSendTo(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndReceive@CSocket@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndReceive(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndReceiveBuffer@CSocket@@UEAAJPEAUIMFAsyncResult@@PEAPEAEPEAK2@Z
    virtual long EndReceiveBuffer(IMFAsyncResult *, unsigned char * *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndReceiveFrom@CSocket@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndReceiveFrom(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSend@CSocket@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long EndSend(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSendBuffers@CSocket@@UEAAJPEAUIMFAsyncResult@@PEAK1@Z
    virtual long EndSendBuffers(IMFAsyncResult *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSendUSOBuffer@CSocket@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndSendUSOBuffer(IMFAsyncResult *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBuffer@CSocket@@UEAAPEAEK@Z
    virtual unsigned char * GetBuffer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@CSocket@@UEAAJKPEAEPEAK@Z
    virtual long GetOptions(unsigned long, unsigned char *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSocket@CSocket@@UEAA_KXZ
    virtual uint64_t GetSocket();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUSOBuffer@CSocket@@UEAAPEAEXZ
    virtual unsigned char * GetUSOBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeRIO@CSocket@@UEAAJKK@Z
    virtual long InitializeRIO(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeUSO@CSocket@@UEAAJKK@Z
    virtual long InitializeUSO(unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferAvailable@CSocket@@UEAAHK@Z
    virtual int IsBufferAvailable(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsUSOBufferAvailable@CSocket@@UEAAHXZ
    virtual int IsUSOBufferAvailable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Join@CSocket@@UEAAJPEBUsockaddr_storage@@0@Z
    virtual long Join(sockaddr_storage const *, sockaddr_storage const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@CSocket@@UEAAJPEBUsockaddr_storage@@@Z
    virtual long Leave(sockaddr_storage const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSocket@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSocket@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffer@CSocket@@UEAAXKK@Z
    virtual void ReleaseBuffer(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseReceiveBuffer@CSocket@@UEAAJK@Z
    virtual long ReleaseReceiveBuffer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOptions@CSocket@@UEAAJKPEAEK@Z
    virtual long SetOptions(unsigned long, unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartReceiveBuffers@CSocket@@UEAAJXZ
    virtual long StartReceiveBuffers();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSocket@@IEAA@XZ
    CSocket();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOnFinalRelease@CSocket@@IEAAJXZ
    long CleanupOnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginMultipleSend@CSocket@@IEAAJW4IoType@CSocketResult@@PEAU_MFNETIOBUFFER@@KPEBUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long _BeginMultipleSend(int, _MFNETIOBUFFER *, unsigned long, sockaddr_storage const *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginReceive@CSocket@@IEAAJW4IoType@CSocketResult@@PEAEKPEAUsockaddr_storage@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long _BeginReceive(int, unsigned char *, unsigned long, sockaddr_storage *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndMultipleSend@CSocket@@IEAAJPEAUIMFAsyncResult@@@Z
    long _EndMultipleSend(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EndReceive@CSocket@@IEAAJPEAUIMFAsyncResult@@PEAK@Z
    long _EndReceive(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FinishInit@CSocket@@IEAAJHH@Z
    long _FinishInit(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CSocket@@IEAAJHPEBUsockaddr_storage@@K@Z
    long _Init(int, sockaddr_storage const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_JoinGroupOnSingleInterface@CSocket@@IEAAJPEBUsockaddr_storage@@0PEBUsockaddr@@K@Z
    long _JoinGroupOnSingleInterface(sockaddr_storage const *, sockaddr_storage const *, sockaddr const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LeaveGroupOnSingleInterface@CSocket@@IEAAJPEBUsockaddr_storage@@PEBUsockaddr@@K@Z
    long _LeaveGroupOnSingleInterface(sockaddr_storage const *, sockaddr const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_MulticastOp@CSocket@@IEAAJPEBUsockaddr_storage@@0H@Z
    long _MulticastOp(sockaddr_storage const *, sockaddr_storage const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetMulticastInterface@CSocket@@IEAAJPEBUsockaddr_storage@@@Z
    long _SetMulticastInterface(sockaddr_storage const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSocket@@MEAA@XZ
    virtual ~CSocket();
};
