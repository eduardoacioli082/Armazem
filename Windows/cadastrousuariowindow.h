#ifndef CADASTROUSUARIOWINDOW_H
#define CADASTROUSUARIOWINDOW_H

#include <QWidget>

namespace Ui {
class CadastroUsuarioWindow;
}

class CadastroUsuarioWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroUsuarioWindow(QWidget *parent = nullptr);
    ~CadastroUsuarioWindow();

private:
    Ui::CadastroUsuarioWindow *ui;
};

#endif // CADASTROUSUARIOWINDOW_H
