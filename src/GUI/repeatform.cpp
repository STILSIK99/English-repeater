#include "repeatform.h"
#include "ui_repeatform.h"

RepeatForm::RepeatForm (QWidget *parent) : ui (new Ui::RepeatForm)
{
    ui->setupUi (this);
}

RepeatForm::~RepeatForm()
{
    deleteLater();
}

