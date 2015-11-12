#ifndef CUBO_H
#define CUBO_H

#include <QDialog>

namespace Ui {
class Cubo;
}

class Cubo : public QDialog
{
    Q_OBJECT

public:
    explicit Cubo(QWidget *parent = 0);
    ~Cubo();

private:
    Ui::Cubo *ui;
};

#endif // CUBO_H
