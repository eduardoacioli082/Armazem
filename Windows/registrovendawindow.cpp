#include "registrovendawindow.h"
#include "ui_registrovendawindow.h"

RegistroVendaWindow::RegistroVendaWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RegistroVendaWindow)
{
    ui->setupUi(this);
}

RegistroVendaWindow::~RegistroVendaWindow()
{
    delete ui;
}
