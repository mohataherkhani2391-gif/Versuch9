#include "city.h"

City::City(QString name, int x , int y): name(name), x(x), y(y)
{
}
void City::draw(QGraphicsScene& scene)
{
    QGraphicsTextItem* text= new QGraphicsTextItem;
    text->setPos(x, y-20);
    text->setPlainText(name);
    scene.addItem(text);

    scene.addEllipse(x , y , 15, 15, QPen (Qt :: red ), QBrush (Qt :: red , Qt :: SolidPattern ));
    qDebug() << "Drew City: " << name <<" at " << x << ", " << y;
}

QString City::getName()
{
    return name;
}
int City::getX()
{
    return x;
}
int City::getY()
{
    return y;
}
