#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 32 member(s).
class CMFSample {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddBuffer@CMFSample@@UEAAJPEAUIMFMediaBuffer@@@Z
    virtual long AddBuffer(IMFMediaBuffer *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSample@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSpatialAudioObject@CMFSample@@UEAAJPEAUIMFSpatialAudioObjectBuffer@@@Z
    virtual long AddSpatialAudioObject(IMFSpatialAudioObjectBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSample@CMFSample@@QEAAXXZ
    void ClearSample();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToContiguousBuffer@CMFSample@@UEAAJPEAPEAUIMFMediaBuffer@@@Z
    virtual long ConvertToContiguousBuffer(IMFMediaBuffer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAllItems@CMFSample@@UEAAJPEAUIMFAttributes@@@Z
    virtual long CopyAllItems(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyToBuffer@CMFSample@@UEAAJPEAUIMFMediaBuffer@@@Z
    virtual long CopyToBuffer(IMFMediaBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllItems@CMFSample@@UEAAJXZ
    virtual long DeleteAllItems();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferByIndex@CMFSample@@UEAAJKPEAPEAUIMFMediaBuffer@@@Z
    virtual long GetBufferByIndex(unsigned long, IMFMediaBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferCount@CMFSample@@UEAAJPEAK@Z
    virtual long GetBufferCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetObjectCount@CMFSample@@UEAAJPEAK@Z
    virtual long GetObjectCount(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleDuration@CMFSample@@UEAAJPEA_J@Z
    virtual long GetSampleDuration(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleFlags@CMFSample@@UEAAJPEAK@Z
    virtual long GetSampleFlags(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSampleTime@CMFSample@@UEAAJPEA_J@Z
    virtual long GetSampleTime(int64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpatialAudioObjectByIndex@CMFSample@@UEAAJKPEAPEAUIMFSpatialAudioObjectBuffer@@@Z
    virtual long GetSpatialAudioObjectByIndex(unsigned long, IMFSpatialAudioObjectBuffer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTotalLength@CMFSample@@UEAAJPEAK@Z
    virtual long GetTotalLength(unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSample@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSample@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllBuffers@CMFSample@@UEAAJXZ
    virtual long RemoveAllBuffers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveBufferByIndex@CMFSample@@UEAAJK@Z
    virtual long RemoveBufferByIndex(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffers@CMFSample@@QEAAJXZ
    long ResetBuffers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleDuration@CMFSample@@UEAAJ_J@Z
    virtual long SetSampleDuration(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleFlags@CMFSample@@UEAAJK@Z
    virtual long SetSampleFlags(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSampleTime@CMFSample@@UEAAJ_J@Z
    virtual long SetSampleTime(int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSpatialAudioSampleEnabled@CMFSample@@UEAAJH@Z
    virtual long SetSpatialAudioSampleEnabled(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFSample@@UEAA@XZ
    virtual ~CMFSample();
};
