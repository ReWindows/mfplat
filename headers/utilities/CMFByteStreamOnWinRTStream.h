#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 39 member(s).
class CMFByteStreamOnWinRTStream {
public:
    class _OnBeginReadAsyncCallback;
    class _OnBeginWriteAsyncCallback;
    class _OnFlushAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFByteStreamOnWinRTStream@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFByteStreamOnWinRTStream@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFByteStreamOnWinRTStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFByteStreamOnWinRTStream@@SAJW4CreateFromType@1@PEAUIUnknown@@PEAPEAUIMFByteStream@@@Z
    static long CreateInstance(int, IUnknown *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFByteStreamOnWinRTStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFByteStreamOnWinRTStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFByteStreamOnWinRTStream@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFByteStreamOnWinRTStream@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFByteStreamOnWinRTStream@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFByteStreamOnWinRTStream@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFByteStreamOnWinRTStream@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFByteStreamOnWinRTStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFByteStreamOnWinRTStream@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFByteStreamOnWinRTStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFByteStreamOnWinRTStream@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFByteStreamOnWinRTStream@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFByteStreamOnWinRTStream@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFByteStreamOnWinRTStream@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFByteStreamOnWinRTStream@@IEAA@XZ
    CMFByteStreamOnWinRTStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFromOutputStream@CMFByteStreamOnWinRTStream@@IEAAJPEAUIUnknown@@@Z
    long _CreateFromOutputStream(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFromRandomAccessStream@CMFByteStreamOnWinRTStream@@IEAAJPEAUIUnknown@@@Z
    long _CreateFromRandomAccessStream(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Flush@CMFByteStreamOnWinRTStream@@IEAAJXZ
    long _Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetInputStreamAt@CMFByteStreamOnWinRTStream@@IEAAJ_KPEAPEAUIInputStream@Streams@Storage@Windows@@@Z
    long _GetInputStreamAt(uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetOutputStreamAt@CMFByteStreamOnWinRTStream@@IEAAJH_KPEAPEAUIOutputStream@Streams@Storage@Windows@@@Z
    long _GetOutputStreamAt(int, uint64_t, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMFByteStreamOnWinRTStream@@IEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginRead@CMFByteStreamOnWinRTStream@@IEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@23@@@@Z
    long _InternalBeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalBeginWrite@CMFByteStreamOnWinRTStream@@IEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@II@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@II@23@@@@Z
    long _InternalBeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginRead@CMFByteStreamOnWinRTStream@@IEAAJPEAUIMFAsyncResult@@@Z
    long _OnBeginRead(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnBeginWrite@CMFByteStreamOnWinRTStream@@IEAAJPEAUIMFAsyncResult@@@Z
    long _OnBeginWrite(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFlush@CMFByteStreamOnWinRTStream@@IEAAJPEAUIMFAsyncResult@@@Z
    long _OnFlush(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ShutdownWorkQueue@CMFByteStreamOnWinRTStream@@IEAAXXZ
    void _ShutdownWorkQueue();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFByteStreamOnWinRTStream@@MEAA@XZ
    virtual ~CMFByteStreamOnWinRTStream();
};
