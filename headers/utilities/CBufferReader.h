#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 14 member(s).
class CBufferReader {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CBufferReader@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBufferReader@@QEAA@PEBEK@Z
    CBufferReader(unsigned char const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBytes@CBufferReader@@UEAAJPEAEK@Z
    virtual long GetBytes(unsigned char *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CBufferReader@@UEAAKXZ
    virtual unsigned long GetPosition();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBufferReader@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CBufferReader@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadBlock@CBufferReader@@UEAAJPEAEK@Z
    virtual long ReadBlock(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadUnknownByRef@CBufferReader@@QEAAJAEBU_GUID@@PEAPEAUIUnknown@@@Z
    long ReadUnknownByRef(_GUID const &, IUnknown * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CBufferReader@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@CBufferReader@@UEAAJK@Z
    virtual long SetPosition(unsigned long);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CBufferReader@@MEAAPEAUIStream@@XZ
    virtual IStream * GetStream();
};
