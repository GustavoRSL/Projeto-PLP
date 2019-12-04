#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cmath>
#include <QMessageBox>
#include <QDesktopServices>
#include <QUrl>
#include <string>
#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QDialog>
#include <QPixmap>
#include <QDoubleValidator>

#include "telapitagoras.h"     //Chama a tela do Teorema de Pitágoras
#include "telagravidade.h"     //Chama a tela da Lei da Gravidade
#include "telarelatividade.h"  //Chama a tela da Equação da teoria de relatividade
#include "telacaos.h"          //Chama a tela da Teoria do Caos
#include "telaclapeyron.h"     //Chama a tela da Equação de Clapeyron
#include "telatorricelli.h"    //Chama a tela da Equação de Torricelli
#include "telagauss.h"         //Chama a tela da Equação de Gauss
#include "telaparticula.h"     //Chama a tela da Força sobre uma partícula

QT_BEGIN_NAMESPACE

namespace Ui {
    class MainWindow;
}

QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void on_botaoPitagoras_clicked();
        void on_botaoGravidade_clicked();
        void on_botaoRelatividade_clicked();
        void on_botaoCaos_clicked();
        void on_botaoClapeyron_clicked();
        void on_botaoTorricelli_clicked();
        void on_botaoGauss_clicked();
        void on_botaoParticula_clicked();

        void on_botaoSair_clicked();

    private:
            Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
