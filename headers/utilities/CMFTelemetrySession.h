#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 18 member(s).
class CMFTelemetrySession {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFTelemetrySession@@QEAA@XZ
    CMFTelemetrySession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteTelemetryFlag@CMFTelemetrySession@@UEAAXAEBU_GUID@@@Z
    virtual void DeleteTelemetryFlag(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationId@CMFTelemetrySession@@UEAA?AU_GUID@@XZ
    virtual _GUID GetApplicationId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInstanceId@CMFTelemetrySession@@UEAAKXZ
    virtual unsigned long GetInstanceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSessionId@CMFTelemetrySession@@UEAA?AU_GUID@@XZ
    virtual _GUID GetSessionId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IncrementInstanceId@CMFTelemetrySession@@UEAAXXZ
    virtual void IncrementInstanceId();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTelemetryFlagSet@CMFTelemetrySession@@UEAAHAEBU_GUID@@@Z
    virtual int IsTelemetryFlagSet(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTracingFailures@CMFTelemetrySession@@UEAAXJPEBD@Z
    virtual void LogTracingFailures(long, char const *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterCallback@CMFTelemetrySession@@UEAAXPEAUIMFTelemetryComponent@@@Z
    virtual void RegisterCallback(IMFTelemetryComponent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFTelemetrySession@@QEAAJAEBU_GUID@@0@Z
    long RuntimeClassInitialize(_GUID const &, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInstanceId@CMFTelemetrySession@@UEAAXK@Z
    virtual void SetInstanceId(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTelemetryFlag@CMFTelemetrySession@@UEAAXAEBU_GUID@@@Z
    virtual void SetTelemetryFlag(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@CMFTelemetrySession@@UEAAXAEBU_GUID@@@Z
    virtual void Shutdown(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TakeOwnership@CMFTelemetrySession@@UEAAXAEBU_GUID@@@Z
    virtual void TakeOwnership(_GUID const &);
    // Category: Method | Source: PE Export
    // Symbol: ?UnregisterCallback@CMFTelemetrySession@@UEAAXPEAUIMFTelemetryComponent@@@Z
    virtual void UnregisterCallback(IMFTelemetryComponent *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFTelemetrySession@@MEAA@XZ
    virtual ~CMFTelemetrySession();
};
