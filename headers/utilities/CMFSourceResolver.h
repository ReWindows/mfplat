#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 38 member(s).
class CMFSourceResolver {
public:
    class AsyncResolveByteStreamAsyncCallback;
    class AsyncResolveURLAsyncCallback;
    class CheckBlankFileForTelemetryAsyncCallback;
    class CheckFileSignatureAsyncCallback;
    class OnByteStreamObjectCreationAsyncCallback;
    class OnSchemeObjectCreationAsyncCallback;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCreateObjectFromByteStream@CMFSourceResolver@@UEAAJPEAUIMFByteStream@@PEBGKPEAUIPropertyStore@@PEAPEAUIUnknown@@PEAUIMFAsyncCallback@@PEAU4@@Z
    virtual long BeginCreateObjectFromByteStream(IMFByteStream *, unsigned short const *, unsigned long, IPropertyStore *, IUnknown * *, IMFAsyncCallback *, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginCreateObjectFromURL@CMFSourceResolver@@UEAAJPEBGKPEAUIPropertyStore@@PEAPEAUIUnknown@@PEAUIMFAsyncCallback@@PEAU3@@Z
    virtual long BeginCreateObjectFromURL(unsigned short const *, unsigned long, IPropertyStore *, IUnknown * *, IMFAsyncCallback *, IUnknown *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMFSourceResolver@@QEAA@H@Z
    CMFSourceResolver(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelObjectCreation@CMFSourceResolver@@UEAAJPEAUIUnknown@@@Z
    virtual long CancelObjectCreation(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObjectFromByteStream@CMFSourceResolver@@UEAAJPEAUIMFByteStream@@PEBGKPEAUIPropertyStore@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long CreateObjectFromByteStream(IMFByteStream *, unsigned short const *, unsigned long, IPropertyStore *, int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateObjectFromURL@CMFSourceResolver@@UEAAJPEBGKPEAUIPropertyStore@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long CreateObjectFromURL(unsigned short const *, unsigned long, IPropertyStore *, int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCreateObjectFromByteStream@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long EndCreateObjectFromByteStream(IMFAsyncResult *, int *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCreateObjectFromURL@CMFSourceResolver@@UEAAJPEAUIMFAsyncResult@@PEAW4MF_OBJECT_TYPE@@PEAPEAUIUnknown@@@Z
    virtual long EndCreateObjectFromURL(IMFAsyncResult *, int *, IUnknown * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMFSourceResolver@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMFSourceResolver@@UEAAKXZ
    virtual unsigned long Release();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncResolveByteStream@CMFSourceResolver@@IEAAJPEAUIMFAsyncResult@@@Z
    long AsyncResolveByteStream(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsyncResolveURL@CMFSourceResolver@@IEAAJPEAUIMFAsyncResult@@@Z
    long AsyncResolveURL(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheByteStreamHandlersForKey@CMFSourceResolver@@KAJPEBGPEAVCSourceResolverHandlerList@@@Z
    static long CacheByteStreamHandlersForKey(unsigned short const *, CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheHandlers@CMFSourceResolver@@KAJPEAUHKEY__@@PEAVCSourceResolverHandlerList@@@Z
    static long CacheHandlers(HKEY__*, CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBlankFileForTelemetry@CMFSourceResolver@@IEAAXPEAUIMFAsyncResult@@@Z
    void CheckBlankFileForTelemetry(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckBlankFileForTelemetry@CMFSourceResolver@@IEAAXPEAVCResolverResult@@@Z
    void CheckBlankFileForTelemetry(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFileSignature@CMFSourceResolver@@IEAAXPEAUIMFAsyncResult@@@Z
    void CheckFileSignature(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFileSignature@CMFSourceResolver@@IEAAXPEAVCResolverResult@@@Z
    void CheckFileSignature(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateResolverResult@CMFSourceResolver@@IEAAJPEBGKPEAUIPropertyStore@@PEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAVCResolverResult@@@Z
    long CreateResolverResult(unsigned short const *, unsigned long, IPropertyStore *, IMFAsyncCallback *, IUnknown *, CResolverResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMIMEType@CMFSourceResolver@@IEAAJPEAVCResolverResult@@@Z
    long GetMIMEType(CResolverResult *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateAndAddTelemetrySession@CMFSourceResolver@@IEAAJPEAUIPropertyStore@@PEAPEAUIMFTelemetrySession@@@Z
    long GetOrCreateAndAddTelemetrySession(IPropertyStore *, IMFTelemetrySession * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheme@CMFSourceResolver@@IEAAJPEBGPEAV?$CMFBaseStringT@G@@@Z
    long GetScheme(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetURLExtension@CMFSourceResolver@@IEAAJPEAVCResolverResult@@@Z
    long GetURLExtension(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleNewByteStream@CMFSourceResolver@@IEAAJPEAUIMFByteStream@@PEAVCResolverResult@@@Z
    long HandleNewByteStream(IMFByteStream *, CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalBeginCreateObjectFromByteStream@CMFSourceResolver@@IEAAJPEAUIMFByteStream@@PEBGKPEAUIPropertyStore@@PEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAVCResolverResult@@@Z
    long InternalBeginCreateObjectFromByteStream(IMFByteStream *, unsigned short const *, unsigned long, IPropertyStore *, IMFAsyncCallback *, IUnknown *, CResolverResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalBeginCreateObjectFromURL@CMFSourceResolver@@IEAAJPEBGKPEAUIPropertyStore@@PEAUIMFAsyncCallback@@PEAUIUnknown@@PEAPEAVCResolverResult@@@Z
    long InternalBeginCreateObjectFromURL(unsigned short const *, unsigned long, IPropertyStore *, IMFAsyncCallback *, IUnknown *, CResolverResult * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupByteStreamHandlers@CMFSourceResolver@@IEAAJPEAVCResolverResult@@H@Z
    long LookupByteStreamHandlers(CResolverResult *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupByteStreamHandlers@CMFSourceResolver@@IEAAJPEBG0PEAVCSourceResolverHandlerList@@HHHW4MF_PLUGIN_CONTROL_POLICY@@@Z
    long LookupByteStreamHandlers(unsigned short const *, unsigned short const *, CSourceResolverHandlerList *, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupSchemeHandlers@CMFSourceResolver@@IEAAJPEAVCResolverResult@@@Z
    long LookupSchemeHandlers(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupSchemeHandlers@CMFSourceResolver@@IEAAJPEBGPEAVCSourceResolverHandlerList@@HW4MF_PLUGIN_CONTROL_POLICY@@@Z
    long LookupSchemeHandlers(unsigned short const *, CSourceResolverHandlerList *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnByteStreamObjectCreation@CMFSourceResolver@@IEAAJPEAUIMFAsyncResult@@@Z
    long OnByteStreamObjectCreation(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSchemeObjectCreation@CMFSourceResolver@@IEAAJPEAUIMFAsyncResult@@@Z
    long OnSchemeObjectCreation(IMFAsyncResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNextByteStreamHandler@CMFSourceResolver@@IEAAJPEAVCResolverResult@@@Z
    long TryNextByteStreamHandler(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryNextSchemeHandler@CMFSourceResolver@@IEAAJPEAVCResolverResult@@@Z
    long TryNextSchemeHandler(CResolverResult *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateFlags@CMFSourceResolver@@IEAAJPEAK@Z
    long ValidateFlags(unsigned long *);
};
