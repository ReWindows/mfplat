#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
class CMFDX9SurfaceBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFDX9SurfaceBuffer@@SAJAEBU_GUID@@PEAUIUnknown@@HPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, int, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFDX9SurfaceBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFDX9SurfaceBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFDX9SurfaceBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFDX9SurfaceBuffer@@AEAA@PEAUIDirect3DSurface9@@KKKHPEAJ@Z
    CMFDX9SurfaceBuffer(IDirect3DSurface9*, unsigned long, unsigned long, unsigned long, int, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDX9SurfaceBuffer@@EEAA@XZ
    virtual ~CMFDX9SurfaceBuffer();
};
