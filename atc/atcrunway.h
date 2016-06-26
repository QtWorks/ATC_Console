#ifndef ATCRUNWAY_H
#define ATCRUNWAY_H

#include <QGeoCoordinate>

class ATCRunway
{
public:
    explicit ATCRunway(QString id1, QString id2, unsigned int hdg1, unsigned int hdg2,
                       double startLat, double startLon, double endLat, double endLon);
    ~ATCRunway();

    QString getRunwayID1();
    QString getRunwayID2();
    unsigned int getMagneticHDG1();
    unsigned int getMagneticHDG2();
    QGeoCoordinate& getStartPoint();
    QGeoCoordinate& getEndPoit();

private:
    QString rwyID1;
    QString rwyID2;

    unsigned int magneticHDG1;
    unsigned int magneticHDG2;

    QGeoCoordinate startPoint;
    QGeoCoordinate endPoint;
};

#endif // ATCRUNWAY_H
