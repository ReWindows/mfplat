#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 15 member(s).
class CMFWinrtInprocByteStreamHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCreateObject@CMFWinrtInprocByteStreamHandler@@UEAAJPEAUIMFByteStream@@PEBGKPEAUIPropertyStore@@PEAPEAUIUnknown@@PEAUIMFAsyncCallback@@PEAU4@@Z
    virtual long BeginCreateObject(IMFByteStream *, unsigned short const *, unsigned long, IPropertyStore *, IUnknown * *, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFWinrtInprocByteStreamHandler@@QEAA@XZ
    CMFWinrtInprocByteStreamHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelObjectCreation@CMFWinrtInprocByteStreamHandler@@UEAAJPEAUIUnknown@@@Z
    virtual long CancelObjectCreation(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCreateObject@CMFWinrtInprocByteStreamHandler@@UEAAJPEAUIMFAsyncResult@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long EndCreateObject(IMFAsyncResult *, int *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxNumberOfBytesRequiredForResolution@CMFWinrtInprocByteStreamHandler@@UEAAJPEA_K@Z
    virtual long GetMaxNumberOfBytesRequiredForResolution(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CMFWinrtInprocByteStreamHandler@@UEAAJPEAPEAUIMFTelemetrySession@@@Z
    virtual long GetSession(IMFTelemetrySession * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LogInstance@CMFWinrtInprocByteStreamHandler@@UEAAXW4_MF_TELEMETRY_SESSION_LOG_REASON@@@Z
    virtual void LogInstance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFWinrtInprocByteStreamHandler@@QEAAJPEAUIMFAttributes@@@Z
    long RuntimeClassInitialize(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CMFWinrtInprocByteStreamHandler@@UEAAXPEAUIMFTelemetrySession@@@Z
    virtual void SetSession(IMFTelemetrySession *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWinrtInprocByteStreamHandler@@UEAA@XZ
    virtual ~CMFWinrtInprocByteStreamHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadDll@CMFWinrtInprocByteStreamHandler@@AEAAJXZ
    long LoadDll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetry@CMFWinrtInprocByteStreamHandler@@AEAAXW4TELEMETRY_LOG_REASON@1@J@Z
    void LogTelemetry(int, long);
};
