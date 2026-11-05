#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CLocalByteStreamRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAllByteStreamHandlers@CLocalByteStreamRegistrar@@QEAAJPEAVCSourceResolverHandlerList@@@Z
    long AddAllByteStreamHandlers(CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByteStreamHandlersForFileExtensionOrMimeType@CLocalByteStreamRegistrar@@QEAAJPEBG0PEAVCSourceResolverHandlerList@@@Z
    long AddByteStreamHandlersForFileExtensionOrMimeType(unsigned short const *, unsigned short const *, CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddByteStreamRegistration@CLocalByteStreamRegistrar@@QEAAJPEBG0PEAUIMFActivate@@@Z
    long AddByteStreamRegistration(unsigned short const *, unsigned short const *, IMFActivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CLocalByteStreamRegistrar@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedMimeTypes@CLocalByteStreamRegistrar@@QEAAJPEAUtagPROPVARIANT@@@Z
    long GetSupportedMimeTypes(tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupportedMimeType@CLocalByteStreamRegistrar@@QEAAHPEBG@Z
    int IsSupportedMimeType(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveByteStreamRegistration@CLocalByteStreamRegistrar@@QEAAJPEBG0@Z
    long RemoveByteStreamRegistration(unsigned short const *, unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalByteStreamRegistrar@@QEAA@XZ
    ~CLocalByteStreamRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetActivateForMimeType@CLocalByteStreamRegistrar@@AEAAJPEBGPEAPEAUIMFActivate@@@Z
    long _GetActivateForMimeType(unsigned short const *, IMFActivate * *);
};
