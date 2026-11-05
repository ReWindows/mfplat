#pragma once
#include "../windissect_forwards.h"

// Reconstructed from mfplat.dll by Windissect. 10 member(s).
class CUri {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtension@CUri@@QEAAJAEAV?$CMFBaseStringT@G@@@Z
    long GetExtension(WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownScheme@CUri@@QEBA?AW4SCHEME@1@XZ
    int GetKnownScheme() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKnownScheme@CUri@@SA?AW4SCHEME@1@PEBG@Z
    static int GetKnownScheme(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScheme@CUri@@QEBAJAEAV?$CMFBaseStringT@G@@@Z
    long GetScheme(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Parse@CUri@@QEAAJPEBGJ@Z
    long Parse(unsigned short const *, long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CUri@@QEAA@XZ
    ~CUri();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckSchemeName@CUri@@IEAAHXZ
    int CheckSchemeName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParseHostName@CUri@@IEAAJAEAV?$CStringReaderT@G@@@Z
    long ParseHostName(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetUrlPath@CUri@@IEBAJAEAV?$CMFBaseStringT@G@@@Z
    long _GetUrlPath(WindissectOpaque &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Parse@CUri@@IEAAJPEBGJ@Z
    long _Parse(unsigned short const *, long);
};
