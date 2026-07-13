#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "city.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
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

