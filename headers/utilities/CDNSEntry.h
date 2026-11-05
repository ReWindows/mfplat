#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CDNSEntry {
public:
    class ResolveDNSNameAsyncCallback;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDNSEntry@@QEAA@PEBGJPEAUIUnknown@@PEAUIMFAsyncCallback@@1@Z
    CDNSEntry(unsigned short const *, long, IUnknown *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveDNSName@CDNSEntry@@QEAAXPEAUIMFAsyncResult@@@Z
    void ResolveDNSName(IMFAsyncResult *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAddrInfo@CDNSEntry@@QEAAJPEAUaddrinfoW@@@Z
    long SetAddrInfo(addrinfoW *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDNSEntry@@UEAA@XZ
    virtual ~CDNSEntry();
};
