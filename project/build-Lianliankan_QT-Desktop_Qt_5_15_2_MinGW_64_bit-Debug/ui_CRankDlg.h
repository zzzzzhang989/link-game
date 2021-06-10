/********************************************************************************
** Form generated from reading UI file 'CRankDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRANKDLG_H
#define UI_CRANKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRankDlg
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rbtnEasy;
    QRadioButton *rbtnGrade;
    QTableWidget *tableWidget;

    void setupUi(QDialog *CRankDlg)
    {
        if (CRankDlg->objectName().isEmpty())
            CRankDlg->setObjectName(QString::fromUtf8("CRankDlg"));
        CRankDlg->resize(444, 300);
        verticalLayout = new QVBoxLayout(CRankDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(CRankDlg);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rbtnEasy = new QRadioButton(widget);
        rbtnEasy->setObjectName(QString::fromUtf8("rbtnEasy"));

        horizontalLayout->addWidget(rbtnEasy);

        rbtnGrade = new QRadioButton(widget);
        rbtnGrade->setObjectName(QString::fromUtf8("rbtnGrade"));

        horizontalLayout->addWidget(rbtnGrade);


        verticalLayout->addWidget(widget);

        tableWidget = new QTableWidget(CRankDlg);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy);
        tableWidget->setStyleSheet(QString::fromUtf8("text-align:center;"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTextElideMode(Qt::ElideMiddle);
        tableWidget->setSortingEnabled(true);
        tableWidget->setRowCount(10);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CRankDlg);

        QMetaObject::connectSlotsByName(CRankDlg);
    } // setupUi

    void retranslateUi(QDialog *CRankDlg)
    {
        CRankDlg->setWindowTitle(QCoreApplication::translate("CRankDlg", "\346\216\222\350\241\214\346\246\234", nullptr));
        rbtnEasy->setText(QCoreApplication::translate("CRankDlg", "\344\274\221\351\227\262\346\250\241\345\274\217\346\216\222\350\241\214\346\246\234", nullptr));
        rbtnGrade->setText(QCoreApplication::translate("CRankDlg", "\345\205\263\345\215\241\346\250\241\345\274\217\346\216\222\350\241\214\346\246\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CRankDlg: public Ui_CRankDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRANKDLG_H
