#ifndef PRISMATRIANGULAR_H
#define PRISMATRIANGULAR_H

#include <QDialog>

namespace Ui {
class PrismaTriangular;
}

class PrismaTriangular : public QDialog
{
    Q_OBJECT

public:
    explicit PrismaTriangular(QWidget *parent = 0);
    ~PrismaTriangular();

private:
    Ui::PrismaTriangular *ui;
};

#endif // PRISMATRIANGULAR_H
