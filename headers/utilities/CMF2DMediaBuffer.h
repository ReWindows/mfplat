#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 55 member(s).
class CMF2DMediaBuffer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CMF2DMediaBuffer@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearUnusedBufferNotification@CMF2DMediaBuffer@@UEAAJXZ
    virtual long ClearUnusedBufferNotification();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyFrom@CMF2DMediaBuffer@@UEAAJPEBEK@Z
    virtual long ContiguousCopyFrom(unsigned char const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyFrom2@CMF2DMediaBuffer@@UEAAJPEBEKJ@Z
    virtual long ContiguousCopyFrom2(unsigned char const *, unsigned long, long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContiguousCopyTo@CMF2DMediaBuffer@@UEAAJPEAEK@Z
    virtual long ContiguousCopyTo(unsigned char *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Copy2DTo@CMF2DMediaBuffer@@UEAAJPEAUIMF2DBuffer2@@@Z
    virtual long Copy2DTo(IMF2DBuffer2*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContiguousLength@CMF2DMediaBuffer@@UEAAJPEAK@Z
    virtual long GetContiguousLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentLength@CMF2DMediaBuffer@@UEAAJPEAK@Z
    virtual long GetCurrentLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxLength@CMF2DMediaBuffer@@UEAAJPEAK@Z
    virtual long GetMaxLength(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScanline0AndPitch@CMF2DMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long GetScanline0AndPitch(unsigned char * *, long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetService@CMF2DMediaBuffer@@UEAAJAEBU_GUID@@0PEAPEAX@Z
    virtual long GetService(_GUID const &, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsBufferReadOnly@CMF2DMediaBuffer@@UEAAHXZ
    virtual int IsBufferReadOnly();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContiguousFormat@CMF2DMediaBuffer@@UEAAJPEAH@Z
    virtual long IsContiguousFormat(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock@CMF2DMediaBuffer@@UEAAJPEAPEAEPEAK1@Z
    virtual long Lock(unsigned char * *, unsigned long *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2D@CMF2DMediaBuffer@@UEAAJPEAPEAEPEAJ@Z
    virtual long Lock2D(unsigned char * *, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lock2DSize@CMF2DMediaBuffer@@UEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ1PEAK@Z
    virtual long Lock2DSize(int, unsigned char * *, long *, unsigned char * *, unsigned long *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CMF2DMediaBuffer@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterUnusedBufferNotification@CMF2DMediaBuffer@@UEAAJPEAUIMFAsyncCallback@@PEAUIUnknown@@J@Z
    virtual long RegisterUnusedBufferNotification(IMFAsyncCallback *, IUnknown *, long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CMF2DMediaBuffer@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetBuffer@CMF2DMediaBuffer@@UEAAJXZ
    virtual long ResetBuffer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferReadOnly@CMF2DMediaBuffer@@UEAAJH@Z
    virtual long SetBufferReadOnly(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCurrentLength@CMF2DMediaBuffer@@UEAAJK@Z
    virtual long SetCurrentLength(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIgnoreKeyedMutex@CMF2DMediaBuffer@@UEAAJH@Z
    virtual long SetIgnoreKeyedMutex(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUnusedBufferNotificationEnabled@CMF2DMediaBuffer@@UEAAJH@Z
    virtual long SetUnusedBufferNotificationEnabled(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock@CMF2DMediaBuffer@@UEAAJXZ
    virtual long Unlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlock2D@CMF2DMediaBuffer@@UEAAJXZ
    virtual long Unlock2D();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMF2DMediaBuffer@@IEAA@KKKHPEAJ@Z
    CMF2DMediaBuffer(unsigned long, unsigned long, unsigned long, int, long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePlaneSize@CMF2DMediaBuffer@@IEBAKJ@Z
    unsigned long ComputePlaneSize(long) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalCopyBuffer@CMF2DMediaBuffer@@IEAAJPEAVCBuffer@MFBUFFER@@JPEAVCBufferRO@3@J@Z
    long InternalCopyBuffer(::MFBUFFER::CBuffer *, long, ::MFBUFFER::CBufferRO *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMF2DMediaBuffer@@MEAA@XZ
    virtual ~CMF2DMediaBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoLock2DSize@CMF2DMediaBuffer@@AEAAJW4_MF2DBuffer_LockFlags@@PEAPEAEPEAJ1PEAK@Z
    long DoLock2DSize(int, unsigned char * *, long *, unsigned char * *, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoUnlock2D@CMF2DMediaBuffer@@AEAAJXZ
    long DoUnlock2D();
};
