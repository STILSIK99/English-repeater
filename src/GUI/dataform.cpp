#include "dataform.h"
#include "ui_dataform.h"

DataForm::DataForm (QWidget *parent) : ui (new Ui::DataForm)
{
    ui->setupUi (this);
}

DataForm::~DataForm()
{
    deleteLater();
}

void DataForm::on_pushButton_clicked()
{
    ui->tableWidget->setRowCount (ui->tableWidget->rowCount() + 1);
}


void DataForm::on_pushButton_2_clicked()
{
    ui->tableWidget->setRowCount (ui->tableWidget->rowCount() - 1);
}


void DataForm::on_pushButton_3_clicked()
{
    //send to database

}

