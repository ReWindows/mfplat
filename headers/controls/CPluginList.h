#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CPluginList {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPluginList@@QEAA@XZ
    CPluginList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryByIndex@CPluginList@@QEAAJKPEAPEAGPEAU_GUID@@@Z
    long GetEntryByIndex(unsigned long, unsigned short * *, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEntryBySelector@CPluginList@@QEAAJPEBGPEAU_GUID@@@Z
    long GetEntryBySelector(unsigned short const *, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPluginList@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClsidPresent@CPluginList@@QEAAJAEBU_GUID@@@Z
    long IsClsidPresent(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClsid@CPluginList@@QEAAJAEBU_GUID@@H@Z
    long SetClsid(_GUID const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEntry@CPluginList@@QEAAJPEBGPEBU_GUID@@@Z
    long SetEntry(unsigned short const *, _GUID const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPluginList@@QEAA@XZ
    ~CPluginList();
};
