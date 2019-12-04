#include "telaparticula.h"
#include "ui_telaparticula.h"

telaParticula::telaParticula(QWidget *parent) : QDialog(parent), ui(new Ui::telaParticula){
    ui->setupUi(this);
    ui->variavelFm->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelB->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelI->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelL->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelTeta->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
}

telaParticula::~telaParticula(){
    delete ui;
}

void telaParticula::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=Ts-0ZZVf2pQ&feature=youtu.be";
    QDesktopServices::openUrl(QUrl(link));
}

void telaParticula::Particula(double Fm, double B, double i, double l, double teta, QString variavel){
    if(variavel == "Fm"){
        teta *= M_PI/180; //converter angulo para radianos para calculo do seno

        Fm = B * i * l * sin(teta);

        QPixmap logoFm(":/new/variaveis/images/Fm.png");
        ui->variavelResp->setPixmap(logoFm.scaled(66,66));

        QString c = QString::number(Fm, 'f', 2);

        ui->Resp->setText("=" + c);
    } else if (variavel == "B"){
        if(i == 0.0 or l == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de i e/ou l não pode ser igual a zero para essa equação.");
        } else {
            teta *= M_PI/180; //converter angulo para radianos para calculo do seno

            B = Fm /(i * l * sin(teta));

            ui->variavelResp->setText("B =");

            QString c = QString::number(B, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if (variavel == "i"){
        if(B == 0.0 or l == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de B e/ou l não pode ser igual a zero para essa equação.");
        } else {
            teta *= M_PI/180; //converter angulo para radianos para calculo do seno

            i = Fm /(B * l * sin(teta));

            ui->variavelResp->setText("i = ");

            QString c = QString::number(i, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if (variavel == "l"){
        if(B == 0.0 or i == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de B e/ou i não pode ser igual a zero para essa equação.");
        } else {
            teta *= M_PI/180; //converter angulo para radianos para calculo do seno

            l = Fm/(B * i * sin(teta));

            ui->variavelResp->setText("l =");

            QString c = QString::number(l, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if (variavel == "teta"){
        if(B == 0.0 or i == 0.0 or l == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de B e/ou i e/ou l não pode ser igual a zero para essa equação.");
        } else {
            teta = sin(Fm/(B * i * l));

            teta /= (M_PI*180); //converter angulo para radianos para calculo do seno

            QString c = QString::number(teta, 'f', 2);

            ui->Resp->setText("θ = " + c);
        }
    }
}

void telaParticula::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelFm->text().isEmpty()){
        variavel = "Fm";
        vazias++;
    }
    if(ui->variavelB->text().isEmpty()){
        variavel = "B";
        vazias++;
    }
    if(ui->variavelI->text().isEmpty()){
        variavel = "i";
        vazias++;
    }
    if(ui->variavelL->text().isEmpty()){
        variavel = "l";
        vazias++;
    }
    if(ui->variavelTeta->text().isEmpty()){
        variavel = "teta";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelFm->setFocus();
    } else if(vazias >= 2 and vazias <=4){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelFm->setFocus();
    } else if(vazias == 5){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelFm->setFocus();
    } else if(vazias == 1){
        if(variavel == "Fm"){
            double Fm   = (ui->variavelFm->text()).toDouble();
            double B    = (ui->variavelB->text()).toDouble();
            double i    = (ui->variavelI->text()).toDouble();
            double l    = (ui->variavelL->text()).toDouble();
            double teta = (ui->variavelTeta->text()).toDouble();

            Particula(Fm, B, i, l, teta, variavel);
        } else if(variavel == "B"){
            double Fm   = (ui->variavelFm->text()).toDouble();
            double B    = (ui->variavelB->text()).toDouble();
            double i    = (ui->variavelI->text()).toDouble();
            double l    = (ui->variavelL->text()).toDouble();
            double teta = (ui->variavelTeta->text()).toDouble();

            Particula(Fm, B, i, l, teta, variavel);
        } else if(variavel == "i"){
            double Fm   = (ui->variavelFm->text()).toDouble();
            double B    = (ui->variavelB->text()).toDouble();
            double i    = (ui->variavelI->text()).toDouble();
            double l    = (ui->variavelL->text()).toDouble();
            double teta = (ui->variavelTeta->text()).toDouble();

            Particula(Fm, B, i, l, teta, variavel);
        } else if(variavel == "l"){
            double Fm   = (ui->variavelFm->text()).toDouble();
            double B    = (ui->variavelB->text()).toDouble();
            double i    = (ui->variavelI->text()).toDouble();
            double l    = (ui->variavelL->text()).toDouble();
            double teta = (ui->variavelTeta->text()).toDouble();

            Particula(Fm, B, i, l, teta, variavel);
        } else if(variavel == "teta"){
            double Fm   = (ui->variavelFm->text()).toDouble();
            double B    = (ui->variavelB->text()).toDouble();
            double i    = (ui->variavelI->text()).toDouble();
            double l    = (ui->variavelL->text()).toDouble();
            double teta = (ui->variavelTeta->text()).toDouble();

            Particula(Fm, B, i, l, teta, variavel);
        }
    }
    vazias = 0;
}

void telaParticula::on_btnCancelar_clicked(){
    this->close();
}
