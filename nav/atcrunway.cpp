#include "atcrunway.h"

#include <QDebug>

ATCRunway::ATCRunway(QString id1, QString id2, unsigned int hdg1, unsigned int hdg2,
                     double startLat, double startLon, double endLat, double endLon) :
    rwyID1(id1),
    rwyID2(id2),
    magneticHDG1(hdg1),
    magneticHDG2(hdg2),
    startPoint(startLat, startLon),
    endPoint(endLat, endLon)
{
}

ATCRunway::~ATCRunway()
{
    if(extendedCentreline1 != nullptr) delete extendedCentreline1;
    if(extendedCentreline2 != nullptr) delete extendedCentreline2;
}

QString ATCRunway::getRunwayID1()
{
    return rwyID1;
}

QString ATCRunway::getRunwayID2()
{
    return rwyID2;
}

unsigned int ATCRunway::getMagneticHDG1()
{
    return magneticHDG1;
}

unsigned int ATCRunway::getMagneticHDG2()
{
    return magneticHDG2;
}

QGeoCoordinate& ATCRunway::getStartPoint()
{
    return startPoint;
}

QGeoCoordinate& ATCRunway::getEndPoint()
{
    return endPoint;
}

ATCRunwayExtendedCentreline* ATCRunway::getExtendedCentreline1()
{
    return extendedCentreline1;
}

ATCRunwayExtendedCentreline* ATCRunway::getExtendedCentreline2()
{
    return extendedCentreline2;
}

double ATCRunway::getAzimuth()
{
    return azimuth;
}

void ATCRunway::setExtendedCentreline1(ATCRunwayExtendedCentreline *centreline)
{
    extendedCentreline1 = centreline;
}

void ATCRunway::setExtendedCentreline2(ATCRunwayExtendedCentreline *centreline)
{
    extendedCentreline2 = centreline;
}

void ATCRunway::setAzimuth(double azRad)
{
    azimuth = azRad;
}
