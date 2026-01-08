/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTreeWidget *treeWidget;
    QWidget *widget;
    QLabel *label;
    QWidget *widget_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btn_exit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QCheckBox *checkBox;
    QLineEdit *le_s;
    QPushButton *btn_s;
    QPushButton *btn_add;
    QPushButton *btn_u;
    QPushButton *btn_del;
    QPushButton *btn_m;
    QLabel *lb_cnt;
    QPushButton *btn_clear;
    QWidget *page_2;
    QTableWidget *tw_user;
    QPushButton *btn_key;
    QPushButton *btn_addu;
    QPushButton *btn_delu;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1000, 610);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(20, 50, 170, 510));
        treeWidget->setMaximumSize(QSize(170, 16777215));
        treeWidget->setStyleSheet(QString::fromUtf8(""));
        treeWidget->setProperty("showDropIndicator", QVariant(true));
        treeWidget->setRootIsDecorated(false);
        treeWidget->setItemsExpandable(true);
        treeWidget->setSortingEnabled(false);
        treeWidget->setHeaderHidden(true);
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->header()->setVisible(false);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setHighlightSections(false);
        treeWidget->header()->setProperty("showSortIndicator", QVariant(true));
        treeWidget->header()->setStretchLastSection(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 1000, 50));
        QFont font;
        font.setBold(false);
        widget->setFont(font);
        widget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(395, 5, 210, 40));
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(750, 5, 230, 40));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 0, 40, 40));
        label_2->setMaximumSize(QSize(40, 40));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/user.jpg);"));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 11, 90, 23));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        btn_exit = new QPushButton(widget_2);
        btn_exit->setObjectName("btn_exit");
        btn_exit->setGeometry(QRect(145, 11, 80, 23));
        btn_exit->setStyleSheet(QString::fromUtf8(""));
        label_3->raise();
        label_2->raise();
        btn_exit->raise();
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(190, 50, 790, 510));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8(""));
        tableWidget = new QTableWidget(page);
        if (tableWidget->rowCount() < 1)
            tableWidget->setRowCount(1);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(15, 42, 760, 430));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->horizontalHeader()->setMinimumSectionSize(20);
        tableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        tableWidget->verticalHeader()->setStretchLastSection(false);
        checkBox = new QCheckBox(page);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(20, 10, 50, 23));
        checkBox->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 0, 0);"));
        checkBox->setChecked(false);
        le_s = new QLineEdit(page);
        le_s->setObjectName("le_s");
        le_s->setGeometry(QRect(75, 10, 325, 23));
        btn_s = new QPushButton(page);
        btn_s->setObjectName("btn_s");
        btn_s->setGeometry(QRect(410, 10, 80, 23));
        btn_s->setStyleSheet(QString::fromUtf8(""));
        btn_add = new QPushButton(page);
        btn_add->setObjectName("btn_add");
        btn_add->setGeometry(QRect(500, 10, 80, 23));
        btn_add->setStyleSheet(QString::fromUtf8(""));
        btn_u = new QPushButton(page);
        btn_u->setObjectName("btn_u");
        btn_u->setGeometry(QRect(590, 10, 80, 23));
        btn_u->setStyleSheet(QString::fromUtf8(""));
        btn_del = new QPushButton(page);
        btn_del->setObjectName("btn_del");
        btn_del->setGeometry(QRect(680, 10, 80, 23));
        btn_del->setStyleSheet(QString::fromUtf8(""));
        btn_m = new QPushButton(page);
        btn_m->setObjectName("btn_m");
        btn_m->setGeometry(QRect(15, 480, 80, 23));
        lb_cnt = new QLabel(page);
        lb_cnt->setObjectName("lb_cnt");
        lb_cnt->setGeometry(QRect(195, 480, 150, 23));
        btn_clear = new QPushButton(page);
        btn_clear->setObjectName("btn_clear");
        btn_clear->setGeometry(QRect(105, 480, 80, 23));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        tw_user = new QTableWidget(page_2);
        tw_user->setObjectName("tw_user");
        tw_user->setGeometry(QRect(20, 20, 311, 470));
        tw_user->horizontalHeader()->setStretchLastSection(true);
        tw_user->verticalHeader()->setVisible(false);
        btn_key = new QPushButton(page_2);
        btn_key->setObjectName("btn_key");
        btn_key->setGeometry(QRect(370, 60, 80, 23));
        btn_addu = new QPushButton(page_2);
        btn_addu->setObjectName("btn_addu");
        btn_addu->setGeometry(QRect(370, 20, 80, 23));
        btn_delu = new QPushButton(page_2);
        btn_delu->setObjectName("btn_delu");
        btn_delu->setGeometry(QRect(370, 100, 80, 23));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#if QT_CONFIG(tooltip)
        MainWindow->setToolTip(QCoreApplication::translate("MainWindow", "\350\277\231\346\230\257\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232admin", nullptr));
        btn_exit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\200\211", nullptr));
        btn_s->setText(QCoreApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        btn_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\345\212\240", nullptr));
        btn_u->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        btn_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        btn_m->setText(QCoreApplication::translate("MainWindow", "\346\250\241\346\213\237\346\225\260\346\215\256", nullptr));
        lb_cnt->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        btn_clear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\255\246\347\224\237\350\241\250", nullptr));
        btn_key->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        btn_addu->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\347\224\250\346\210\267", nullptr));
        btn_delu->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\347\224\250\346\210\267", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
