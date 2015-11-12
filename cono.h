#ifndef CONO_H
#define CONO_H

#include <QDialog>

namespace Ui {
class Cono;
}

class Cono : public QDialog
{
    Q_OBJECT

public:
    explicit Cono(QWidget *parent = 0);
    ~Cono();

private:
    Ui::Cono *ui;
};

#endif // CONO_H
