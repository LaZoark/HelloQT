#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    extern bool onoff; // 紀錄按鈕的狀態
    w.show();
    return a.exec();
}
