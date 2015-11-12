#include "cono.h"
#include "ui_cono.h"

Cono::Cono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cono)
{
    ui->setupUi(this);
}

Cono::~Cono()
{
    delete ui;
}
