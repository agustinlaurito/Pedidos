#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPixmap pix_splash(":/Main/Resources/Splash.png");
    QSplashScreen *splash = new QSplashScreen;
    splash->setPixmap(pix_splash);
    splash->show();

    MainWindow w;

    //w.show();
    w.showMaximized();
    splash->finish(&w);
    return a.exec();
}
