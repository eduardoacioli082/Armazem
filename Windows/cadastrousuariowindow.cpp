#include "cadastrousuariowindow.h"
#include "ui_cadastrousuariowindow.h"

CadastroUsuarioWindow::CadastroUsuarioWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CadastroUsuarioWindow)
{
    ui->setupUi(this);
}

CadastroUsuarioWindow::~CadastroUsuarioWindow()
{
    delete ui;
}
