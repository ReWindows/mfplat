#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 33 member(s).
class COutputStreamOverByteStreamOperation {
public:
    class OnWriteAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@COutputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COutputStreamOverByteStreamOperation@@QEAA@PEAVCOutputStreamOverByteStream@@PEAUIBuffer@Streams@Storage@Windows@@PEAJ@Z
    COutputStreamOverByteStreamOperation(COutputStreamOverByteStream *, WindissectOpaque *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@COutputStreamOverByteStreamOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@COutputStreamOverByteStreamOperation@@UEAAJPEAI@Z
    virtual long GetResults(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@COutputStreamOverByteStreamOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@COutputStreamOverByteStreamOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@COutputStreamOverByteStreamOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@COutputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@COutputStreamOverByteStreamOperation@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@COutputStreamOverByteStreamOperation@@UEAAJPEAPEAU?$IAsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@COutputStreamOverByteStreamOperation@@UEAAJPEAPEAU?$IAsyncOperationProgressHandler@II@Foundation@Windows@@@Z
    virtual long get_Progress(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@COutputStreamOverByteStreamOperation@@UEAAJPEAU?$IAsyncOperationWithProgressCompletedHandler@II@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@COutputStreamOverByteStreamOperation@@UEAAJPEAU?$IAsyncOperationProgressHandler@II@Foundation@Windows@@@Z
    virtual long put_Progress(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@COutputStreamOverByteStreamOperation@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@COutputStreamOverByteStreamOperation@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@COutputStreamOverByteStreamOperation@@MEAAJXZ
    virtual long OnStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWrite@COutputStreamOverByteStreamOperation@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnWrite(IMFAsyncResult *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COutputStreamOverByteStreamOperation@@MEAA@XZ
    virtual ~COutputStreamOverByteStreamOperation();
};
