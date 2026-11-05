#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 65 member(s).
class CMFByteStreamFromHandleProvider {
public:
    class COplockCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFByteStreamFromHandleProvider@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFByteStreamFromHandleProvider@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFByteStreamFromHandleProvider@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CMFByteStreamFromHandleProvider@@UEAAJPEAUIMFAttributes@@W4_MF_ATTRIBUTES_MATCH_TYPE@@PEAH@Z
    virtual long Compare(IMFAttributes *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItem@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@PEAH@Z
    virtual long CompareItem(_GUID const &, tagPROPVARIANT const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAllItems@CMFByteStreamFromHandleProvider@@UEAAJPEAUIMFAttributes@@@Z
    virtual long CopyAllItems(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFByteStreamFromHandleProvider@@SAJPEAUIUnbufferedFileHandleProvider@@PEAPEAUIMFByteStream@@@Z
    static long CreateInstance(IUnbufferedFileHandleProvider *, IMFByteStream * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllItems@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long DeleteAllItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteItem@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@@Z
    virtual long DeleteItem(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFByteStreamFromHandleProvider@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFByteStreamFromHandleProvider@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedBlob@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAPEAEPEAI@Z
    virtual long GetAllocatedBlob(_GUID const &, unsigned char * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedString@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAPEAGPEAI@Z
    virtual long GetAllocatedString(_GUID const &, unsigned short * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlob@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAEIPEAI@Z
    virtual long GetBlob(_GUID const &, unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlobSize@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetBlobSize(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFByteStreamFromHandleProvider@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMFByteStreamFromHandleProvider@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFByteStreamFromHandleProvider@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAN@Z
    virtual long GetDouble(_GUID const &, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAU2@@Z
    virtual long GetGUID(_GUID const &, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItem(_GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByIndex@CMFByteStreamFromHandleProvider@@UEAAJIPEAU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItemByIndex(unsigned int, _GUID *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemType@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAW4_MF_ATTRIBUTE_TYPE@@@Z
    virtual long GetItemType(_GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFByteStreamFromHandleProvider@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAGIPEAI@Z
    virtual long GetString(_GUID const &, unsigned short *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringLength@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetStringLength(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT32@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetUINT32(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT64@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEA_K@Z
    virtual long GetUINT64(_GUID const &, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFByteStreamFromHandleProvider@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockStore@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long LockStore();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFByteStreamFromHandleProvider@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFByteStreamFromHandleProvider@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFByteStreamFromHandleProvider@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlob@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEBEI@Z
    virtual long SetBlob(_GUID const &, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFByteStreamFromHandleProvider@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDouble@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@N@Z
    virtual long SetDouble(_GUID const &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGUID@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@0@Z
    virtual long SetGUID(_GUID const &, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    virtual long SetItem(_GUID const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFByteStreamFromHandleProvider@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long SetString(_GUID const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT32@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@I@Z
    virtual long SetUINT32(_GUID const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT64@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@_K@Z
    virtual long SetUINT64(_GUID const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFByteStreamFromHandleProvider@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockStore@CMFByteStreamFromHandleProvider@@UEAAJXZ
    virtual long UnlockStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFByteStreamFromHandleProvider@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFByteStreamFromHandleProvider@@IEAA@XZ
    CMFByteStreamFromHandleProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CloseUnbufferedHandle@CMFByteStreamFromHandleProvider@@IEAAXXZ
    void _CloseUnbufferedHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMFByteStreamFromHandleProvider@@IEAAJPEAUIUnbufferedFileHandleProvider@@@Z
    long _Initialize(IUnbufferedFileHandleProvider *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalClose@CMFByteStreamFromHandleProvider@@IEAAJ_N@Z
    long _InternalClose(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InternalRelease@CMFByteStreamFromHandleProvider@@IEAAKXZ
    unsigned long _InternalRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetContentType@CMFByteStreamFromHandleProvider@@IEAAJPEAUIUnbufferedFileHandleProvider@@PEAUIMFByteStream@@@Z
    long _SetContentType(IUnbufferedFileHandleProvider *, IMFByteStream *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFByteStreamFromHandleProvider@@MEAA@XZ
    virtual ~CMFByteStreamFromHandleProvider();
};
