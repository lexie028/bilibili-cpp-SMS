#include "dlg_addstu.h"
#include "ui_dlg_addstu.h"
#include "stusql.h"
#include <QMessageBox>

Dlg_AddStu::Dlg_AddStu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dlg_AddStu)
{
    ui->setupUi(this);
}

Dlg_AddStu::~Dlg_AddStu()
{
    delete ui;
}

void Dlg_AddStu::setType(bool isAdd,StuInfo info)
{
    m_isAdd = isAdd;
    m_info = info;//把info的所有信息传给中间变量m_info，包括id
    ui->lname->setText(info.name);
    ui->sage->setValue(info.age);
    ui->lgrade->setText(QString::number(info.grade));
    ui->luiclass->setText(QString::number(info.uiclass));
    ui->lstuid->setText(QString::number(info.studentid));
    ui->lphone->setText(info.phone);
    ui->lwechat->setText(info.wechat);
}

void Dlg_AddStu::on_btn_b_clicked()
{
    StuInfo info;
    auto ptr = stuSql::getinstance();
    info.id = m_info.id;//传id
    info.name = ui->lname->text();
    info.age = ui->sage->text().toInt();
    info.grade = ui->lgrade->text().toInt();
    info.uiclass = ui->luiclass->text().toInt();
    info.studentid = ui->lstuid->text().toInt();
    info.phone = ui->lphone->text();
    info.wechat = ui->lwechat->text();

    if(m_isAdd)
    {
        ptr->addStu(info);
    }
    else
    {
        ptr->UpdateStuInfo(info);
    }
    QMessageBox::information(nullptr,"信息","存储成功！");
    this->hide();
}


void Dlg_AddStu::on_btn_q_clicked()
{
    this->hide();
}

