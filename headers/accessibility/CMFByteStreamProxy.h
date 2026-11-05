#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 104 member(s).
class CMFByteStreamProxy {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFByteStreamProxy@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginGetEvent@CMFByteStreamProxy@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginGetEvent(IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginRead@CMFByteStreamProxy@@UEAAJPEAEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginRead(unsigned char *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginWrite@CMFByteStreamProxy@@UEAAJPEBEKPEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    virtual long BeginWrite(unsigned char const *, unsigned long, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Close@CMFByteStreamProxy@@UEAAJXZ
    virtual long Close();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@CMFByteStreamProxy@@UEAAJXZ
    virtual long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CMFByteStreamProxy@@UEAAJPEAUIMFAttributes@@W4_MF_ATTRIBUTES_MATCH_TYPE@@PEAH@Z
    virtual long Compare(IMFAttributes *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItem@CMFByteStreamProxy@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@PEAH@Z
    virtual long CompareItem(_GUID const &, tagPROPVARIANT const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAllItems@CMFByteStreamProxy@@UEAAJPEAUIMFAttributes@@@Z
    virtual long CopyAllItems(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CMFByteStreamProxy@@SAJPEAUIMFByteStream@@PEAUIMFAttributes@@PEAPEAUIUnknown@@@Z
    static long CreateInstance(IMFByteStream *, IMFAttributes *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllItems@CMFByteStreamProxy@@UEAAJXZ
    virtual long DeleteAllItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteItem@CMFByteStreamProxy@@UEAAJAEBU_GUID@@@Z
    virtual long DeleteItem(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableBuffering@CMFByteStreamProxy@@UEAAJH@Z
    virtual long EnableBuffering(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndGetEvent@CMFByteStreamProxy@@UEAAJPEAUIMFAsyncResult@@PEAPEAUIMFMediaEvent@@@Z
    virtual long EndGetEvent(IMFAsyncResult *, IMFMediaEvent * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndRead@CMFByteStreamProxy@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndRead(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndWrite@CMFByteStreamProxy@@UEAAJPEAUIMFAsyncResult@@PEAK@Z
    virtual long EndWrite(IMFAsyncResult *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CMFByteStreamProxy@@UEAAJXZ
    virtual long Flush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedBlob@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAPEAEPEAI@Z
    virtual long GetAllocatedBlob(_GUID const &, unsigned char * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedString@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAPEAGPEAI@Z
    virtual long GetAllocatedString(_GUID const &, unsigned short * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CMFByteStreamProxy@@UEAAJKPEAU_tagpropertykey@@@Z
    virtual long GetAt(unsigned long, _tagpropertykey *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlob@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAEIPEAI@Z
    virtual long GetBlob(_GUID const &, unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlobSize@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetBlobSize(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCapabilities@CMFByteStreamProxy@@UEAAJPEAK@Z
    virtual long GetCapabilities(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMFByteStreamProxy@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMFByteStreamProxy@@UEAAJPEAK@Z
    virtual long GetCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentPosition@CMFByteStreamProxy@@UEAAJPEA_K@Z
    virtual long GetCurrentPosition(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAN@Z
    virtual long GetDouble(_GUID const &, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEvent@CMFByteStreamProxy@@UEAAJKPEAPEAUIMFMediaEvent@@@Z
    virtual long GetEvent(unsigned long, IMFMediaEvent * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAU2@@Z
    virtual long GetGUID(_GUID const &, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItem(_GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByIndex@CMFByteStreamProxy@@UEAAJIPEAU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItemByIndex(unsigned int, _GUID *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemType@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAW4_MF_ATTRIBUTE_TYPE@@@Z
    virtual long GetItemType(_GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLength@CMFByteStreamProxy@@UEAAJPEA_K@Z
    virtual long GetLength(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMFMetadata@CMFByteStreamProxy@@UEAAJPEAUIMFPresentationDescriptor@@KKPEAPEAUIMFMetadata@@@Z
    virtual long GetMFMetadata(IMFPresentationDescriptor *, unsigned long, unsigned long, IMFMetadata * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMFByteStreamProxy@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAGIPEAI@Z
    virtual long GetString(_GUID const &, unsigned short *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringLength@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetStringLength(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeSeekResult@CMFByteStreamProxy@@UEAAJPEA_K00@Z
    virtual long GetTimeSeekResult(uint64_t *, uint64_t *, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT32@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetUINT32(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT64@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEA_K@Z
    virtual long GetUINT64(_GUID const &, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFByteStreamProxy@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CMFByteStreamProxy@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z
    virtual long GetValue(_tagpropertykey const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEndOfStream@CMFByteStreamProxy@@UEAAJPEAH@Z
    virtual long IsEndOfStream(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTimeSeekSupported@CMFByteStreamProxy@@UEAAJPEAH@Z
    virtual long IsTimeSeekSupported(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockStore@CMFByteStreamProxy@@UEAAJXZ
    virtual long LockStore();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueEvent@CMFByteStreamProxy@@UEAAJKAEBU_GUID@@JPEBUtagPROPVARIANT@@@Z
    virtual long QueueEvent(unsigned long, _GUID const &, long, tagPROPVARIANT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Read@CMFByteStreamProxy@@UEAAJPEAEKPEAK@Z
    virtual long Read(unsigned char *, unsigned long, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFByteStreamProxy@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Seek@CMFByteStreamProxy@@UEAAJW4_MFBYTESTREAM_SEEK_ORIGIN@@_JKPEA_K@Z
    virtual long Seek(int, int64_t, unsigned long, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlob@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEBEI@Z
    virtual long SetBlob(_GUID const &, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferingParams@CMFByteStreamProxy@@UEAAJPEAU_MFBYTESTREAM_BUFFERING_PARAMS@@@Z
    virtual long SetBufferingParams(_MFBYTESTREAM_BUFFERING_PARAMS *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentPosition@CMFByteStreamProxy@@UEAAJ_K@Z
    virtual long SetCurrentPosition(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDouble@CMFByteStreamProxy@@UEAAJAEBU_GUID@@N@Z
    virtual long SetDouble(_GUID const &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGUID@CMFByteStreamProxy@@UEAAJAEBU_GUID@@0@Z
    virtual long SetGUID(_GUID const &, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CMFByteStreamProxy@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    virtual long SetItem(_GUID const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLength@CMFByteStreamProxy@@UEAAJ_K@Z
    virtual long SetLength(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMaxDownloadBitrate@CMFByteStreamProxy@@UEAAJ_K@Z
    virtual long SetMaxDownloadBitrate(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleBufferingStatus@CMFByteStreamProxy@@UEAAJH@Z
    virtual long SetSampleBufferingStatus(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long SetString(_GUID const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT32@CMFByteStreamProxy@@UEAAJAEBU_GUID@@I@Z
    virtual long SetUINT32(_GUID const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT64@CMFByteStreamProxy@@UEAAJAEBU_GUID@@_K@Z
    virtual long SetUINT64(_GUID const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFByteStreamProxy@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CMFByteStreamProxy@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z
    virtual long SetValue(_tagpropertykey const &, tagPROPVARIANT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourcePaused@CMFByteStreamProxy@@UEAAJXZ
    virtual long SourcePaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopBackgroundTransfer@CMFByteStreamProxy@@UEAAJXZ
    virtual long StopBackgroundTransfer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopBuffering@CMFByteStreamProxy@@UEAAJXZ
    virtual long StopBuffering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TimeSeek@CMFByteStreamProxy@@UEAAJ_K@Z
    virtual long TimeSeek(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockStore@CMFByteStreamProxy@@UEAAJXZ
    virtual long UnlockStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Write@CMFByteStreamProxy@@UEAAJPEBEKPEAK@Z
    virtual long Write(unsigned char const *, unsigned long, unsigned long *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFByteStreamProxy@@MEAA@XZ
    virtual ~CMFByteStreamProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMFByteStreamProxy@@AEAAJPEAUIMFByteStream@@PEAUIMFAttributes@@@Z
    long Initialize(IMFByteStream *, IMFAttributes *);
};
