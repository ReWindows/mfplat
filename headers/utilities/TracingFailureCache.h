#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class TracingFailureCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearMark@TracingFailureCache@@QEAAXK@Z
    void ClearMark(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogSessionErrors@TracingFailureCache@@QEAAXU_GUID@@KJPEBD@Z
    void LogSessionErrors(_GUID, unsigned long, long, char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogTopNErrors@TracingFailureCache@@QEAAXK@Z
    void LogTopNErrors(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessShutdown@TracingFailureCache@@QEAAXXZ
    void ProcessShutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessStartup@TracingFailureCache@@QEAA_NXZ
    bool ProcessStartup();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TracingFailureCache@@QEAA@XZ
    TracingFailureCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TracingFailureCache@@QEAA@XZ
    ~TracingFailureCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureBuffers@TracingFailureCache@@IEAAXXZ
    void EnsureBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvictOldest@TracingFailureCache@@IEAAXK@Z
    void EvictOldest(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFailureByIndex@TracingFailureCache@@IEAAPEAVTracingFailureDetails@@K@Z
    TracingFailureDetails * GetFailureByIndex(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseBuffers@TracingFailureCache@@IEAAXXZ
    void ReleaseBuffers();
};
