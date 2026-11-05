#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 20 member(s).
class CLegacyMediaBufferOnMFMediaBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CLegacyMediaBufferOnMFMediaBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyFrom@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEBEK@Z
    virtual long ContiguousCopyFrom(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyTo@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAEK@Z
    virtual long ContiguousCopyTo(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy2DTo@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAUIMF2DBuffer2@@@Z
    virtual long Copy2DTo(IMF2DBuffer2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CLegacyMediaBufferOnMFMediaBuffer@@SAJPEAUIMFSample@@PEAUIMFMediaBuffer@@KPEAPEAUIMediaBuffer@@@Z
    static long CreateInstance(IMFSample *, IMFMediaBuffer *, unsigned long, IMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferAndLength@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAPEAEPEAK@Z
    virtual long GetBufferAndLength(unsigned char * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContiguousLength@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAK@Z
    virtual long GetContiguousLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScanline0AndPitch@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long GetScanline0AndPitch(unsigned char * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContiguousFormat@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAH@Z
    virtual long IsContiguousFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2D@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long Lock2D(unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2DSize@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ1PEAK@Z
    virtual long Lock2DSize(int, unsigned char * *, long *, unsigned char * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CLegacyMediaBufferOnMFMediaBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJK@Z
    virtual long SetLength(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock2D@CLegacyMediaBufferOnMFMediaBuffer@@UEAAJXZ
    virtual long Unlock2D();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLegacyMediaBufferOnMFMediaBuffer@@AEAA@XZ
    ~CLegacyMediaBufferOnMFMediaBuffer();
};
