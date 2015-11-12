#include "prismarectangular.h"
#include "ui_prismarectangular.h"

PrismaRectangular::PrismaRectangular(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismaRectangular)
{
    ui->setupUi(this);
}

PrismaRectangular::~PrismaRectangular()
{
    delete ui;
}
