#include "dashboardwindow.h"
#include "ui_dashboardwindow.h"

DashboardWindow::DashboardWindow(QString perfil, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::DashboardWindow),
    m_perfil(perfil)
{
    ui->setupUi(this);

    this->setMaximumSize(472,431);

    if (m_perfil == "admin")
    {
        ui->AdministradorFrame->show();
        this->setWindowTitle("Dashboard - Administrador");
        ui->GerenteFrame->hide();
        ui->FuncionarioFrame->hide();
    } else if (m_perfil == "gerente")
    {
        ui->AdministradorFrame->hide();
        this->setWindowTitle("Dashboard - Gerente");
        ui->GerenteFrame->show();
        ui->GerenteFrame->move(10,40);
        ui->FuncionarioFrame->hide();
    } else {
        ui->AdministradorFrame->hide();
        this->setWindowTitle("Dashboard - Funcionario");
        ui->GerenteFrame->hide();
        ui->FuncionarioFrame->show();
        ui->FuncionarioFrame->move(10,40);
    }
}

DashboardWindow::~DashboardWindow()
{
    delete ui;
}
