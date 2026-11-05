#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMFContentDecryptionModuleAccessStoreWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFContentDecryptionModuleAccessStoreWrapper@@QEAA@PEAUIUnknown@@PEAVCMFInprocLifetimeAssociation@@PEAUIMFTelemetrySession@@PEAUHSTRING__@@@Z
    CMFContentDecryptionModuleAccessStoreWrapper(IUnknown *, CMFInprocLifetimeAssociation *, IMFTelemetrySession *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentDecryptionModule@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAJPEAUIPropertyStore@@PEAPEAUIMFContentDecryptionModule@@@Z
    virtual long CreateContentDecryptionModule(IPropertyStore *, IMFContentDecryptionModule * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguration@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAJPEAPEAUIPropertyStore@@@Z
    virtual long GetConfiguration(IPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeySystem@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAJPEAPEAG@Z
    virtual long GetKeySystem(unsigned short * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFContentDecryptionModuleAccessStoreWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFContentDecryptionModuleAccessStoreWrapper@@QEAA@XZ
    ~CMFContentDecryptionModuleAccessStoreWrapper();
};
