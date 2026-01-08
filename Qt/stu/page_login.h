#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>
#include "stusql.h"
namespace Ui {
class Page_Login;
}

class Page_Login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_Login(QWidget *parent = nullptr);
    ~Page_Login();

private slots:
    void on_btn_login_clicked();

    void on_btn_exist_clicked();

signals:
    void sendLoginSuccess(bool auth);

private:
    Ui::Page_Login *ui;
    stuSql *m_ptrStuSql;
};

#endif // PAGE_LOGIN_H
