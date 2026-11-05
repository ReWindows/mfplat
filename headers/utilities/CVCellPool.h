#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CVCellPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CVCellPool@@QEAAJKKKH@Z
    long Initialize(unsigned long, unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCell@CVCellPool@@QEAAJPEAX@Z
    long ReleaseCell(void *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AcquireCleanPage@CVCellPool@@AEAAPEAUPAGEHEADER@1@XZ
    WindissectOpaque * _AcquireCleanPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddToNewList@CVCellPool@@AEAAXAEAPEAUPAGEHEADER@1@0@Z
    void _AddToNewList(WindissectOpaque * &, WindissectOpaque * &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Cleanup@CVCellPool@@AEAAXXZ
    void _Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_FreeAnUnusedPage@CVCellPool@@AEAAHXZ
    int _FreeAnUnusedPage();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleasePage@CVCellPool@@AEAAXPEAUPAGEHEADER@1@@Z
    void _ReleasePage(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RemoveFromOldList@CVCellPool@@AEAAXAEAPEAUPAGEHEADER@1@0@Z
    void _RemoveFromOldList(WindissectOpaque * &, WindissectOpaque * &);
};
