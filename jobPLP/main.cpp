#include "mainwindow.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    QSplashScreen *splash = new QSplashScreen();

    MainWindow principal;

    splash->setPixmap(QPixmap(":/splash/images/splash_600x375.png"));

    splash->show();

    QTimer::singleShot(7000, splash, SLOT(close())); //Fecha a tela de Splash depois de 7 segundos
    QTimer::singleShot(7500, &principal, SLOT(show())); //Abre a tela principal depois de 7,5 segundos

    return a.exec();
}
