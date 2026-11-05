#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 37 member(s).
namespace Windows::Media::MediaProperties {
class CImageProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CImageProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIImageEncodingProperties@234@@Z
    virtual long Copy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CImageProperties@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CImageProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Height(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subtype@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Subtype(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Width(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CImageProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Subtype@CImageProperties@MediaProperties@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Subtype(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CImageProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Width(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CImageProperties@MediaProperties@Media@Windows@@IEAAJAEBU_GUID@@II@Z
    long _Initialize(_GUID const &, unsigned int, unsigned int);
};
} // namespace Windows::Media::MediaProperties
