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
