#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 2 member(s).
namespace Windows::Media {
class MediaProperties {
public:
    class CAudioProperties;
    class CImageProperties;
    class CMediaProperties;
    class CMediaPropertySet;
    class CRatio;
    class CTimedMetadataProperties;
    class CVideoProperties;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAttribute@MediaProperties@Media@Windows@@YAJAEBU_GUID@@PEAUIInspectable@@PEAUIMFAttributes@@@Z
    long AddAttribute(_GUID const &, IInspectable *, IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CastDoubleAttribute@MediaProperties@Media@Windows@@YAJAEBU_GUID@@NPEAUtagPROPVARIANT@@PEA_N@Z
    long CastDoubleAttribute(_GUID const &, double, tagPROPVARIANT *, bool *);
};
} // namespace Windows::Media
