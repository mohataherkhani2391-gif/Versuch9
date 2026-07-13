#include "addcitydialog.h"
#include "ui_addcitydialog.h"

AddCityDialog::AddCityDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddCityDialog)
{
    ui->setupUi(this);
}

AddCityDialog::~AddCityDialog()
{
    delete ui;
}

City* AddCityDialog::createCity(Map& m)
{
    QString name = ui->name->text();
    QString xs = ui->x->text();
    QString ys = ui->y->text();

    if(xs.toStdString().find_first_not_of("0123456789")!=std::string::npos)
    {
        return nullptr;
    }
    if(ys.toStdString().find_first_not_of("0123456789")!=std::string::npos)
    {
        return nullptr;
    }
    int x = xs.toInt();
    int y = ys.toInt();
    City* c = new City(name, x, y);
    return c;
}
