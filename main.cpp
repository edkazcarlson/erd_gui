#include "Canvas.h"

#include <QApplication>
#include "MainWindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.resize(640,480);
    return a.exec();
}
