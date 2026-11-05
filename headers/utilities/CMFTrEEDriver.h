#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 26 member(s).
class CMFTrEEDriver {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFTrEEDriver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFTrEEDriver@@SAJKAEBU_GUID@@PEAUIMFContentDecryptorContext@@PEAPEAUIMFContentProtectionDevice@@@Z
    static long CreateInstance(unsigned long, _GUID const &, IMFContentDecryptorContext *, IMFContentProtectionDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateDataByteCount@CMFTrEEDriver@@UEAAJPEAK0@Z
    virtual long GetPrivateDataByteCount(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFTrEEDriver@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFunction@CMFTrEEDriver@@UEAAJKKPEBEPEAKPEAE@Z
    virtual long InvokeFunction(unsigned long, unsigned long, unsigned char const *, unsigned long *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFTrEEDriver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterThreadsEx@CMFTrEEDriver@@UEAAJPEAKPEBGJ@Z
    virtual long RegisterThreadsEx(unsigned long *, unsigned short const *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFTrEEDriver@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueueEx@CMFTrEEDriver@@UEAAJKJ@Z
    virtual long SetWorkQueueEx(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThreads@CMFTrEEDriver@@UEAAJXZ
    virtual long UnregisterThreads();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFTrEEDriver@@IEAA@XZ
    CMFTrEEDriver();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDevice@CMFTrEEDriver@@IEAAJAEBU_GUID@@@Z
    long CheckDevice(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDevice@CMFTrEEDriver@@IEAAJAEBU_GUID@@@Z
    long CreateDevice(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFTrEEDriver@@IEAAJKAEBU_GUID@@PEAUIMFContentDecryptorContext@@@Z
    long Initialize(unsigned long, _GUID const &, IMFContentDecryptorContext *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFTrEEDriver@@MEAA@XZ
    virtual ~CMFTrEEDriver();
};
