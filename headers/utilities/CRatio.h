#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 21 member(s).
namespace Windows::Media::MediaProperties {
class CRatio {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CRatio@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CRatio@MediaProperties@Media@Windows@@QEAA@PEAVCMediaPropertySet@123@AEBU_GUID@@@Z
    CRatio(WindissectOpaque *, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CRatio@MediaProperties@Media@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CRatio@MediaProperties@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CRatio@MediaProperties@Media@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CRatio@MediaProperties@Media@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CRatio@MediaProperties@Media@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Denominator@CRatio@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Denominator(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Numerator@CRatio@MediaProperties@Media@Windows@@UEAAJPEAI@Z
    virtual long get_Numerator(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Denominator@CRatio@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Denominator(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Numerator@CRatio@MediaProperties@Media@Windows@@UEAAJI@Z
    virtual long put_Numerator(unsigned int);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CRatio@MediaProperties@Media@Windows@@MEAA@XZ
    virtual ~CRatio();
};
} // namespace Windows::Media::MediaProperties
