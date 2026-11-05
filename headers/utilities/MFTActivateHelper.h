#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class MFTActivateHelper {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureEncoderFromActivateAttributes@MFTActivateHelper@@YAJPEAUIMFTransform@@PEAUIMFAttributes@@@Z
    long ConfigureEncoderFromActivateAttributes(IMFTransform *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeEncoderActivateAttributes@MFTActivateHelper@@YAJPEAUIStream@@PEAUIMFAttributes@@@Z
    long DeserializeEncoderActivateAttributes(IStream *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeEncoderActivateAttributes@MFTActivateHelper@@YAJPEAUIStream@@PEAUIMFAttributes@@@Z
    long SerializeEncoderActivateAttributes(IStream *, IMFAttributes *);
};
