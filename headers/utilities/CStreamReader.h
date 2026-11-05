#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
class CStreamReader {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStreamReader@@QEAA@PEAUIStream@@PEAJ@Z
    CStreamReader(IStream *, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStreamReader@@QEAA@XZ
    ~CStreamReader();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CStreamReader@@MEAAPEAUIStream@@XZ
    virtual IStream * GetStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBlock@CStreamReader@@MEAAJPEAEK@Z
    virtual long ReadBlock(unsigned char *, unsigned long);
};
