#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 33 member(s).
class CInputStreamOverByteStreamOperation {
public:
    class OnReadAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInputStreamOverByteStreamOperation@@QEAA@PEAVCInputStreamOverByteStream@@PEAUIBuffer@Streams@Storage@Windows@@IPEAJ@Z
    CInputStreamOverByteStreamOperation(CInputStreamOverByteStream *, WindissectOpaque *, unsigned int, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputStreamOverByteStreamOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CInputStreamOverByteStreamOperation@@UEAAJPEAPEAUIBuffer@Streams@Storage@Windows@@@Z
    virtual long GetResults(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputStreamOverByteStreamOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputStreamOverByteStreamOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputStreamOverByteStreamOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputStreamOverByteStreamOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CInputStreamOverByteStreamOperation@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@CInputStreamOverByteStreamOperation@@UEAAJPEAPEAU?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Progress@CInputStreamOverByteStreamOperation@@UEAAJPEAPEAU?$IAsyncOperationProgressHandler@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@@Z
    virtual long get_Progress(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@CInputStreamOverByteStreamOperation@@UEAAJPEAU?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Progress@CInputStreamOverByteStreamOperation@@UEAAJPEAU?$IAsyncOperationProgressHandler@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@@Z
    virtual long put_Progress(WindissectOpaque *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCancel@CInputStreamOverByteStreamOperation@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClose@CInputStreamOverByteStreamOperation@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRead@CInputStreamOverByteStreamOperation@@IEAAXPEAUIMFAsyncResult@@@Z
    void OnRead(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@CInputStreamOverByteStreamOperation@@MEAAJXZ
    virtual long OnStart();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInputStreamOverByteStreamOperation@@MEAA@XZ
    virtual ~CInputStreamOverByteStreamOperation();
};
