#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 7 member(s).
class CLocalSchemeRegistrar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSchemeHandlerForScheme@CLocalSchemeRegistrar@@QEAAJPEBGPEAVCSourceResolverHandlerList@@@Z
    long AddSchemeHandlerForScheme(unsigned short const *, CSourceResolverHandlerList *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddSchemeRegistration@CLocalSchemeRegistrar@@QEAAJPEBGPEAUIMFActivate@@@Z
    long AddSchemeRegistration(unsigned short const *, IMFActivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CLocalSchemeRegistrar@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedSchemes@CLocalSchemeRegistrar@@QEAAJPEAUtagPROPVARIANT@@@Z
    long GetSupportedSchemes(tagPROPVARIANT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveSchemeRegistration@CLocalSchemeRegistrar@@QEAAJPEBG@Z
    long RemoveSchemeRegistration(unsigned short const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CLocalSchemeRegistrar@@QEAA@XZ
    ~CLocalSchemeRegistrar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetActivateForScheme@CLocalSchemeRegistrar@@AEAAJPEBGPEAPEAUIMFActivate@@@Z
    long _GetActivateForScheme(unsigned short const *, IMFActivate * *);
};
