#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 41 member(s).
class COOPMFTProxy {
public:
    class OutputSampleOnInvokeDeleteAsyncCallback;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInputStreams@COOPMFTProxy@@UEAAJKPEAK@Z
    virtual long AddInputStreams(unsigned long, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COOPMFTProxy@@QEAA@XZ
    COOPMFTProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteInputStream@COOPMFTProxy@@UEAAJK@Z
    virtual long DeleteInputStream(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@COOPMFTProxy@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAvailableType@COOPMFTProxy@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputCurrentType@COOPMFTProxy@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputCurrentType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStatus@COOPMFTProxy@@UEAAJKPEAK@Z
    virtual long GetInputStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAttributes@COOPMFTProxy@@UEAAJKPEAPEAUIMFAttributes@@@Z
    virtual long GetInputStreamAttributes(unsigned long, IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamInfo@COOPMFTProxy@@UEAAJKPEAU_MFT_INPUT_STREAM_INFO@@@Z
    virtual long GetInputStreamInfo(unsigned long, _MFT_INPUT_STREAM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAvailableType@COOPMFTProxy@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputCurrentType@COOPMFTProxy@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputCurrentType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStatus@COOPMFTProxy@@UEAAJPEAK@Z
    virtual long GetOutputStatus(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAttributes@COOPMFTProxy@@UEAAJKPEAPEAUIMFAttributes@@@Z
    virtual long GetOutputStreamAttributes(unsigned long, IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamInfo@COOPMFTProxy@@UEAAJKPEAU_MFT_OUTPUT_STREAM_INFO@@@Z
    virtual long GetOutputStreamInfo(unsigned long, _MFT_OUTPUT_STREAM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShutdownStatus@COOPMFTProxy@@UEAAJPEAW4_MFSHUTDOWN_STATUS@@@Z
    virtual long GetShutdownStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamCount@COOPMFTProxy@@UEAAJPEAK0@Z
    virtual long GetStreamCount(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIDs@COOPMFTProxy@@UEAAJKPEAKK0@Z
    virtual long GetStreamIDs(unsigned long, unsigned long *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamLimits@COOPMFTProxy@@UEAAJPEAK000@Z
    virtual long GetStreamLimits(unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedsSharedSurface@COOPMFTProxy@@UEAAJPEAH@Z
    virtual long NeedsSharedSurface(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppResuming@COOPMFTProxy@@UEAAJXZ
    virtual long OnAppResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppSuspending@COOPMFTProxy@@UEAAJXZ
    virtual long OnAppSuspending();
    // Category: Method | Source: PE Export
    // Symbol: ?OnVisibilityChanged@COOPMFTProxy@@UEAAJH@Z
    virtual long OnVisibilityChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutputSampleOnInvokeDelete@COOPMFTProxy@@QEAAJPEAUIMFAsyncResult@@@Z
    long OutputSampleOnInvokeDelete(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@COOPMFTProxy@@UEAAJKPEAUIMFMediaEvent@@@Z
    virtual long ProcessEvent(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@COOPMFTProxy@@UEAAJKPEAUIMFSample@@K@Z
    virtual long ProcessInput(unsigned long, IMFSample *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@COOPMFTProxy@@UEAAJW4_MFT_MESSAGE_TYPE@@_K@Z
    virtual long ProcessMessage(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOutput@COOPMFTProxy@@UEAAJKKPEAU_MFT_OUTPUT_DATA_BUFFER@@PEAK@Z
    virtual long ProcessOutput(unsigned long, unsigned long, _MFT_OUTPUT_DATA_BUFFER *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRemoteMFTInterface@COOPMFTProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryRemoteMFTInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterThreadsEx@COOPMFTProxy@@UEAAJPEAKPEBGJ@Z
    virtual long RegisterThreadsEx(unsigned long *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@COOPMFTProxy@@QEAAJPEAUIMFTransformRemote@@PEAUIUnknown@@PEAUIMFAttributes@@@Z
    long RuntimeClassInitialize(IMFTransformRemote *, IUnknown *, IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputType@COOPMFTProxy@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetInputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputBounds@COOPMFTProxy@@UEAAJ_J0@Z
    virtual long SetOutputBounds(int64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@COOPMFTProxy@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetOutputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueueEx@COOPMFTProxy@@UEAAJKJ@Z
    virtual long SetWorkQueueEx(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@COOPMFTProxy@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThreads@COOPMFTProxy@@UEAAJXZ
    virtual long UnregisterThreads();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COOPMFTProxy@@UEAA@XZ
    virtual ~COOPMFTProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?SaveStubInfo@COOPMFTProxy@@AEAAJPEAUIMFTransformRemote@@@Z
    long SaveStubInfo(IMFTransformRemote *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStreamState@COOPMFTProxy@@AEAAJAEAV?$CTPtrList@VCStream@@@@@Z
    long SetStreamState(WindissectOpaque &);
};
