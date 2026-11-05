#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 30 member(s).
class CByteStreamFlushOperation {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CByteStreamFlushOperation@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CByteStreamFlushOperation@@QEAA@PEAVCOutputStreamOverByteStream@@@Z
    CByteStreamFlushOperation(COutputStreamOverByteStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CByteStreamFlushOperation@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResults@CByteStreamFlushOperation@@UEAAJPEAE@Z
    virtual long GetResults(unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CByteStreamFlushOperation@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CByteStreamFlushOperation@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CByteStreamFlushOperation@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CByteStreamFlushOperation@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CByteStreamFlushOperation@@UEAAJXZ
    virtual long Start();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Completed@CByteStreamFlushOperation@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Z
    virtual long get_Completed(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Completed@CByteStreamFlushOperation@@UEAAJPEAU?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Z
    virtual long put_Completed(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByteStreamFlushOperation@@UEAA@XZ
    virtual ~CByteStreamFlushOperation();
protected:
    // Category: Method | Source: PE Export
    // Symbol: ?OnCancel@CByteStreamFlushOperation@@MEAAXXZ
    virtual void OnCancel();
    // Category: Method | Source: PE Export
    // Symbol: ?OnClose@CByteStreamFlushOperation@@MEAAXXZ
    virtual void OnClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStart@CByteStreamFlushOperation@@MEAAJXZ
    virtual long OnStart();
};
