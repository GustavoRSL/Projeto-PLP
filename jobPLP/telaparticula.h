#ifndef TELAPARTICULA_H
#define TELAPARTICULA_H

#include "mainwindow.h"

namespace Ui {
    class telaParticula;
}

class telaParticula : public QDialog{
    Q_OBJECT

    public:
        explicit telaParticula(QWidget *parent = nullptr);
        ~telaParticula();

    private slots:
        void on_btnSite_clicked();

        void Particula(double Fm, double B, double i, double l, double teta, QString variavel);

        void on_btnCalculate_clicked();
        void on_btnCancelar_clicked();

    private:
        Ui::telaParticula *ui;
};

#endif // TELAPARTICULA_H
