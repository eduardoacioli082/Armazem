#ifndef CADASTROADMINWINDOW_H
#define CADASTROADMINWINDOW_H

#include <QWidget>

namespace Ui {
class CadastroAdminWindow;
}

class CadastroAdminWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroAdminWindow(QWidget *parent = nullptr);
    ~CadastroAdminWindow();

private:
    Ui::CadastroAdminWindow *ui;
};

#endif // CADASTROADMINWINDOW_H
