/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_Login
{
public:
    QLabel *title;
    QWidget *login_box;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QWidget *user_box;
    QLineEdit *user1;
    QLineEdit *key1;
    QLabel *user;
    QLabel *key;

    void setupUi(QWidget *Page_Login)
    {
        if (Page_Login->objectName().isEmpty())
            Page_Login->setObjectName("Page_Login");
        Page_Login->resize(400, 240);
        Page_Login->setMaximumSize(QSize(400, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_Login->setWindowIcon(icon);
        Page_Login->setStyleSheet(QString::fromUtf8(""));
        title = new QLabel(Page_Login);
        title->setObjectName("title");
        title->setGeometry(QRect(0, 0, 400, 80));
        title->setMinimumSize(QSize(0, 60));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(16);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8(""));
        title->setTextFormat(Qt::AutoText);
        title->setAlignment(Qt::AlignCenter);
        login_box = new QWidget(Page_Login);
        login_box->setObjectName("login_box");
        login_box->setGeometry(QRect(0, 160, 400, 80));
        btn_login = new QPushButton(login_box);
        btn_login->setObjectName("btn_login");
        btn_login->setGeometry(QRect(90, 20, 91, 23));
        btn_login->setStyleSheet(QString::fromUtf8(""));
        btn_exit = new QPushButton(login_box);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(220, 20, 91, 23));
        btn_exit->setStyleSheet(QString::fromUtf8(""));
        user_box = new QWidget(Page_Login);
        user_box->setObjectName("user_box");
        user_box->setGeometry(QRect(0, 80, 400, 80));
        user1 = new QLineEdit(user_box);
        user1->setObjectName("user1");
        user1->setGeometry(QRect(140, 20, 171, 20));
        user1->setStyleSheet(QString::fromUtf8(""));
        user1->setMaxLength(8);
        key1 = new QLineEdit(user_box);
        key1->setObjectName("key1");
        key1->setGeometry(QRect(140, 50, 171, 20));
        key1->setStyleSheet(QString::fromUtf8(""));
        key1->setMaxLength(8);
        user = new QLabel(user_box);
        user->setObjectName("user");
        user->setGeometry(QRect(90, 20, 50, 21));
        user->setStyleSheet(QString::fromUtf8(""));
        key = new QLabel(user_box);
        key->setObjectName("key");
        key->setGeometry(QRect(90, 50, 50, 21));
        key->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(Page_Login);

        QMetaObject::connectSlotsByName(Page_Login);
    } // setupUi

    void retranslateUi(QWidget *Page_Login)
    {
        Page_Login->setWindowTitle(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
#if QT_CONFIG(tooltip)
        Page_Login->setToolTip(QCoreApplication::translate("Page_Login", "\350\277\231\346\230\257\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        title->setText(QCoreApplication::translate("Page_Login", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        btn_login->setText(QCoreApplication::translate("Page_Login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("Page_Login", "\351\200\200\345\207\272", nullptr));
        user1->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        key1->setPlaceholderText(QCoreApplication::translate("Page_Login", "\350\257\267\350\276\223\345\205\245", nullptr));
        user->setText(QCoreApplication::translate("Page_Login", "\347\224\250\346\210\267\345\220\215", nullptr));
        key->setText(QCoreApplication::translate("Page_Login", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Page_Login: public Ui_Page_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
