#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CBinaryWriter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAttributes@CBinaryWriter@@QEAAJPEAUIMFAttributes@@@Z
    long WriteAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteBool@CBinaryWriter@@QEAAJH@Z
    long WriteBool(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteGuid@CBinaryWriter@@QEAAJAEBU_GUID@@@Z
    long WriteGuid(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInt32@CBinaryWriter@@QEAAJJ@Z
    long WriteInt32(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteInt64@CBinaryWriter@@QEAAJ_J@Z
    long WriteInt64(int64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteMediaType@CBinaryWriter@@QEAAJPEAUIMFMediaType@@@Z
    long WriteMediaType(IMFMediaType *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteUnknownAttributes@CBinaryWriter@@QEAAJPEAUIMFAttributes@@@Z
    long WriteUnknownAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteVariant@CBinaryWriter@@QEAAJPEBUtagPROPVARIANT@@@Z
    long WriteVariant(tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteVariantType@CBinaryWriter@@QEAAJG@Z
    long WriteVariantType(unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteVariantValue@CBinaryWriter@@QEAAJPEBUtagPROPVARIANT@@@Z
    long WriteVariantValue(tagPROPVARIANT const *);
};
