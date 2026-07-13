#ifndef STREET_H
#define STREET_H

#include "city.h"

class Street
{
public:
    Street(City* first, City* second);
    void draw(QGraphicsScene& scene, QPen&);
    City* getFirst();
    City* getSecond();
private:
    City* first;
    City* second;
};

#endif // STREET_H
