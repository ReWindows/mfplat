#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CMFMediaSourceAppServiceConnector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelMediaSourceCreation@CMFMediaSourceAppServiceConnector@@QEAAXXZ
    void CancelMediaSourceCreation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateMediaSourceAsync@CMFMediaSourceAppServiceConnector@@QEAAJPEAUIMFByteStream@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    long CreateMediaSourceAsync(IMFByteStream *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogAppServiceTelemetry@CMFMediaSourceAppServiceConnector@@QEAAXW4_MEDIASRC_APPSVC_TELEMETRY_LOG_REASON@@J@Z
    void LogAppServiceTelemetry(int, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMediaSourceAppServiceConnector@@UEAA@XZ
    virtual ~CMFMediaSourceAppServiceConnector();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@CMFMediaSourceAppServiceConnector@@EEAAXXZ
    virtual void CloseConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionOpenOperationCompleted@CMFMediaSourceAppServiceConnector@@EEAAXJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual void OnConnectionOpenOperationCompleted(long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnectionOpenOperationTimedOut@CMFMediaSourceAppServiceConnector@@EEAAXPEAUIMFAsyncResult@@@Z
    virtual void OnConnectionOpenOperationTimedOut(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResponseReceived@CMFMediaSourceAppServiceConnector@@AEAAXJPEAU?$IAsyncOperation@PEAVAppServiceResponse@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    void OnResponseReceived(long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CMFMediaSourceAppServiceConnector@@AEAAXXZ
    void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignalMediaSourceCreation@CMFMediaSourceAppServiceConnector@@AEAAXJ@Z
    void SignalMediaSourceCreation(long);
};
