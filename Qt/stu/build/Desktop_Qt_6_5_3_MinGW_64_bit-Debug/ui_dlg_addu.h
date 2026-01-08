/********************************************************************************
** Form generated from reading UI file 'dlg_addu.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLG_ADDU_H
#define UI_DLG_ADDU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlg_addu
{
public:
    QWidget *widget;
    QPushButton *btn_exit;
    QPushButton *btn_save;
    QLineEdit *username1;
    QLineEdit *password1;
    QLineEdit *auth1;
    QLabel *username;
    QLabel *password;
    QLabel *auth;

    void setupUi(QDialog *dlg_addu)
    {
        if (dlg_addu->objectName().isEmpty())
            dlg_addu->setObjectName("dlg_addu");
        dlg_addu->resize(300, 200);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        dlg_addu->setWindowIcon(icon);
        dlg_addu->setStyleSheet(QString::fromUtf8("background-color: rgb(38, 47, 52);"));
        widget = new QWidget(dlg_addu);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 140, 300, 60));
        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(160, 10, 80, 23));
        btn_exit->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(253, 135, 50);"));
        btn_save = new QPushButton(widget);
        btn_save->setObjectName("btn_save");
        btn_save->setGeometry(QRect(70, 10, 80, 23));
        btn_save->setStyleSheet(QString::fromUtf8("border-radius:6px;\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(253, 135, 50);"));
        username1 = new QLineEdit(dlg_addu);
        username1->setObjectName("username1");
        username1->setGeometry(QRect(120, 30, 120, 23));
        username1->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        password1 = new QLineEdit(dlg_addu);
        password1->setObjectName("password1");
        password1->setGeometry(QRect(120, 65, 120, 23));
        password1->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        auth1 = new QLineEdit(dlg_addu);
        auth1->setObjectName("auth1");
        auth1->setGeometry(QRect(120, 100, 120, 23));
        auth1->setStyleSheet(QString::fromUtf8("    border: 2px solid #fff;\n"
"    border-radius:6px;\n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(38, 47, 52);"));
        username = new QLabel(dlg_addu);
        username->setObjectName("username");
        username->setGeometry(QRect(70, 30, 40, 23));
        username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        password = new QLabel(dlg_addu);
        password->setObjectName("password");
        password->setGeometry(QRect(70, 65, 40, 23));
        password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        auth = new QLabel(dlg_addu);
        auth->setObjectName("auth");
        auth->setGeometry(QRect(70, 100, 40, 23));
        auth->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        QWidget::setTabOrder(username1, password1);
        QWidget::setTabOrder(password1, auth1);
        QWidget::setTabOrder(auth1, btn_save);
        QWidget::setTabOrder(btn_save, btn_exit);

        retranslateUi(dlg_addu);

        QMetaObject::connectSlotsByName(dlg_addu);
    } // setupUi

    void retranslateUi(QDialog *dlg_addu)
    {
        dlg_addu->setWindowTitle(QCoreApplication::translate("dlg_addu", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        btn_exit->setText(QCoreApplication::translate("dlg_addu", "\345\217\226\346\266\210", nullptr));
        btn_save->setText(QCoreApplication::translate("dlg_addu", "\344\277\235\345\255\230", nullptr));
        username->setText(QCoreApplication::translate("dlg_addu", "\347\224\250\346\210\267\345\220\215", nullptr));
        password->setText(QCoreApplication::translate("dlg_addu", "\345\257\206\347\240\201", nullptr));
        auth->setText(QCoreApplication::translate("dlg_addu", "\346\235\203\351\231\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dlg_addu: public Ui_dlg_addu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_ADDU_H
