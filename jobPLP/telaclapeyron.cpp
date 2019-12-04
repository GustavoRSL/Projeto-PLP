#include "telaclapeyron.h"
#include "ui_telaclapeyron.h"

telaClapeyron::telaClapeyron(QWidget *parent) : QDialog(parent), ui(new Ui::telaClapeyron){
    ui->setupUi(this);
    ui->variavelP->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelV->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelN->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelR->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelT->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
}

telaClapeyron::~telaClapeyron(){
    delete ui;
}

void telaClapeyron::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=Fx6SauBRr_A";
    QDesktopServices::openUrl(QUrl(link));
}

void telaClapeyron::Clapeyron(double p, double V, double n, double R, double T, char variavel){
    if(variavel == 'p'){
        if(V == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de V não pode ser igual a zero para essa equação.");
        } else {
            p = (n * R * T )/ V;

            ui->variavelResp->setText("p =");

            QString convertido = QString::number(p, 'f', 2);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == 'V'){
        if(p == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de p não pode ser igual a zero para essa equação.");
        } else {
            V = (n * R * T )/ p;

            ui->variavelResp->setText("V =");

            QString convertido = QString::number(V, 'f', 2);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == 'n'){
        if(R == 0.0 or T == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de R  e/ou T não podem ser iguais a zero para essa equação.");
        } else {
            n = (p * V)/(R * T);

            ui->variavelResp->setText("n =");

            QString convertido = QString::number(n, 'f', 2);

            ui->Resp->setText(convertido);
        }
    } else if(variavel == 'R'){
        if(n == 0.0 or T == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de n e/ou T não podem ser iguais a zero para essa equação.");
        } else {
            R = (p * V) / (n * T);

            ui->variavelResp->setText("R =");

            QString convertido = QString::number(R, 'f', 2);

            ui->Resp->setText(convertido);
        }
    }else if (variavel == 'T'){
        if(n == 0.0 or R == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de n e/ou R não podem ser iguais a zero para essa equação.");
        } else {
            T = (p * V)/(n * R);

            ui->variavelResp->setText("T =");

            QString convertido = QString::number(T, 'f', 2);

            ui->Resp->setText(convertido);
        }
    }
}

void telaClapeyron::on_btnCalculate_clicked(){
    char variavel = '-';
    int vazias = 0;

    if(ui->variavelP->text().isEmpty()){
        variavel = 'p';
        vazias++;
    }
    if(ui->variavelV->text().isEmpty()){
        variavel = 'V';
        vazias++;
    }
    if(ui->variavelN->text().isEmpty()){
        variavel = 'n';
        vazias++;
    }
    if(ui->variavelR->text().isEmpty()){
        variavel = 'R';
        vazias++;
    }
    if(ui->variavelT->  text().isEmpty()){
        variavel = 'T';
        vazias++;
    }
    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelP->setFocus();
    } else if(vazias >= 2 and vazias <=4){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelV->setFocus();
    } else if(vazias == 5){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelP->setFocus();
    } else if(vazias == 1){
        if(variavel == 'p'){
            double p = (ui->variavelP->text()).toDouble();
            double V = (ui->variavelV->text()).toDouble();
            double n = (ui->variavelN->text()).toDouble();
            double R = (ui->variavelR->text()).toDouble();
            double T = (ui->variavelT->text()).toDouble();

            Clapeyron(p,V, n, R, T, variavel);
        } else if(variavel == 'V'){
            double p = (ui->variavelP->text()).toDouble();
            double V = (ui->variavelV->text()).toDouble();
            double n = (ui->variavelN->text()).toDouble();
            double R = (ui->variavelR->text()).toDouble();
            double T = (ui->variavelT->text()).toDouble();

            Clapeyron(p,V, n, R, T, variavel);
        } else if(variavel == 'n'){
            double p = (ui->variavelP->text()).toDouble();
            double V = (ui->variavelV->text()).toDouble();
            double n = (ui->variavelN->text()).toDouble();
            double R = (ui->variavelR->text()).toDouble();
            double T = (ui->variavelT->text()).toDouble();

            Clapeyron(p,V, n, R, T, variavel);
        } else if(variavel == 'R'){
            double p = (ui->variavelP->text()).toDouble();
            double V = (ui->variavelV->text()).toDouble();
            double n = (ui->variavelN->text()).toDouble();
            double R = (ui->variavelR->text()).toDouble();
            double T = (ui->variavelT->text()).toDouble();

            Clapeyron(p,V, n, R, T, variavel);
        } else if(variavel == 'T'){
            double p = (ui->variavelP->text()).toDouble();
            double V = (ui->variavelV->text()).toDouble();
            double n = (ui->variavelN->text()).toDouble();
            double R = (ui->variavelR->text()).toDouble();
            double T = (ui->variavelT->text()).toDouble();

            Clapeyron(p,V, n, R, T, variavel);
        }
    }
    vazias = 0;
}

void telaClapeyron::on_btnCancelar_clicked(){
    this->close();
}
