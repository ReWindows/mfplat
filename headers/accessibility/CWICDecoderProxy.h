#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 20 member(s).
class CWICDecoderProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWICDecoderProxy@@QEAA@XZ
    CWICDecoderProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@CWICDecoderProxy@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorContexts@CWICDecoderProxy@@UEAAJIPEAPEAUIWICColorContext@@PEAI@Z
    virtual long GetColorContexts(unsigned int, IWICColorContext * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerFormat@CWICDecoderProxy@@UEAAJPEAU_GUID@@@Z
    virtual long GetContainerFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDecoderInfo@CWICDecoderProxy@@UEAAJPEAPEAUIWICBitmapDecoderInfo@@@Z
    virtual long GetDecoderInfo(IWICBitmapDecoderInfo * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrame@CWICDecoderProxy@@UEAAJIPEAPEAUIWICBitmapFrameDecode@@@Z
    virtual long GetFrame(unsigned int, IWICBitmapFrameDecode * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrameCount@CWICDecoderProxy@@UEAAJPEAI@Z
    virtual long GetFrameCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataQueryReader@CWICDecoderProxy@@UEAAJPEAPEAUIWICMetadataQueryReader@@@Z
    virtual long GetMetadataQueryReader(IWICMetadataQueryReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredVendor@CWICDecoderProxy@@UEAAJPEAU_GUID@@@Z
    virtual long GetPreferredVendor(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreview@CWICDecoderProxy@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetPreview(IWICBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CWICDecoderProxy@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetThumbnail(IWICBitmapSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICDecoder@CWICDecoderProxy@@QEAAJPEAPEAUIWICBitmapDecoder@@PEA_N@Z
    long GetWICDecoder(IWICBitmapDecoder * *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CWICDecoderProxy@@UEAAJPEAUIStream@@W4WICDecodeOptions@@@Z
    virtual long Initialize(IStream *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCapability@CWICDecoderProxy@@UEAAJPEAUIStream@@PEAK@Z
    virtual long QueryCapability(IStream *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWICDecoderProxy@@QEAAJU_GUID@@PEAUIMFActivate@@@Z
    long RuntimeClassInitialize(_GUID, IMFActivate *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredVendor@CWICDecoderProxy@@UEAAJAEBU_GUID@@@Z
    virtual long SetPreferredVendor(_GUID const &);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppStateChangeNotificationCallback@CWICDecoderProxy@@KAXEPEAX@Z
    static void AppStateChangeNotificationCallback(unsigned char, void *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWICDecoderProxy@@MEAA@XZ
    virtual ~CWICDecoderProxy();
};
