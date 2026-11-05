#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 3 member(s).
class BaseErrorInfoHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Capture@BaseErrorInfoHandler@@UEAAJJ@Z
    virtual long Capture(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get@BaseErrorInfoHandler@@UEAAJPEAPEAUIRestrictedErrorInfo@@@Z
    virtual long Get(IRestrictedErrorInfo * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Set@BaseErrorInfoHandler@@UEAAJPEAUIRestrictedErrorInfo@@@Z
    virtual long Set(IRestrictedErrorInfo *);
};
