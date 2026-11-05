#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CPDBinaryWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CPDBinaryWriter@@QEAAJPEAUIMFPresentationDescriptor@@H@Z
    long Serialize(IMFPresentationDescriptor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeSD@CPDBinaryWriter@@QEAAJPEAUIMFStreamDescriptor@@@Z
    long SerializeSD(IMFStreamDescriptor *);
};
