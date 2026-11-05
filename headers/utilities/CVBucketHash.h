#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class CVBucketHash {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVBucketHash@@QEAAJKP6AKKKK@ZK@Z
    long Initialize(unsigned long, unsigned long ( *)(unsigned long, unsigned long, unsigned long), unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CVBucketHash@@QEAAJAEBKPEBX@Z
    long Insert(unsigned long const &, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CVBucketHash@@QEAAJAEBKPEAPEAX@Z
    long Remove(unsigned long const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CVBucketHash@@QEAA@XZ
    ~CVBucketHash();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hash@CVBucketHash@@AEAAKAEBK@Z
    unsigned long Hash(unsigned long const &);
};
