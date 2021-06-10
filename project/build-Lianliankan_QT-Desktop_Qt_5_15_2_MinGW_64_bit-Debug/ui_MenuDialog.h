/********************************************************************************
** Form generated from reading UI file 'MenuDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDIALOG_H
#define UI_MENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuDialog
{
public:
    QWidget *centralwidget;
    QPushButton *startBaseBtn;
    QPushButton *startEasyBtn;
    QPushButton *startGKBtn;
    QPushButton *btnRank;
    QPushButton *btnHelp;
    QLabel *labelTitle;
    QPushButton *btnQuit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MenuDialog)
    {
        if (MenuDialog->objectName().isEmpty())
            MenuDialog->setObjectName(QString::fromUtf8("MenuDialog"));
        MenuDialog->resize(800, 600);
        MenuDialog->setStyleSheet(QString::fromUtf8("#labelTitle{\n"
"	width:100%;\n"
"	text-align:center;\n"
"	font-size:80px;\n"
"	font-family: \"Microsoft Yahei\",Arial,Helvetica,sans-serif,\"\345\256\213\344\275\223\"!important;\n"
"}\n"
"\n"
".QPushButton\n"
"{\n"
"	border-radius:10px;\n"
"	min-height:10px;\n"
"	min-width:20px;\n"
"	font-size:18px;\n"
"	color:black;\n"
"	background-color:rgb(202,174,126);\n"
"	border:1px solid black;\n"
"}\n"
".QPushButton:hover\n"
"{\n"
"	font-size:20px;\n"
"	background-color:white;\n"
"}"));
        centralwidget = new QWidget(MenuDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        startBaseBtn = new QPushButton(centralwidget);
        startBaseBtn->setObjectName(QString::fromUtf8("startBaseBtn"));
        startBaseBtn->setGeometry(QRect(100, 200, 201, 141));
        startEasyBtn = new QPushButton(centralwidget);
        startEasyBtn->setObjectName(QString::fromUtf8("startEasyBtn"));
        startEasyBtn->setGeometry(QRect(320, 200, 201, 141));
        startGKBtn = new QPushButton(centralwidget);
        startGKBtn->setObjectName(QString::fromUtf8("startGKBtn"));
        startGKBtn->setGeometry(QRect(540, 200, 191, 141));
        btnRank = new QPushButton(centralwidget);
        btnRank->setObjectName(QString::fromUtf8("btnRank"));
        btnRank->setGeometry(QRect(580, 470, 75, 41));
        btnHelp = new QPushButton(centralwidget);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));
        btnHelp->setGeometry(QRect(680, 470, 75, 41));
        labelTitle = new QLabel(centralwidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(200, 50, 481, 111));
        labelTitle->setContextMenuPolicy(Qt::PreventContextMenu);
        labelTitle->setStyleSheet(QString::fromUtf8(""));
        btnQuit = new QPushButton(centralwidget);
        btnQuit->setObjectName(QString::fromUtf8("btnQuit"));
        btnQuit->setGeometry(QRect(80, 470, 91, 41));
        MenuDialog->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MenuDialog);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MenuDialog->setMenuBar(menubar);
        statusbar = new QStatusBar(MenuDialog);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        statusbar->setEnabled(false);
        MenuDialog->setStatusBar(statusbar);
        QWidget::setTabOrder(startBaseBtn, startGKBtn);
        QWidget::setTabOrder(startGKBtn, startEasyBtn);
        QWidget::setTabOrder(startEasyBtn, btnRank);
        QWidget::setTabOrder(btnRank, btnHelp);

        retranslateUi(MenuDialog);

        QMetaObject::connectSlotsByName(MenuDialog);
    } // setupUi

    void retranslateUi(QMainWindow *MenuDialog)
    {
        startBaseBtn->setText(QCoreApplication::translate("MenuDialog", "\345\237\272\346\234\254\346\250\241\345\274\217", nullptr));
        startEasyBtn->setText(QCoreApplication::translate("MenuDialog", "\344\274\221\351\227\262\346\250\241\345\274\217", nullptr));
        startGKBtn->setText(QCoreApplication::translate("MenuDialog", "\345\205\263\345\215\241\346\250\241\345\274\217", nullptr));
        btnRank->setText(QCoreApplication::translate("MenuDialog", "\346\216\222\350\241\214\346\246\234", nullptr));
        btnHelp->setText(QCoreApplication::translate("MenuDialog", "\345\270\256\345\212\251", nullptr));
        labelTitle->setText(QCoreApplication::translate("MenuDialog", "\347\216\213\345\233\275\350\277\236\350\277\236\347\234\213", nullptr));
        btnQuit->setText(QCoreApplication::translate("MenuDialog", "\351\200\200\345\207\272\346\270\270\346\210\217", nullptr));
        (void)MenuDialog;
    } // retranslateUi

};

namespace Ui {
    class MenuDialog: public Ui_MenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDIALOG_H
