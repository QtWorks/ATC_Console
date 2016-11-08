#ifndef ATCFLAGS_H
#define ATCFLAGS_H

namespace ATC {

enum ATCDialogType
{
    TextConsole, Default
};

enum AircraftType
{
    Civil, Military
};

enum EngineType
{
    Jet, Turboprop, Piston
};

enum WakeCategory
{
    J, H, M, L
};

enum FlightRules
{
    IFR, VFR, SVFR
};
}

#endif // ATCFLAGS_H