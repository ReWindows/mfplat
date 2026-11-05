#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
namespace CLocalMFTs {
class CIterator {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CIterator@CLocalMFTs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CIterator@CLocalMFTs@@SAJPEAV2@PEAPEAUIMFLocalMFTRegistrationIterator@@@Z
    static long CreateInstance(CLocalMFTs *, IMFLocalMFTRegistrationIterator * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentItem@CIterator@CLocalMFTs@@UEAAJPEAU_MFT_REGISTRATION_INFO@@PEAPEAUIClassFactory@@@Z
    virtual long GetCurrentItem(_MFT_REGISTRATION_INFO *, IClassFactory * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFirst@CIterator@CLocalMFTs@@UEAAJXZ
    virtual long MoveFirst();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@CIterator@CLocalMFTs@@UEAAJXZ
    virtual long MoveNext();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CIterator@CLocalMFTs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CIterator@CLocalMFTs@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CIterator@CLocalMFTs@@EEAA@XZ
    virtual ~CIterator();
};
} // namespace CLocalMFTs
