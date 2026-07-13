#include "street.h"

Street::Street(City* first, City* second): first(first), second(second)
{

}
void Street::draw(QGraphicsScene& scene, QPen& pen)
{
    scene.addLine(first->getX()+7, first->getY()+7, second->getX()+7, second->getY()+7, pen);
}
City* Street::getFirst()
{
    return first;
}

City* Street::getSecond()
{
    return second;
}
