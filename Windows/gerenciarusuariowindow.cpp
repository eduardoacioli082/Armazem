#include "gerenciarusuariowindow.h"
#include "ui_gerenciarusuariowindow.h"

GerenciarUsuarioWindow::GerenciarUsuarioWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GerenciarUsuarioWindow)
{
    ui->setupUi(this);
}

GerenciarUsuarioWindow::~GerenciarUsuarioWindow()
{
    delete ui;
}
