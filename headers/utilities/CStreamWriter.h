#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CStreamWriter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStreamWriter@@QEAA@PEAUIStream@@PEAJ@Z
    CStreamWriter(IStream *, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStreamWriter@@QEAA@XZ
    ~CStreamWriter();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CStreamWriter@@MEAAPEAUIStream@@XZ
    virtual IStream * GetStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBlock@CStreamWriter@@MEAAJPEBXK@Z
    virtual long WriteBlock(void const *, unsigned long);
};
