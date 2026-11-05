#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class MFMEDIATYPEUtils {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareFullToPartialMediaType@MFMEDIATYPEUtils@@YAHPEAUIMFMediaType@@0@Z
    int CompareFullToPartialMediaType(IMFMediaType *, IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DefaultChannelMask@MFMEDIATYPEUtils@@YAII@Z
    unsigned int DefaultChannelMask(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsKnownUncompressedVideoType@MFMEDIATYPEUtils@@YAHU_GUID@@@Z
    int IsKnownUncompressedVideoType(_GUID);
};
