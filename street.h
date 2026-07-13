#ifndef STREET_H
#define STREET_H

#include "city.h"

class Street
{
public:
    Street(City* first, City* second);
private:
    City* first;
    City* second;
};

#endif // STREET_H
