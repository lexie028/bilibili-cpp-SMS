#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFile>
#include <QKeyEvent>
#include <QCoreApplication>
#include <QDir>
#include <QRandomGenerator>
#include <QMessageBox>
#include "page_login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,  m_ptrStuSql(nullptr)
{
    ui->setupUi(this);


    QFile fread;
    fread.setFileName(":/build/Desktop_Qt_6_5_3_MinGW_64_bit-Debug/debug/dlg.css");
    fread.open(QIODevice::ReadOnly);
    QString strQss = fread.readAll();
    m_dlgLogin.setStyleSheet(strQss);

    fread.close();
    fread.setFileName(":/build/Desktop_Qt_6_5_3_MinGW_64_bit-Debug/debug/main.css");
    fread.open(QIODevice::ReadOnly);
    strQss = fread.readAll();
    this->setStyleSheet(strQss);


    m_dlgLogin.show();
    // this->hide();

    auto f = [&](){
        this->show();
    };
    connect(&m_dlgLogin,&Page_Login::sendLoginSuccess,this,f);

    connect(&m_dlgLogin,&Page_Login::sendLoginSuccess,this,&MainWindow::handleLoginSuccess);

//树
    ui->treeWidget->setColumnCount(1);
    QStringList l;
    l<<"学生信息管理系统";

    QTreeWidgetItem *pf = new QTreeWidgetItem(ui->treeWidget,l);
    ui->treeWidget->addTopLevelItem(pf);

    l.clear();
    l<<"学生管理";
    QTreeWidgetItem *p1 = new QTreeWidgetItem(pf,l);


    l.clear();
    l<<"管理员管理";
    QTreeWidgetItem *p2 = new QTreeWidgetItem(pf,l);


    pf->addChild(p1);
    pf->addChild(p2);

    ui->treeWidget->expandAll();





    ui->stackedWidget->setCurrentIndex(0);

    m_ptrStuSql = stuSql::getinstance();
    m_ptrStuSql->init();

    m_lNames<<"王峻熙";
    m_lNames<<"张嘉懿";
    m_lNames<<"李煜城";
    m_lNames<<"赵懿轩";
    m_lNames<<"王烨华";
    m_lNames<<"杨煜祺";
    m_lNames<<"阎智宸";
    m_lNames<<"孙正豪";
    m_lNames<<"吴昊然";
    m_lNames<<"郭志泽";
    m_lNames<<"李明杰";
    m_lNames<<"杨弘文";
    m_lNames<<"靳烨伟";
    m_lNames<<"马苑博";
    m_lNames<<"张鹏涛";
    m_lNames<<"叶红艳";
    m_lNames<<"张天荣";
    m_lNames<<"孙志梅";
    m_lNames<<"刘雪恩";
    m_lNames<<"孙荣";
    m_lNames<<"严正明";
    m_lNames<<"樊梨花";
    m_lNames<<"范海霞";
    m_lNames<<"卢玉霞";
    m_lNames<<"刘小二";
    m_lNames<<"张素珍";
    m_lNames<<"刘晓芒";
    m_lNames<<"杨素萍";
    m_lNames<<"潘晓娟";
    m_lNames<<"车路";
    m_lNames<<"何云霞";
    m_lNames<<"郭川川";
    m_lNames<<"吴莎莎";
    m_lNames<<"严夏红";
    m_lNames<<"闫春芝";
    m_lNames<<"王晓正";
    m_lNames<<"徐小明";
    m_lNames<<"王仕兰";
    m_lNames<<"东方蓉";
    m_lNames<<"吴娟";
    m_lNames<<"张伶边";
    m_lNames<<"董飘萨";
    m_lNames<<"曹兰芳";
    m_lNames<<"吴春芳";
    m_lNames<<"王媛媛";
    m_lNames<<"张秀艳";
    m_lNames<<"吴少耀";
    m_lNames<<"董亚娟";
    m_lNames<<"杨翠霞";
    m_lNames<<"薛爱珍";
    m_lNames<<"董晓";

    updateTable();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_exit_clicked()
{
    exit(0);
}


void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_F6)
    {
        QFile f;
        auto str = QCoreApplication::applicationDirPath();
        f.setFileName(str+"//"+"stuqss.css");
        f.open(QIODevice::ReadOnly);
        QString strQss = f.readAll();
        this->setStyleSheet(strQss);
        m_dlgLogin.setStyleSheet(strQss);
    }
}




void MainWindow::on_btn_m_clicked()
{
    //制作一千条学生数据
    QRandomGenerator g,c;
    g.seed(0);
    c.seed(0);
    for(int i=0;i<m_lNames.size();i++)
    {
        auto grade = g.bounded(7,10);
        auto uiclass = g.bounded(1,8);
        StuInfo info;
        info.name = m_lNames[i];
        if(i%3)
        {
            info.age = 16;
        }
        if(i%7)
        {
            info.age = 17;
        }
        if(i%2)
        {
            info.age = 18;
        }
        info.grade = grade;
        info.uiclass = uiclass;
        info.studentid = i;
        info.phone = "18580362222";
        info.wechat = "ll18580362222";
        m_ptrStuSql->addStu(info);
    }

}



void MainWindow::on_btn_add_clicked()
{
    m_dlgAddStu.setType(true);
    m_dlgAddStu.exec();
    updateTable();
}




void MainWindow::on_btn_clear_clicked()
{
    m_ptrStuSql->clearStuTable();
    updateTable();
}

void MainWindow::updateTable()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList l;
    l<<"序号"<<"id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);
    //只选中行
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    auto cnt = m_ptrStuSql->getStuCnt();
    ui->lb_cnt->setText(QString("学生总数：%1").arg(cnt));
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0,cnt);

    ui->tableWidget->setRowCount(cnt);
    for(int i =0;i<lStudents.size();i++)
    {
        ui->tableWidget->setItem(i,0,new QTableWidgetItem(QString::number(i)));
        ui->tableWidget->setItem(i,1,new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(i,3,new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(i,4,new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(i,5,new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(i,6,new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(i,7,new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(i,8,new QTableWidgetItem(lStudents[i].wechat));
    }
    //用户表
    ui->tw_user->clear();
    ui->tw_user->setColumnCount(3);
    QStringList l1;
    l1<<"姓名"<<"密码"<<"权限";
    ui->tw_user->setHorizontalHeaderLabels(l1);
    ui->tw_user->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_user->setEditTriggers(QAbstractItemView::NoEditTriggers);
    QList<UserInfo> lUsers = m_ptrStuSql->getALLUser();
    ui->tw_user->setRowCount(lUsers.size());
    for(int i =0;i<lUsers.size();i++)
    {
        ui->tw_user->setItem(i,0,new QTableWidgetItem(lUsers[i].username));
        ui->tw_user->setItem(i,1,new QTableWidgetItem(lUsers[i].password));
        ui->tw_user->setItem(i,2,new QTableWidgetItem(lUsers[i].aut));
    }


}

//删除
void MainWindow::on_btn_del_clicked()
{
    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        int id = ui->tableWidget->item(i,1)->text().toUInt();
        m_ptrStuSql->delStu(id);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功！");
    }

}

//修改
void MainWindow::on_btn_u_clicked()
{
    StuInfo info;

    int i = ui->tableWidget->currentRow();
    if(i>=0)
    {
        info.id = ui->tableWidget->item(i,1)->text().toUInt();//获取id的值并存到info中
        info.name = ui->tableWidget->item(i,2)->text();
        info.age = ui->tableWidget->item(i,3)->text().toUInt();
        info.grade = ui->tableWidget->item(i,4)->text().toUInt();
        info.uiclass = ui->tableWidget->item(i,5)->text().toUInt();
        info.studentid = ui->tableWidget->item(i,6)->text().toUInt();
        info.phone = ui->tableWidget->item(i,7)->text();
        info.wechat = ui->tableWidget->item(i,8)->text();
        m_dlgAddStu.setType(false,info);
        m_dlgAddStu.exec();//模态，栈的后进先出

    }
    updateTable();
}


void MainWindow::on_btn_s_clicked()
{
    QString strFilter=ui->le_s->text();
    if(strFilter.isEmpty())
    {
        QMessageBox::information(nullptr,"警告","名字筛选为空");
        updateTable();
        return;
    }
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(9);
    QStringList l;
    l<<"序号"<<"id"<<"姓名"<<"年龄"<<"年级"<<"班级"<<"学号"<<"电话"<<"微信";
    ui->tableWidget->setHorizontalHeaderLabels(l);

    auto cnt = m_ptrStuSql->getStuCnt();
    ui->lb_cnt->setText(QString("学生总数：%1").arg(cnt));
    QList<StuInfo> lStudents = m_ptrStuSql->getPageStu(0,cnt);


    int index = 1;
    for(int i =0;i<lStudents.size();i++)
    {
        if(!lStudents[i].name.contains(strFilter))
        {
            continue;
        }

        ui->tableWidget->setItem(index,0,new QTableWidgetItem(QString::number(index+1)));
        ui->tableWidget->setItem(index,1,new QTableWidgetItem(QString::number(lStudents[i].id)));
        ui->tableWidget->setItem(index,2,new QTableWidgetItem(lStudents[i].name));
        ui->tableWidget->setItem(index,3,new QTableWidgetItem(QString::number(lStudents[i].age)));
        ui->tableWidget->setItem(index,4,new QTableWidgetItem(QString::number(lStudents[i].grade)));
        ui->tableWidget->setItem(index,5,new QTableWidgetItem(QString::number(lStudents[i].uiclass)));
        ui->tableWidget->setItem(index,6,new QTableWidgetItem(QString::number(lStudents[i].studentid)));
        ui->tableWidget->setItem(index,7,new QTableWidgetItem(lStudents[i].phone));
        ui->tableWidget->setItem(index,8,new QTableWidgetItem(lStudents[i].wechat));
        index ++;
    }
    ui->tableWidget->setRowCount(index);
}

void MainWindow::handleLoginSuccess(bool auth)
{
    if (auth == false)
    {
        ui->treeWidget->setColumnHidden(0,true);
        ui->btn_add->setVisible(false);    // 隐藏增加按钮
        ui->btn_u->setVisible(false); // 隐藏修改按钮
        ui->btn_del->setVisible(false); // 隐藏删除按钮
    }
    else if (auth == true)
    {
        ui->btn_add->setVisible(true);     // 显示增加按钮
        ui->btn_u->setVisible(true);  // 显示修改按钮
        ui->btn_del->setVisible(true);  // 显示删除按钮
    }
}



void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (arg1 == Qt::Checked) {
        ui->tableWidget->selectAll();
        qDebug() << "Checkbox is Checked: Selected all rows in tableWidget.";
    } else if (arg1 == Qt::Unchecked) {
        ui->tableWidget->clearSelection();
        qDebug() << "Checkbox is Unchecked: Cleared selection in tableWidget.";
    }
}





void MainWindow::on_treeWidget_itemClicked(QTreeWidgetItem *item, int column)
{
    if (item->text(0) == "学生管理") {
        ui->stackedWidget->setCurrentIndex(0);
        qDebug() << "显示学生管理页面";
    } else if (item->text(0) == "管理员管理") {
        ui->stackedWidget->setCurrentIndex(1);
        qDebug() << "显示管理员管理页面";
    }
}


void MainWindow::on_btn_addu_clicked()
{
    m_dlgaddu.setType(true);
    m_dlgaddu.exec();
    updateTable();
}


void MainWindow::on_btn_key_clicked()
{
    UserInfo info;

    int i = ui->tw_user->currentRow();
    if(i>=0)
    {
        info.username = ui->tw_user->item(i,0)->text();
        info.password = ui->tw_user->item(i,1)->text();
        info.aut = ui->tw_user->item(i,2)->text();
        m_dlgaddu.setType(false,info);
        m_dlgaddu.exec();//模态，栈的后进先出

    }
    updateTable();
}

//m_dlgaddu

void MainWindow::on_btn_delu_clicked()
{
    int i = ui->tw_user->currentRow();
    if(i>=0)
    {
        QString username = ui->tw_user->item(i,0)->text();
        m_ptrStuSql->delUser(username);
        updateTable();
        QMessageBox::information(nullptr,"信息","删除成功！");
    }
}

