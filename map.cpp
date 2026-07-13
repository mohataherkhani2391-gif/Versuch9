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
    QList <Street* >:: iterator it2;
    for(it2 = streets.begin(); it2 != streets.end(); it2++)
    {
        QPen pen;
        (*it2)->draw(scene,pen);
    }
}
bool Map::addStreet(Street* street)
{

    bool foundFirst = false;
    bool foundSecond = false;
    QList <City* >:: iterator it;
    for(it = cities.begin(); it != cities.end(); it++)
    {
        if((*it)==street->getFirst()){
            foundFirst = true;
        }
        if((*it)==street->getSecond()){
            foundSecond = true;
        }
    }
    if(foundFirst && foundSecond)
    {
        streets.append(street);
        return true;
    }
    return false;

}

City* Map::findCity(const QString cityName)
{
    QList <City* >:: iterator it;

    for(it = cities.begin(); it != cities.end(); it++)
    {
        if((*it)->getName() == cityName) return *it;
    }
    return nullptr;
}
QVector<Street*> Map::getStreetList(const City* city) const
{
}
City* Map::getOppositeCity(const Street* street, const City* city) const
{

}
