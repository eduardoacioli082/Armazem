#ifndef CADASTROPRODUTOWINDOW_H
#define CADASTROPRODUTOWINDOW_H

#include <QWidget>

namespace Ui {
class CadastroProdutoWindow;
}

class CadastroProdutoWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CadastroProdutoWindow(QWidget *parent = nullptr);
    ~CadastroProdutoWindow();

private:
    Ui::CadastroProdutoWindow *ui;
};

#endif // CADASTROPRODUTOWINDOW_H
