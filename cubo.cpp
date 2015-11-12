#include "cubo.h"
#include "ui_cubo.h"

Cubo::Cubo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cubo)
{
    ui->setupUi(this);
}

Cubo::~Cubo()
{
    delete ui;
}
