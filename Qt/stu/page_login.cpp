#include "page_login.h"
#include "ui_page_login.h"

#include <QMessageBox>
#include <stusql.h>
#include <mainwindow.h>
Page_Login::Page_Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Page_Login)
    , m_ptrStuSql(new stuSql())
{
    ui->setupUi(this);

}

Page_Login::~Page_Login()
{
    delete ui;
    delete m_ptrStuSql;
}

// void Page_Login::on_btn_login_clicked()
// {
//     //数据库查找用户名和密码
//     // auto l =getALLUser();
//     QString strFilter=ui->user1->text();
//     if(strFilter.isEmpty())
//     {
//         QMessageBox::information(nullptr,"警告","请输入用户名");
//         return;
//     }
//     qDebug()<<isExist(strFilter);




//     //如果失败就提示



//     //如果成功就进入主界面
//     emit sendLoginSuccess();
// }
void Page_Login::on_btn_login_clicked()
{
    // 获取用户输入
    QString username = ui->user1->text();
    QString password = ui->key1->text();

    // 检查用户名是否为空
    if (username.isEmpty())
    {
        QMessageBox::information(nullptr, "警告", "请输入用户名");
        return;
    }

    // 检查密码是否为空
    if (password.isEmpty())
    {
        QMessageBox::information(nullptr, "警告", "请输入密码");
        return;
    }

    // 验证用户是否存在
    if (!m_ptrStuSql->isExist(username))
    {
        QMessageBox::information(nullptr, "错误", "用户名不存在");
        return;
    }

    // 获取所有用户信息
    QList<UserInfo> allUsers = m_ptrStuSql->getALLUser();
    UserInfo currentUser;
    bool validUser = false;

    for (const auto &user : allUsers)
    {
        if (user.username == username && user.password == password)
        {
            currentUser = user;
            validUser = true;
            break;
        }
    }

    if (!validUser)
    {
        QMessageBox::warning(this, "错误", "用户名或密码错误");
        return;
    }

    // 登录成功，根据权限调整界面
    if (currentUser.aut == "学生")
    {
        emit sendLoginSuccess(false);
    }
    else if (currentUser.aut == "管理员")
    {
        emit sendLoginSuccess(true);
    }
    // 关闭登录页面
    this->close();
}



void Page_Login::on_btn_exist_clicked()
{
    //退出
    exit(0);
}

