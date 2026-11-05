#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CMFContentDecryptionModuleSessionStoreWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFContentDecryptionModuleSessionStoreWrapper@@QEAA@PEAUIUnknown@@PEAVCMFInprocLifetimeAssociation@@PEAUIMFTelemetrySession@@PEAUHSTRING__@@@Z
    CMFContentDecryptionModuleSessionStoreWrapper(IUnknown *, CMFInprocLifetimeAssociation *, IMFTelemetrySession *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRequest@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEBGPEBEK@Z
    virtual long GenerateRequest(unsigned short const *, unsigned char const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpiration@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEAN@Z
    virtual long GetExpiration(double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyStatuses@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEAPEAUMFMediaKeyStatus@@PEAI@Z
    virtual long GetKeyStatuses(MFMediaKeyStatus * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionId@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEAPEAG@Z
    virtual long GetSessionId(unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Load@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEBGPEAH@Z
    virtual long Load(unsigned short const *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJXZ
    virtual long Remove();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CMFContentDecryptionModuleSessionStoreWrapper@@UEAAJPEBEK@Z
    virtual long Update(unsigned char const *, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFContentDecryptionModuleSessionStoreWrapper@@QEAA@XZ
    ~CMFContentDecryptionModuleSessionStoreWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEMEObjectGenerateRequestTelemetry@CMFContentDecryptionModuleSessionStoreWrapper@@AEAAXJ@Z
    void LogEMEObjectGenerateRequestTelemetry(long);
};
