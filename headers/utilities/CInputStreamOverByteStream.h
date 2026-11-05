#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 22 member(s).
class CInputStreamOverByteStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputStreamOverByteStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputStreamOverByteStream@@QEAA@PEAVCWrappedStreamState@@PEAVCPositionTracker@@@Z
    CInputStreamOverByteStream(CWrappedStreamState *, CPositionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CInputStreamOverByteStream@@UEAAJXZ
    virtual long Close();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputStreamOverByteStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputStreamOverByteStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputStreamOverByteStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputStreamOverByteStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAsync@CInputStreamOverByteStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@IW4InputStreamOptions@345@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@5@@Z
    virtual long ReadAsync(WindissectOpaque *, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputStreamOverByteStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputStreamOverByteStream@@UEAA@XZ
    virtual ~CInputStreamOverByteStream();
};
