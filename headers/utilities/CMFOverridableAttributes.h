#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 35 member(s).
class CMFOverridableAttributes {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Compare@CMFOverridableAttributes@@UEAAJPEAUIMFAttributes@@W4_MF_ATTRIBUTES_MATCH_TYPE@@PEAH@Z
    virtual long Compare(IMFAttributes *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItem@CMFOverridableAttributes@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@PEAH@Z
    virtual long CompareItem(_GUID const &, tagPROPVARIANT const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyAllItems@CMFOverridableAttributes@@UEAAJPEAUIMFAttributes@@@Z
    virtual long CopyAllItems(IMFAttributes *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteAllItems@CMFOverridableAttributes@@UEAAJXZ
    virtual long DeleteAllItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteItem@CMFOverridableAttributes@@UEAAJAEBU_GUID@@@Z
    virtual long DeleteItem(_GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedBlob@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAPEAEPEAI@Z
    virtual long GetAllocatedBlob(_GUID const &, unsigned char * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllocatedString@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAPEAGPEAI@Z
    virtual long GetAllocatedString(_GUID const &, unsigned short * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlob@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAEIPEAI@Z
    virtual long GetBlob(_GUID const &, unsigned char *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlobSize@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetBlobSize(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CMFOverridableAttributes@@UEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDouble@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAN@Z
    virtual long GetDouble(_GUID const &, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGUID@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAU2@@Z
    virtual long GetGUID(_GUID const &, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItem@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItem(_GUID const &, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemByIndex@CMFOverridableAttributes@@UEAAJIPEAU_GUID@@PEAUtagPROPVARIANT@@@Z
    virtual long GetItemByIndex(unsigned int, _GUID *, tagPROPVARIANT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemType@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAW4_MF_ATTRIBUTE_TYPE@@@Z
    virtual long GetItemType(_GUID const &, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetString@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAGIPEAI@Z
    virtual long GetString(_GUID const &, unsigned short *, unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringLength@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetStringLength(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT32@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAI@Z
    virtual long GetUINT32(_GUID const &, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUINT64@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEA_K@Z
    virtual long GetUINT64(_GUID const &, uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnknown@CMFOverridableAttributes@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetUnknown(_GUID const &, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockStore@CMFOverridableAttributes@@UEAAJXZ
    virtual long LockStore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CMFOverridableAttributes@@QEAAJPEAUIMFAttributes@@@Z
    long RuntimeClassInitialize(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlob@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEBEI@Z
    virtual long SetBlob(_GUID const &, unsigned char const *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDouble@CMFOverridableAttributes@@UEAAJAEBU_GUID@@N@Z
    virtual long SetDouble(_GUID const &, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGUID@CMFOverridableAttributes@@UEAAJAEBU_GUID@@0@Z
    virtual long SetGUID(_GUID const &, _GUID const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetItem@CMFOverridableAttributes@@UEAAJAEBU_GUID@@AEBUtagPROPVARIANT@@@Z
    virtual long SetItem(_GUID const &, tagPROPVARIANT const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMFTAttributes@CMFOverridableAttributes@@QEAAJPEAUIMFAttributes@@@Z
    long SetMFTAttributes(IMFAttributes *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetString@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEBG@Z
    virtual long SetString(_GUID const &, unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT32@CMFOverridableAttributes@@UEAAJAEBU_GUID@@I@Z
    virtual long SetUINT32(_GUID const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUINT64@CMFOverridableAttributes@@UEAAJAEBU_GUID@@_K@Z
    virtual long SetUINT64(_GUID const &, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnknown@CMFOverridableAttributes@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z
    virtual long SetUnknown(_GUID const &, IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlockStore@CMFOverridableAttributes@@UEAAJXZ
    virtual long UnlockStore();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMFOverridableAttributes@@UEAA@XZ
    virtual ~CMFOverridableAttributes();
};
