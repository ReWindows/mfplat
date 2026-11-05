#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 11 member(s).
class CMF2DMemMediaBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMF2DMemMediaBuffer@@SAJKKKHPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(unsigned long, unsigned long, unsigned long, int, IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMF2DMemMediaBuffer@@SAJPEAUIMFMediaBuffer@@KKJKHPEAPEAU2@@Z
    static long CreateInstance(IMFMediaBuffer *, unsigned long, unsigned long, long, unsigned long, int, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMF2DMemMediaBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMF2DMemMediaBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMF2DMemMediaBuffer@@AEAA@KKKHPEAJ@Z
    CMF2DMemMediaBuffer(unsigned long, unsigned long, unsigned long, int, long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMF2DMemMediaBuffer@@AEAA@PEAUIMFMediaBuffer@@KKJKHPEAJ@Z
    CMF2DMemMediaBuffer(IMFMediaBuffer *, unsigned long, unsigned long, long, unsigned long, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMF2DMemMediaBuffer@@EEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalUnlock2D@CMF2DMemMediaBuffer@@EEAAJXZ
    virtual long InternalUnlock2D();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMF2DMemMediaBuffer@@EEAA@XZ
    virtual ~CMF2DMemMediaBuffer();
};
