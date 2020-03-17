#include "Canvas.h"

#include <QApplication>
#include "MainWindow.h"
#include "SQLType.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    w.resize(640,480);
//    auto search = SQLType::PLSQLTypes.find("long");
//    cout << search->first << "" << search->second << "";
    return a.exec();
}
