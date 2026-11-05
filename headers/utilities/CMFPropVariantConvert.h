#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class CMFPropVariantConvert {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Convert@CMFPropVariantConvert@@SAJPEAVCMFPropVariant@@G@Z
    static long Convert(CMFPropVariant *, unsigned short);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFromData@CMFPropVariantConvert@@SAJPEAVCMFPropVariant@@GPEBXK@Z
    static long CreateFromData(CMFPropVariant *, unsigned short, void const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVarTypeSize@CMFPropVariantConvert@@SAJPEBVCMFPropVariant@@PEAK@Z
    static long GetVarTypeSize(CMFPropVariant const *, unsigned long *);
};
