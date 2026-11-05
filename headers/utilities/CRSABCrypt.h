#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CRSABCrypt {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSAOAEPEncPublic@CRSABCrypt@@QEAAJPEBEKPEAPEAEPEAK@Z
    long RSAOAEPEncPublic(unsigned char const *, unsigned long, unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPublicKey@CRSABCrypt@@QEAAJPEBEK@Z
    long SetPublicKey(unsigned char const *, unsigned long);
};
