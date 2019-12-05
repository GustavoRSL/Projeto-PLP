#include "telarelatividade.h"
#include "ui_telarelatividade.h"

telaRelatividade::telaRelatividade(QWidget *parent) : QDialog(parent), ui(new Ui::telaRelatividade){
    ui->setupUi(this);
    ui->variavelE->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelM->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelC->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
}

telaRelatividade::~telaRelatividade(){
    delete ui;
}

void telaRelatividade::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=2-DugbA91M4";
    QDesktopServices::openUrl(QUrl(link));
}

void telaRelatividade::Relatividade(double E, double m, double c, QString variavel){
    if(variavel == "E"){
        E = m * pow(c, 2);

        ui->variavelResp->setText("E =");

        QString convertido = QString::number(E, 'f', 4);

        ui->Resp->setText(convertido);
    } else if(variavel == "m"){
        if(c == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de c não pode ser igual a zero para essa equação.");
        } else {
            m = E / pow(c, 2);

            ui->variavelResp->setText("m =");

            QString convertido = QString::number(m, 'f', 4);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == "c"){
        if(m == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de m não pode ser igual a zero para essa equação.");
        } else {
            c = sqrt(E / m);

            ui->variavelResp->setText("c =");

            QString convertido = QString::number(c, 'f', 4);

            ui->Resp->setText(convertido);
        }
    }
}

void telaRelatividade::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelE->text().isEmpty()){
        variavel = "E";
        vazias++;
    }
    if(ui->variavelM->text().isEmpty()){
        variavel = "m";
        vazias++;
    }
    if(ui->variavelC->text().isEmpty()){
        variavel = "c";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelE->setFocus();
    } else if(vazias == 2){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelE->setFocus();
    } else if(vazias == 3){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelE->setFocus();
    } else if(vazias == 1){
        if(variavel == "E"){
            double E = (ui->variavelE->text()).toDouble();
            double m = (ui->variavelM->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Relatividade(E, m, c, variavel);
        } else if(variavel == "m"){
            double E = (ui->variavelE->text()).toDouble();
            double m = (ui->variavelM->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Relatividade(E, m, c, variavel);
        } else if(variavel == "c"){
            double E = (ui->variavelE->text()).toDouble();
            double m = (ui->variavelM->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Relatividade(E, m, c, variavel);
        }
    }
    vazias = 0;
}

void telaRelatividade::on_btnCancelar_clicked(){
    this->close();
}
