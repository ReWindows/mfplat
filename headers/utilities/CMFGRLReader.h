#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CMFGRLReader {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckPublicKeyRevocation@CMFGRLReader@@QEAAJPEAEK@Z
    long CheckPublicKeyRevocation(unsigned char *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGRLPath@CMFGRLReader@@SAJPEAGKH@Z
    static long GetGRLPath(unsigned short *, unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGRLVersion@CMFGRLReader@@QEAAJPEAK@Z
    long GetGRLVersion(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsHashInGRL@CMFGRLReader@@QEAAJQEAEW4GRL_SECTION@@PEAH@Z
    long IsHashInGRL(unsigned char * const, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadGRL@CMFGRLReader@@QEAAJH@Z
    long ReadGRL(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadGRLFromPath@CMFGRLReader@@QEAAJPEBG@Z
    long ReadGRLFromPath(unsigned short const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@CMFGRLReader@@IEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadFromFile@CMFGRLReader@@IEAAJPEAX0K@Z
    long ReadFromFile(void *, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerifyCoreSignature@CMFGRLReader@@IEAAJXZ
    long VerifyCoreSignature();
};
