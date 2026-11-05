#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 74 member(s).
namespace Windows::Media::MediaProperties {
class CVideoProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CVideoProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CVideoProperties@MediaProperties@Media@Windows@@QEAA@XZ
    CVideoProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIVideoEncodingProperties@234@@Z
    virtual long Copy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatUserData@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetFormatUserData(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CVideoProperties@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CVideoProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatUserData@CVideoProperties@MediaProperties@Media@Windows@@UEAAJIPEAE@Z
    virtual long SetFormatUserData(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bitrate@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Bitrate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FrameRate@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIMediaRatio@234@@Z
    virtual long get_FrameRate(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Height@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Height(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InitialSphericalVideoViewOrientation@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAUQuaternion@Numerics@Foundation@4@@Z
    virtual long get_InitialSphericalVideoViewOrientation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PixelAspectRatio@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIMediaRatio@234@@Z
    virtual long get_PixelAspectRatio(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ProfileId@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAH@Z
    virtual long get_ProfileId(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SphericalVideoFrameFormat@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAW4SphericalVideoFrameFormat@234@@Z
    virtual long get_SphericalVideoFrameFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_StereoscopicVideoPackingMode@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAW4StereoscopicVideoPackingMode@234@@Z
    virtual long get_StereoscopicVideoPackingMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subtype@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Subtype(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Width(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bitrate@CVideoProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Bitrate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Height@CVideoProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Height(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ProfileId@CVideoProperties@MediaProperties@Media@Windows@@UEAAJH@Z
    virtual long put_ProfileId(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Subtype@CVideoProperties@MediaProperties@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Subtype(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@CVideoProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Width(unsigned int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CVideoProperties@MediaProperties@Media@Windows@@IEAAJAEBU_GUID@@IIIIIII@Z
    long _Initialize(_GUID const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetDefaultAttributes@CVideoProperties@MediaProperties@Media@Windows@@CAJAEBU_GUID@@PEAVCMediaPropertySet@234@@Z
    static long _SetDefaultAttributes(_GUID const &, WindissectOpaque *);
};
} // namespace Windows::Media::MediaProperties
