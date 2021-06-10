/********************************************************************************
** Form generated from reading UI file 'GameDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEDIALOG_H
#define UI_GAMEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameDialog
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
    QPushButton *btnAuto;
    QPushButton *btnReview;
    QSpacerItem *verticalSpacer;
    QPushButton *btnHelp;
    QPushButton *btnSetting;
    QWidget *widgetDraw;
    QProgressBar *barLeftTime;
    QLabel *labLeftTime;
    QLabel *LabTime;
    QLabel *labelGrade;
    QLabel *labelGradeInfo;

    void setupUi(QMainWindow *GameDialog)
    {
        if (GameDialog->objectName().isEmpty())
            GameDialog->setObjectName(QString::fromUtf8("GameDialog"));
        GameDialog->resize(800, 617);
        GameDialog->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(GameDialog);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frameSet = new QFrame(centralwidget);
        frameSet->setObjectName(QString::fromUtf8("frameSet"));
        frameSet->setStyleSheet(QString::fromUtf8(".QFrame{\n"
"	background-image:url(:/source/images/res/theme.jpg);\n"
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

        btnAuto = new QPushButton(widget);
        btnAuto->setObjectName(QString::fromUtf8("btnAuto"));

        verticalLayout->addWidget(btnAuto);

        btnReview = new QPushButton(widget);
        btnReview->setObjectName(QString::fromUtf8("btnReview"));

        verticalLayout->addWidget(btnReview);

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
        barLeftTime = new QProgressBar(frameSet);
        barLeftTime->setObjectName(QString::fromUtf8("barLeftTime"));
        barLeftTime->setGeometry(QRect(100, 550, 561, 20));
        barLeftTime->setStyleSheet(QString::fromUtf8(""));
        barLeftTime->setMaximum(100);
        barLeftTime->setValue(100);
        barLeftTime->setTextVisible(false);
        barLeftTime->setInvertedAppearance(false);
        labLeftTime = new QLabel(frameSet);
        labLeftTime->setObjectName(QString::fromUtf8("labLeftTime"));
        labLeftTime->setGeometry(QRect(30, 550, 71, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labLeftTime->setFont(font);
        labLeftTime->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        LabTime = new QLabel(frameSet);
        LabTime->setObjectName(QString::fromUtf8("LabTime"));
        LabTime->setGeometry(QRect(680, 550, 81, 21));
        LabTime->setFont(font);
        LabTime->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        labelGrade = new QLabel(frameSet);
        labelGrade->setObjectName(QString::fromUtf8("labelGrade"));
        labelGrade->setGeometry(QRect(400, 532, 61, 50));
        QFont font1;
        font1.setPointSize(20);
        labelGrade->setFont(font1);
        labelGradeInfo = new QLabel(frameSet);
        labelGradeInfo->setObjectName(QString::fromUtf8("labelGradeInfo"));
        labelGradeInfo->setGeometry(QRect(200, 529, 141, 51));
        labelGradeInfo->setFont(font1);

        horizontalLayout->addWidget(frameSet);

        GameDialog->setCentralWidget(centralwidget);

        retranslateUi(GameDialog);

        QMetaObject::connectSlotsByName(GameDialog);
    } // setupUi

    void retranslateUi(QMainWindow *GameDialog)
    {
        GameDialog->setWindowTitle(QCoreApplication::translate("GameDialog", "\346\254\242\344\271\220\350\277\236\350\277\236\347\234\213", nullptr));
        btnStart->setText(QCoreApplication::translate("GameDialog", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        btnPause->setText(QCoreApplication::translate("GameDialog", "\346\232\202\345\201\234\346\270\270\346\210\217", nullptr));
        btnTips->setText(QCoreApplication::translate("GameDialog", "\346\217\220\347\244\272", nullptr));
        btnReset->setText(QCoreApplication::translate("GameDialog", "\351\207\215\347\275\256", nullptr));
        btnTool->setText(QCoreApplication::translate("GameDialog", "\351\201\223\345\205\267", nullptr));
        btnAuto->setText(QCoreApplication::translate("GameDialog", "\350\207\252\345\212\250\350\247\243\351\242\230", nullptr));
        btnReview->setText(QCoreApplication::translate("GameDialog", "\350\277\207\347\250\213\345\233\236\346\224\276", nullptr));
        btnHelp->setText(QCoreApplication::translate("GameDialog", "\345\270\256\345\212\251", nullptr));
        btnSetting->setText(QCoreApplication::translate("GameDialog", "\350\256\276\347\275\256", nullptr));
        barLeftTime->setFormat(QCoreApplication::translate("GameDialog", "%p%", nullptr));
        labLeftTime->setText(QCoreApplication::translate("GameDialog", "\345\211\251\344\275\231\346\227\266\351\227\264", nullptr));
        LabTime->setText(QString());
        labelGrade->setText(QCoreApplication::translate("GameDialog", "0", nullptr));
        labelGradeInfo->setText(QCoreApplication::translate("GameDialog", "\345\275\223\345\211\215\347\247\257\345\210\206\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameDialog: public Ui_GameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEDIALOG_H
