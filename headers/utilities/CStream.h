#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CStream {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureStream@CStream@@QEAAJPEAUIMFTransform@@@Z
    long ConfigureStream(IMFTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByStreamId@CStream@@SAJKPEAV?$CTPtrList@VCStream@@@@PEAPEAV1@@Z
    static long FindByStreamId(unsigned long, WindissectOpaque *, CStream * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSample@CStream@@QEAAJPEAUIMFTransform@@K_JPEAUIMFDXGIDeviceManager@@PEAPEAUIMFSample@@@Z
    long GetSample(IMFTransform *, unsigned long, int64_t, IMFDXGIDeviceManager *, IMFSample * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamId@CStream@@QEAAKXZ
    unsigned long GetStreamId();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStream@@UEAA@XZ
    virtual ~CStream();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocSharedMemoryBuffer@CStream@@AEAAJPEAUIMFMediaType@@_JPEAUIMFSample@@K@Z
    long AllocSharedMemoryBuffer(IMFMediaType *, int64_t, IMFSample *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureVideoSampleAllocator@CStream@@AEAAJPEAUIMFMediaType@@PEAUIMFTransform@@PEAUIMFDXGIDeviceManager@@K@Z
    long ConfigureVideoSampleAllocator(IMFMediaType *, IMFTransform *, IMFDXGIDeviceManager *, unsigned long);
};
