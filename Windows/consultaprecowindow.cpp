#include "consultaprecowindow.h"
#include "ui_consultaprecowindow.h"

ConsultaPrecoWindow::ConsultaPrecoWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ConsultaPrecoWindow)
{
    ui->setupUi(this);
}

ConsultaPrecoWindow::~ConsultaPrecoWindow()
{
    delete ui;
}
