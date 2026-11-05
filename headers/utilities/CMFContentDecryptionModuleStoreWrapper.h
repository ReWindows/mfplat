#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFContentDecryptionModuleStoreWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFContentDecryptionModuleStoreWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFContentDecryptionModuleStoreWrapper@@QEAA@PEAUIUnknown@@PEAVCMFInprocLifetimeAssociation@@PEAUIMFTelemetrySession@@PEAUHSTRING__@@@Z
    CMFContentDecryptionModuleStoreWrapper(IUnknown *, CMFInprocLifetimeAssociation *, IMFTelemetrySession *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSession@CMFContentDecryptionModuleStoreWrapper@@UEAAJW4MF_MEDIAKEYSESSION_TYPE@@PEAUIMFContentDecryptionModuleSessionCallbacks@@PEAPEAUIMFContentDecryptionModuleSession@@@Z
    virtual long CreateSession(int, IMFContentDecryptionModuleSessionCallbacks *, IMFContentDecryptionModuleSession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTrustedInput@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEBEKPEAPEAUIMFTrustedInput@@@Z
    virtual long CreateTrustedInput(unsigned char const *, unsigned long, IMFTrustedInput * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProtectionSystemIds@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEAPEAU_GUID@@PEAK@Z
    virtual long GetProtectionSystemIds(_GUID * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuspendNotify@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEAPEAUIMFCdmSuspendNotify@@@Z
    virtual long GetSuspendNotify(IMFCdmSuspendNotify * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFContentDecryptionModuleStoreWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFContentDecryptionModuleStoreWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentEnabler@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEAUIMFContentEnabler@@PEAUIMFAsyncResult@@@Z
    virtual long SetContentEnabler(IMFContentEnabler *, IMFAsyncResult *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPMPHostApp@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEAUIMFPMPHostApp@@@Z
    virtual long SetPMPHostApp(IMFPMPHostApp *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetServerCertificate@CMFContentDecryptionModuleStoreWrapper@@UEAAJPEBEK@Z
    virtual long SetServerCertificate(unsigned char const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFContentDecryptionModuleStoreWrapper@@QEAA@XZ
    ~CMFContentDecryptionModuleStoreWrapper();
};
