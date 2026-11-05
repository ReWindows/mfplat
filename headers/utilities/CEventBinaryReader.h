#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class CEventBinaryReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deserialize@CEventBinaryReader@@QEAAJPEAPEAUIMFMediaEvent@@PEAVCExternalValueReader@1@PEA_N@Z
    long Deserialize(IMFMediaEvent * *, WindissectOpaque *, bool *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeEventAttributes@CEventBinaryReader@@IEAAJPEAUIMFMediaEvent@@@Z
    long DeserializeEventAttributes(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeserializeVariant@CEventBinaryReader@@IEAAJPEAVCMFMediaEvent@@@Z
    long DeserializeVariant(CMFMediaEvent *);
};
