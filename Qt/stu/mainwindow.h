#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeWidget>

#include "page_login.h"
#include "stusql.h"
#include "dlg_addstu.h"
#include "dlg_addu.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btn_exit_clicked();
    virtual void keyPressEvent(QKeyEvent *event);

    void on_btn_m_clicked();

    void on_btn_add_clicked();

    void on_btn_clear_clicked();

    void on_btn_del_clicked();

    void on_btn_u_clicked();

    void on_btn_s_clicked();

    void handleLoginSuccess(bool auth);

    void on_checkBox_stateChanged(int arg1);

    void on_treeWidget_itemClicked(QTreeWidgetItem *item, int column);

    void on_btn_addu_clicked();

    void on_btn_key_clicked();

    void on_btn_delu_clicked();

private:
    void updateTable();

private:
    Ui::MainWindow *ui;
    Page_Login m_dlgLogin;
    stuSql *m_ptrStuSql;
    QStringList m_lNames;
    Dlg_AddStu m_dlgAddStu;
    dlg_addu m_dlgaddu;

};
#endif // MAINWINDOW_H
