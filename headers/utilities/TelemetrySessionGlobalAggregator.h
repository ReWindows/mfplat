#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class TelemetrySessionGlobalAggregator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddData@TelemetrySessionGlobalAggregator@@UEAAXW4TelemetrySessionGlobalAggregationDataTypes@@_K@Z
    virtual void AddData(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TelemetrySessionGlobalAggregator@@UEAAXXZ
    virtual void Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTelemetry@TelemetrySessionGlobalAggregator@@UEAAXXZ
    virtual void LogTelemetry();
};
