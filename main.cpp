#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont("Noto Sans Mono"));
    MainWindow w;
    w.showFullScreen();
    return a.exec();
}
