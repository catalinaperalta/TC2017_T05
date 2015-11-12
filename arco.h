#ifndef ARCO_H
#define ARCO_H

#include <QDialog>

namespace Ui {
class Arco;
}

class Arco : public QDialog
{
    Q_OBJECT

public:
    explicit Arco(QWidget *parent = 0);
    ~Arco();

private:
    Ui::Arco *ui;
};

#endif // ARCO_H
