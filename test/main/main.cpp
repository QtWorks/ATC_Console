//----------Submodule: nav----------
#include "test_atcabstractairway.h"
#include "test_atcabstractbeacon.h"
#include "test_atcabstractfix.h"
#include "test_atcabstractprocedure.h"
#include "test_atcabstractproceduresymbol.h"
#include "test_atcabstractsector.h"

#include "test_atcairport.h"
#include "test_atcairspace.h"
#include "test_atcairspacefix.h"
#include "test_atcairspacesector.h"
#include "test_atcairwayhigh.h"
#include "test_atcairwaylow.h"
#include "test_atcbeaconndb.h"
#include "test_atcbeaconvor.h"
#include "test_atcnavfix.h"
#include "test_atcproceduresid.h"
#include "test_atcproceduresidsymbol.h"
#include "test_atcprocedurestar.h"
#include "test_atcprocedurestarsymbol.h"
#include "test_atcrunway.h"
#include "test_atcrunwayextendedcentreline.h"
#include "test_atcsectorartcc.h"
#include "test_atcsectorartcchigh.h"
#include "test_atcsectorartcclow.h"

//----------Submodule: flight----------
#include "test_atccompany.h"
#include "test_atccompanyfactory.h"
#include "test_atcaircrafttype.h"
#include "test_atcaircrafttypefactory.h"
#include "test_atcroute.h"
#include "test_atcroutefactory.h"
#include "test_atcflightplan.h"
#include "test_atcflightnumberfactory.h"
#include "test_atcflightplanfactory.h"
#include "test_atcflight.h"
#include "test_atcflightfactory.h"
#include "test_atcsimulation.h"
#include "test_atcflighttag.h"
#include "test_atcrouteprediction.h"
#include "test_atcactiverunways.h"
#include "test_atcabstractprofile.h"
#include "test_atcprofileclimb.h"
#include "test_atcprofiledescent.h"
#include "test_atcprofilespeed.h"
#include "test_atcprofileapproach.h"

//----------Submodule: utils----------
#include "test_atcmath.h"
#include "test_atcinterpolator.h"
#include "test_atcinterpolator2d.h"

#include <QThread>

int main(int argc, char *argv[])
{
    QVector<bool> failed;

//Test suites are declared here
    //----------Submodule: nav----------
    Test_ATCAbstractAirway test_ATCAbstractAirway;
    Test_ATCAbstractBeacon test_ATCAbstractBeacon;
    Test_ATCAbstractFix test_ATCAbstractFix;
    Test_ATCAbstractProcedure test_ATCAbstractProcedure;
    Test_ATCAbstractProcedureSymbol test_ATCAbstractProcedureSymbol;
    Test_ATCAbstractSector test_ATCAbstractSector;

    Test_ATCAirport test_ATCAirport;
    Test_ATCAirspace test_ATCAirspace;
    Test_ATCAirspaceFix test_ATCAirspaceFix;
    Test_ATCAirspaceSector test_ATCAirspaceSector;
    Test_ATCAirwayHigh test_ATCAirwayHigh;
    Test_ATCAirwayLow test_ATCAirwayLow;
    Test_ATCBeaconNDB test_ATCBeaconNDB;
    Test_ATCBeaconVOR test_ATCBeaconVOR;
    Test_ATCNavFix test_ATCNavFix;
    Test_ATCProcedureSID test_ATCProcedureSID;
    Test_ATCProcedureSIDSymbol test_ATCProcedureSIDSymbol;
    Test_ATCProcedureSTAR test_ATCProcedureSTAR;
    Test_ATCProcedureSTARSymbol test_ATCProcedureSTARSymbol;
    Test_ATCRunway test_ATCRunway;
    Test_ATCRunwayExtendedCentreline test_ATCRunwayExtendedCentreline;
    Test_ATCSectorARTCC test_ATCSectorARTCC;
    Test_ATCSectorARTCCHigh test_ATCSectorARTCCHigh;
    Test_ATCSectorARTCCLow test_ATCSectorARTCCLow;

    //----------Submodule: flight----------
    Test_ATCCompany test_ATCCompany;
    Test_ATCCompanyFactory test_ATCCompanyFactory;
    Test_ATCAircraftType test_ATCAircraftType;
    Test_ATCAircraftTypeFactory test_ATCAircraftTypeFactory;
    Test_ATCRoute test_ATCRoute;
    Test_ATCRouteFactory test_ATCRouteFactory;
    Test_ATCFlightPlan test_ATCFlightPlan;
    Test_ATCFlightNumberFactory test_ATCFlightNumberFactory;
    Test_ATCFlightPlanFactory test_ATCFlightPlanFactory;
    Test_ATCFlight test_ATCFlight;
    Test_ATCFlightFactory test_ATCFlightFactory;
    Test_ATCSimulation test_ATCSimulation;
    Test_ATCFlightTag test_ATCFlightTag;
    Test_ATCRoutePrediction test_ATCRoutePrediction;
    Test_ATCActiveRunways test_ATCActiveRunways;
    Test_ATCAbstractProfile test_ATCAbstractProfile;
    Test_ATCProfileClimb test_ATCProfileClimb;
    Test_ATCProfileDescent test_ATCProfileDescent;
    Test_ATCProfileSpeed test_ATCProfileSpeed;
    Test_ATCProfileApproach test_ATCProfileApproach;

    //----------Submodule: utils----------
    Test_ATCMath test_ATCMath;
    Test_ATCInterpolator test_ATCInterpolator;
    Test_ATCInterpolator2D test_ATCInterpolator2D;

//Test suites are declared here
    //----------Submodule: nav----------
    failed.append(QTest::qExec(&test_ATCAbstractAirway, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractBeacon, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractFix, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractProcedure, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractProcedureSymbol, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractSector, argc, argv));

    failed.append(QTest::qExec(&test_ATCAirport, argc, argv));
    failed.append(QTest::qExec(&test_ATCAirspace, argc, argv));
    failed.append(QTest::qExec(&test_ATCAirspaceFix, argc, argv));
    failed.append(QTest::qExec(&test_ATCAirspaceSector, argc, argv));
    failed.append(QTest::qExec(&test_ATCAirwayHigh, argc, argv));
    failed.append(QTest::qExec(&test_ATCAirwayLow, argc, argv));
    failed.append(QTest::qExec(&test_ATCBeaconNDB, argc, argv));
    failed.append(QTest::qExec(&test_ATCBeaconVOR, argc, argv));
    failed.append(QTest::qExec(&test_ATCNavFix, argc, argv));
    failed.append(QTest::qExec(&test_ATCProcedureSID, argc, argv));
    failed.append(QTest::qExec(&test_ATCProcedureSIDSymbol, argc, argv));
    failed.append(QTest::qExec(&test_ATCProcedureSTAR, argc, argv));
    failed.append(QTest::qExec(&test_ATCProcedureSTARSymbol, argc, argv));
    failed.append(QTest::qExec(&test_ATCRunway, argc, argv));
    failed.append(QTest::qExec(&test_ATCRunwayExtendedCentreline, argc, argv));
    failed.append(QTest::qExec(&test_ATCSectorARTCC, argc, argv));
    failed.append(QTest::qExec(&test_ATCSectorARTCCHigh, argc, argv));
    failed.append(QTest::qExec(&test_ATCSectorARTCCLow, argc, argv));

    //----------Submodule: flight----------
    failed.append(QTest::qExec(&test_ATCCompany, argc, argv));
    failed.append(QTest::qExec(&test_ATCCompanyFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCAircraftType, argc, argv));
    failed.append(QTest::qExec(&test_ATCAircraftTypeFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCRoute, argc, argv));
    failed.append(QTest::qExec(&test_ATCRouteFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlightPlan, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlightNumberFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlightPlanFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlight, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlightFactory, argc, argv));
    failed.append(QTest::qExec(&test_ATCSimulation, argc, argv));
    failed.append(QTest::qExec(&test_ATCFlightTag, argc, argv));
    failed.append(QTest::qExec(&test_ATCRoutePrediction, argc,argv));
    failed.append(QTest::qExec(&test_ATCActiveRunways, argc, argv));
    failed.append(QTest::qExec(&test_ATCAbstractProfile, argc, argv));
    failed.append(QTest::qExec(&test_ATCProfileClimb, argc, argv));
    failed.append(QTest::qExec(&test_ATCProfileDescent, argc, argv));
    failed.append(QTest::qExec(&test_ATCProfileSpeed, argc, argv));
    failed.append(QTest::qExec(&test_ATCProfileApproach, argc, argv));

    //----------Submodule: utils----------
    failed.append(QTest::qExec(&test_ATCMath, argc, argv));
    failed.append(QTest::qExec(&test_ATCInterpolator, argc, argv));
    failed.append(QTest::qExec(&test_ATCInterpolator2D, argc, argv));

    QThread::msleep(1000);

    bool flag = false;

    for(int i = 0; i < failed.size(); i++)
    {
        if(failed.at(i))
        {
            qDebug() << "At least one test FAILED! @ Suite: " << i + 1;
            flag = true;
        }
    }

    if(!flag)
    {
        qDebug() << "All tests PASSED!";
    }

    return 0;
}
