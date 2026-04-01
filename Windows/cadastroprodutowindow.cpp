#include "cadastroprodutowindow.h"
#include "ui_cadastroprodutowindow.h"

CadastroProdutoWindow::CadastroProdutoWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CadastroProdutoWindow)
{
    ui->setupUi(this);
}

CadastroProdutoWindow::~CadastroProdutoWindow()
{
    delete ui;
}
