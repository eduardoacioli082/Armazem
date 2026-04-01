#include "gerenciarprodutoswindow.h"
#include "ui_gerenciarprodutoswindow.h"

GerenciarProdutosWindow::GerenciarProdutosWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GerenciarProdutosWindow)
{
    ui->setupUi(this);
}

GerenciarProdutosWindow::~GerenciarProdutosWindow()
{
    delete ui;
}
