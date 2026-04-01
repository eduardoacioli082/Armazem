#include "cadastroadminwindow.h"
#include "ui_cadastroadminwindow.h"

CadastroAdminWindow::CadastroAdminWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CadastroAdminWindow)
{
    ui->setupUi(this);
}

CadastroAdminWindow::~CadastroAdminWindow()
{
    delete ui;
}
