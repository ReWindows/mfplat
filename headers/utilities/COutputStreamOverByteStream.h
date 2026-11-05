#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 23 member(s).
class COutputStreamOverByteStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COutputStreamOverByteStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COutputStreamOverByteStream@@QEAA@PEAVCWrappedStreamState@@PEAVCPositionTracker@@@Z
    COutputStreamOverByteStream(CWrappedStreamState *, CPositionTracker *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@COutputStreamOverByteStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@COutputStreamOverByteStream@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@COutputStreamOverByteStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@COutputStreamOverByteStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@COutputStreamOverByteStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COutputStreamOverByteStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COutputStreamOverByteStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAsync@COutputStreamOverByteStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperationWithProgress@II@Foundation@5@@Z
    virtual long WriteAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COutputStreamOverByteStream@@UEAA@XZ
    virtual ~COutputStreamOverByteStream();
};
