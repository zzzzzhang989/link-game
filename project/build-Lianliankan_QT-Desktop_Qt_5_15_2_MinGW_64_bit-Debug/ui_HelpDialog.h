/********************************************************************************
** Form generated from reading UI file 'HelpDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labInfo;
    QLabel *labCPY;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName(QString::fromUtf8("HelpDialog"));
        HelpDialog->resize(370, 417);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/source/images/res/LLK.ico"), QSize(), QIcon::Normal, QIcon::Off);
        HelpDialog->setWindowIcon(icon);
        HelpDialog->setStyleSheet(QString::fromUtf8("background-color:white;"));
        verticalLayout = new QVBoxLayout(HelpDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(HelpDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setFrameShadow(QFrame::Raised);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 325, 1008));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labInfo = new QLabel(scrollAreaWidgetContents);
        labInfo->setObjectName(QString::fromUtf8("labInfo"));
        labInfo->setMinimumSize(QSize(0, 100));
        labInfo->setAcceptDrops(false);
        labInfo->setTextFormat(Qt::RichText);
        labInfo->setWordWrap(true);

        horizontalLayout_2->addWidget(labInfo);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        labCPY = new QLabel(HelpDialog);
        labCPY->setObjectName(QString::fromUtf8("labCPY"));
        labCPY->setMinimumSize(QSize(0, 50));
        labCPY->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(labCPY);


        retranslateUi(HelpDialog);

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "\347\216\213\345\233\275\350\277\236\350\277\236\347\234\213 - \346\270\270\346\210\217\350\257\264\346\230\216", nullptr));
#if QT_CONFIG(tooltip)
        labInfo->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        labInfo->setWhatsThis(QCoreApplication::translate("HelpDialog", "\346\270\270\346\210\217\350\257\264\346\230\216\344\273\213\347\273\215", nullptr));
#endif // QT_CONFIG(whatsthis)
        labInfo->setText(QCoreApplication::translate("HelpDialog", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600;\">\345\237\272\346\234\254\346\250\241\345\274\217</span></p><p>\345\237\272\346\234\254\346\250\241\345\274\217\346\230\257\342\200\234\346\254\242\344\271\220\350\277\236\350\277\236\347\234\213&quot;\346\270\270\346\210\217\347\232\204\345\237\272\346\234\254\346\250\241\345\274\217\357\274\214\345\214\205\345\220\253\346\270\270\346\210\217\347\232\204\345\237\272\346\234\254\345\212\237\350\203\275:\345\274\200\345\247\213\346\270\270\346\210\217\343\200\201\346\232\202\345\201\234\346\270\270\346\210\217\343\200\201\346\217\220\347\244\272\343\200\201\351\207\215\346\216\222\343\200\201\350\256\241\346\227\266\343\200\202</p><p><span style=\" font-weight:600;\">1.\345\274\200\345\247\213\346\270\270\346\210\217</span></p><p>\345\275\223\347\254\254\344\270\200\346\254\241\350\277\233\345\205\245\346\270\270\346\210\217\346\210\226\350\200\205\345\256\214\346\210\220\344\270\200\345\261\200\346\270\270\346\210\217\345\220"
                        "\216\357\274\214 \347\202\271\345\207\273\342\200\234\345\274\200\345\247\213\346\270\270\346\210\217\342\200\235\345\217\257\344\273\245\347\224\237\346\210\220\346\270\270\346\210\217\345\234\260\345\233\276\357\274\214\350\277\233\350\241\214\350\277\236\350\277\236\347\234\213\346\270\270\346\210\217\343\200\202\345\234\250\346\270\270\346\210\217\345\234\260\345\233\276\344\270\255\347\224\250\351\274\240\346\240\207\345\267\246\345\201\245\347\202\271\345\207\273\344\273\273\346\204\217\344\275\215\347\275\256\347\232\204\344\270\244\345\274\240\345\233\276\347\211\207\357\274\214\351\200\211\344\270\255\345\233\276\347\211\207\345\220\216\357\274\214\344\274\232\345\234\250\351\200\211\346\213\251\347\232\204\345\233\276\347\211\207\345\233\233\345\221\250\346\230\276\347\244\272\347\272\242\350\211\262\347\232\204\347\237\251\345\275\242\346\241\206\345\271\266\345\210\244\346\226\255\350\203\275\345\220\246\346\266\210\345\255\220\357\274\214</p><p><span style=\" font-weight:600;\">2\343\200\201\345\223"
                        "\262\345\201\234\346\270\270\346\210\217</span></p><p>\345\275\223\346\270\270\346\210\217\345\274\200\345\247\213\345\220\216\357\274\214\345\217\257\344\273\245\347\202\271\345\207\273\342\200\234\346\232\202\345\201\234\342\200\235\346\214\211\351\222\256\357\274\214\345\260\206\346\270\270\346\210\217\346\232\202\345\201\234\343\200\202\346\232\202\345\201\234\346\270\270\346\210\217\345\220\216\357\274\214\345\217\257\344\273\245\347\202\271\345\207\273\342\200\234\347\273\247\347\273\255\346\270\270\346\210\217\342\200\235\346\214\211\351\222\256\343\200\202\347\273\247\347\273\255\346\270\270\346\210\217\343\200\202</p><p><span style=\" font-weight:600;\">3\343\200\201\346\217\220\347\244\272</span></p><p>\345\275\223\346\270\270\346\210\217\345\274\200\345\247\213\345\220\216\357\274\214\345\217\257\344\273\245\347\202\271\345\207\273\342\200\234\346\217\220\347\244\272\342\200\235\346\214\211\351\222\256\357\274\214\345\260\206\345\234\250\346\270\270\346\210\217\345\234\260\345\233\276\344\270\255\357"
                        "\274\214\347\224\250\347\237\251\345\275\242\346\241\206\346\217\220\347\244\272- -\345\257\271\345\217\257\344\273\245\346\266\210\351\231\244\347\232\204\345\233\276\347\211\207\357\274\214\345\271\266\346\230\276\347\244\272\350\277\236\346\216\245\347\232\204\350\267\257\345\276\204\343\200\202</p><p><span style=\" font-weight:600;\">4\343\200\201\351\207\215\346\216\222</span></p><p>\346\270\270\346\210\217\345\274\200\345\247\213\345\220\216\357\274\214\345\217\257\344\273\245\347\202\271\345\207\273\342\200\234\351\207\215\346\216\222&quot;\346\214\211\351\222\256\357\274\214\345\260\206\346\270\270\346\210\217\345\234\260\345\233\276\344\270\255\357\274\214\345\211\251\344\275\231\347\232\204\344\275\215\347\275\256\347\232\204\345\233\276\347\211\207\351\207\215\346\226\260\346\216\222\345\210\227\343\200\202</p><p align=\"center\"><br/><span style=\" font-size:11pt; font-weight:600;\">\344\274\221\351\227\262\346\250\241\345\274\217</span></p><p>\345\234\250\350\277\231\344\270\252\346\250\241\345\274"
                        "\217\357\274\214\346\227\240\346\227\266\351\227\264\351\231\220\345\210\266\357\274\214\344\275\206\346\230\257\346\234\211\347\247\257\345\210\206</p><p><span style=\" font-weight:600;\">\347\247\257\345\210\206</span></p><p>\346\270\270\346\210\217\345\274\200\345\247\213\346\227\266\357\274\214\347\247\257\345\210\206\344\270\2720\343\200\202\346\270\270\346\210\217\345\274\200\345\247\213\345\220\216\346\240\271\346\215\256\347\216\251\345\256\266\346\266\210\351\231\244\347\232\204\345\233\276\347\211\207\346\225\260\351\207\217\350\256\241\347\256\227\345\271\266\346\230\276\347\244\272\347\247\257\345\210\206\343\200\202</p><p>\347\247\257\345\210\206\350\256\241\347\256\227\350\247\204\345\210\231:</p><p>\342\221\240\345\275\223\346\210\220\345\212\237\346\266\210\351\231\244\344\270\200\345\257\271\345\233\276\347\211\207\346\227\266\357\274\214 \347\247\257\345\210\206\345\212\24010\345\210\206\343\200\202</p><p>\342\221\241\345\275\223\347\247\257\345\210\206\350\266\205\350\277\20720\346\227\266\357"
                        "\274\214\345\217\257\344\273\245\344\275\277\347\224\250\346\217\220\347\244\272\345\212\237\350\203\275\357\274\214\346\257\217\344\275\277\347\224\250\344\270\200\346\254\241\346\217\220\347\244\272\345\212\237\350\203\275\357\274\214\347\247\257\345\210\206\346\211\243\351\231\24420\345\210\206\343\200\202</p><p>\342\221\242\345\275\223\347\247\257\345\210\206\350\266\205\350\277\20750\346\227\266\357\274\214\345\217\257\344\273\245\344\275\277\347\224\250\351\207\215\346\216\222\345\212\237\350\203\275\357\274\214\346\257\217\344\275\277\347\224\250-\346\254\241\351\207\215\346\216\222\345\212\237\350\203\275\357\274\214\347\247\257\345\210\206\346\211\243\351\231\24450\345\210\206\343\200\202</p><p><span style=\" font-weight:600;\">\351\201\223\345\205\267</span></p><p>\345\275\223\347\216\251\345\256\266\347\247\257\345\210\206\346\257\217\346\254\241\350\276\276\345\210\260100\345\210\206\347\232\204\346\225\264\346\225\260\345\200\215\346\227\266\357\274\214\350\207\252\345\212\250\350\216\267\345\217\226"
                        "\344\270\200\344\270\252\351\201\223\345\205\267\343\200\202\351\201\223\345\205\267\346\225\260\351\207\217\345\217\257\344\273\245\345\217\240\345\212\240\343\200\202</p><p>\344\275\277\347\224\250\350\257\245\351\201\223\345\205\267\345\217\257\344\273\245\345\270\256\345\212\251\347\216\251\345\256\266\346\266\210\351\231\244\345\234\250\346\270\270\346\210\217\345\234\260\345\233\276\344\270\255\351\200\211\344\270\255\347\232\204\344\273\273\346\204\217\344\270\244\344\270\252\344\275\215\347\275\256\347\233\270\345\220\214\347\232\204\345\233\276\347\211\207\343\200\202</p><p>\344\275\277\347\224\250\344\270\200\346\254\241\351\201\223\345\205\267\345\220\216\357\274\214\351\201\223\345\205\267\346\225\260\351\207\217\345\207\217\345\260\221\344\270\200\344\270\252\343\200\202\347\247\257\345\210\206\345\212\24010\345\210\206\343\200\202\345\275\223\351\201\223\345\205\267\344\270\252\346\225\260\345\260\217\344\272\2161\346\227\266\357\274\214\344\270\215\350\203\275\344\275\277\347\224\250\351\201\223"
                        "\345\205\267\343\200\202</p><p><br/></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        labCPY->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        labCPY->setWhatsThis(QCoreApplication::translate("HelpDialog", "\347\211\210\346\235\203\345\243\260\346\230\216", nullptr));
#endif // QT_CONFIG(whatsthis)
        labCPY->setText(QCoreApplication::translate("HelpDialog", "Copyright @ 2020 Jin Yu,All rights reserved", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
