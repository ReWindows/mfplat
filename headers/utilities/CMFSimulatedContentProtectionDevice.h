#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 22 member(s).
class CMFSimulatedContentProtectionDevice {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSimulatedContentProtectionDevice@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSimulatedContentProtectionDevice@@SAJKAEBU_GUID@@PEAUIMFContentDecryptorContext@@PEAPEAUIMFContentProtectionDevice@@@Z
    static long CreateInstance(unsigned long, _GUID const &, IMFContentDecryptorContext *, IMFContentProtectionDevice * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateDataByteCount@CMFSimulatedContentProtectionDevice@@UEAAJPEAK0@Z
    virtual long GetPrivateDataByteCount(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFSimulatedContentProtectionDevice@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeFunction@CMFSimulatedContentProtectionDevice@@UEAAJKKPEBEPEAKPEAE@Z
    virtual long InvokeFunction(unsigned long, unsigned long, unsigned char const *, unsigned long *, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSimulatedContentProtectionDevice@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterThreadsEx@CMFSimulatedContentProtectionDevice@@UEAAJPEAKPEBGJ@Z
    virtual long RegisterThreadsEx(unsigned long *, unsigned short const *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSimulatedContentProtectionDevice@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PE Export
    // Symbol: ?SetWorkQueueEx@CMFSimulatedContentProtectionDevice@@UEAAJKJ@Z
    virtual long SetWorkQueueEx(unsigned long, long);
    // Category: Method | Source: PE Export
    // Symbol: ?UnregisterThreads@CMFSimulatedContentProtectionDevice@@UEAAJXZ
    virtual long UnregisterThreads();
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSimulatedContentProtectionDevice@@MEAA@XZ
    virtual ~CMFSimulatedContentProtectionDevice();
};
