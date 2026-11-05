#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 16 member(s).
class CMFContentDecryptorContext {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFContentDecryptorContext@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFContentDecryptorContext@@SAJAEBU_GUID@@PEAUIMFDXGIDeviceManager@@PEAUIMFContentProtectionDevice@@PEAPEAUIMFContentDecryptorContext@@@Z
    static long CreateInstance(_GUID const &, IMFDXGIDeviceManager *, IMFContentProtectionDevice *, IMFContentDecryptorContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFContentDecryptorContext@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeHardwareKey@CMFContentDecryptorContext@@UEAAJIPEBXPEA_K@Z
    virtual long InitializeHardwareKey(unsigned int, void const *, uint64_t *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFContentDecryptorContext@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFContentDecryptorContext@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFContentDecryptorContext@@IEAAJAEBU_GUID@@PEAUIMFDXGIDeviceManager@@PEAUIMFContentProtectionDevice@@@Z
    long Initialize(_GUID const &, IMFDXGIDeviceManager *, IMFContentProtectionDevice *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFContentDecryptorContext@@MEAA@XZ
    virtual ~CMFContentDecryptorContext();
};
