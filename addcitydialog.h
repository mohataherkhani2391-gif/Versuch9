#ifndef ADDCITYDIALOG_H
#define ADDCITYDIALOG_H

#include <QDialog>
#include "city.h"
#include "map.h"

namespace Ui {
class AddCityDialog;
}

class AddCityDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCityDialog(QWidget *parent = nullptr);
    City* createCity(Map& m);
    ~AddCityDialog();

private:
    Ui::AddCityDialog *ui;
};

#endif // ADDCITYDIALOG_H
