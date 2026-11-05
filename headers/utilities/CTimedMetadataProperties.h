#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 29 member(s).
namespace Windows::Media::MediaProperties {
class CTimedMetadataProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIMediaEncodingProperties@234@@Z
    virtual long Copy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatUserData@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetFormatUserData(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatUserData@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJIPEAE@Z
    virtual long SetFormatUserData(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subtype@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Subtype(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Subtype@CTimedMetadataProperties@MediaProperties@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Subtype(HSTRING__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CTimedMetadataProperties@MediaProperties@Media@Windows@@AEAAJAEBU_GUID@@@Z
    long _Initialize(_GUID const &);
};
} // namespace Windows::Media::MediaProperties
