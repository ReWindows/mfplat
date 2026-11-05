#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CallStackContext {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CallStackContext@@QEAA@KK@Z
    CallStackContext(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearState@CallStackContext@@QEAAXXZ
    void ClearState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CallStackContext@@QEAAXPEBDJJ@Z
    void SetResult(char const *, long, long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceFailure@CallStackContext@@AEAAXPEBDJJ@Z
    void TraceFailure(char const *, long, long);
};
