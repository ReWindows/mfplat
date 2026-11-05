#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 32 member(s).
class CMFWICBitmapBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFWICBitmapBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFWICBitmapBuffer@@SAJAEBU_GUID@@PEAUIUnknown@@PEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(_GUID const &, IUnknown *, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFWICBitmapBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFWICBitmapBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFWICBitmapBuffer@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFWICBitmapBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFWICBitmapBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFWICBitmapBuffer@@AEAA@PEAUIWICBitmap@@KKKPEAJ@Z
    CMFWICBitmapBuffer(IWICBitmap *, unsigned long, unsigned long, unsigned long, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFWICBitmapBuffer@@EEAA@XZ
    virtual ~CMFWICBitmapBuffer();
};
