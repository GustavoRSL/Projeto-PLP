#include "telagravidade.h"
#include "ui_telagravidade.h"

telaGravidade::telaGravidade(QWidget *parent) : QDialog(parent), ui(new Ui::telaGravidade){
    ui->setupUi(this);
    ui->variavelF->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelG->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelM1->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelM2->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
    ui->variavelD->setValidator(new QDoubleValidator(-1000000, 1000000, 2, this));
}

telaGravidade::~telaGravidade(){
    delete ui;
}

void telaGravidade::on_btnSite_clicked(){
    QString link = "https://www.youtube.com/watch?v=82VIKUSghQ4";
    QDesktopServices::openUrl(QUrl(link));
}

void telaGravidade::Gravidade(double F, double G, double m1, double m2, double d, QString variavel){
    if(variavel == "F"){
        if(d == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de d não pode ser igual a zero para essa equação.");
        } else {
            F = (G * m1 * m2)/pow(d,2);

            ui->variavelResp->setText("F = ");

            QString c = QString::number(F, 'f', 2);

            ui->Resp->setText(c);
        }
    } else if(variavel == "G"){
        if(m1 == 0.0 or m2 == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de m1 e/ou m2 não podem ser iguais a zero para essa equação.");
        } else {
            G = (F * pow(d, 2))/(m1 * m2);

            ui->variavelResp->setText("G = ");

            QString c = QString::number(G, 'f', 2);

            ui->Resp->setText(c);

        }
    } else if(variavel == "m1"){
        if(G == 0.0 or m2 == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de G e/ou m2 não podem ser iguais a zero para essa equação.");
        } else {
            m1 = (F * pow(d, 2))/(G * m2);

            QPixmap logoM1(":/new/variaveis/images/m1.png");
            ui->variavelResp->setPixmap(logoM1.scaled(66,66));

            QString c = QString::number(m1, 'f', 2);

            ui->Resp->setText(" = " + c);
        }
    } else if(variavel == "m2"){
        if(G == 0.0 or m1 == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "Os valores de G e/ou m1 não podem ser iguais a zero para essa equação.");
        } else {
            m2 = (F * pow(d, 2))/(G * m1);

            QPixmap logoM2(":/new/variaveis/images/m2.png");
            ui->variavelResp->setPixmap(logoM2.scaled(66,66));

            QString c = QString::number(m2, 'f', 2);

            ui->Resp->setText(" = " + c);
        }
    } else if(variavel == "d"){
        if(F == 0.0){
            QMessageBox::critical(this, "Atenção amigo!", "O valor de F não pode ser igual a zero para essa equação.");
        } else {
            d = sqrt((G * m1 * m2)/F);

            ui->variavelResp->setText("d = ");

            QString c = QString::number(d, 'f', 2);

            ui->Resp->setText(c);
        }
    }
}

void telaGravidade::on_btnCalculate_clicked(){
    QString variavel = "-";
    int vazias = 0;

    if(ui->variavelF->text().isEmpty()){
        variavel = "F";
        vazias++;
    }
    if(ui->variavelG->text().isEmpty()){
        variavel = "G";
        vazias++;
    }
    if(ui->variavelM1->text().isEmpty()){
        variavel = "m1";
        vazias++;
    }
    if(ui->variavelM2->text().isEmpty()){
        variavel = "m2";
        vazias++;
    }
    if(ui->variavelD->text().isEmpty()){
        variavel = "d";
        vazias++;
    }

    if(vazias == 0){
        QMessageBox::critical(this, "Atenção amigo!", "Amigo, você precisa deixar um campo vazio pra gente retornar o que você quer saber...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias >= 2 and vazias <=4){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa deixar apenas um campo vazio...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias == 5){
        QMessageBox::warning(this, "Atenção amigo!", "Amigo, você precisa digitar alguma coisa pra gente calcular...");

        ui->variavelResp->setText("? =");
        ui->Resp->setText("0");

        ui->variavelF->setFocus();
    } else if(vazias == 1){
        if(variavel == "F"){
            double F  = (ui->variavelF->text()).toDouble();
            double G  = (ui->variavelG->text()).toDouble();
            double m1 = (ui->variavelM1->text()).toDouble();
            double m2 = (ui->variavelM2->text()).toDouble();
            double d  = (ui->variavelD->text()).toDouble();

            Gravidade(F, G, m1, m2, d, variavel);
        } else if(variavel == "G"){
            double F  = (ui->variavelF->text()).toDouble();
            double G  = (ui->variavelG->text()).toDouble();
            double m1 = (ui->variavelM1->text()).toDouble();
            double m2 = (ui->variavelM2->text()).toDouble();
            double d  = (ui->variavelD->text()).toDouble();

            Gravidade(F, G, m1, m2, d, variavel);
        } else if(variavel == "m1"){
            double F  = (ui->variavelF->text()).toDouble();
            double G  = (ui->variavelG->text()).toDouble();
            double m1 = (ui->variavelM1->text()).toDouble();
            double m2 = (ui->variavelM2->text()).toDouble();
            double d  = (ui->variavelD->text()).toDouble();

            Gravidade(F, G, m1, m2, d, variavel);
        } else if(variavel == "m2"){
            double F  = (ui->variavelF->text()).toDouble();
            double G  = (ui->variavelG->text()).toDouble();
            double m1 = (ui->variavelM1->text()).toDouble();
            double m2 = (ui->variavelM2->text()).toDouble();
            double d  = (ui->variavelD->text()).toDouble();

            Gravidade(F, G, m1, m2, d, variavel);
        } else if(variavel == "d"){
            double F  = (ui->variavelF->text()).toDouble();
            double G  = (ui->variavelG->text()).toDouble();
            double m1 = (ui->variavelM1->text()).toDouble();
            double m2 = (ui->variavelM2->text()).toDouble();
            double d  = (ui->variavelD->text()).toDouble();

            Gravidade(F, G, m1, m2, d, variavel);
        }
    }
    vazias = 0;
}

void telaGravidade::on_btnCancelar_clicked(){
    this->close();
}
