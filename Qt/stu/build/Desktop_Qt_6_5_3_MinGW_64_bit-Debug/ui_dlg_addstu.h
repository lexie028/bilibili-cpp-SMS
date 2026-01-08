/********************************************************************************
** Form generated from reading UI file 'dlg_addstu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDSTU_H
#define UI_DLG_ADDSTU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dlg_AddStu
{
public:
    QLabel *name;
    QLabel *age;
    QLabel *grade;
    QLabel *uiclass;
    QLabel *stuid;
    QLabel *phone;
    QLineEdit *lname;
    QLineEdit *lgrade;
    QLineEdit *luiclass;
    QLineEdit *lstuid;
    QLineEdit *lphone;
    QSpinBox *sage;
    QWidget *widget;
    QPushButton *btn_b;
    QPushButton *btn_q;
    QLineEdit *lwechat;
    QLabel *wechat;

    void setupUi(QDialog *Dlg_AddStu)
    {
        if (Dlg_AddStu->objectName().isEmpty())
            Dlg_AddStu->setObjectName("Dlg_AddStu");
        Dlg_AddStu->resize(410, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Dlg_AddStu->setWindowIcon(icon);
        Dlg_AddStu->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 47, 52);"));
        name = new QLabel(Dlg_AddStu);
        name->setObjectName("name");
        name->setGeometry(QRect(110, 30, 30, 23));
        name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        age = new QLabel(Dlg_AddStu);
        age->setObjectName("age");
        age->setGeometry(QRect(110, 60, 30, 23));
        age->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        grade = new QLabel(Dlg_AddStu);
        grade->setObjectName("grade");
        grade->setGeometry(QRect(110, 90, 30, 23));
        grade->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        uiclass = new QLabel(Dlg_AddStu);
        uiclass->setObjectName("uiclass");
        uiclass->setGeometry(QRect(110, 120, 30, 23));
        uiclass->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        stuid = new QLabel(Dlg_AddStu);
        stuid->setObjectName("stuid");
        stuid->setGeometry(QRect(110, 150, 30, 23));
        stuid->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        phone = new QLabel(Dlg_AddStu);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(110, 180, 30, 23));
        phone->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lname = new QLineEdit(Dlg_AddStu);
        lname->setObjectName("lname");
        lname->setGeometry(QRect(150, 30, 150, 23));
        lname->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        lgrade = new QLineEdit(Dlg_AddStu);
        lgrade->setObjectName("lgrade");
        lgrade->setGeometry(QRect(150, 90, 150, 23));
        lgrade->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        luiclass = new QLineEdit(Dlg_AddStu);
        luiclass->setObjectName("luiclass");
        luiclass->setGeometry(QRect(150, 120, 150, 23));
        luiclass->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        lstuid = new QLineEdit(Dlg_AddStu);
        lstuid->setObjectName("lstuid");
        lstuid->setGeometry(QRect(150, 150, 150, 23));
        lstuid->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        lphone = new QLineEdit(Dlg_AddStu);
        lphone->setObjectName("lphone");
        lphone->setGeometry(QRect(150, 180, 150, 23));
        lphone->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        sage = new QSpinBox(Dlg_AddStu);
        sage->setObjectName("sage");
        sage->setGeometry(QRect(150, 60, 40, 23));
        sage->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"border-color: rgb(255, 255, 255);"));
        sage->setMaximum(100);
        sage->setValue(17);
        widget = new QWidget(Dlg_AddStu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 239, 410, 61));
        btn_b = new QPushButton(widget);
        btn_b->setObjectName("btn_b");
        btn_b->setGeometry(QRect(110, 10, 80, 23));
        btn_b->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(253, 135, 50);"));
        btn_q = new QPushButton(widget);
        btn_q->setObjectName("btn_q");
        btn_q->setGeometry(QRect(220, 10, 80, 21));
        btn_q->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(253, 135, 50);"));
        lwechat = new QLineEdit(Dlg_AddStu);
        lwechat->setObjectName("lwechat");
        lwechat->setGeometry(QRect(150, 210, 150, 23));
        lwechat->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        wechat = new QLabel(Dlg_AddStu);
        wechat->setObjectName("wechat");
        wechat->setGeometry(QRect(110, 210, 30, 23));
        wechat->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(lname, sage);
        QWidget::setTabOrder(sage, lgrade);
        QWidget::setTabOrder(lgrade, luiclass);
        QWidget::setTabOrder(luiclass, lstuid);
        QWidget::setTabOrder(lstuid, lphone);
        QWidget::setTabOrder(lphone, lwechat);
        QWidget::setTabOrder(lwechat, btn_b);
        QWidget::setTabOrder(btn_b, btn_q);

        retranslateUi(Dlg_AddStu);

        QMetaObject::connectSlotsByName(Dlg_AddStu);
    } // setupUi

    void retranslateUi(QDialog *Dlg_AddStu)
    {
        Dlg_AddStu->setWindowTitle(QCoreApplication::translate("Dlg_AddStu", "\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        name->setText(QCoreApplication::translate("Dlg_AddStu", "\345\247\223\345\220\215", nullptr));
        age->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\351\276\204", nullptr));
        grade->setText(QCoreApplication::translate("Dlg_AddStu", "\345\271\264\347\272\247", nullptr));
        uiclass->setText(QCoreApplication::translate("Dlg_AddStu", "\347\217\255\347\272\247", nullptr));
        stuid->setText(QCoreApplication::translate("Dlg_AddStu", "\345\255\246\345\217\267", nullptr));
        phone->setText(QCoreApplication::translate("Dlg_AddStu", "\347\224\265\350\257\235", nullptr));
        btn_b->setText(QCoreApplication::translate("Dlg_AddStu", "\344\277\235\345\255\230", nullptr));
        btn_q->setText(QCoreApplication::translate("Dlg_AddStu", "\345\217\226\346\266\210", nullptr));
        wechat->setText(QCoreApplication::translate("Dlg_AddStu", "\345\276\256\344\277\241", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dlg_AddStu: public Ui_Dlg_AddStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDSTU_H
