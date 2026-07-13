/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionHinzuf_gen;
    QAction *actionClear_Scene;
    QAction *actionAbout;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionExit;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *AddCityButton;
    QPushButton *pushButton_teste_was;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit_teste_was;
    QPushButton *TestMapStreet;
    QLabel *label_eingabe;
    QCheckBox *ShowTest;
    QPushButton *TestDrawMapWithCitiesButton;
    QPushButton *testDrawCityButton;
    QPushButton *TestDrawStreet;
    QGraphicsView *graphicsView;
    QPushButton *FillMap;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuScene;
    QMenu *menuInfo;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionHinzuf_gen = new QAction(MainWindow);
        actionHinzuf_gen->setObjectName("actionHinzuf_gen");
        actionClear_Scene = new QAction(MainWindow);
        actionClear_Scene->setObjectName("actionClear_Scene");
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName("actionOpen");
        actionOpen->setEnabled(false);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName("actionSave");
        actionSave->setEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName("actionExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(7);
        AddCityButton = new QPushButton(centralwidget);
        AddCityButton->setObjectName("AddCityButton");

        gridLayout->addWidget(AddCityButton, 4, 0, 1, 1);

        pushButton_teste_was = new QPushButton(centralwidget);
        pushButton_teste_was->setObjectName("pushButton_teste_was");

        gridLayout->addWidget(pushButton_teste_was, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 0, 1, 1);

        lineEdit_teste_was = new QLineEdit(centralwidget);
        lineEdit_teste_was->setObjectName("lineEdit_teste_was");
        lineEdit_teste_was->setClearButtonEnabled(true);

        gridLayout->addWidget(lineEdit_teste_was, 2, 0, 1, 1);

        TestMapStreet = new QPushButton(centralwidget);
        TestMapStreet->setObjectName("TestMapStreet");

        gridLayout->addWidget(TestMapStreet, 8, 0, 1, 1);

        label_eingabe = new QLabel(centralwidget);
        label_eingabe->setObjectName("label_eingabe");

        gridLayout->addWidget(label_eingabe, 0, 0, 1, 1);

        ShowTest = new QCheckBox(centralwidget);
        ShowTest->setObjectName("ShowTest");
        ShowTest->setChecked(true);

        gridLayout->addWidget(ShowTest, 7, 0, 1, 1);

        TestDrawMapWithCitiesButton = new QPushButton(centralwidget);
        TestDrawMapWithCitiesButton->setObjectName("TestDrawMapWithCitiesButton");

        gridLayout->addWidget(TestDrawMapWithCitiesButton, 10, 0, 1, 1);

        testDrawCityButton = new QPushButton(centralwidget);
        testDrawCityButton->setObjectName("testDrawCityButton");

        gridLayout->addWidget(testDrawCityButton, 11, 0, 1, 1);

        TestDrawStreet = new QPushButton(centralwidget);
        TestDrawStreet->setObjectName("TestDrawStreet");

        gridLayout->addWidget(TestDrawStreet, 9, 0, 1, 1);

        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");

        gridLayout->addWidget(graphicsView, 0, 1, 12, 4);

        FillMap = new QPushButton(centralwidget);
        FillMap->setObjectName("FillMap");

        gridLayout->addWidget(FillMap, 5, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuScene = new QMenu(menubar);
        menuScene->setObjectName("menuScene");
        menuInfo = new QMenu(menubar);
        menuInfo->setObjectName("menuInfo");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuScene->menuAction());
        menubar->addAction(menuInfo->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuScene->addAction(actionClear_Scene);
        menuInfo->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionHinzuf_gen->setText(QCoreApplication::translate("MainWindow", "Hinzuf\303\274gen", nullptr));
#if QT_CONFIG(shortcut)
        actionHinzuf_gen->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClear_Scene->setText(QCoreApplication::translate("MainWindow", "Clear Scene", nullptr));
#if QT_CONFIG(shortcut)
        actionClear_Scene->setShortcut(QCoreApplication::translate("MainWindow", "Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionOpen->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        AddCityButton->setText(QCoreApplication::translate("MainWindow", "AddCityButton", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_teste_was->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p>Testet, ob Ihre Eingabe eine Zahl oder ein Text ist.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_teste_was->setText(QCoreApplication::translate("MainWindow", "Teste was", nullptr));
        lineEdit_teste_was->setText(QCoreApplication::translate("MainWindow", "Ihre Eingabe", nullptr));
        lineEdit_teste_was->setPlaceholderText(QCoreApplication::translate("MainWindow", "Ihre Eingabe", nullptr));
        TestMapStreet->setText(QCoreApplication::translate("MainWindow", "TestAddStreet", nullptr));
        label_eingabe->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        ShowTest->setText(QCoreApplication::translate("MainWindow", "Show Test", nullptr));
        TestDrawMapWithCitiesButton->setText(QCoreApplication::translate("MainWindow", "TestDrawMapWithCities", nullptr));
        testDrawCityButton->setText(QCoreApplication::translate("MainWindow", "TestDrawCity", nullptr));
        TestDrawStreet->setText(QCoreApplication::translate("MainWindow", "TestDrawStreet", nullptr));
        FillMap->setText(QCoreApplication::translate("MainWindow", "FillMap", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuScene->setTitle(QCoreApplication::translate("MainWindow", "Scene", nullptr));
        menuInfo->setTitle(QCoreApplication::translate("MainWindow", "Info", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
