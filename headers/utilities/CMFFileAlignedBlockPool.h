#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
class CMFFileAlignedBlockPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocateAlignedBuffer@CMFFileAlignedBlockPool@@QEAAJKPEAPEAE@Z
    long AllocateAlignedBuffer(unsigned long, unsigned char * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeAlignedBlocks@CMFFileAlignedBlockPool@@QEAAXXZ
    void FreeAlignedBlocks();
};
