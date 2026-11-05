#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CBinaryReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAttributes@CBinaryReader@@QEAAJPEAUIMFAttributes@@@Z
    long ReadAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBool@CBinaryReader@@QEAAJAEAH@Z
    long ReadBool(int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadGuid@CBinaryReader@@QEAAJAEAU_GUID@@@Z
    long ReadGuid(_GUID &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadInt32@CBinaryReader@@QEAAJAEAJ@Z
    long ReadInt32(long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadInt32@CBinaryReader@@QEAAJAEAK@Z
    long ReadInt32(unsigned long &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadInt64@CBinaryReader@@QEAAJAEA_J@Z
    long ReadInt64(int64_t &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadMediaType@CBinaryReader@@QEAAJPEAPEAUIMFMediaType@@@Z
    long ReadMediaType(IMFMediaType * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadUnknownAttributes@CBinaryReader@@QEAAJPEAUIMFAttributes@@@Z
    long ReadUnknownAttributes(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVariant@CBinaryReader@@QEAAJPEAUtagPROPVARIANT@@@Z
    long ReadVariant(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVariantType@CBinaryReader@@QEAAJAEAG@Z
    long ReadVariantType(unsigned short &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVariantValue@CBinaryReader@@QEAAJGPEAUtagPROPVARIANT@@@Z
    long ReadVariantValue(unsigned short, tagPROPVARIANT *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AllocAndCopy@CBinaryReader@@IEAAJKPEAPEAE@Z
    long _AllocAndCopy(unsigned long, unsigned char * *);
};
