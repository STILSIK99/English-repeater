#pragma once

#include <QWidget>

#include "repeatform.h"

QT_BEGIN_NAMESPACE
namespace Ui
{
    class DialogForm;
}
QT_END_NAMESPACE

class DialogForm : public QWidget
{
        Q_OBJECT

    public:
        DialogForm (QWidget *parent = nullptr);
        ~DialogForm() override;


    private slots:
        void on_pushButton_clicked();

    private:
        Ui::DialogForm *ui;
};
