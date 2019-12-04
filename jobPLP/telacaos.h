#ifndef TELACAOS_H
#define TELACAOS_H

#include "mainwindow.h"

namespace Ui {
    class telaCaos;
}

class telaCaos : public QDialog{
    Q_OBJECT

    public:
        explicit telaCaos(QWidget *parent = nullptr);
        ~telaCaos();

    private slots:
        void on_btnCalculate_clicked();

        void Caos(double xNew, double K, double xOld, QString variavel);

        void on_btnSite_clicked();
        void on_btnCancelar_clicked();

private:
            Ui::telaCaos *ui;
};

#endif // TELACAOS_H
