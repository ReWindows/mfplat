#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CDCOMInterfaceMashallerHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CDCOMInterfaceMashallerHelper@@SAJAEAVCBinaryWriter@@AEBU_GUID@@PEAUIUnknown@@@Z
    static long MarshalInterface(CBinaryWriter &, _GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnMarshalInterface@CDCOMInterfaceMashallerHelper@@SAJAEAVCBinaryReader@@AEBU_GUID@@PEAPEAX@Z
    static long UnMarshalInterface(CBinaryReader &, _GUID const &, void * *);
};
