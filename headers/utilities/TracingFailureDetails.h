#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class TracingFailureDetails {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareByCount@TracingFailureDetails@@SAHPEBX0@Z
    static int CompareByCount(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareByTimeNewestFirst@TracingFailureDetails@@SAHPEBX0@Z
    static int CompareByTimeNewestFirst(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareByTimeOldestFirst@TracingFailureDetails@@SAHPEBX0@Z
    static int CompareByTimeOldestFirst(void const *, void const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFunctionList@TracingFailureDetails@@QEAA_NPEADKK_N@Z
    bool GetFunctionList(char *, unsigned long, unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModuleList@TracingFailureDetails@@QEAA_NAEAVModuleInfoCache@@PEADKK@Z
    bool GetModuleList(ModuleInfoCache &, char *, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HashFunctionTemplate@TracingFailureDetails@@SA_NPEBDPEAD@Z
    static bool HashFunctionTemplate(char const *, char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TracingFailureDetails@@QEAAXAEAVCallStackContext@@PEBDJ@Z
    void Initialize(CallStackContext &, char const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@TracingFailureDetails@@QEAAXXZ
    void Reset();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TracingFailureDetails@@QEAA@XZ
    TracingFailureDetails();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TracingFailureDetails@@QEAA@XZ
    ~TracingFailureDetails();
};
