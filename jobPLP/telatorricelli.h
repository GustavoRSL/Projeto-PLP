#ifndef TELATORRICELLI_H
#define TELATORRICELLI_H

#include "mainwindow.h"

namespace Ui {
class telaTorricelli;
}

class telaTorricelli : public QDialog
{
    Q_OBJECT

public:
    explicit telaTorricelli(QWidget *parent = nullptr);
    ~telaTorricelli();

private slots:
    void on_btnSite_clicked();

    void Torricelli(double v, double v0, double a, double S, QString variavel);

    void on_btnCalculate_clicked();

    void on_btnCancelar_clicked();

private:
    Ui::telaTorricelli *ui;
};

#endif // TELATORRICELLI_H
