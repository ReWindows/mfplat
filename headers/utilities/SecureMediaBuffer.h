#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 46 member(s).
class SecureMediaBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SecureMediaBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyFrom@SecureMediaBuffer@@UEAAJPEBEK@Z
    virtual long ContiguousCopyFrom(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyTo@SecureMediaBuffer@@UEAAJPEAEK@Z
    virtual long ContiguousCopyTo(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy2DTo@SecureMediaBuffer@@UEAAJPEAUIMF2DBuffer2@@@Z
    virtual long Copy2DTo(IMF2DBuffer2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@SecureMediaBuffer@@SAJPEAUIMFSecureBufferAllocator@@KKKHKPEAPEAUIMFSecureBuffer@@@Z
    static long CreateInstance(IMFSecureBufferAllocator *, unsigned long, unsigned long, unsigned long, int, unsigned long, IMFSecureBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIdentifier@SecureMediaBuffer@@UEAAJPEAU_GUID@@@Z
    virtual long GetIdentifier(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@SecureMediaBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScanline0AndPitch@SecureMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long GetScanline0AndPitch(unsigned char * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContiguousFormat@SecureMediaBuffer@@UEAAJPEAH@Z
    virtual long IsContiguousFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@SecureMediaBuffer@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2D@SecureMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long Lock2D(unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2DSize@SecureMediaBuffer@@UEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ1PEAK@Z
    virtual long Lock2DSize(int, unsigned char * *, long *, unsigned char * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SecureMediaBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SecureMediaBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@SecureMediaBuffer@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock2D@SecureMediaBuffer@@UEAAJXZ
    virtual long Unlock2D();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@SecureMediaBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@SecureMediaBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SecureMediaBuffer@@IEAA@PEAUIMFSecureBufferAllocator@@AEBU_GUID@@KKKHKPEAJ@Z
    SecureMediaBuffer(IMFSecureBufferAllocator *, _GUID const &, unsigned long, unsigned long, unsigned long, int, unsigned long, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SecureMediaBuffer@@MEAA@XZ
    virtual ~SecureMediaBuffer();
};
