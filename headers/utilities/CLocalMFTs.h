#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CLocalMFTs {
public:
    class CIterator;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumMFTs@CLocalMFTs@@QEAAJAEBU_GUID@@IPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@1PEAPEAPEAUIMFActivate@@PEAI@Z
    long EnumMFTs(_GUID const &, unsigned int, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, IMFActivate * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIterator@CLocalMFTs@@QEAAJPEAPEAUIMFLocalMFTRegistrationIterator@@@Z
    long GetIterator(IMFLocalMFTRegistrationIterator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMFT@CLocalMFTs@@QEAAJAEBU_GUID@@0IKPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@K1PEBG@Z
    long RegisterMFT(_GUID const &, _GUID const &, unsigned int, unsigned long, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, unsigned long, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMFT@CLocalMFTs@@QEAAJPEAUIClassFactory@@AEBU_GUID@@IKPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@K2PEBG@Z
    long RegisterMFT(IClassFactory *, _GUID const &, unsigned int, unsigned long, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, unsigned long, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TypesMatch@CLocalMFTs@@SAHPEBU__MIDL___MIDL_itf_mfobjects_0000_0009_0003@@0I@Z
    static int TypesMatch(__MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, __MIDL___MIDL_itf_mfobjects_0000_0009_0003const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterMFT@CLocalMFTs@@QEAAJAEBU_GUID@@@Z
    long UnregisterMFT(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterMFT@CLocalMFTs@@QEAAJPEAUIClassFactory@@@Z
    long UnregisterMFT(IClassFactory *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalMFTs@@QEAA@XZ
    ~CLocalMFTs();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeList@CLocalMFTs@@IEAAXXZ
    void FreeList();
};
