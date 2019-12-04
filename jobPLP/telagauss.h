#ifndef TELAGAUSS_H
#define TELAGAUSS_H

#include "mainwindow.h"

namespace Ui {
    class telaGauss;
}

class telaGauss : public QDialog{
    Q_OBJECT

    public:
        explicit telaGauss(QWidget *parent = nullptr);
        ~telaGauss();

    private slots:
        void on_btnSite_clicked();

        void Gauss(double f, double p, double pL, QString variavel);

        void on_btnCalculate_clicked();
        void on_btnCancelar_clicked();

private:
        Ui::telaGauss *ui;
};

#endif // TELAGAUSS_H
