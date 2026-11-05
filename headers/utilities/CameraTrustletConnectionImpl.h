#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CameraTrustletConnectionImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CameraTrustletConnectionImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CameraTrustletConnectionImpl@@SAJPEAPEAUIMFSecureBufferAllocator@@@Z
    static long CreateInstance(IMFSecureBufferAllocator * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSecureBuffer@CameraTrustletConnectionImpl@@UEAAJU_GUID@@K@Z
    virtual long CreateSecureBuffer(_GUID, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySecureBuffer@CameraTrustletConnectionImpl@@UEAAJU_GUID@@@Z
    virtual long DestroySecureBuffer(_GUID);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CameraTrustletConnectionImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CameraTrustletConnectionImpl@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CameraTrustletConnectionImpl@@AEAAJXZ
    long Initialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CameraTrustletConnectionImpl@@EEAA@XZ
    virtual ~CameraTrustletConnectionImpl();
};
