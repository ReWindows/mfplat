#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 20 member(s).
namespace Windows::Media::Protection {
class EMEStoreObjectDllManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCdmFactory@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long CreateCdmFactory(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateClassById@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long CreateClassById(HSTRING__*, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0EMEStoreObjectDllManager@Protection@Media@Windows@@QEAA@XZ
    EMEStoreObjectDllManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeByKeySystem@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long InitializeByKeySystem(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeByPackageFullName@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long InitializeByPackageFullName(HSTRING__*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@EMEStoreObjectDllManager@Protection@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EMEStoreObjectDllManager@Protection@Media@Windows@@UEAA@XZ
    virtual ~EMEStoreObjectDllManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeEMEObjectTelemetry@EMEStoreObjectDllManager@Protection@Media@Windows@@AEAAXXZ
    void InitializeEMEObjectTelemetry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInternal@EMEStoreObjectDllManager@Protection@Media@Windows@@AEAAJPEAUHSTRING__@@0@Z
    long InitializeInternal(HSTRING__*, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogEMEObjectActivateTelemetry@EMEStoreObjectDllManager@Protection@Media@Windows@@AEAAXJPEAUHSTRING__@@K@Z
    void LogEMEObjectActivateTelemetry(long, HSTRING__*, unsigned long);
};
} // namespace Windows::Media::Protection
