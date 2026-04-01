#ifndef MOVIMENTACAOESTOQUEWINDOW_H
#define MOVIMENTACAOESTOQUEWINDOW_H

#include <QMainWindow>

namespace Ui {
class MovimentacaoEstoqueWindow;
}

class MovimentacaoEstoqueWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MovimentacaoEstoqueWindow(QWidget *parent = nullptr);
    ~MovimentacaoEstoqueWindow();

private:
    Ui::MovimentacaoEstoqueWindow *ui;
};

#endif // MOVIMENTACAOESTOQUEWINDOW_H
