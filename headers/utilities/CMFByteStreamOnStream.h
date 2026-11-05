#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 30 member(s).
class CMFByteStreamOnStream {
public:
    class CMFByteStreamOnStreamAsyncResult;
    class OnReadAsyncCallback;
    class OnWriteAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFByteStreamOnStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFByteStreamOnStream@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFByteStreamOnStream@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFByteStreamOnStream@@QEAA@XZ
    CMFByteStreamOnStream();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFByteStreamOnStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFByteStreamOnStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFByteStreamOnStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFByteStreamOnStream@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFByteStreamOnStream@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFByteStreamOnStream@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFByteStreamOnStream@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFByteStreamOnStream@@QEAAJPEAUIStream@@W4MF_CREATESTREAM_FLAGS@@@Z
    long Initialize(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFByteStreamOnStream@@UEAAJPEAUIStream@@@Z
    virtual long Initialize(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFByteStreamOnStream@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFByteStreamOnStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFByteStreamOnStream@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFByteStreamOnStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFByteStreamOnStream@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFByteStreamOnStream@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFByteStreamOnStream@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFByteStreamOnStream@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFByteStreamOnStream@@UEAA@XZ
    virtual ~CMFByteStreamOnStream();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStream@CMFByteStreamOnStream@@MEAAJPEAPEAUIStream@@@Z
    virtual long GetStream(IStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRead@CMFByteStreamOnStream@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnRead(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWrite@CMFByteStreamOnStream@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnWrite(IMFAsyncResult *);
};
