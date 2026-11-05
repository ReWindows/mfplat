#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CMFContentDecryptionModuleFactoryStoreWrapper {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFContentDecryptionModuleFactoryStoreWrapper@@QEAA@PEAUIInspectable@@PEAVCMFInprocLifetimeAssociation@@PEAUIMFTelemetrySession@@PEAUHSTRING__@@@Z
    CMFContentDecryptionModuleFactoryStoreWrapper(IInspectable *, CMFInprocLifetimeAssociation *, IMFTelemetrySession *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateContentDecryptionModuleAccess@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAJPEBGPEAPEAUIPropertyStore@@KPEAPEAUIMFContentDecryptionModuleAccess@@@Z
    virtual long CreateContentDecryptionModuleAccess(unsigned short const *, IPropertyStore * *, unsigned long, IMFContentDecryptionModuleAccess * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypeSupported@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAHPEBG0@Z
    virtual int IsTypeSupported(unsigned short const *, unsigned short const *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFContentDecryptionModuleFactoryStoreWrapper@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFContentDecryptionModuleFactoryStoreWrapper@@QEAA@XZ
    ~CMFContentDecryptionModuleFactoryStoreWrapper();
};
