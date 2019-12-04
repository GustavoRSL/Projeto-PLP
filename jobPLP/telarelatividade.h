#ifndef TELARELATIVIDADE_H
#define TELARELATIVIDADE_H

#include "mainwindow.h"

namespace Ui {
    class telaRelatividade;
}

class telaRelatividade : public QDialog{
    Q_OBJECT

    public:
        explicit telaRelatividade(QWidget *parent = nullptr);
        ~telaRelatividade();

    private slots:
        void on_btnSite_clicked();

        void Relatividade(double E, double m, double c, QString variavel);

        void on_btnCalculate_clicked();
        void on_btnCancelar_clicked();

private:
        Ui::telaRelatividade *ui;
};

#endif // TELARELATIVIDADE_H
