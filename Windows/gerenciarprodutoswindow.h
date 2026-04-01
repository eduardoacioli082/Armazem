#ifndef GERENCIARPRODUTOSWINDOW_H
#define GERENCIARPRODUTOSWINDOW_H

#include <QMainWindow>

namespace Ui {
class GerenciarProdutosWindow;
}

class GerenciarProdutosWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GerenciarProdutosWindow(QWidget *parent = nullptr);
    ~GerenciarProdutosWindow();

private:
    Ui::GerenciarProdutosWindow *ui;
};

#endif // GERENCIARPRODUTOSWINDOW_H
