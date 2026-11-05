#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CSocketListener {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSocketListener@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginAccept@CSocketListener@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginAccept(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CSocketListener@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSocketListener@@SAJHPEBUsockaddr_storage@@PEAPEAUISocketListener@@@Z
    static long CreateInstance(int, sockaddr_storage const *, ISocketListener * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndAccept@CSocketListener@@UEAAJPEAUIMFAsyncResult@@PEAPEAUISocket@@@Z
    virtual long EndAccept(IMFAsyncResult *, ISocket * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOptions@CSocketListener@@UEAAJKPEAEPEAK@Z
    virtual long GetOptions(unsigned long, unsigned char *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Listen@CSocketListener@@UEAAJK@Z
    virtual long Listen(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSocketListener@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSocketListener@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOnFinalRelease@CSocketListener@@IEAAJXZ
    long CleanupOnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletePendingOperation@CSocketListener@@IEAAXXZ
    void CompletePendingOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Init@CSocketListener@@IEAAJHPEBUsockaddr_storage@@@Z
    long _Init(int, sockaddr_storage const *);
};
