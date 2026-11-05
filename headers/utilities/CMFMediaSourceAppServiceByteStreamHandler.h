#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFMediaSourceAppServiceByteStreamHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCreateObject@CMFMediaSourceAppServiceByteStreamHandler@@UEAAJPEAUIMFByteStream@@PEBGKPEAUIPropertyStore@@PEAPEAUIUnknown@@PEAUIMFAsyncCallback@@PEAU4@@Z
    virtual long BeginCreateObject(IMFByteStream *, unsigned short const *, unsigned long, IPropertyStore *, IUnknown * *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelObjectCreation@CMFMediaSourceAppServiceByteStreamHandler@@UEAAJPEAUIUnknown@@@Z
    virtual long CancelObjectCreation(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCreateObject@CMFMediaSourceAppServiceByteStreamHandler@@UEAAJPEAUIMFAsyncResult@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long EndCreateObject(IMFAsyncResult *, int *, IUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxNumberOfBytesRequiredForResolution@CMFMediaSourceAppServiceByteStreamHandler@@UEAAJPEA_K@Z
    virtual long GetMaxNumberOfBytesRequiredForResolution(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CMFMediaSourceAppServiceByteStreamHandler@@UEAAJPEAPEAUIMFTelemetrySession@@@Z
    virtual long GetSession(IMFTelemetrySession * *);
    // Category: Method | Source: PE Export
    // Symbol: ?LogInstance@CMFMediaSourceAppServiceByteStreamHandler@@UEAAXW4_MF_TELEMETRY_SESSION_LOG_REASON@@@Z
    virtual void LogInstance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFMediaSourceAppServiceByteStreamHandler@@QEAAJPEAUIMFAttributes@@@Z
    long RuntimeClassInitialize(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CMFMediaSourceAppServiceByteStreamHandler@@UEAAXPEAUIMFTelemetrySession@@@Z
    virtual void SetSession(IMFTelemetrySession *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaSourceAppServiceByteStreamHandler@@UEAA@XZ
    virtual ~CMFMediaSourceAppServiceByteStreamHandler();
};
