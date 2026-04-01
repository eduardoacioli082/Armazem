#ifndef GERENCIARUSUARIOWINDOW_H
#define GERENCIARUSUARIOWINDOW_H

#include <QMainWindow>

namespace Ui {
class GerenciarUsuarioWindow;
}

class GerenciarUsuarioWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GerenciarUsuarioWindow(QWidget *parent = nullptr);
    ~GerenciarUsuarioWindow();

private:
    Ui::GerenciarUsuarioWindow *ui;
};

#endif // GERENCIARUSUARIOWINDOW_H
