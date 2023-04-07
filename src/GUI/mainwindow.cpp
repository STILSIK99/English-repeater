#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow (QWidget *parent)
    : QMainWindow (parent)
    , ui (new Ui::MainWindow)
{
    ui->setupUi (this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    DataForm *data = new DataForm (this);
    data->show();
}


void MainWindow::on_pushButton_clicked()
{
    DialogForm *data = new DialogForm (this);
    data->show();
}

