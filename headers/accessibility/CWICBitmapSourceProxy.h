#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 19 member(s).
class CWICBitmapSourceProxy {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWICBitmapSourceProxy@@QEAA@XZ
    CWICBitmapSourceProxy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPalette@CWICBitmapSourceProxy@@UEAAJPEAUIWICPalette@@@Z
    virtual long CopyPalette(IWICPalette *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyPixels@CWICBitmapSourceProxy@@UEAAJPEBUWICRect@@IIPEAE@Z
    virtual long CopyPixels(WICRect const *, unsigned int, unsigned int, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetColorContexts@CWICBitmapSourceProxy@@UEAAJIPEAPEAUIWICColorContext@@PEAI@Z
    virtual long GetColorContexts(unsigned int, IWICColorContext * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerFormat@CWICBitmapSourceProxy@@UEAAJPEAU_GUID@@@Z
    virtual long GetContainerFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CWICBitmapSourceProxy@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEnumerator@CWICBitmapSourceProxy@@UEAAJPEAPEAUIEnumUnknown@@@Z
    virtual long GetEnumerator(IEnumUnknown * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMetadataQueryReader@CWICBitmapSourceProxy@@UEAAJPEAPEAUIWICMetadataQueryReader@@@Z
    virtual long GetMetadataQueryReader(IWICMetadataQueryReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPixelFormat@CWICBitmapSourceProxy@@UEAAJPEAU_GUID@@@Z
    virtual long GetPixelFormat(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReaderByIndex@CWICBitmapSourceProxy@@UEAAJIPEAPEAUIWICMetadataReader@@@Z
    virtual long GetReaderByIndex(unsigned int, IWICMetadataReader * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResolution@CWICBitmapSourceProxy@@UEAAJPEAN0@Z
    virtual long GetResolution(double *, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@CWICBitmapSourceProxy@@UEAAJPEAI0@Z
    virtual long GetSize(unsigned int *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThumbnail@CWICBitmapSourceProxy@@UEAAJPEAPEAUIWICBitmapSource@@@Z
    virtual long GetThumbnail(IWICBitmapSource * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CWICBitmapSourceProxy@@QEAAJPEAVCWICDecoderProxy@@KW4BitmapSourceType@@@Z
    long RuntimeClassInitialize(CWICDecoderProxy *, unsigned long, int);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWICBitmapSource@CWICBitmapSourceProxy@@IEAAJPEAPEAUIWICBitmapSource@@@Z
    long GetWICBitmapSource(IWICBitmapSource * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWICBitmapSourceProxy@@MEAA@XZ
    virtual ~CWICBitmapSourceProxy();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CachePixels@CWICBitmapSourceProxy@@AEAAJAEBUtagRECT@@@Z
    long CachePixels(tagRECT const &);
};
