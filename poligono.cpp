#include "poligono.h"
#include "ui_poligono.h"

Poligono::Poligono(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Poligono)
{
    ui->setupUi(this);
}

Poligono::~Poligono()
{
    delete ui;
}
