/********************************************************************************
** Form generated from reading UI file 'CSettingDlg.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSETTINGDLG_H
#define UI_CSETTINGDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CSettingDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tabTheme;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *gbDefault;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rbtnDefautl;
    QRadioButton *rbtnThin;
    QGroupBox *gbSelf;
    QWidget *tabMusic;
    QVBoxLayout *verticalLayout;
    QGroupBox *gbMusic;

    void setupUi(QDialog *CSettingDlg)
    {
        if (CSettingDlg->objectName().isEmpty())
            CSettingDlg->setObjectName(QString::fromUtf8("CSettingDlg"));
        CSettingDlg->resize(400, 300);
        horizontalLayout = new QHBoxLayout(CSettingDlg);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tabWidget = new QTabWidget(CSettingDlg);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabTheme = new QWidget();
        tabTheme->setObjectName(QString::fromUtf8("tabTheme"));
        verticalLayout_2 = new QVBoxLayout(tabTheme);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gbDefault = new QGroupBox(tabTheme);
        gbDefault->setObjectName(QString::fromUtf8("gbDefault"));
        horizontalLayout_2 = new QHBoxLayout(gbDefault);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        rbtnDefautl = new QRadioButton(gbDefault);
        rbtnDefautl->setObjectName(QString::fromUtf8("rbtnDefautl"));
        rbtnDefautl->setCheckable(true);
        rbtnDefautl->setChecked(false);

        horizontalLayout_2->addWidget(rbtnDefautl);

        rbtnThin = new QRadioButton(gbDefault);
        rbtnThin->setObjectName(QString::fromUtf8("rbtnThin"));

        horizontalLayout_2->addWidget(rbtnThin);


        verticalLayout_2->addWidget(gbDefault);

        gbSelf = new QGroupBox(tabTheme);
        gbSelf->setObjectName(QString::fromUtf8("gbSelf"));

        verticalLayout_2->addWidget(gbSelf);

        tabWidget->addTab(tabTheme, QString());
        tabMusic = new QWidget();
        tabMusic->setObjectName(QString::fromUtf8("tabMusic"));
        verticalLayout = new QVBoxLayout(tabMusic);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gbMusic = new QGroupBox(tabMusic);
        gbMusic->setObjectName(QString::fromUtf8("gbMusic"));

        verticalLayout->addWidget(gbMusic);

        tabWidget->addTab(tabMusic, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(CSettingDlg);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CSettingDlg);
    } // setupUi

    void retranslateUi(QDialog *CSettingDlg)
    {
        CSettingDlg->setWindowTitle(QCoreApplication::translate("CSettingDlg", "\350\256\276\347\275\256", nullptr));
#if QT_CONFIG(accessibility)
        tabWidget->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
        gbDefault->setTitle(QCoreApplication::translate("CSettingDlg", "\351\273\230\350\256\244", nullptr));
        rbtnDefautl->setText(QCoreApplication::translate("CSettingDlg", "\351\273\230\350\256\244\351\243\216\346\240\274", nullptr));
        rbtnThin->setText(QCoreApplication::translate("CSettingDlg", "\346\236\201\347\256\200\351\243\216\346\240\274", nullptr));
        gbSelf->setTitle(QCoreApplication::translate("CSettingDlg", "\350\207\252\345\256\232\344\271\211", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTheme), QCoreApplication::translate("CSettingDlg", "\344\270\273\351\242\230\350\256\276\347\275\256", nullptr));
        gbMusic->setTitle(QCoreApplication::translate("CSettingDlg", "\351\273\230\350\256\244", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabMusic), QCoreApplication::translate("CSettingDlg", "\351\237\263\346\225\210\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CSettingDlg: public Ui_CSettingDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSETTINGDLG_H
