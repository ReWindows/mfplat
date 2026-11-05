#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class CMFInprocDllManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFInprocDllManager@@QEAA@XZ
    CMFInprocDllManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDll@CMFInprocDllManager@@QEAAJPEBGPEAPEAUIInspectable@@@Z
    long LoadDll(unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDll@CMFInprocDllManager@@QEAAJPEBGPEAUIMFAttributes@@PEAPEAUIMFByteStreamHandler@@@Z
    long LoadDll(unsigned short const *, IMFAttributes *, IMFByteStreamHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDllInternal@CMFInprocDllManager@@QEAAJPEBGPEAPEAUIInspectable@@@Z
    long LoadDllInternal(unsigned short const *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFInprocDllManager@@QEAAJPEBG@Z
    long RuntimeClassInitialize(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleUnloadTask@CMFInprocDllManager@@QEAAJXZ
    long ScheduleUnloadTask();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFInprocDllManager@@UEAA@XZ
    virtual ~CMFInprocDllManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnloadDll@CMFInprocDllManager@@AEAAJXZ
    long TryUnloadDll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryUnloadDllFromTimerCallback@CMFInprocDllManager@@AEAAJXZ
    long TryUnloadDllFromTimerCallback();
};
