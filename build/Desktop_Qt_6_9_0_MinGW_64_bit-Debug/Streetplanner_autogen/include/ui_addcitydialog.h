/********************************************************************************
** Form generated from reading UI file 'addcitydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCITYDIALOG_H
#define UI_ADDCITYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddCityDialog
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *name;
    QLineEdit *x;
    QLineEdit *y;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *AddCityDialog)
    {
        if (AddCityDialog->objectName().isEmpty())
            AddCityDialog->setObjectName("AddCityDialog");
        AddCityDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(AddCityDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        name = new QLineEdit(AddCityDialog);
        name->setObjectName("name");
        name->setGeometry(QRect(270, 30, 113, 26));
        x = new QLineEdit(AddCityDialog);
        x->setObjectName("x");
        x->setGeometry(QRect(270, 70, 113, 26));
        y = new QLineEdit(AddCityDialog);
        y->setObjectName("y");
        y->setGeometry(QRect(270, 110, 113, 26));
        label = new QLabel(AddCityDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 30, 63, 20));
        label_2 = new QLabel(AddCityDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 70, 63, 20));
        label_3 = new QLabel(AddCityDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(190, 110, 63, 20));

        retranslateUi(AddCityDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddCityDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddCityDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddCityDialog);
    } // setupUi

    void retranslateUi(QDialog *AddCityDialog)
    {
        AddCityDialog->setWindowTitle(QCoreApplication::translate("AddCityDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddCityDialog", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("AddCityDialog", "X:", nullptr));
        label_3->setText(QCoreApplication::translate("AddCityDialog", "Y:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddCityDialog: public Ui_AddCityDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCITYDIALOG_H
