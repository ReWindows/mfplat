#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CUnsquish {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CUnsquish@@QEAA@PEAEKPEAJ@Z
    CUnsquish(unsigned char *, unsigned long, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CbRequiredUnquishAndValidate@CUnsquish@@QEAAJPEBEKPEAK@Z
    long CbRequiredUnquishAndValidate(unsigned char const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckForHwMFTMatch@CUnsquish@@QEAAJPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@0PEAH@Z
    long CheckForHwMFTMatch(__MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypes@CUnsquish@@QEAAJPEAPEAU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@PEAI01@Z
    long GetTypes(__MIDL___MIDL_itf_mfobjects_0000_0009_0003* *, unsigned int *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003* *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTypeSupported@CUnsquish@@QEAAHPEBUREGFILTERPINS2@@PEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@@Z
    int IsTypeSupported(REGFILTERPINS2const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSquish@CUnsquish@@QEAAJXZ
    long UnSquish();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSquishPins@CUnsquish@@QEAAJPEAUREGFILTER2@@PEAPEBUREGFILTER_REG1@@@Z
    long UnSquishPins(REGFILTER2*, REGFILTER_REG1const * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnSquishTypes@CUnsquish@@QEAAJPEAUREGFILTERPINS2@@PEBUREGFILTERPINS_REG1@@@Z
    long UnSquishTypes(REGFILTERPINS2*, REGFILTERPINS_REG1const *);
};
