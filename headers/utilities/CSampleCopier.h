#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CSampleCopier {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySampleBuffers@CSampleCopier@@SAJPEAUIMFSample@@0J@Z
    static long CopySampleBuffers(IMFSample *, IMFSample *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySampleData@CSampleCopier@@SAJPEAUIMFSample@@0@Z
    static long CopySampleData(IMFSample *, IMFSample *);
};
