#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 31 member(s).
class CPlatformPools {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CPlatformPools@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPlatformPools@@QEAA@XZ
    CPlatformPools();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStackTracingClearSnapshot@CPlatformPools@@QEAAJPEAUIMFAsyncResult@@@Z
    long CallStackTracingClearSnapshot(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStackTracingRestoreSnapshot@CPlatformPools@@QEAAJPEAUIMFAsyncResult@@@Z
    long CallStackTracingRestoreSnapshot(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CallStackTracingTakeSnapshot@CPlatformPools@@QEAAJPEAUIMFAsyncResult@@@Z
    long CallStackTracingTakeSnapshot(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disable@CPlatformPools@@QEAAXXZ
    void Disable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enable@CPlatformPools@@QEAAXXZ
    void Enable();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfiguration@CPlatformPools@@QEAAJW4CONFIG_TYPE@IPlatform@@PEBGKPEAPEAUINamedPropertyStore@@@Z
    long GetConfiguration(int, unsigned short const *, unsigned long, INamedPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigurationPolicy@CPlatformPools@@QEAAJW4CONFIG_TYPE@IPlatform@@PEBG1PEAPEAUINamedPropertyStore@@@Z
    long GetConfigurationPolicy(int, unsigned short const *, unsigned short const *, INamedPropertyStore * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigurationValue@CPlatformPools@@QEAAJW4CONFIG_TYPE@IPlatform@@PEBGPEAK@Z
    long GetConfigurationValue(int, unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConfigurationValue@CPlatformPools@@QEAAJW4CONFIG_TYPE@IPlatform@@PEBG1PEAK@Z
    long GetConfigurationValue(int, unsigned short const *, unsigned short const *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@CPlatformPools@@QEAAKXZ
    unsigned long GetFlags();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootKey@CPlatformPools@@QEAAPEAUHKEY__@@W4CONFIG_TYPE@IPlatform@@@Z
    HKEY__* GetRootKey(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializationComplete@CPlatformPools@@UEAAJXZ
    virtual long InitializationComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPlatformPools@@QEAAJKK@Z
    long Initialize(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMarkItemCompleted@CPlatformPools@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long NotifyMarkItemCompleted(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyMarkItemExecuting@CPlatformPools@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long NotifyMarkItemExecuting(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyPutWorkItem@CPlatformPools@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long NotifyPutWorkItem(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenKey@CPlatformPools@@QEAAJW4CONFIG_TYPE@IPlatform@@PEBGPEAPEAUHKEY__@@PEAPEBG@Z
    long OpenKey(int, unsigned short const *, HKEY__* *, unsigned short const * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CPlatformPools@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CPlatformPools@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownComplete@CPlatformPools@@UEAAJXZ
    virtual long ShutdownComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownStart@CPlatformPools@@UEAAJXZ
    virtual long ShutdownStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UseDefaultPool@CPlatformPools@@UEAAJPEAH@Z
    virtual long UseDefaultPool(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPlatformPools@@QEAA@XZ
    ~CPlatformPools();
};
