#include "prismatriangular.h"
#include "ui_prismatriangular.h"

PrismaTriangular::PrismaTriangular(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PrismaTriangular)
{
    ui->setupUi(this);
}

PrismaTriangular::~PrismaTriangular()
{
    delete ui;
}
