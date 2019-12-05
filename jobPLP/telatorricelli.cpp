#include "telatorricelli.h"
#include "ui_telatorricelli.h"

telaTorricelli::telaTorricelli(QWidget *parent) : QDialog(parent), ui(new Ui::telaTorricelli){
    ui->setupUi(this);
    ui->variavelV->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelV0->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelA->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
    ui->variavelS->setValidator(new QDoubleValidator(-1000000, 1000000, 4, this));
}

telaTorricelli::~telaTorricelli(){
    delete ui;
}

void telaTorricelli::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=2cnfUopItfA";
    QDesktopServices::openUrl(QUrl(link));
}

void telaTorricelli::Torricelli(double v, double v0, double a, double S, QString variavel){
    if(variavel == "v"){
        v = sqrt(pow(v0, 2) + 2*a*S);

        ui->variavelResp->setText("v =");

        QString c = QString::number(v, 'f', 4);

        ui->Resp->setText(c);
    } else if(variavel == "v0"){
        if(pow(v, 2) - 2*a*S < 0){
            v0 = pow(v, 2) - 2*a*S;

            QPixmap logoV0(":/new/variaveis/images/v0 = raiz.png");
            ui->variavelResp->setPixmap(logoV0.scaled(66,66));

            QString c = QString::number(v0, 'f', 4);

            ui->Resp->setText(c);
        } else {
            v0 = sqrt(pow(v, 2) - 2 * a * S);

            QPixmap logoV0(":/new/variaveis/images/v0.png");
            ui->variavelResp->setPixmap(logoV0.scaled(66,66));

            QString c = QString::number(v0, 'f', 4);

            ui->Resp->setText(" = " + c);
        }
    } else if(variavel == "a"){
        if(S == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de S não pode ser igual a zero para essa equação.");
        } else {
            a = (pow(v, 2) - pow(v0, 2))/(2*S);

            ui->variavelResp->setText("a =");

            QString c = QString::number(a, 'f', 4);

            ui->Resp->setText(c);
        }
    } else if(variavel == "S"){
        if(a == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de a não pode ser igual a zero para essa equação.");
        } else {
            S = (pow(v, 2) - pow(v0, 2))/(2*a);

            ui->variavelResp->setText("S = ");

            QString c = QString::number(S, 'f', 4);

            ui->Resp->setText(c);
        }
    }
}

void telaTorricelli::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelV->text().isEmpty()){
        variavel = "v";
        vazias++;
    }
    if(ui->variavelV0->text().isEmpty()){
        variavel = "v0";
        vazias++;
    }
    if(ui->variavelA->text().isEmpty()){
        variavel = "a";
        vazias++;
    }
    if(ui->variavelS->text().isEmpty()){
        variavel = "S";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelV->setFocus();
    } else if(vazias == 2 or vazias == 3){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelV->setFocus();
    } else if(vazias == 4){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelV->setFocus();
    } else if(vazias == 1){
        if(variavel == "v"){
            double v  = (ui->variavelV->text()).toDouble();
            double v0 = (ui->variavelV0->text()).toDouble();
            double a  = (ui->variavelA->text()).toDouble();
            double S  = (ui->variavelS->text()).toDouble();

            Torricelli(v, v0, a, S, variavel);
        } else if(variavel == "v0"){
            double v  = (ui->variavelV->text()).toDouble();
            double v0 = (ui->variavelV0->text()).toDouble();
            double a  = (ui->variavelA->text()).toDouble();
            double S  = (ui->variavelS->text()).toDouble();

            Torricelli(v, v0, a, S, variavel);
        } else if(variavel == "a"){
            double v  = (ui->variavelV->text()).toDouble();
            double v0 = (ui->variavelV0->text()).toDouble();
            double a  = (ui->variavelA->text()).toDouble();
            double S  = (ui->variavelS->text()).toDouble();

            Torricelli(v, v0, a, S, variavel);
        } else if(variavel == "S"){
            double v  = (ui->variavelV->text()).toDouble();
            double v0 = (ui->variavelV0->text()).toDouble();
            double a  = (ui->variavelA->text()).toDouble();
            double S  = (ui->variavelS->text()).toDouble();

            Torricelli(v, v0, a, S, variavel);
        }
    }
    vazias = 0;
}

void telaTorricelli::on_btnCancelar_clicked(){
    this->close();
}
