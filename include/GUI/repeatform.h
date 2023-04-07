#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class RepeatForm;
}
QT_END_NAMESPACE

class RepeatForm : public QWidget
{
        Q_OBJECT

    public:
        RepeatForm (QWidget *parent = nullptr);
        ~RepeatForm() override;


    private:
        Ui::RepeatForm *ui;
};
