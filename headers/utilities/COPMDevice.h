#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 13 member(s).
namespace MFOpmLib {
class COPMDevice {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0COPMDevice@MFOpmLib@@QEAA@PEAUIUnknown@@@Z
    COPMDevice(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EstablishSession@COPMDevice@MFOpmLib@@UEAAJXZ
    virtual long EstablishSession();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Open@COPMDevice@MFOpmLib@@UEAAJXZ
    virtual long Open();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCertificate@COPMDevice@MFOpmLib@@UEAAJPEBD@Z
    virtual long ProcessCertificate(char const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryMerit@COPMDevice@MFOpmLib@@UEAAJPEBEKPEAK@Z
    virtual long QueryMerit(unsigned char const *, unsigned long, unsigned long *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1COPMDevice@MFOpmLib@@UEAA@XZ
    virtual ~COPMDevice();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteQuery@COPMDevice@MFOpmLib@@IEAAJPEAU?$ZeroBase@U_OPM_GET_INFO_PARAMETERS@@@2@PEAU?$ZeroBase@U_OPM_REQUESTED_INFORMATION@@@2@@Z
    long ExecuteQuery(WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishInitialization@COPMDevice@MFOpmLib@@IEAAJPEBU_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS@@@Z
    long FinishInitialization(_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInformation@COPMDevice@MFOpmLib@@IEAAJPEBU_OPM_GET_INFO_PARAMETERS@@PEAU_OPM_REQUESTED_INFORMATION@@@Z
    long GetInformation(_OPM_GET_INFO_PARAMETERS const *, _OPM_REQUESTED_INFORMATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RSAEncryptOAEP@COPMDevice@MFOpmLib@@IEAAJPEBEKPEAU?$ZeroBase@U_OPM_ENCRYPTED_INITIALIZATION_PARAMETERS@@@2@@Z
    long RSAEncryptOAEP(unsigned char const *, unsigned long, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInitialization@COPMDevice@MFOpmLib@@IEAAJPEAU_OPM_RANDOM_NUMBER@@PEAPEAEPEAK@Z
    long StartInitialization(_OPM_RANDOM_NUMBER *, unsigned char * *, unsigned long *);
};
} // namespace MFOpmLib
