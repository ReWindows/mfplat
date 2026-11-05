#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 45 member(s).
class CMFShared2DBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFShared2DBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFShared2DBuffer@@SAJKKKHPEAU_SECURITY_ATTRIBUTES@@PEBGPEAPEAUIMFShared2DBuffer@@@Z
    static long CreateInstance(unsigned long, unsigned long, unsigned long, int, _SECURITY_ATTRIBUTES *, unsigned short const *, IMFShared2DBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInformation@CMFShared2DBuffer@@UEAAJPEAPEAXPEAPEAG0PEAK@Z
    virtual long GetBufferInformation(void * *, unsigned short * *, void * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFShared2DBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockShared2DBuffer@CMFShared2DBuffer@@UEAAJPEAPEAEPEAJPEAPEAXPEAKPEAPEAG@Z
    virtual long LockShared2DBuffer(unsigned char * *, long *, void * *, unsigned long *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CMFShared2DBuffer@@SAJPEAVCSharedMemory@@KKKKKHPEAPEAUIMFShared2DBuffer@@@Z
    static long Open(CSharedMemory *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, int, IMFShared2DBuffer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFShared2DBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFShared2DBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFShared2DBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockShared2DBuffer@CMFShared2DBuffer@@UEAAJXZ
    virtual long UnlockShared2DBuffer();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFShared2DBuffer@@IEAA@KKKHPEAU_SECURITY_ATTRIBUTES@@PEBGPEAJ@Z
    CMFShared2DBuffer(unsigned long, unsigned long, unsigned long, int, _SECURITY_ATTRIBUTES *, unsigned short const *, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFShared2DBuffer@@IEAA@PEAVCSharedMemory@@KKKKKHPEAJ@Z
    CMFShared2DBuffer(CSharedMemory *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFShared2DBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMFShared2DBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFShared2DBuffer@@MEAA@XZ
    virtual ~CMFShared2DBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFShared2DBuffer@@AEAAJKKPEAK@Z
    long Initialize(unsigned long, unsigned long, unsigned long *);
};
