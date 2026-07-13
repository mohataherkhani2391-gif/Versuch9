#ifndef MAP_H
#define MAP_H

#include "city.h"
#include "abstractmap.h"
#include "street.h"

class Map: public AbstractMap
{
public:
    Map();
    void addCity(City* city);
    void draw(QGraphicsScene& scene);
    bool addStreet(Street* street);
    City* findCity(const QString cityName);
    QVector<Street*> getStreetList(const City* city) const;
    City* getOppositeCity(const Street* street, const City* city) const;
private:
    QList<City*> cities;
    QList<Street*> streets;

};

#endif // MAP_H
