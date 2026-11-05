#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CMFMemoryBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFMemoryBuffer@@SAJKKPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(unsigned long, unsigned long, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMFMemoryBuffer@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMFMemoryBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMFMemoryBuffer@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMFMemoryBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFMemoryBuffer@@IEAA@HKKPEAE0PEAUIMFBufferReleaseCallback@@PEAX@Z
    CMFMemoryBuffer(int, unsigned long, unsigned long, unsigned char *, unsigned char *, IMFBufferReleaseCallback *, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFMemoryBuffer@@MEAA@XZ
    virtual ~CMFMemoryBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFMemoryBuffer@@CAJHKKPEAE0PEAUIMFBufferReleaseCallback@@PEAXPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(int, unsigned long, unsigned long, unsigned char *, unsigned char *, IMFBufferReleaseCallback *, void *, IMFMediaBuffer * *);
};
