#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 6 member(s).
class CAESBCrypt {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@CAESBCrypt@@QEAAJXZ
    long Init();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetKey@CAESBCrypt@@QEAAJPEBEK@Z
    long SetKey(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SignData@CAESBCrypt@@QEAAJPEBEKPEAE@Z
    long SignData(unsigned char const *, unsigned long, unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CAESBCrypt@@QEAA@XZ
    ~CAESBCrypt();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSignInfo@CAESBCrypt@@AEAAJPEAE0@Z
    long GenerateSignInfo(unsigned char *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateSignTag@CAESBCrypt@@AEAAJPEBEKPEAE11@Z
    long GenerateSignTag(unsigned char const *, unsigned long, unsigned char *, unsigned char *, unsigned char *);
};
