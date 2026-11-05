#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class MFTEnumCache {
public:
    class OnRegChangeAsyncCallback;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@MFTEnumCache@@QEAAJU_GUID@@IPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@1PEAPEAUIMFActivate@@I@Z
    long Add(_GUID, unsigned int, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, IMFActivate * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EventCallback@MFTEnumCache@@SAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z
    static unsigned long EventCallback(HCMNOTIFICATION__*, void *, int, _CM_NOTIFY_EVENT_DATA *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeRegListener@MFTEnumCache@@QEAAXXZ
    void FreeRegListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitRegListener@MFTEnumCache@@QEAAJXZ
    long InitRegListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@MFTEnumCache@@QEAAXXZ
    void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@MFTEnumCache@@QEAAJU_GUID@@IPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@1PEAPEAPEAUIMFActivate@@PEAI@Z
    long Lookup(_GUID, unsigned int, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, IMFActivate * * *, unsigned int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MFTEnumCache@@QEAA@PEAJ@Z
    MFTEnumCache(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterForPackageCatalogChangedEvent@MFTEnumCache@@SAJXZ
    static long RegisterForPackageCatalogChangedEvent();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@MFTEnumCache@@QEAAKXZ
    unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MFTEnumCache@@QEAA@XZ
    ~MFTEnumCache();
};
