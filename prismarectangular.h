#ifndef PRISMARECTANGULAR_H
#define PRISMARECTANGULAR_H

#include <QDialog>

namespace Ui {
class PrismaRectangular;
}

class PrismaRectangular : public QDialog
{
    Q_OBJECT

public:
    explicit PrismaRectangular(QWidget *parent = 0);
    ~PrismaRectangular();

private:
    Ui::PrismaRectangular *ui;
};

#endif // PRISMARECTANGULAR_H
