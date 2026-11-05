#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 18 member(s).
namespace CMemoryStream {
class CReplaceDataStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CReplaceDataStream@CMemoryStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CReplaceDataStream@CMemoryStream@@QEAA@PEAV1@@Z
    CReplaceDataStream(CMemoryStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clone@CReplaceDataStream@CMemoryStream@@UEAAJPEAPEAUIStream@@@Z
    virtual long Clone(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CReplaceDataStream@CMemoryStream@@UEAAJK@Z
    virtual long Commit(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTo@CReplaceDataStream@CMemoryStream@@UEAAJPEAUIStream@@T_ULARGE_INTEGER@@PEAT4@2@Z
    virtual long CopyTo(IStream *, _ULARGE_INTEGER, _ULARGE_INTEGER *, _ULARGE_INTEGER *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockRegion@CReplaceDataStream@CMemoryStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long LockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CReplaceDataStream@CMemoryStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CReplaceDataStream@CMemoryStream@@UEAAJPEAXKPEAK@Z
    virtual long Read(void *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CReplaceDataStream@CMemoryStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Revert@CReplaceDataStream@CMemoryStream@@UEAAJXZ
    virtual long Revert();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CReplaceDataStream@CMemoryStream@@UEAAJT_LARGE_INTEGER@@KPEAT_ULARGE_INTEGER@@@Z
    virtual long Seek(_LARGE_INTEGER, unsigned long, _ULARGE_INTEGER *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@CReplaceDataStream@CMemoryStream@@UEAAJT_ULARGE_INTEGER@@@Z
    virtual long SetSize(_ULARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stat@CReplaceDataStream@CMemoryStream@@UEAAJPEAUtagSTATSTG@@K@Z
    virtual long Stat(tagSTATSTG *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockRegion@CReplaceDataStream@CMemoryStream@@UEAAJT_ULARGE_INTEGER@@0K@Z
    virtual long UnlockRegion(_ULARGE_INTEGER, _ULARGE_INTEGER, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CReplaceDataStream@CMemoryStream@@UEAAJPEBXKPEAK@Z
    virtual long Write(void const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CReplaceDataStream@CMemoryStream@@UEAA@XZ
    virtual ~CReplaceDataStream();
};
} // namespace CMemoryStream
