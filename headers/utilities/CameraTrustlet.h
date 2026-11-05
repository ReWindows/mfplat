#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CameraTrustlet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseSecureSection@CameraTrustlet@@QEAAJU_GUID@@@Z
    long CloseSecureSection(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Connect@CameraTrustlet@@QEAAJXZ
    long Connect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecureSection@CameraTrustlet@@QEAAJU_GUID@@K@Z
    long CreateSecureSection(_GUID, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CameraTrustlet@@QEAA@XZ
    ~CameraTrustlet();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstablishRpcConnection@CameraTrustlet@@AEAAJXZ
    long EstablishRpcConnection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateEndpointName@CameraTrustlet@@AEAAJXZ
    long GenerateEndpointName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchProcess@CameraTrustlet@@AEAAJXZ
    long LaunchProcess();
};
