#include "MainWindow.h"
#include <QApplication>
#include <QtWidgets>
#include <QtGui>
#include <QtCore>

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
