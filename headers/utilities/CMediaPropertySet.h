#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 42 member(s).
namespace Windows::Media::MediaProperties {
class CMediaPropertySet {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMediaPropertySet@MediaProperties@Media@Windows@@QEAA@XZ
    CMediaPropertySet();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAPEAU?$IIterator@PEAU?$IKeyValuePair@U_GUID@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@4@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAPEAU?$IMapView@U_GUID@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKey@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJU_GUID@@PEAE@Z
    virtual long HasKey(_GUID, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Insert@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJU_GUID@@PEAUIInspectable@@PEAE@Z
    virtual long Insert(_GUID, IInspectable *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJU_GUID@@PEAPEAUIInspectable@@@Z
    virtual long Lookup(_GUID, IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJU_GUID@@@Z
    virtual long Remove(_GUID);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsModified@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAE@Z
    virtual long get_IsModified(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_IsModified@CMediaPropertySet@MediaProperties@Media@Windows@@UEAAJE@Z
    virtual long put_IsModified(unsigned char);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMediaPropertySet@MediaProperties@Media@Windows@@UEAA@XZ
    virtual ~CMediaPropertySet();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMediaPropertySet@MediaProperties@Media@Windows@@IEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CMediaPropertySet@MediaProperties@Media@Windows@@IEAAJPEAU?$IMap@U_GUID@@PEAUIInspectable@@@Collections@Foundation@4@@Z
    long _Initialize(WindissectOpaque *);
};
} // namespace Windows::Media::MediaProperties
