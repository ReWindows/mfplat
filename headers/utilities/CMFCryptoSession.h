#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 26 member(s).
class CMFCryptoSession {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFCryptoSession@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFCryptoSession@@SAJKAEBU_GUID@@PEAUIMFContentDecryptorContext@@PEAPEAUIMFContentProtectionDevice@@@Z
    static long CreateInstance(unsigned long, _GUID const &, IMFContentDecryptorContext *, IMFContentProtectionDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateDataByteCount@CMFCryptoSession@@UEAAJPEAK0@Z
    virtual long GetPrivateDataByteCount(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFCryptoSession@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFunction@CMFCryptoSession@@UEAAJKKPEBEPEAKPEAE@Z
    virtual long InvokeFunction(unsigned long, unsigned long, unsigned char const *, unsigned long *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFCryptoSession@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadsEx@CMFCryptoSession@@UEAAJPEAKPEBGJ@Z
    virtual long RegisterThreadsEx(unsigned long *, unsigned short const *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFCryptoSession@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueueEx@CMFCryptoSession@@UEAAJKJ@Z
    virtual long SetWorkQueueEx(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThreads@CMFCryptoSession@@UEAAJXZ
    virtual long UnregisterThreads();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFCryptoSession@@IEAA@XZ
    CMFCryptoSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForUnsupportedDisplayConfig@CMFCryptoSession@@KAJPEAJPEAH_N@Z
    static long CheckForUnsupportedDisplayConfig(long *, int *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDevice@CMFCryptoSession@@IEAAJXZ
    long CreateDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFCryptoSession@@IEAAJJKAEBU_GUID@@PEAUIMFContentDecryptorContext@@@Z
    long Initialize(long, unsigned long, _GUID const &, IMFContentDecryptorContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFCryptoSession@@MEAA@XZ
    virtual ~CMFCryptoSession();
};
