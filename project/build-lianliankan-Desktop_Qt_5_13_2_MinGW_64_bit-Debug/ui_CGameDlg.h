/********************************************************************************
** Form generated from reading UI file 'CGameDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CGAMEDLG_H
#define UI_CGAMEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CGameDlg
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QFrame *frameSet;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *btnStart;
    QPushButton *btnPause;
    QPushButton *btnTips;
    QPushButton *btnReset;
    QPushButton *btnTool;
    QSpacerItem *verticalSpacer;
    QPushButton *btnHelp;
    QPushButton *btnSetting;
    QWidget *widgetDraw;
    QLabel *LabTime;

    void setupUi(QMainWindow *CGameDlg)
    {
        if (CGameDlg->objectName().isEmpty())
            CGameDlg->setObjectName(QString::fromUtf8("CGameDlg"));
        CGameDlg->resize(800, 617);
        CGameDlg->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(CGameDlg);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frameSet = new QFrame(centralwidget);
        frameSet->setObjectName(QString::fromUtf8("frameSet"));
        frameSet->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"	background-image:url(:/source/images/res/llk_game_bg.jpg);\n"
"	background-repeat:no-repeat;\n"
"}\n"
".QPushButton\n"
"{\n"
"	border-radius:5px;\n"
"	height:25px;\n"
"	background-color:white;\n"
"	border:1px solid blac\n"
"}\n"
".QPushButton{\n"
"	color:black;\n"
"	background-color:rgb(202,174,126);\n"
"}\n"
"\n"
".QPushButton:pressed{\n"
"	color:white;\n"
"}\n"
".QPushButton:hover{\n"
"	background-color:white;\n"
"}"));
        frameSet->setFrameShape(QFrame::StyledPanel);
        frameSet->setFrameShadow(QFrame::Raised);
        widget = new QWidget(frameSet);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(669, 30, 101, 521));
        widget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnStart = new QPushButton(widget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        verticalLayout->addWidget(btnStart);

        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));

        verticalLayout->addWidget(btnPause);

        btnTips = new QPushButton(widget);
        btnTips->setObjectName(QString::fromUtf8("btnTips"));

        verticalLayout->addWidget(btnTips);

        btnReset = new QPushButton(widget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        verticalLayout->addWidget(btnReset);

        btnTool = new QPushButton(widget);
        btnTool->setObjectName(QString::fromUtf8("btnTool"));

        verticalLayout->addWidget(btnTool);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnHelp = new QPushButton(widget);
        btnHelp->setObjectName(QString::fromUtf8("btnHelp"));

        verticalLayout->addWidget(btnHelp);

        btnSetting = new QPushButton(widget);
        btnSetting->setObjectName(QString::fromUtf8("btnSetting"));

        verticalLayout->addWidget(btnSetting);

        widgetDraw = new QWidget(frameSet);
        widgetDraw->setObjectName(QString::fromUtf8("widgetDraw"));
        widgetDraw->setGeometry(QRect(0, 0, 671, 541));
        LabTime = new QLabel(frameSet);
        LabTime->setObjectName(QString::fromUtf8("LabTime"));
        LabTime->setGeometry(QRect(680, 550, 81, 21));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        LabTime->setFont(font);
        LabTime->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        horizontalLayout->addWidget(frameSet);

        CGameDlg->setCentralWidget(centralwidget);

        retranslateUi(CGameDlg);

        QMetaObject::connectSlotsByName(CGameDlg);
    } // setupUi

    void retranslateUi(QMainWindow *CGameDlg)
    {
        CGameDlg->setWindowTitle(QCoreApplication::translate("CGameDlg", "\346\254\242\344\271\220\350\277\236\350\277\236\347\234\213", nullptr));
        btnStart->setText(QCoreApplication::translate("CGameDlg", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        btnPause->setText(QCoreApplication::translate("CGameDlg", "\346\232\202\345\201\234\346\270\270\346\210\217", nullptr));
        btnTips->setText(QCoreApplication::translate("CGameDlg", "\346\217\220\347\244\272", nullptr));
        btnReset->setText(QCoreApplication::translate("CGameDlg", "\351\207\215\347\275\256", nullptr));
        btnTool->setText(QCoreApplication::translate("CGameDlg", "\351\201\223\345\205\267", nullptr));
        btnHelp->setText(QCoreApplication::translate("CGameDlg", "\345\270\256\345\212\251", nullptr));
        btnSetting->setText(QCoreApplication::translate("CGameDlg", "\350\256\276\347\275\256", nullptr));
        LabTime->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CGameDlg: public Ui_CGameDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CGAMEDLG_H
