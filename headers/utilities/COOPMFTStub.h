#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 43 member(s).
class COOPMFTStub {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddInputStreams@COOPMFTStub@@UEAAJKPEAK@Z
    virtual long AddInputStreams(unsigned long, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COOPMFTStub@@QEAA@XZ
    COOPMFTStub();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseHandle@COOPMFTStub@@UEAAJ_K@Z
    virtual long CloseHandle(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteInputStream@COOPMFTStub@@UEAAJK@Z
    virtual long DeleteInputStream(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAttributes@COOPMFTStub@@UEAAJPEAPEAUIMFAttributes@@@Z
    virtual long GetAttributes(IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputAvailableType@COOPMFTStub@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputCurrentType@COOPMFTStub@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetInputCurrentType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStatus@COOPMFTStub@@UEAAJKPEAK@Z
    virtual long GetInputStatus(unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamAttributes@COOPMFTStub@@UEAAJKPEAPEAUIMFAttributes@@@Z
    virtual long GetInputStreamAttributes(unsigned long, IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInputStreamInfo@COOPMFTStub@@UEAAJKPEAU_MFT_INPUT_STREAM_INFO@@@Z
    virtual long GetInputStreamInfo(unsigned long, _MFT_INPUT_STREAM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputAvailableType@COOPMFTStub@@UEAAJKKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputAvailableType(unsigned long, unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputCurrentType@COOPMFTStub@@UEAAJKPEAPEAUIMFMediaType@@@Z
    virtual long GetOutputCurrentType(unsigned long, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStatus@COOPMFTStub@@UEAAJPEAK@Z
    virtual long GetOutputStatus(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamAttributes@COOPMFTStub@@UEAAJKPEAPEAUIMFAttributes@@@Z
    virtual long GetOutputStreamAttributes(unsigned long, IMFAttributes * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOutputStreamInfo@COOPMFTStub@@UEAAJKPEAU_MFT_OUTPUT_STREAM_INFO@@@Z
    virtual long GetOutputStreamInfo(unsigned long, _MFT_OUTPUT_STREAM_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShutdownStatus@COOPMFTStub@@UEAAJPEAW4_MFSHUTDOWN_STATUS@@@Z
    virtual long GetShutdownStatus(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamCount@COOPMFTStub@@UEAAJPEAK0@Z
    virtual long GetStreamCount(unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamIDs@COOPMFTStub@@UEAAJKPEAKK0@Z
    virtual long GetStreamIDs(unsigned long, unsigned long *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStreamLimits@COOPMFTStub@@UEAAJPEAK000@Z
    virtual long GetStreamLimits(unsigned long *, unsigned long *, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStubProcessHandle@COOPMFTStub@@UEAAJPEAPEAX@Z
    virtual long GetStubProcessHandle(void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessEvent@COOPMFTStub@@UEAAJKPEAUIMFMediaEvent@@@Z
    virtual long ProcessEvent(unsigned long, IMFMediaEvent *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInput@COOPMFTStub@@UEAAJKPEAUIMFSample@@K@Z
    virtual long ProcessInput(unsigned long, IMFSample *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessMessage@COOPMFTStub@@UEAAJW4_MFT_MESSAGE_TYPE@@_K@Z
    virtual long ProcessMessage(int, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessOutput@COOPMFTStub@@UEAAJKKPEAU_MFT_OUTPUT_DATA_BUFFER@@PEAK@Z
    virtual long ProcessOutput(unsigned long, unsigned long, _MFT_OUTPUT_DATA_BUFFER *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryRemoteMFTInterface@COOPMFTStub@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryRemoteMFTInterface(_GUID const &, void * *);
    // Category: Method | Source: PE Export
    // Symbol: ?RegisterThreadsEx@COOPMFTStub@@UEAAJPEAKPEBGJ@Z
    virtual long RegisterThreadsEx(unsigned long *, unsigned short const *, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteProcessInput@COOPMFTStub@@UEAAJKU_MFMEDIASAMPLE_REMOTE@@K@Z
    virtual long RemoteProcessInput(unsigned long, _MFMEDIASAMPLE_REMOTE, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteProcessOutput@COOPMFTStub@@UEAAJPEAXKKPEAKPEAPEAU_MFT_OUTPUT_DATA_BUFFER_REMOTE@@1@Z
    virtual long RemoteProcessOutput(void *, unsigned long, unsigned long, unsigned long *, _MFT_OUTPUT_DATA_BUFFER_REMOTE * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoteRegisterThreads@COOPMFTStub@@UEAAJPEBGJJK@Z
    virtual long RemoteRegisterThreads(unsigned short const *, long, long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@COOPMFTStub@@QEAAJPEAUIMFTransform@@@Z
    long RuntimeClassInitialize(IMFTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInputType@COOPMFTStub@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetInputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputBounds@COOPMFTStub@@UEAAJ_J0@Z
    virtual long SetOutputBounds(int64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputType@COOPMFTStub@@UEAAJKPEAUIMFMediaType@@K@Z
    virtual long SetOutputType(unsigned long, IMFMediaType *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperties@COOPMFTStub@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z
    virtual long SetProperties(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorkQueueEx@COOPMFTStub@@UEAAJKJ@Z
    virtual long SetWorkQueueEx(unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Shutdown@COOPMFTStub@@UEAAJXZ
    virtual long Shutdown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterThreads@COOPMFTStub@@UEAAJXZ
    virtual long UnregisterThreads();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COOPMFTStub@@UEAA@XZ
    virtual ~COOPMFTStub();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckActive@COOPMFTStub@@AEAAJXZ
    long CheckActive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@COOPMFTStub@@AEAAJPEAUIMFTransform@@@Z
    long Initialize(IMFTransform *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitForGPU@COOPMFTStub@@AEAAJXZ
    long WaitForGPU();
};
