#include "telacaos.h"
#include "ui_telacaos.h"

telaCaos::telaCaos(QWidget *parent) : QDialog(parent), ui(new Ui::telaCaos){
    ui->setupUi(this);
    ui->variavelXNew->setValidator(new QDoubleValidator(-1000000, 1000000, 3, this));
    ui->variavelK->setValidator(new QDoubleValidator(-1000000, 1000000, 3, this));
    ui->variavelXOld->setValidator(new QDoubleValidator(-1000000, 10000000, 3, this));
}

telaCaos::~telaCaos(){
    delete ui;
}

void telaCaos::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=C4eHJ8ZJgG4";
    QDesktopServices::openUrl(QUrl(link));
}

void telaCaos::Caos(double xNew, double K, double xOld, QString variavel){
    if(variavel == "xNew"){
        xNew = K * xOld * (1 - xOld);

        QPixmap logoXNew(":/new/variaveis/images/xNew.png");
        ui->variavelResp1->setPixmap(logoXNew.scaled(66,66));
        ui->variavelResp2->setText(" ");

        QString c = QString::number(xNew, 'f', 4);

        ui->Resp1->setText("=" + c);
        ui->Resp2->setText(" ");
    } else if(variavel == "k"){
        if(xOld == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de xOld não pode ser igual a zero para essa equação.");
        } else {
            K = xNew/(xOld*(1-xOld));

            ui->variavelResp1->setText("K =");
            ui->variavelResp2->setText(" ");

            QString c = QString::number(K, 'f', 4);

            ui->Resp1->setText(c);
            ui->Resp2->setText(" ");
        }
    } else if(variavel == "xOld"){
        if(K == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de K não pode ser igual a zero para essa equação.");
        } else {
            double delta, old, old1, old2;

            delta = 1 - 4*1*(xNew/K);

            if(delta < 0){
                QString ck = QString::number(K, 'f', 4);
                QString cX = QString::number(xNew, 'f', 4);

                QMessageBox::warning(this, "Vish! Deu ruim! :(",
                                           "Não existe solução real para k = " + ck + " e X_new = "+ cX + ".\n"+
                                           "O delta da equação ficou menor que 0.\n"
                                           "Tente de novo...");
            } else if(delta == 0.0){
                old = (1 + sqrt(delta))/2;

                QPixmap logoXNew(":/new/variaveis/images/xOld.png");

                ui->variavelResp1->setPixmap(logoXNew.scaled(66,66));

                QString c = QString::number(old, 'f', 4);

                ui->Resp1->setText(" = " + c);
            } else if(delta > 0){
                old1 = (1 + sqrt(delta))/2;
                old2 = (1 - sqrt(delta))/2;

                QPixmap logoXNew1(":/new/variaveis/images/xOld1.png");
                QPixmap logoXNew2(":/new/variaveis/images/xOld2.png");

                ui->variavelResp1->setPixmap(logoXNew1.scaled(66,66));
                ui->variavelResp2->setPixmap(logoXNew2.scaled(66,66));

                QString c1 = QString::number(old1, 'f', 6);
                QString c2 = QString::number(old2, 'f', 6);

                ui->Resp1->setText(" = " + c1);
                ui->Resp2->setText(" = " + c2);
            }
        }
    }
}

void telaCaos::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelXNew->text().isEmpty()){
        variavel = "xNew";
        vazias++;
    }
    if(ui->variavelK->text().isEmpty()){
        variavel = "k";
        vazias++;
    }
    if(ui->variavelXOld->text().isEmpty()){
        variavel = "xOld";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp1->setText("? =");
        ui->variavelResp2->setText(" ");
        ui->Resp1->setText("0");
        ui->Resp2->setText(" ");

        ui->variavelXNew->setFocus();
    } else if(vazias == 2){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp1->setText("? =");
        ui->variavelResp2->setText(" ");
        ui->Resp1->setText("0");
        ui->Resp2->setText(" ");

        ui->variavelXNew->setFocus();
    } else if(vazias == 3){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp1->setText("? =");
        ui->variavelResp2->setText(" ");
        ui->Resp1->setText("0");
        ui->Resp2->setText(" ");

        ui->variavelXNew->setFocus();
    } else if(vazias == 1){
        if(variavel == "xNew"){
            double xNew = (ui->variavelXNew->text()).toDouble();
            double K    = (ui->variavelK->text()).toDouble();
            double xOld = (ui->variavelXOld->text()).toDouble();

            Caos(xNew, K, xOld, variavel);
        } else if(variavel == "k"){
            double xNew = (ui->variavelXNew->text()).toDouble();
            double K    = (ui->variavelK->text()).toDouble();
            double xOld = (ui->variavelXOld->text()).toDouble();

            Caos(xNew, K, xOld, variavel);
        } else if(variavel == "xOld"){
            double xNew = (ui->variavelXNew->text()).toDouble();
            double K    = (ui->variavelK->text()).toDouble();
            double xOld = (ui->variavelXOld->text()).toDouble();

            Caos(xNew, K, xOld, variavel);
        }
    }
    vazias = 0;
}

void telaCaos::on_btnCancelar_clicked(){
    this->close();
}
