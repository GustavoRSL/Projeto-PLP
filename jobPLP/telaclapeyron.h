#ifndef TELACLAPEYRON_H
#define TELACLAPEYRON_H

#include "mainwindow.h"

namespace Ui {
    class telaClapeyron;
}

class telaClapeyron : public QDialog{
    Q_OBJECT

    public:
        explicit telaClapeyron(QWidget *parent = nullptr);
        ~telaClapeyron();

    private slots:
        void on_btnSite_clicked();

        void Clapeyron(double p, double V, double n, double R, double T, char variavel);

        void on_btnCalculate_clicked();
        void on_btnCancelar_clicked();

    private:
        Ui::telaClapeyron *ui;
};

#endif // TELACLAPEYRON_H
