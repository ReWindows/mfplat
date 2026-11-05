#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class ErrorInfoHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Capture@ErrorInfoHandler@@UEAAJJ@Z
    virtual long Capture(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@ErrorInfoHandler@@UEAAJPEAPEAUIRestrictedErrorInfo@@@Z
    virtual long Get(IRestrictedErrorInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@ErrorInfoHandler@@UEAAJPEAUIRestrictedErrorInfo@@@Z
    virtual long Set(IRestrictedErrorInfo *);
};
