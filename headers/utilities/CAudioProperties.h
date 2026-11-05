#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 61 member(s).
namespace Windows::Media::MediaProperties {
class CAudioProperties {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CAudioProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CAudioProperties@MediaProperties@Media@Windows@@QEAA@XZ
    CAudioProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUIAudioEncodingProperties@234@@Z
    virtual long Copy(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFormatUserData@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAIPEAPEAE@Z
    virtual long GetFormatUserData(unsigned int *, unsigned char * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CAudioProperties@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CAudioProperties@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFormatUserData@CAudioProperties@MediaProperties@Media@Windows@@UEAAJIPEAE@Z
    virtual long SetFormatUserData(unsigned int, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Bitrate@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Bitrate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_BitsPerSample@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_BitsPerSample(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ChannelCount@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_ChannelCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSpatial@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAE@Z
    virtual long get_IsSpatial(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SampleRate@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_SampleRate(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Subtype@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Subtype(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Type(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Bitrate@CAudioProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Bitrate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_BitsPerSample@CAudioProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_BitsPerSample(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ChannelCount@CAudioProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_ChannelCount(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SampleRate@CAudioProperties@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_SampleRate(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Subtype@CAudioProperties@MediaProperties@Media@Windows@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Subtype(HSTRING__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CAudioProperties@MediaProperties@Media@Windows@@IEAAJAEBU_GUID@@IIII@Z
    long _Initialize(_GUID const &, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_UpdateBlockAlignment@CAudioProperties@MediaProperties@Media@Windows@@IEAAJXZ
    long _UpdateBlockAlignment();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_BitsPerSample@CAudioProperties@MediaProperties@Media@Windows@@IEAAJPEAI@Z
    long _get_BitsPerSample(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_get_ChannelCount@CAudioProperties@MediaProperties@Media@Windows@@IEAAJPEAI@Z
    long _get_ChannelCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_put_BitsPerSample@CAudioProperties@MediaProperties@Media@Windows@@IEAAJI@Z
    long _put_BitsPerSample(unsigned int);
};
} // namespace Windows::Media::MediaProperties
