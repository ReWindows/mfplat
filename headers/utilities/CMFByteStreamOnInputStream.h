#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 45 member(s).
class CMFByteStreamOnInputStream {
public:
    class CByteStreamOperation;
    class _OnReadCompleteAsyncCallback;
    class _OnReadCompleteForSeekAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFByteStreamOnInputStream@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFByteStreamOnInputStream@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFByteStreamOnInputStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFByteStreamOnInputStream@@SAJPEAUIInputStream@Streams@Storage@Windows@@PEAPEAUIMFByteStream@@@Z
    static long CreateInstance(WindissectOpaque *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFByteStreamOnInputStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFByteStreamOnInputStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFByteStreamOnInputStream@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFByteStreamOnInputStream@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFByteStreamOnInputStream@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFByteStreamOnInputStream@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFByteStreamOnInputStream@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFByteStreamOnInputStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFByteStreamOnInputStream@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFByteStreamOnInputStream@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFByteStreamOnInputStream@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFByteStreamOnInputStream@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFByteStreamOnInputStream@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFByteStreamOnInputStream@@IEAA@PEAJ@Z
    CMFByteStreamOnInputStream(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearQueuedOperations@CMFByteStreamOnInputStream@@MEAAXXZ
    virtual void ClearQueuedOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchOperation@CMFByteStreamOnInputStream@@MEAAJPEAVCBaseOperation@@@Z
    virtual long DispatchOperation(CBaseOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateOperation@CMFByteStreamOnInputStream@@MEAAJPEAVCBaseOperation@@@Z
    virtual long ValidateOperation(CBaseOperation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_BeginRead@CMFByteStreamOnInputStream@@IEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@23@@@@Z
    long _BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CompleteAsyncOperation@CMFByteStreamOnInputStream@@IEAAXJ@Z
    void _CompleteAsyncOperation(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureBuffer@CMFByteStreamOnInputStream@@IEAAJXZ
    long _EnsureBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMFByteStreamOnInputStream@@IEAAJPEAUIInputStream@Streams@Storage@Windows@@@Z
    long _Initialize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnReadComplete@CMFByteStreamOnInputStream@@IEAAJPEAUIMFAsyncResult@@@Z
    long _OnReadComplete(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnReadCompleteForSeek@CMFByteStreamOnInputStream@@IEAAJPEAUIMFAsyncResult@@@Z
    long _OnReadCompleteForSeek(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PerformOperation@CMFByteStreamOnInputStream@@IEAAJPEAVCByteStreamOperation@1@@Z
    long _PerformOperation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_QueueSeekOperation@CMFByteStreamOnInputStream@@IEAAJ_K@Z
    long _QueueSeekOperation(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadAsync@CMFByteStreamOnInputStream@@IEAAJPEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@23@@@@Z
    long _ReadAsync(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReleaseBuffer@CMFByteStreamOnInputStream@@IEAAXXZ
    void _ReleaseBuffer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StartAsyncOperation@CMFByteStreamOnInputStream@@IEAAJPEAVCByteStreamOperation@1@@Z
    long _StartAsyncOperation(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFByteStreamOnInputStream@@MEAA@XZ
    virtual ~CMFByteStreamOnInputStream();
};
