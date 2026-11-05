#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 8 member(s).
namespace CMFByteStreamOnInputStream {
class CByteStreamOperation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteOp@CByteStreamOperation@CMFByteStreamOnInputStream@@UEAAXXZ
    virtual void CompleteOp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CByteStreamOperation@CMFByteStreamOnInputStream@@SAJW4BYTESTREAM_OPERATION@2@PEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@23@@@PEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAV12@@Z
    static long CreateInstance(int, WindissectOpaque *, IMFAsyncCallback *, IUnknown *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStatus@CByteStreamOperation@CMFByteStreamOnInputStream@@QEAAXJ@Z
    void SetStatus(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@CByteStreamOperation@CMFByteStreamOnInputStream@@UEAAKXZ
    virtual unsigned long Type();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CByteStreamOperation@CMFByteStreamOnInputStream@@UEAA@XZ
    virtual ~CByteStreamOperation();
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CByteStreamOperation@CMFByteStreamOnInputStream@@AEAA@W4BYTESTREAM_OPERATION@1@PEAV?$CByteStreamResult@U?$IAsyncOperationWithProgress@PEAUIBuffer@Streams@Storage@Windows@@I@Foundation@Windows@@U?$IAsyncOperationWithProgressCompletedHandler@PEAUIBuffer@Streams@Storage@Windows@@I@23@@@PEAUIMFAsyncCallback@@PEAUIUnknown@@@Z
    CByteStreamOperation(int, WindissectOpaque *, IMFAsyncCallback *, IUnknown *);
};
} // namespace CMFByteStreamOnInputStream
