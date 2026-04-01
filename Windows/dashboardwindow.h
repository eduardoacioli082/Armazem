#ifndef DASHBOARDWINDOW_H
#define DASHBOARDWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class DashboardWindow;
}

class DashboardWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DashboardWindow(QString perfil, QWidget *parent = nullptr);
    ~DashboardWindow();

private:
    Ui::DashboardWindow *ui;
    QString m_perfil;
};

#endif // DASHBOARDWINDOW_H
