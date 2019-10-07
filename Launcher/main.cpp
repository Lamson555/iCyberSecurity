#include "mainwindow.h"

#include <QApplication>
#include <vector>
#include "userdata.h"

using namespace std;

int main(int argc, char *argv[])
{
    vector<ownerData> ownerVector;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
