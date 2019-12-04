#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){ //Construtor
    ui->setupUi(this);
}

MainWindow::~MainWindow(){ //Destrutor
    delete ui;
}

void MainWindow::on_botaoPitagoras_clicked(){ //Módulo que chama a janela de Pitágoras
    telaPitagoras TelaPitagoras;

    TelaPitagoras.setModal(true);
    TelaPitagoras.exec();
}

void MainWindow::on_botaoGravidade_clicked(){
    telaGravidade TelaGravidade;

    TelaGravidade.exec();
}

void MainWindow::on_botaoRelatividade_clicked(){
    telaRelatividade TelaRelatividade;

    TelaRelatividade.exec();
}

void MainWindow::on_botaoCaos_clicked(){
    telaCaos TelaCaos;

    TelaCaos.exec();
}

void MainWindow::on_botaoClapeyron_clicked(){
    telaClapeyron TelaClapeyron;

    TelaClapeyron.exec();
}

void MainWindow::on_botaoTorricelli_clicked(){
    telaTorricelli TelaTorricelli;

    TelaTorricelli.exec();
}

void MainWindow::on_botaoGauss_clicked(){
    telaGauss TelaGauss;

    TelaGauss.exec();
}

void MainWindow::on_botaoParticula_clicked(){
    telaParticula TelaParticula;

    TelaParticula.exec();
}

void MainWindow::on_botaoSair_clicked(){
    QMessageBox::StandardButton resposta = QMessageBox::question(this, "Deseja realmente sair?", "Deseja realmente sair? :(", QMessageBox::Yes|QMessageBox::No);

    if (resposta == QMessageBox::Yes){
        QApplication::quit();
    }
}
