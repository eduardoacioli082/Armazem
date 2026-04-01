#ifndef CONSULTAPRECOWINDOW_H
#define CONSULTAPRECOWINDOW_H

#include <QWidget>

namespace Ui {
class ConsultaPrecoWindow;
}

class ConsultaPrecoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit ConsultaPrecoWindow(QWidget *parent = nullptr);
    ~ConsultaPrecoWindow();

private:
    Ui::ConsultaPrecoWindow *ui;
};

#endif // CONSULTAPRECOWINDOW_H
