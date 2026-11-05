#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMFAppServiceConnectorBase {
public:
    class OnConnectionOpenOperationTimedOutAsyncCallback;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFAppServiceConnectorBase@@QEAAJPEAUIMFAttributes@@@Z
    long RuntimeClassInitialize(IMFAttributes *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFAppServiceConnectorBase@@UEAA@XZ
    virtual ~CMFAppServiceConnectorBase();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseConnection@CMFAppServiceConnectorBase@@MEAAXXZ
    virtual void CloseConnection();
    // Category: Method | Source: PE Export
    // Symbol: ?OnConnectionOpenOperationCompleted@CMFAppServiceConnectorBase@@MEAAXJPEAU?$IAsyncOperation@W4AppServiceConnectionStatus@AppService@ApplicationModel@Windows@@@Foundation@Windows@@@Z
    virtual void OnConnectionOpenOperationCompleted(long, WindissectOpaque *);
    // Category: Method | Source: PE Export
    // Symbol: ?OnConnectionOpenOperationTimedOut@CMFAppServiceConnectorBase@@MEAAXPEAUIMFAsyncResult@@@Z
    virtual void OnConnectionOpenOperationTimedOut(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenConnection@CMFAppServiceConnectorBase@@IEAAJ_N@Z
    long OpenConnection(bool);
};
