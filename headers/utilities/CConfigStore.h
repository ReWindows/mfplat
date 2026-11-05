#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class CConfigStore {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CConfigStore@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CConfigStore@@QEAA@XZ
    CConfigStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CConfigStore@@QEAAJPEAUHKEY__@@PEBG1@Z
    long FinalConstruct(HKEY__*, unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinalConstruct@CConfigStore@@QEAAJPEAUHKEY__@@PEBGK@Z
    long FinalConstruct(HKEY__*, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameAt@CConfigStore@@UEAAJKPEAPEAG@Z
    virtual long GetNameAt(unsigned long, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCount@CConfigStore@@UEAAJPEAK@Z
    virtual long GetNameCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedValue@CConfigStore@@UEAAJPEBGPEAUtagPROPVARIANT@@@Z
    virtual long GetNamedValue(unsigned short const *, tagPROPVARIANT *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CConfigStore@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CConfigStore@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNamedValue@CConfigStore@@UEAAJPEBGAEBUtagPROPVARIANT@@@Z
    virtual long SetNamedValue(unsigned short const *, tagPROPVARIANT const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CConfigStore@@QEAA@XZ
    ~CConfigStore();
};
