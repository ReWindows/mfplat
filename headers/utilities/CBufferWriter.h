#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
class CBufferWriter {
public:
    // Category: Refcount | Source: PE Export
    // Symbol: ?AddRef@CBufferWriter@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CBufferWriter@@QEAA@XZ
    CBufferWriter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PutBytes@CBufferWriter@@UEAAJPEBEK@Z
    virtual long PutBytes(unsigned char const *, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CBufferWriter@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PE Export
    // Symbol: ?Release@CBufferWriter@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CBufferWriter@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteUnknownByRef@CBufferWriter@@QEAAJPEAUIUnknown@@AEBU_GUID@@H@Z
    long WriteUnknownByRef(IUnknown *, _GUID const &, int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CBufferWriter@@MEAAPEAUIStream@@XZ
    virtual IStream * GetStream();
};
