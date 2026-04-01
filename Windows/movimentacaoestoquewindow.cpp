#include "movimentacaoestoquewindow.h"
#include "ui_movimentacaoestoquewindow.h"

MovimentacaoEstoqueWindow::MovimentacaoEstoqueWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MovimentacaoEstoqueWindow)
{
    ui->setupUi(this);
}

MovimentacaoEstoqueWindow::~MovimentacaoEstoqueWindow()
{
    delete ui;
}
