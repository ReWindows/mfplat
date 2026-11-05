#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CStoreByteStreamRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAllByteStreamHandlers@CStoreByteStreamRegistrar@@QEAAJW4MF_PLUGIN_CONTROL_POLICY@@PEAVCSourceResolverHandlerList@@@Z
    long AddAllByteStreamHandlers(int, CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByteStreamHandlersForFileExtensionOrMimeType@CStoreByteStreamRegistrar@@QEAAJPEBG0W4MF_PLUGIN_CONTROL_POLICY@@PEAVCSourceResolverHandlerList@@@Z
    long AddByteStreamHandlersForFileExtensionOrMimeType(unsigned short const *, unsigned short const *, int, CSourceResolverHandlerList *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CStoreByteStreamRegistrar@@QEAA@XZ
    CStoreByteStreamRegistrar();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSingleton@CStoreByteStreamRegistrar@@SAJPEAPEAV1@@Z
    static long GetSingleton(CStoreByteStreamRegistrar * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CStoreByteStreamRegistrar@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CStoreByteStreamRegistrar@@UEAA@XZ
    virtual ~CStoreByteStreamRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateStoreMediaSourceExtensions@CStoreByteStreamRegistrar@@AEAAJXZ
    long EnumerateStoreMediaSourceExtensions();
};
