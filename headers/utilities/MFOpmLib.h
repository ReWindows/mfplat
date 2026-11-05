#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class MFOpmLib {
public:
    class CAESHelper;
    class COPMCertParser;
    class COPMDevice;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateRandom@MFOpmLib@@YAJPEAEK@Z
    long GenerateRandom(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReverseMemCopy@MFOpmLib@@YAXPEAEPEBEK@Z
    void ReverseMemCopy(unsigned char *, unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyX509Certificate@MFOpmLib@@YAJPEAEKPEAK0PEBD@Z
    long VerifyX509Certificate(unsigned char *, unsigned long, unsigned long *, unsigned char *, char const *);
};
