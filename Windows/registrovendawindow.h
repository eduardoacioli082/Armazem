#ifndef REGISTROVENDAWINDOW_H
#define REGISTROVENDAWINDOW_H

#include <QWidget>

namespace Ui {
class RegistroVendaWindow;
}

class RegistroVendaWindow : public QWidget
{
    Q_OBJECT

public:
    explicit RegistroVendaWindow(QWidget *parent = nullptr);
    ~RegistroVendaWindow();

private:
    Ui::RegistroVendaWindow *ui;
};

#endif // REGISTROVENDAWINDOW_H
