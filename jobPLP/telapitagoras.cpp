#include "telapitagoras.h"
#include "ui_telapitagoras.h"

telaPitagoras::telaPitagoras(QWidget *parent) : QDialog(parent), ui(new Ui::telaPitagoras){
    ui->setupUi(this);
    ui->variavelA->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelB->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelC->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
}

telaPitagoras::~telaPitagoras(){
    delete ui;
}

void telaPitagoras::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=fan2ewagFxs";
    QDesktopServices::openUrl(QUrl(link));
}

void telaPitagoras::Pitagoras(double a, double b, double c, char variavel){
    if(variavel == 'a'){
        if(c < b){
            ui->variavelResp->setText("erro");
            ui->Resp->setText("!!!");

            QString valorB = QString::number(b);
            QString valorC = QString::number(c);

            QMessageBox::critical(this, "Atenção!", "Não existe valor real para os valores de b = " + valorB + " e c = " + valorC + "."
                                                    "\nTornando assim, o valor a impossível de ser encontrado!");
        } else {
            a = sqrt(pow(c, 2)-pow(b, 2));

            ui->variavelResp->setText("a =");

            QString convertido = QString::number(a, 'f', 4);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == 'b'){
        if(c < a){
            ui->variavelResp->setText("erro");
            ui->Resp->setText("!!!");

            QString valorA = QString::number(a);
            QString valorC = QString::number(c);

            QMessageBox::critical(this, "Atenção!", "Não existe valor real para os valores de a = " + valorA + " e c = " + valorC + "."
                                                    "\nTornando assim, o valor b impossível de ser encontrado!");
        } else {
            b = sqrt(pow(c, 2)-pow(a, 2));

            ui->variavelResp->setText("b =");
            QString convertido = QString::number(b, 'f', 4);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == 'c'){
        c = sqrt(pow(a, 2)+pow(b, 2));

        ui->variavelResp->setText("c =");

        QString convertido = QString::number(c, 'f', 4);

        ui->Resp->setText(convertido);
    }
}

void telaPitagoras::on_btnCalculate_clicked(){
    char variavel = '-';
    int vazias = 0;

    if(ui->variavelA->text().isEmpty()){
        variavel = 'a';
        vazias++;
    }
    if(ui->variavelB->text().isEmpty()){
        variavel = 'b';
        vazias++;
    }
    if(ui->variavelC->text().isEmpty()){
        variavel = 'c';
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelA->setFocus();
    } else if(vazias == 2){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelA->setFocus();
    } else if(vazias == 3){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelA->setFocus();
    } else if(vazias == 1){
        if(variavel == 'a'){
            double a = (ui->variavelA->text()).toDouble();
            double b = (ui->variavelB->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Pitagoras(a, b, c, variavel);
        } else if(variavel == 'b'){
            double a = (ui->variavelA->text()).toDouble();
            double b = (ui->variavelB->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Pitagoras(a, b, c, variavel);
        } else if(variavel == 'c'){
            double a = (ui->variavelA->text()).toDouble();
            double b = (ui->variavelB->text()).toDouble();
            double c = (ui->variavelC->text()).toDouble();

            Pitagoras(a, b, c, variavel);
        }
    }
    vazias = 0;
}

void telaPitagoras::on_btnCancelar_clicked(){
    this->close();
}
