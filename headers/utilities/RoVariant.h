#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class RoVariant {
public:
    class Accessor;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Attach@RoVariant@@QEAAXPEAUIInspectable@@@Z
    void Attach(IInspectable *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z
    RoVariant(IInspectable *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RoVariant@@QEAA@XZ
    ~RoVariant();
};
