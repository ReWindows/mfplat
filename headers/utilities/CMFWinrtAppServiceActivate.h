#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMFWinrtAppServiceActivate {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateObject@CMFWinrtAppServiceActivate@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long ActivateObject(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFWinrtAppServiceActivate@@QEAA@XZ
    CMFWinrtAppServiceActivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachObject@CMFWinrtAppServiceActivate@@UEAAJXZ
    virtual long DetachObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFWinrtAppServiceActivate@@QEAAJW4ActivateType@@@Z
    long RuntimeClassInitialize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShutdownObject@CMFWinrtAppServiceActivate@@UEAAJXZ
    virtual long ShutdownObject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateLicense@CMFWinrtAppServiceActivate@@UEAAJPEAH@Z
    virtual long ValidateLicense(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWinrtAppServiceActivate@@UEAA@XZ
    virtual ~CMFWinrtAppServiceActivate();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTransformAppSvcTelemetry@CMFWinrtAppServiceActivate@@AEAAXJK@Z
    void LogTransformAppSvcTelemetry(long, unsigned long);
};
