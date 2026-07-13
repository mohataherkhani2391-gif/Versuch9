#ifndef CITY_H
#define CITY_H


#include <QString>
#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QRandomGenerator>
#include <QMessageBox>
#include <QDebug>

class City
{
public:
    City(QString name, int x, int y);
    void draw(QGraphicsScene& scene);
    QString getName();
    int getX();
    int getY();

private:

    QString name;
    int x;
    int y;
};

#endif // CITY_H
