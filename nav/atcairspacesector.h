#ifndef ATCAIRSPACESECTOR_H
#define ATCAIRSPACESECTOR_H

#include "atcairspacefix.h"

#include <QString>
#include <QVector>
#include <QGraphicsItem>

class ATCAirspaceSector
{

public:
    explicit ATCAirspaceSector(QString name);
    ~ATCAirspaceSector();

    QString getName();
    ATCAirspaceFix* getCoordinates(int iterator);
    int getCoordinatesVectorSize();
    QGraphicsPolygonItem* getPolygon();

    void setName(QString name);
    void setPolygon(QGraphicsPolygonItem *sectorPolygon);

    void appendAirspaceFix(ATCAirspaceFix *airspaceFix);
    void deleteAllAirspaceFixes();

private:
    QString sectorName;
    QVector<ATCAirspaceFix*> coordinates;
    QGraphicsPolygonItem *polygon = nullptr;

};

#endif // ATCAIRSPACESECTOR_H
