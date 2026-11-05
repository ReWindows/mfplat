#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 22 member(s).
class CStreamOnMFByteStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CStreamOnMFByteStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStreamOnMFByteStream@@QEAA@PEAUIMFByteStream@@@Z
    CStreamOnMFByteStream(IMFByteStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CStreamOnMFByteStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CStreamOnMFByteStream@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CStreamOnMFByteStream@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT3@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CStreamOnMFByteStream@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CStreamOnMFByteStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CStreamOnMFByteStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CStreamOnMFByteStream@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CStreamOnMFByteStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CStreamOnMFByteStream@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CStreamOnMFByteStream@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CStreamOnMFByteStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CStreamOnMFByteStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CStreamOnMFByteStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CStreamOnMFByteStream@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStreamOnMFByteStream@@UEAA@XZ
    virtual ~CStreamOnMFByteStream();
};
