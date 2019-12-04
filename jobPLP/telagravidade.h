#ifndef TELAGRAVIDADE_H
#define TELAGRAVIDADE_H

#include "mainwindow.h"

namespace Ui {
    class telaGravidade;
}

class telaGravidade : public QDialog{
    Q_OBJECT

    public:
        explicit telaGravidade(QWidget *parent = nullptr);
        ~telaGravidade();

private slots:
    void on_btnSite_clicked();

    void Gravidade(double F, double G, double m1, double m2, double d, QString variavel);

    void on_btnCalculate_clicked();
    void on_btnCancelar_clicked();

private:
        Ui::telaGravidade *ui;
};

#endif // TELAGRAVIDADE_H
