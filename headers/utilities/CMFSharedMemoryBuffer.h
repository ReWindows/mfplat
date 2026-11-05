#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 28 member(s).
class CMFSharedMemoryBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSharedMemoryBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFSharedMemoryBuffer@@SAJKKPEAU_SECURITY_ATTRIBUTES@@PEBGPEAPEAUIMFSharedMediaBuffer@@@Z
    static long CreateInstance(unsigned long, unsigned long, _SECURITY_ATTRIBUTES *, unsigned short const *, IMFSharedMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInformation@CMFSharedMemoryBuffer@@UEAAJPEAPEAXPEAPEAG0PEAK@Z
    virtual long GetBufferInformation(void * *, unsigned short * *, void * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMFSharedMemoryBuffer@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFSharedMemoryBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMFSharedMemoryBuffer@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockSharedBuffer@CMFSharedMemoryBuffer@@UEAAJPEAPEAEPEAK1PEAPEAX1PEAPEAG@Z
    virtual long LockSharedBuffer(unsigned char * *, unsigned long *, unsigned long *, void * *, unsigned long *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@CMFSharedMemoryBuffer@@SAJPEAVCSharedMemory@@KKKKPEAPEAUIMFSharedMediaBuffer@@@Z
    static long Open(CSharedMemory *, unsigned long, unsigned long, unsigned long, unsigned long, IMFSharedMediaBuffer * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSharedMemoryBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSharedMemoryBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFSharedMemoryBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockSharedBuffer@CMFSharedMemoryBuffer@@UEAAJXZ
    virtual long UnlockSharedBuffer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSharedMemoryBuffer@@UEAA@XZ
    virtual ~CMFSharedMemoryBuffer();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSharedMemoryBuffer@@IEAA@PEAVCSharedMemory@@KKK@Z
    CMFSharedMemoryBuffer(CSharedMemory *, unsigned long, unsigned long, unsigned long);
};
