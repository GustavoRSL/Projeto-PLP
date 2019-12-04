#include "telagauss.h"
#include "ui_telagauss.h"

telaGauss::telaGauss(QWidget *parent) : QDialog(parent), ui(new Ui::telaGauss){
    ui->setupUi(this);
    ui->variavelF->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelP->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelPLinha->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
}

telaGauss::~telaGauss(){
    delete ui;
}

void telaGauss::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=2rE-tKkUsG8";
    QDesktopServices::openUrl(QUrl(link));
}

void telaGauss::Gauss(double f, double p, double pL, QString variavel){
    if(variavel == "f"){
        if(p == 0.0 or pL == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de p e/ou p' não podem ser iguais a zero para essa equação.");
        } else {
            f = (p * pL)/(p + pL);

            ui->variavelResp->setText("f =");

            QString c = QString::number(f, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if(variavel == "p"){
        if(pL == 0.0 or f == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de p' e/ou f não podem ser iguais a zero para essa equação.");
        } else {
            p = (pL * f)/(pL - f);

            ui->variavelResp->setText("p =");

            QString c = QString::number(p, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if(variavel == "pL"){
        if(p == 0.0 or f == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de p e/ou f não podem ser iguais a zero para essa equação.");
        } else {
            pL = (p * f)/(p - f);

            QPixmap logoPL(":/new/variaveis/images/pLinha.png");
            ui->variavelResp->setPixmap(logoPL.scaled(66,66));

            QString c = QString::number(pL, 'f', 2);

            ui->Resp->setText("=" + c);
        }
    }
}

void telaGauss::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelF->text().isEmpty()){
        variavel = "f";
        vazias++;
    }
    if(ui->variavelP->text().isEmpty()){
        variavel = "p";
        vazias++;
    }
    if(ui->variavelPLinha->text().isEmpty()){
        variavel = "pL";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias == 2){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias == 3){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias == 1){
        if(variavel == "f"){
            double f  = (ui->variavelF->text()).toDouble();
            double p  = (ui->variavelP->text()).toDouble();
            double pL = (ui->variavelPLinha->text()).toDouble();

            Gauss(f, p, pL, variavel);
        } else if(variavel == "p"){
            double f  = (ui->variavelF->text()).toDouble();
            double p  = (ui->variavelP->text()).toDouble();
            double pL = (ui->variavelPLinha->text()).toDouble();

            Gauss(f, p, pL, variavel);
        } else if(variavel == "pL"){
            double f  = (ui->variavelF->text()).toDouble();
            double p  = (ui->variavelP->text()).toDouble();
            double pL = (ui->variavelPLinha->text()).toDouble();

            Gauss(f, p, pL, variavel);
        }
    }
    vazias = 0;
}

void telaGauss::on_btnCancelar_clicked(){
    this->close();
}
