#include "RankDialog.h"
#include "ui_RankDialog.h"

RankDialog::RankDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RankDialog)
{
    ui->setupUi(this);

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QStringList headers;

    headers << QStringLiteral("排名") << QStringLiteral("玩家姓名")
            << QStringLiteral("积分");

    ui->tableWidget->setHorizontalHeaderLabels(headers);

    QFile file(ScoreLogic::getPath());
    qint16 i=0;
    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QString tStr;

        while (!file.atEnd())
        {
            tStr = file.readLine();
            QStringList tStrList = tStr.split("-");

            for (qint16 j=0;j<3;j++)
            {
                ui->tableWidget->setItem(i,j,new QTableWidgetItem(tStrList[j]));
                ui->tableWidget->item(i,j)->
                        setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            }
            i++;
        }
        file.close();
    }
    ui->tableWidget->sortItems(2,Qt::SortOrder::DescendingOrder);

    for (qint16 j=0;j<i;j++)
    {
        ui->tableWidget->setItem(j,0,new QTableWidgetItem(QString::number(j+1)));
        ui->tableWidget->item(j,0)->
                setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    }

    show();
}

RankDialog::~RankDialog()
{
    delete ui;
}

void RankDialog::on_rbtnEasy_clicked(bool checked)
{
    // 休闲模式数据
    if(checked==true)
    {

        QFile file(ScoreLogic::getPath());
        qint16 i=0;
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            ui->tableWidget->clear();

            QStringList headers;

            headers << QStringLiteral("排名") << QStringLiteral("玩家姓名")
                    << QStringLiteral("积分");

            ui->tableWidget->setHorizontalHeaderLabels(headers);

            QString tStr;

            while (!file.atEnd())
            {
                tStr = file.readLine();
                QStringList tStrList = tStr.split("-");
                if(tStrList[0]!="01")
                {
                    continue;
                }
                for (qint16 j=0;j<3;j++)
                {
                    ui->tableWidget->setItem(i,j,new QTableWidgetItem(tStrList[j]));
                }
                i++;
            }
            file.close();
        }

        ui->tableWidget->sortItems(2,Qt::SortOrder::DescendingOrder);

        for (qint16 j=0;j<i;j++)
        {
            ui->tableWidget->setItem(j,0,new QTableWidgetItem(QString::number(j+1)));
            ui->tableWidget->item(j,0)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            ui->tableWidget->item(j,1)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            ui->tableWidget->item(j,2)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        }
    }
}

void RankDialog::on_rbtnGrade_clicked(bool checked)
{
    // 关卡模式数据
    if(checked==true)
    {

        QFile file(ScoreLogic::getPath());
        qint16 i=0;
        if(file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            ui->tableWidget->clear();

            QStringList headers;

            headers << QStringLiteral("排名") << QStringLiteral("玩家姓名")
                    << QStringLiteral("积分");

            ui->tableWidget->setHorizontalHeaderLabels(headers);

            QString tStr;

            while (!file.atEnd())
            {
                tStr = file.readLine();
                QStringList tStrList = tStr.split("-");
                if(tStrList[0]!="02")
                {
                    continue;
                }
                for (qint16 j=0;j<3;j++)
                {
                    ui->tableWidget->setItem(i,j,new QTableWidgetItem(tStrList[j]));
                }
                i++;
            }
            file.close();
        }

        ui->tableWidget->sortItems(2,Qt::SortOrder::DescendingOrder);

        for (qint16 j=0;j<i;j++)
        {
            ui->tableWidget->setItem(j,0,new QTableWidgetItem(QString::number(j+1)));
            ui->tableWidget->item(j,0)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            ui->tableWidget->item(j,1)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
            ui->tableWidget->item(j,2)->
                    setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        }
    }
}
