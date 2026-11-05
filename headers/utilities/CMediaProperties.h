#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 4 member(s).
namespace Windows::Media::MediaProperties {
class CMediaProperties {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaProperties@MediaProperties@Media@Windows@@QEAA@XZ
    CMediaProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Properties@CMediaProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAU?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    virtual long get_Properties(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaProperties@MediaProperties@Media@Windows@@QEAA@XZ
    ~CMediaProperties();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Duplicate@CMediaProperties@MediaProperties@Media@Windows@@IEAAJPEAV1234@@Z
    long _Duplicate(WindissectOpaque *);
};
} // namespace Windows::Media::MediaProperties
