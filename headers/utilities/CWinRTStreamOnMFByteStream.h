#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 70 member(s).
class CWinRTStreamOnMFByteStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWinRTStreamOnMFByteStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWinRTStreamOnMFByteStream@@QEAA@PEAVCWrappedStreamState@@PEAVCPositionTracker@@PEAJ@Z
    CWinRTStreamOnMFByteStream(CWrappedStreamState *, CPositionTracker *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloneStream@CWinRTStreamOnMFByteStream@@UEAAJPEAPEAUIRandomAccessStream@Streams@Storage@Windows@@@Z
    virtual long CloneStream(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CWinRTStreamOnMFByteStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushAsync@CWinRTStreamOnMFByteStream@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long FlushAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWinRTStreamOnMFByteStream@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAt@CWinRTStreamOnMFByteStream@@UEAAJ_KPEAPEAUIInputStream@Streams@Storage@Windows@@@Z
    virtual long GetInputStreamAt(uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAt@CWinRTStreamOnMFByteStream@@UEAAJ_KPEAPEAUIOutputStream@Streams@Storage@Windows@@@Z
    virtual long GetOutputStreamAt(uint64_t, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWinRTStreamOnMFByteStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CWinRTStreamOnMFByteStream@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWinRTStreamOnMFByteStream@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWinRTStreamOnMFByteStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadAsync@CWinRTStreamOnMFByteStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@IW4InputStreamOptions@345@PEAPEAU?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@5@@Z
    virtual long ReadAsync(WindissectOpaque *, unsigned int, int, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWinRTStreamOnMFByteStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CWinRTStreamOnMFByteStream@@UEAAJ_K@Z
    virtual long Seek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WriteAsync@CWinRTStreamOnMFByteStream@@UEAAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAU?$IAsyncOperationWithProgress@II@Foundation@5@@Z
    virtual long WriteAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRead@CWinRTStreamOnMFByteStream@@UEAAJPEAE@Z
    virtual long get_CanRead(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanWrite@CWinRTStreamOnMFByteStream@@UEAAJPEAE@Z
    virtual long get_CanWrite(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContentType@CWinRTStreamOnMFByteStream@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContentType(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@CWinRTStreamOnMFByteStream@@UEAAJPEA_K@Z
    virtual long get_Position(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PreventClosingByteStream@CWinRTStreamOnMFByteStream@@UEAAJPEAE@Z
    virtual long get_PreventClosingByteStream(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CWinRTStreamOnMFByteStream@@UEAAJPEA_K@Z
    virtual long get_Size(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PreventClosingByteStream@CWinRTStreamOnMFByteStream@@UEAAJE@Z
    virtual long put_PreventClosingByteStream(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Size@CWinRTStreamOnMFByteStream@@UEAAJ_K@Z
    virtual long put_Size(uint64_t);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWinRTStreamOnMFByteStream@@UEAA@XZ
    virtual ~CWinRTStreamOnMFByteStream();
};
