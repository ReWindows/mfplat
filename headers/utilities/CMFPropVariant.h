#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 15 member(s).
class CMFPropVariant {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendElement@CMFPropVariant@@QEAAJPEBUtagPROPVARIANT@@@Z
    long AppendElement(tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendUniqueElement@CMFPropVariant@@QEAAJPEBUtagPROPVARIANT@@@Z
    long AppendUniqueElement(tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CMFPropVariant@@QEAAJXZ
    long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CMFPropVariant@@QEBAJPEBUtagPROPVARIANT@@PEAH@Z
    long Compare(tagPROPVARIANT const *, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CMFPropVariant@@QEAAJPEBUtagPROPVARIANT@@@Z
    long Copy(tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateBlob@CMFPropVariant@@QEAAJPEBXK@Z
    long CreateBlob(void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCLSID@CMFPropVariant@@QEAAJPEBU_GUID@@@Z
    long CreateCLSID(_GUID const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateString@CMFPropVariant@@QEAAJGPEBX@Z
    long CreateString(unsigned short, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateZeroElementArray@CMFPropVariant@@QEAAJG@Z
    long CreateZeroElementArray(unsigned short);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCount@CMFPropVariant@@QEBAKXZ
    unsigned long GetElementCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertElement@CMFPropVariant@@QEAAJKPEBUtagPROPVARIANT@@@Z
    long InsertElement(unsigned long, tagPROPVARIANT const *);
    // Category: Dtor | Source: PE Export
    // Symbol: ??1CMFPropVariant@@QEAA@XZ
    ~CMFPropVariant();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementDataAsVariant@CMFPropVariant@@IEBAJKPEAUtagPROPVARIANT@@@Z
    long GetElementDataAsVariant(unsigned long, tagPROPVARIANT *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementDataPtr@CMFPropVariant@@IEBAJKPEAPEAX@Z
    long GetElementDataPtr(unsigned long, void * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetElementData@CMFPropVariant@@IEAAJKPEBX@Z
    long SetElementData(unsigned long, void const *);
};
