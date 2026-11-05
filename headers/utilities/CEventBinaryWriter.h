#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class CEventBinaryWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Serialize@CEventBinaryWriter@@QEAAJPEAUIMFMediaEvent@@W4VALUE_SERIALIZATION_TYPE@CEventBinaryTypes@@@Z
    long Serialize(IMFMediaEvent *, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeEventAttributes@CEventBinaryWriter@@IEAAJPEAUIMFMediaEvent@@@Z
    long SerializeEventAttributes(IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SerializeVariant@CEventBinaryWriter@@IEAAJAEAUtagPROPVARIANT@@@Z
    long SerializeVariant(tagPROPVARIANT &);
};
