#ifndef POLIGONO_H
#define POLIGONO_H

#include <QDialog>

namespace Ui {
class Poligono;
}

class Poligono : public QDialog
{
    Q_OBJECT

public:
    explicit Poligono(QWidget *parent = 0);
    ~Poligono();

private:
    Ui::Poligono *ui;
};

#endif // POLIGONO_H
