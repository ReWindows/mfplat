#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 18 member(s).
class CResolverResult {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CResolverResult@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CResolverResult@@SAJPEAUIUnknown@@PEAUIMFAsyncCallback@@0PEAPEAV1@@Z
    static long CreateInstance(IUnknown *, IMFAsyncCallback *, IUnknown *, CResolverResult * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFileExtensionForFileSignature@CResolverResult@@QEBAPEBGXZ
    unsigned short const * GetFileExtensionForFileSignature() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMIMETypeForFileSignature@CResolverResult@@QEBAPEBGXZ
    unsigned short const * GetMIMETypeForFileSignature() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSession@CResolverResult@@UEAAJPEAPEAUIMFTelemetrySession@@@Z
    virtual long GetSession(IMFTelemetrySession * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogInstance@CResolverResult@@UEAAXW4_MF_TELEMETRY_SESSION_LOG_REASON@@@Z
    virtual void LogInstance(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PluginControlPolicy@CResolverResult@@QEBA?AW4MF_PLUGIN_CONTROL_POLICY@@XZ
    int PluginControlPolicy() const;
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CResolverResult@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CResolverResult@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSession@CResolverResult@@UEAAXPEAUIMFTelemetrySession@@@Z
    virtual void SetSession(IMFTelemetrySession *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CResolverResult@@IEAA@PEAUIUnknown@@PEAUIMFAsyncCallback@@0@Z
    CResolverResult(IUnknown *, IMFAsyncCallback *, IUnknown *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CResolverResult@@MEAA@XZ
    virtual ~CResolverResult();
};
