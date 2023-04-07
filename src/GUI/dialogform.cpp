#include "dialogform.h"
#include "ui_dialogform.h"

DialogForm::DialogForm (QWidget *parent) : ui (new Ui::DialogForm)
{
    ui->setupUi (this);
}

DialogForm::~DialogForm()
{
    deleteLater();
}


void DialogForm::on_pushButton_clicked()
{
    RepeatForm *data = new RepeatForm;
    data->show();
}

