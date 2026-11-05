#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 12 member(s).
class CPropertySetHelper {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPropertySetHelper@@QEAA@PEAU?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    CPropertySetHelper(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPropertySetHelper@@QEAAJPEAU?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    long Initialize(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGuid@CPropertySetHelper@@QEAAJAEBU_GUID@@0@Z
    long SetGuid(_GUID const &, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUInt8Array@CPropertySetHelper@@QEAAJAEBU_GUID@@IPEAE@Z
    long SetUInt8Array(_GUID const &, unsigned int, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPropertySetHelper@@QEAA@XZ
    ~CPropertySetHelper();
};
