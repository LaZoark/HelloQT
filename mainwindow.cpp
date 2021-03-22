#include "mainwindow.h"
#include "ui_mainwindow.h"
bool onoff = false;      // 呼叫main裡面所儲存的狀態
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    onoff = !onoff;
    if(onoff)
        ui->label->setText("Hello!!!!  B0742006"); ///ui 裡面已經有介面
    else
        ui->label->setText("---");
}
