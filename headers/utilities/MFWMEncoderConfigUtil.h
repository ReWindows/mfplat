#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 5 member(s).
class MFWMEncoderConfigUtil {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAudioCodecDataIfNeeded@MFWMEncoderConfigUtil@@YAJPEAUIMFMediaType@@PEAUIMFTransform@@PEAHPEAPEAU2@@Z
    long AddAudioCodecDataIfNeeded(IMFMediaType *, IMFTransform *, int *, IMFMediaType * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceConformancePropertyToWMVEncoder@MFWMEncoderConfigUtil@@YAJPEAUIMFAttributes@@PEAUIPropertyStore@@@Z
    long SetDeviceConformancePropertyToWMVEncoder(IMFAttributes *, IPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOutputTypeToWMVEncoder@MFWMEncoderConfigUtil@@YAJPEAUIMFMediaType@@PEAUIMFTransform@@@Z
    long SetOutputTypeToWMVEncoder(IMFMediaType *, IMFTransform *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualityVsSpeedPropertyToWMAEncoder@MFWMEncoderConfigUtil@@YAJPEAUIMFAttributes@@PEAUIPropertyStore@@@Z
    long SetQualityVsSpeedPropertyToWMAEncoder(IMFAttributes *, IPropertyStore *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetQualityVsSpeedPropertyToWMVEncoder@MFWMEncoderConfigUtil@@YAJAEBU_GUID@@PEAUIMFAttributes@@PEAUIPropertyStore@@@Z
    long SetQualityVsSpeedPropertyToWMVEncoder(_GUID const &, IMFAttributes *, IPropertyStore *);
};
