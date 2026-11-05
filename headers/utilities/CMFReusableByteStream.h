#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 67 member(s).
class CMFReusableByteStream {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFReusableByteStream@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFReusableByteStream@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFReusableByteStream@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFReusableByteStream@@QEAA@PEAUIMFByteStream@@PEAUIMFLock@@HPEAJ@Z
    CMFReusableByteStream(IMFByteStream *, IMFLock *, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFReusableByteStream@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReusableByteStream@@SAJPEAUIMFByteStream@@HPEAPEAU2@@Z
    static long CreateInstance(IMFByteStream *, int, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReusableByteStream@@SAJPEAUIMFByteStream@@PEAPEAU2@@Z
    static long CreateInstance(IMFByteStream *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFReusableByteStream@@SAJPEAUIMFByteStream@@PEAUIMFLock@@PEAPEAU2@@Z
    static long CreateInstance(IMFByteStream *, IMFLock *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFReusableByteStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFReusableByteStream@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFReusableByteStream@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFReusableByteStream@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFReusableByteStream@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFReusableByteStream@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFReusableByteStream@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFReusableByteStream@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFReusableByteStream@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFReusableByteStream@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceByteStream@CMFReusableByteStream@@UEAAJPEAUIMFByteStream@@@Z
    virtual long ReplaceByteStream(IMFByteStream *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reuse@CMFReusableByteStream@@UEAAJPEAPEAUIMFByteStream@@@Z
    virtual long Reuse(IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFReusableByteStream@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFReusableByteStream@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFReusableByteStream@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFReusableByteStream@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFReusableByteStream@@MEAA@XZ
    virtual ~CMFReusableByteStream();
};
