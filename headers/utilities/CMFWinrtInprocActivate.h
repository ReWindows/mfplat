#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CMFWinrtInprocActivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateObject@CMFWinrtInprocActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ActivateObject(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachObject@CMFWinrtInprocActivate@@UEAAJXZ
    virtual long DetachObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFWinrtInprocActivate@@QEAAJW4ActivateType@1@@Z
    long RuntimeClassInitialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownObject@CMFWinrtInprocActivate@@UEAAJXZ
    virtual long ShutdownObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLicense@CMFWinrtInprocActivate@@UEAAJPEAH@Z
    virtual long ValidateLicense(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWinrtInprocActivate@@UEAA@XZ
    virtual ~CMFWinrtInprocActivate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInProcTransformTelemetry@CMFWinrtInprocActivate@@AEAAXJK@Z
    void LogInProcTransformTelemetry(long, unsigned long);
};
