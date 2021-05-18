#include "CGameDlg.h"
#include "ui_CGameDlg.h"
#include "iostream"
using namespace std;

CGameDlg::CGameDlg(QWidget *parent,int tmapCol,int tmapRow) :
    QMainWindow(parent),
    ui(new Ui::CGameDlg)
{

    // 初始化游戏的UI
    ui->setupUi(this);

    // 固定页面大小
    this->setFixedSize(800,600);

    // 初始化默认地图大小
    mapCol=DEFAULT_MAP_COL;
    mapRow=DEFAULT_MAP_ROW;

    shouldPainer=false;
    isPause=false;

    // 初始化窗口
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/source/images/res/LLK.ico"), QSize(), QIcon::Normal, QIcon::Off);
    this->setWindowIcon(icon);
    this->setFixedSize(800,600);
    this->setStyleSheet("#centralwidget{background-color:white;}");

    isPlaying=false;

    // 设置地图大小并分配按钮内存
    mapCol=tmapCol;
    mapRow=tmapRow;
    btnMap = new QPushButton**[mapRow];
    for (qint16 i=0;i<mapRow;i++)
    {
        btnMap[i]=new QPushButton*[mapCol];
    }

}

// 开始游戏
void CGameDlg::on_btnStart_clicked()
{
    setGameMode(0);

    GameC->StartGame();
    initGameMap();
    isPlaying=true;
    this->ui->btnStart->setDisabled(true);
}

void CGameDlg::setGameMode(int i)
{
    // 设置游戏模式
    gameMode=i;
    switch (i)
    {
    case 0:
        GameC=new CBasicGame(mapCol,mapRow);

        break;
    case 1:
        break;
    case 2:
        break;
    default:
        break;
    }

    // 初始化默认信息
    FirstPoint=true;

    // 初始化地图界面
    initMap();
}

// 初始化地图
void CGameDlg::initMap()
{
    switch (mapCol)
    {
    case 4:
        marginToLeft=250;
        marginToTop = 200;
        break;
    case 10:
        marginToLeft=qAbs(500-mapCol*MAP_ITEM_WIDTH);
        marginToTop =qAbs(470-mapCol*MAP_ITEM_WIDTH);
        break;
    case 16:
        marginToLeft=30;
        marginToTop=70;
        break;
    default:
        marginToLeft=250;
        marginToTop=200;
        break;

    }

    // 生成游戏按钮
    for (int i=0;i<mapRow;i++)
    {
        for (int j=0;j<mapCol;j++)
        {
            QString bgImg= QString::number(GameC->GetElement(i,j),10);

            // 为游戏按钮添加样式
            btnMap[i][j] =new QPushButton(this);
            btnMap[i][j]->move(j*MAP_ITEM_WIDTH+marginToLeft,i*MAP_ITEM_WIDTH+marginToTop);
            btnMap[i][j]->resize(MAP_ITEM_WIDTH,MAP_ITEM_WIDTH);
            btnMap[i][j]->setFlat(true);
            btnMap[i][j]->setCheckable(true);
            btnMap[i][j]->setAutoExclusive(true);
            btnMap[i][j]->setProperty("i",i);
            btnMap[i][j]->setProperty("j",j);
            btnMap[i][j]->connect(btnMap[i][j],SIGNAL(clicked()),this,SLOT(OnLButtonUp()));
        }
    }

}

// 更新游戏地图
void CGameDlg::initGameMap(void)
{
    for (int i=0;i<mapRow;i++)
    {
        for (int j=0;j<mapCol;j++)
        {
            QString bgImg= QString::number(GameC->GetElement(i,j),10);
            if(bgImg=="-1")
            {
                btnMap[i][j]->hide();
                continue;
            }
            btnMap[i][j]->setStyleSheet(
                        ".QPushButton{"
                        "background-image:url("
                        ":/source/images/res/"+bgImg+".png);"
                                                     "}");
            btnMap[i][j]->show();
        }
    }
}

// 按键响应
void CGameDlg::OnLButtonUp()
{
    // 游戏未开始或处于暂停状态
    if(isPlaying==false||isPause)
    {
        return ;
    }

    QObject* o = sender();
    qint8 i,j;
    i=o->property("i").toInt();
    j=o->property("j").toInt();

    if(FirstPoint)
    {
        SelFir.row=i;
        SelFir.col=j;
        FirstPoint=false;
    }
    else
    {
        SelSec.row=i;
        SelSec.col=j;

        if(GameC->Link(SelFir,SelSec))
        {
            // 如果可以消去，则对地图进行更新
            btnMap[SelFir.row][SelFir.col]->hide();
            btnMap[SelSec.row][SelSec.col]->hide();

            // 判断游戏是否胜利并执行相应函数
            JudgeWin();
        }
        else
        {
            // 无法消去，则将当前点设为第一点
            SelFir.row=SelSec.row;
            SelFir.col=SelSec.col;
        }
        FirstPoint=false;
    }
}

void CGameDlg::JudgeWin()
{
    if(GameC->IsWin())
    {
        if(gameMode==0)
        {
            QMessageBox::about(this,"You Win!","恭喜你胜利了");
            this->ui->btnStart->setEnabled(true);
        }
        this->ui->btnStart->setEnabled(true);
        isPlaying=false;
    }
}


CGameDlg::~CGameDlg()
{

}

void CGameDlg::closeEvent(QCloseEvent *)
{

}

qint16 CGameDlg::getMapLen() const
{

}

void CGameDlg::setMapLen(const qint16 &value)
{

}

void CGameDlg::on_btnPause_clicked()
{

}

void CGameDlg::on_btnTips_clicked()
{

}

void CGameDlg::on_btnReset_clicked()
{

}

void CGameDlg::DrawGameGrade()
{

}

void CGameDlg::CalculateGameGrade()
{

}

bool CGameDlg::eventFilter(QObject *watched, QEvent *event)
{

}

void CGameDlg::painterLine()
{

}

void CGameDlg::time_out()
{

}

void CGameDlg::on_btnHelp_clicked()
{

}

void CGameDlg::on_btnSetting_clicked()
{

}


void CGameDlg::on_btnTool_clicked()
{

}


void CGameDlg::changeStyle()
{

}
