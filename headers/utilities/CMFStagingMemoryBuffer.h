#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CMFStagingMemoryBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFStagingMemoryBuffer@@SAJPEAUIMFDXGIBuffer@@HPEAPEAUIMFMediaBuffer@@@Z
    static long CreateInstance(IMFDXGIBuffer *, int, IMFMediaBuffer * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalLock2D@CMFStagingMemoryBuffer@@MEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ@Z
    virtual long InternalLock2D(int, unsigned char * *, long *);
    // Category: Method | Source: PE Export
    // Symbol: ?InternalUnlock2D@CMFStagingMemoryBuffer@@MEAAJXZ
    virtual long InternalUnlock2D();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFStagingMemoryBuffer@@AEAA@PEAUIMFDXGIBuffer@@KKKHPEAJ@Z
    CMFStagingMemoryBuffer(IMFDXGIBuffer *, unsigned long, unsigned long, unsigned long, int, long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFStagingMemoryBuffer@@EEAA@XZ
    virtual ~CMFStagingMemoryBuffer();
};
