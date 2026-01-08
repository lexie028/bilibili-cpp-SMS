#include "dlg_addu.h"
#include "ui_dlg_addu.h"

#include <QMessageBox>

dlg_addu::dlg_addu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dlg_addu)
{
    ui->setupUi(this);
}

dlg_addu::~dlg_addu()
{
    delete ui;
}

void dlg_addu::setType(bool isAdd, UserInfo info)
{
    m_isAdd = isAdd;
    m_info = info;//把info的所有信息传给中间变量m_info，包括id
    ui->username1->setText(info.username);
    ui->password1->setText(info.password);
    ui->auth1->setText(info.aut);
}

void dlg_addu::on_btn_exit_clicked()
{
    this->close();
}


void dlg_addu::on_btn_save_clicked()
{
    UserInfo info;
    auto ptr = stuSql::getinstance();
    info.username = ui->username1->text();
    info.password = ui->password1->text();
    info.aut = ui->auth1->text();

    if(m_isAdd)
    {
        ptr->AddUser(info);
    }
    else
    {
        ptr->UpdateUser(info);
    }
    QMessageBox::information(nullptr,"信息","存储成功！");
    this->close();
}

