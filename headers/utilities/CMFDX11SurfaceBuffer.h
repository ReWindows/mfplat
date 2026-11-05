#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 48 member(s).
class CMFDX11SurfaceBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFDX11SurfaceBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopySurface@CMFDX11SurfaceBuffer@@SAXPEAUID3D11Texture2D@@I0I@Z
    static void CopySurface(ID3D11Texture2D *, unsigned int, ID3D11Texture2D *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFDX11SurfaceBuffer@@SAJAEBU_GUID@@PEAUIUnknown@@IHPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, unsigned int, int, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStagingSurface@CMFDX11SurfaceBuffer@@SAJPEAUID3D11Texture2D@@IPEAPEAU2@@Z
    static long CreateStagingSurface(ID3D11Texture2D *, unsigned int, ID3D11Texture2D * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDX11SurfaceParams@CMFDX11SurfaceBuffer@@SAJPEAUID3D11Texture2D@@PEAK111@Z
    static long GetDX11SurfaceParams(ID3D11Texture2D *, unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResource@CMFDX11SurfaceBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetResource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFDX11SurfaceBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSharedHandle@CMFDX11SurfaceBuffer@@UEAAJKPEAPEAXPEAH@Z
    virtual long GetSharedHandle(unsigned long, void * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubresourceIndex@CMFDX11SurfaceBuffer@@UEAAJPEAI@Z
    virtual long GetSubresourceIndex(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFDX11SurfaceBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockDX11Surface@CMFDX11SurfaceBuffer@@SAJPEAUID3D11Texture2D@@IW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    static long LockDX11Surface(ID3D11Texture2D *, unsigned int, int, unsigned char * *, long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFDX11SurfaceBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFDX11SurfaceBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFDX11SurfaceBuffer@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockDX11Surface@CMFDX11SurfaceBuffer@@SAJPEAUID3D11Texture2D@@I@Z
    static long UnlockDX11Surface(ID3D11Texture2D *, unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFDX11SurfaceBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFDX11SurfaceBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalUnlock2D@CMFDX11SurfaceBuffer@@IEAAJH@Z
    long _InternalUnlock2D(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFDX11SurfaceBuffer@@MEAA@XZ
    virtual ~CMFDX11SurfaceBuffer();
};
