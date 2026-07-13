#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "city.h"
#include "street.h"
#include"addcitydialog.h"
#include "mapionrw.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , mapio(new MapIoNrw)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->graphicsView-> setScene(& scene );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_teste_was_clicked()
{
    int a = QRandomGenerator::global()->bounded(1000);
    int b = QRandomGenerator::global()->bounded(1000);

    scene.addRect(a,b, 15, 25);
}

/*
void MainWindow::on_actionHinzuf_gen_triggered()
{
    close();
}
*/

void MainWindow::on_actionClear_Scene_triggered()
{
    scene.clear();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::about(
        this,
        "About",
        "Eine kurze Beschreibung."
        );
}


void MainWindow::on_actionExit_triggered()
{
    close();
}


void MainWindow::on_testDrawCityButton_clicked()
{
    City* city1 = new City("Koeln", 13, 18);
    City* city2 = new City("Freiburg", 200, 300);

    city1->draw(scene);
    city2->draw(scene);


}


void MainWindow::on_TestDrawMapWithCitiesButton_clicked()
{
    City c1("city c1", 20,50);
    map.addCity(&c1);
    map.draw(scene);
}


void MainWindow::on_TestDrawStreet_clicked()
{
    QPen pen;

    City* city1 = new City("Koeln", 13, 18);
    City* city2 = new City("Freiburg", 200, 300);
    Street street1(city1, city2);

    city1->draw(scene);
    city2->draw(scene);

    street1.draw(scene,pen);
}






void MainWindow::on_TestMapStreet_clicked()
{
    QPen pen;

    City* city1 = new City("Koeln", 13, 18);
    City* city2 = new City("Freiburg", 200, 300);
    Street street1(city1, city2);


   qDebug()<< "ohne hinzgefuegt" << map.addStreet(&street1);
    map.addCity(city1);
       map.addCity(city2);
     qDebug()<< "mit hinzgefuegt" << map.addStreet(&street1);


}


void MainWindow::on_ShowTest_clicked()
{
    if(ui->ShowTest->isChecked())
    {
        ui->TestDrawMapWithCitiesButton->show();
        ui->testDrawCityButton->show();
        ui->TestDrawStreet->show();
        ui->TestMapStreet->show();
    }
    else
    {
        ui->TestDrawMapWithCitiesButton->hide();
        ui->testDrawCityButton->hide();
        ui->TestDrawStreet->hide();
        ui->TestMapStreet->hide();
    }
}


void MainWindow::on_AddCityButton_clicked()
{
    AddCityDialog dialog(this);
    while(true)
    {
        bool ret = dialog.exec();
        qDebug() << ret;
        if(ret)
        {
            City* c= dialog.createCity(map);
            if(c == nullptr)
            {
                qDebug() << "Error";
                continue;
            }
            map.addCity(c);
            c->draw(scene);
            break;
        } else break;
    }

}


void MainWindow::on_FillMap_clicked()
{
    mapio->fillMap(map);
    map.draw(scene);
}

