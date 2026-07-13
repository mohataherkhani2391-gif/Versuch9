#include "map.h"

Map::Map()
{

}

void Map::addCity(City* city)
{
    cities.append(city);
    qDebug() << "Added city: " << city->getName();
}
void Map::draw(QGraphicsScene& scene)
{
    QList <City* >:: iterator it;
    for(it = cities.begin(); it != cities.end(); it++)
    {
        (*it)->draw(scene);
    }
}
