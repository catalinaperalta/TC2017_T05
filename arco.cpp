#include "arco.h"
#include "ui_arco.h"

Arco::Arco(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Arco)
{
    ui->setupUi(this);
}

Arco::~Arco()
{
    delete ui;
}
