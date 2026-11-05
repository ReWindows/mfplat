#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFSourceResolver {
class CheckFileSignatureAsyncCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CheckFileSignatureAsyncCallback@CMFSourceResolver@@QEAA@XZ
    CheckFileSignatureAsyncCallback();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectPointer@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAPEAXXZ
    virtual void * GetObjectPointer();
    // Category: Accessor | Source: PE Export
    // Symbol: ?GetObjectTag@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long GetObjectTag();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameters@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAJPEAK0@Z
    virtual long GetParameters(unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@@Z
    virtual long Invoke(IMFAsyncResult *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CheckFileSignatureAsyncCallback@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFSourceResolver
