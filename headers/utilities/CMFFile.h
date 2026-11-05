#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 49 member(s).
class CMFFile {
public:
    class OnReadFileAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFFile@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFFile@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFFile@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFFile@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFFile@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFFile@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFFile@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFFile@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFFile@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFFile@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFFile@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFFile@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBrokenCallback@CMFFile@@UEAAJXZ
    virtual long OnBrokenCallback();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFFile@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFFile@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFFile@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFFile@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFFile@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFFile@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFFile@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateFile@CMFFile@@SAJW4__MIDL___MIDL_itf_mfobjects_0000_0018_0001@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0002@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0003@@PEBGPEAXPEAPEAUIMFByteStream@@@Z
    static long _CreateFile(int, int, int, unsigned short const *, void *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateTempFile@CMFFile@@SAJW4__MIDL___MIDL_itf_mfobjects_0000_0018_0001@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0002@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0003@@PEAPEAUIMFByteStream@@@Z
    static long _CreateTempFile(int, int, int, IMFByteStream * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFFile@@AEAA@PEAJ@Z
    CMFFile(long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupOnFinalRelease@CMFFile@@AEAAJXZ
    long CleanupOnFinalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompletePendingOperation@CMFFile@@AEAAXXZ
    void CompletePendingOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishAsyncResult@CMFFile@@AEAAJPEAKPEAVCMFFileAsyncResult@@@Z
    long FinishAsyncResult(unsigned long *, CMFFileAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFFile@@AEAAJW4__MIDL___MIDL_itf_mfobjects_0000_0018_0001@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0002@@W4__MIDL___MIDL_itf_mfobjects_0000_0018_0003@@HPEBGPEAX@Z
    long Initialize(int, int, int, int, unsigned short const *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?JoinWorkQueue@CMFFile@@AEAAJXZ
    long JoinWorkQueue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnReadFile@CMFFile@@AEAAXPEAUIMFAsyncResult@@@Z
    void OnReadFile(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareAsyncResult@CMFFile@@AEAAJPEAEKPEAKPEAVCMFFileAsyncResult@@@Z
    long PrepareAsyncResult(unsigned char *, unsigned long, unsigned long *, CMFFileAsyncResult *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOffset@CMFFile@@AEAAX_K@Z
    void SetOffset(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnjoinWorkQueueAndClose@CMFFile@@AEAAJXZ
    long UnjoinWorkQueueAndClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStatistics@CMFFile@@AEAAJXZ
    long UpdateStatistics();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Close@CMFFile@@AEAAJJ@Z
    long _Close(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetLength@CMFFile@@AEAAJPEA_K@Z
    long _GetLength(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ReadFile@CMFFile@@AEAAJPEAVCMFFileAsyncResult@@@Z
    long _ReadFile(CMFFileAsyncResult *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFFile@@EEAA@XZ
    virtual ~CMFFile();
};
