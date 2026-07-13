#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "map.h"
#include "mapio.h"

#include <QMainWindow>
#include <QGraphicsView>
#include <QGraphicsTextItem>
#include <QRandomGenerator>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_teste_was_clicked();

    //void on_actionHinzuf_gen_triggered();

    void on_actionClear_Scene_triggered();

    void on_actionAbout_triggered();

    void on_actionExit_triggered();

    void on_testDrawCityButton_clicked();

    void on_TestDrawMapWithCitiesButton_clicked();

   // void on_actionOpen_triggered();

    void on_TestDrawStreet_clicked();

    void on_TestMapStreet_clicked();

    void on_ShowTest_clicked();

    void on_AddCityButton_clicked();

    void on_FillMap_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;
    Map map;
    MapIo* mapio;
};
#endif // MAINWINDOW_H
