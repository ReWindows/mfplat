#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
namespace CMFByteStreamFromHandleProvider {
class COplockCallback {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COplockCallback@CMFByteStreamFromHandleProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COplockCallback@CMFByteStreamFromHandleProvider@@QEAA@PEAV1@@Z
    COplockCallback(CMFByteStreamFromHandleProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrokenCallback@COplockCallback@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long OnBrokenCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COplockCallback@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COplockCallback@CMFByteStreamFromHandleProvider@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace CMFByteStreamFromHandleProvider
