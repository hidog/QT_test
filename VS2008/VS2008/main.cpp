/***********************************************************************************************
*
*	自行撰寫的QT測試程式
*
************************************************************************************************/

#include "../../QT_src/mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
