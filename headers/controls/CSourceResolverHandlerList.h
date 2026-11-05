#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 9 member(s).
class CSourceResolverHandlerList {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddGlobalHandler@CSourceResolverHandlerList@@QEAAJAEBU_GUID@@@Z
    long AddGlobalHandler(_GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddLocalHandler@CSourceResolverHandlerList@@QEAAJPEAUIMFActivate@@@Z
    long AddLocalHandler(IMFActivate *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddStoreHandler@CSourceResolverHandlerList@@QEAAJPEAUIUnknown@@PEAG_N@Z
    long AddStoreHandler(IUnknown *, unsigned short *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPreferredAndDontUse@CSourceResolverHandlerList@@QEAAJW4MF_PLUGIN_CONTROL_POLICY@@PEBG1@Z
    long ApplyPreferredAndDontUse(int, unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSourceResolverHandlerList@@QEAA@XZ
    CSourceResolverHandlerList();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextHandler@CSourceResolverHandlerList@@QEAAJPEAVCResolverResult@@AEBU_GUID@@PEAPEAXPEAU3@PEAPEAG@Z
    long GetNextHandler(CResolverResult *, _GUID const &, void * *, _GUID *, unsigned short * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAll@CSourceResolverHandlerList@@QEAAX_N@Z
    void RemoveAll(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSourceResolverHandlerList@@QEAA@XZ
    ~CSourceResolverHandlerList();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandlerToList@CSourceResolverHandlerList@@IEAAJAEAV?$CTUnkArray@UIUnknown@@@@PEAUIUnknown@@AEAV?$MFDynamicArray@PEAG@@PEAG@Z
    long AddHandlerToList(WindissectOpaque &, IUnknown *, WindissectOpaque &, unsigned short *);
};
