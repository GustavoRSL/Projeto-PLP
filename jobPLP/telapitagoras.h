#ifndef TELAPITAGORAS_H
#define TELAPITAGORAS_H

#include "mainwindow.h"

namespace Ui {
    class telaPitagoras;
}

class telaPitagoras : public QDialog{
    Q_OBJECT

    public:
        explicit telaPitagoras(QWidget *parent = nullptr);
        ~telaPitagoras();

    private slots:
        void on_btnSite_clicked();

        void Pitagoras(double a, double b, double c, char variavel);

        void on_btnCalculate_clicked();
        void on_btnCancelar_clicked();

    private:
        Ui::telaPitagoras *ui;
};

#endif // TELAPITAGORAS_H
