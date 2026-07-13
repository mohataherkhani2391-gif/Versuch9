#ifndef MAP_H
#define MAP_H

#include "city.h"
#include "abstractmap.h"

class Map: public AbstractMap
{
public:
    Map();
    void addCity(City* city);
    void draw(QGraphicsScene& scene);
private:
    QList<City*> cities;
};

#endif // MAP_H
