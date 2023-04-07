#pragma once

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class DataForm;
}
QT_END_NAMESPACE

class DataForm : public QWidget
{
        Q_OBJECT

    public:
        DataForm (QWidget *parent = nullptr);
        ~DataForm() override;


    private:
        Ui::DataForm *ui;
};
