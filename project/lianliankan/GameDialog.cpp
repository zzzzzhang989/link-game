#include "GameDialog.h"
#include "ui_GameDialog.h"

#include "AutoSolve.h"
#include "waitthread.h"
GameDialog::GameDialog(QWidget *parent,int tmapCol,int tmapRow) :
    QMainWindow(parent),
    ui(new Ui::GameDialog)
{
    // 初始化游戏的UI
    ui->setupUi(this);

    // 添加动画监控
    ui->widgetDraw->installEventFilter(this);

    // 修改样式
    ui->barLeftTime->setRange(0,100);

    shouldPainer=false;
    isPausing=false;

    // 初始化时间监控
    qtimer = new QTimer(this);

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
    buttonMap = new QPushButton**[mapRow];
    for (int i=0;i<mapRow;i++) {
        buttonMap[i]=new QPushButton*[mapCol];
    }

    path = new int[MAX_VERTEX_NUM];
}

void GameDialog::setGameMode(int i)
{
    // 设置游戏模式
    QString title= "Emoji连连看";
    FLAG flag;
    gameMode=i;
    switch (i)
    {
    case 0:
        gameControl=new BasicGame(mapCol,mapRow);

        flag.bTimer=true;
        flag.bProp=false;
        flag.bScore=false;
        flag.szTitle=QString("基本模式");

        // 添加时间监控信号反馈
        connect(qtimer,SIGNAL(timeout()),this,SLOT(time_out()));
        break;
    case 1:
        gameControl=new EasyGame(mapCol,mapRow);

        flag.bTimer=false;
        flag.bProp=true;
        flag.bScore=true;
        flag.szTitle=QString("休闲模式");
        CalculateGameGrade();

        // 隐藏剩余时间显示
        ui->barLeftTime->hide();
        ui->labLeftTime->hide();
        ui->LabTime->hide();
        break;
    case 2:
        gameControl=new LevelGame(mapCol,mapRow);

        flag.bTimer=false;
        flag.bProp=false;
        flag.bScore=true;
        flag.szTitle=QString("关卡模式");

        // 隐藏剩余时间显示
        ui->barLeftTime->hide();
        ui->labLeftTime->hide();
        ui->LabTime->hide();
        break;
    default:
        break;
    }

    gameControl->SetGameFlag(flag);

    // 初始化默认信息
    isFirstChoose=true;

    // 初始化地图界面
    initMap();
    flag = gameControl->GetGameFlag();

    // 通过FLAG设置界面
    ui->barLeftTime->setVisible(flag.bTimer);
    ui->LabTime->setVisible(flag.bTimer);
    ui->labLeftTime->setVisible(flag.bTimer);

    this->setWindowTitle(title+"-"+flag.szTitle);

    ui->labelGradeInfo->setVisible(flag.bScore);
    ui->labelGrade->setVisible(flag.bScore);

    ui->btnTool->setVisible(true);
}

void GameDialog::DrawGameGrade()
{
    // 绘制游戏分数
    ui->labelGrade->setText(QString::number(gameControl->GetGrade()));
    if(gameMode==1)
    {
        CalculateGameGrade();
    }
}

void GameDialog::CalculateGameGrade()
{
    int grade = gameControl->GetGrade();

    if(grade<20)
    {
        ui->btnTips->setEnabled(false);
        ui->btnReset->setEnabled(false);
    }else if(grade<50)
    {
        ui->btnTips->setEnabled(true);
        ui->btnReset->setEnabled(false);
    }else
    {
        ui->btnTips->setEnabled(true);
        ui->btnReset->setEnabled(true);
    }
}


bool GameDialog::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widgetDraw && event->type() == QEvent::Paint)
    {
        painterLine();
    }
    return QWidget::eventFilter(watched,event);
}

void GameDialog::painterLine()
{
    // 判断是否应当刷新
    if(shouldPainer)
    {
        int fx,fy,sx,sy;
        if(isTips)
        {
            fx=path[0]%mapCol;
            fy=path[0]/mapCol;
        }else
        {
            fx=firstPoint.col;
            fy=firstPoint.row;
        }
        QPainter painter(ui->widgetDraw);
        painter.setRenderHint(QPainter::Antialiasing, true);
        QPen pen;
        pen.setColor(Qt::green);
        pen.setWidth(3);
        painter.setPen(pen);

        // 开始绘制路径
        for (int i=0;i<numberOfVertexs;i++)
        {
            sx=path[i]%mapCol;
            sy=path[i]/mapCol;
            painter.drawLine(margin_left+(fx+0.5)*MAP_ITEM_WIDTH,
                             margin_top+(fy+0.5)*MAP_ITEM_WIDTH
                             ,margin_left+(sx+0.5)*MAP_ITEM_WIDTH,
                             margin_top+(sy+0.5)*MAP_ITEM_WIDTH);
            fx=sx;
            fy=sy;
        }
        painter.end();

        shouldPainer=false;
    }
}

void GameDialog::time_out()
{
    // 和时间相关的触发函数
    lastTime--;
    ui->barLeftTime->setValue(lastTime*100/GAME_TOTAL_TIME);
    ui->LabTime->setText(QString::number(lastTime)+"S");

    if(lastTime==0)
    {
        qtimer->stop();
        QMessageBox::about(this,"You Failed!","时间用完，下次请加快速度哦");
        this->ui->btnStart->setEnabled(true);
        isPlaying=false;
    }
}

void GameDialog::on_btnStart_clicked()
{
    // 初始化计时表
    qtimer->start(1000);
    ui->barLeftTime->setValue(100);
    lastTime=GAME_TOTAL_TIME;

    gameControl->StartGame();
    initGameMap();
    isPlaying=true;
    this->ui->btnStart->setDisabled(true);
}

void GameDialog::on_btnPause_clicked()
{
    if(isPlaying)
    {
        if(!isPausing)
        {
            ui->btnPause->setText("继续游戏");
            isPausing=true;
            qtimer->stop();
        }else
        {
            ui->btnPause->setText("暂停游戏");
            isPausing=false;
            qtimer->start();
        }
    }
}


void GameDialog::on_btnTips_clicked()
{
    if(isPlaying==false||isPausing)
    {
        return ;
    }

    // 清除上一次绘制的路径
    shouldPainer=false;
    update();

    if(gameControl->Help(path,numberOfVertexs))
    {
        // 绘制路径
        isTips=true;
        shouldPainer=true;
        repaint();
        isTips=false;
    }else
    {

    }
    DrawGameGrade();
}

void GameDialog::on_btnTool_clicked()
{

    // 清除上一次绘制的路径
    shouldPainer=false;
    update();

    if(gameControl->DeleteRandomLink(firstPoint, secondPoint))
    {
        DrawGameGrade();
        initGameMap();
    }
}

void GameDialog::receiveToDraw(){
    DrawGameGrade();
    initGameMap();
    if(!JudgeWin()) JudgeDraw();
}


void GameDialog::on_btnAuto_clicked()
{
    autoThread = new AutoSolve(gameControl);
    QObject::connect(autoThread,SIGNAL(shouldPainer(int *, int)), this, SLOT(receivePath(int *, int)));
    autoThread->start();

}

void GameDialog::on_btnReview_clicked()
{

}

void GameDialog::receivePath(int *path, int num){
    this->path = path;
    this->numberOfVertexs = num;

    // 绘制路径
    isTips=true;
    shouldPainer=true;
    repaint();

    WaitThread *waitThread = new WaitThread();
    waitThread->initNum(1);
    QObject::connect(waitThread,SIGNAL(isDone()), this, SLOT(receiveToDraw()));
    waitThread->start();
}

void GameDialog::on_btnReset_clicked()
{
    // 重新排列现有图片
    gameControl->Reset();

    // 刷新界面
    initGameMap();
    DrawGameGrade();
}

void GameDialog::initGameMap(void)
{
    // 更新游戏地图

    for (int i=0;i<mapRow;i++)
    {
        for (int j=0;j<mapCol;j++)
        {
            QString bgImg= QString::number(gameControl->GetElement(i,j),10);
            if(bgImg=="-1")
            {
                buttonMap[i][j]->hide();
                continue;
            }
            buttonMap[i][j]->setStyleSheet(
                        ".QPushButton{"
                        "background-image:url("
                        ":/source/images/res/"+bgImg+".png);"
                                                     "}");
            buttonMap[i][j]->show();
        }
    }

    shouldPainer=false;
    update();
}

void  GameDialog::OnLButtonUp()
{
    if(isPlaying==false||isPausing)
    {
        return ;
    }

    // 清除上一次绘制的路径
    shouldPainer=false;
    update();

    QObject* o = sender();
    qint8 i,j;
    i=o->property("i").toInt();
    j=o->property("j").toInt();

    if(isFirstChoose)
    {
        firstPoint.row=i;
        firstPoint.col=j;
        isFirstChoose=false;
    }else
    {
        secondPoint.row=i;
        secondPoint.col=j;

        if(gameControl->Link(firstPoint,secondPoint))
        {
            gameControl->Way(path,numberOfVertexs);

            // 如果可以消去，则对地图进行更新
            buttonMap[firstPoint.row][firstPoint.col]->hide();
            buttonMap[secondPoint.row][secondPoint.col]->hide();

            // 更新积分
            DrawGameGrade();

            // 绘制路径
            if(!shouldPainer)
            {
                shouldPainer=true;
                update();
            }

            // 判断获胜
            JudgeWin();

        }else
        {
            // 无法消去，则将当前点设为第一点
            firstPoint.row=secondPoint.row;
            firstPoint.col=secondPoint.col;
        }
        isFirstChoose=false;
    }
}

bool GameDialog::JudgeWin()
{
    if(gameControl->IsWin())
    {
        shouldPainer=false;
        update();
        if(gameMode==0)
        {
            // 基本模式-无积分
            qtimer->stop();

            QMessageBox::about(this,"You Win!","恭喜你胜利了");
            this->ui->btnStart->setEnabled(true);

        }else{
            // 休闲和关卡模式-有积分
            QMessageBox::StandardButton result;
            result=QMessageBox::question(this,"You Win!","恭喜你胜利了\n是否保存记录?",
                                       QMessageBox::Yes|QMessageBox::No);
            if(result==QMessageBox::Yes)
            {
                /*
                // 如果选择保存记录
                if(gameControl->SaveScore())
                {
                    QMessageBox::about(this,"消息","记录保存成功");
                }
                */
            }else
            {
                // 不保存记录
            }
        }

        this->ui->btnStart->setEnabled(true);
        isPlaying=false;
        return true;
    }

    JudgeDraw();
    return false;
}

bool GameDialog::JudgeDraw(){
    if(gameControl->IsDraw())
    {
        shouldPainer=false;
        update();
        if(gameMode==0) qtimer->stop();
        QMessageBox::about(this,"Draw!","游戏陷入僵局!");
        this->ui->btnStart->setEnabled(true);
        isPlaying=false;
        return true;
    }
    return false;
}

void GameDialog::initMap()
{
    switch (mapCol)
    {
    case 4:
        margin_left=250;
        margin_top = 200;
        break;
    case 10:
        margin_left=qAbs(500-mapCol*MAP_ITEM_WIDTH);
        margin_top =qAbs(470-mapCol*MAP_ITEM_WIDTH);
        break;
    case 16:
        margin_left=30;
        margin_top=70;
        break;
    default:
        margin_left=250;
        margin_top=200;
        break;

    }

    // 生成游戏按钮
    for (int i=0;i<mapRow;i++)
    {
        for (int j=0;j<mapCol;j++)
        {
            QString bgImg= QString::number(gameControl->GetElement(i,j),10);

            // 为游戏按钮添加样式
            buttonMap[i][j] =new QPushButton(this);
            buttonMap[i][j]->move(j*MAP_ITEM_WIDTH+margin_left,i*MAP_ITEM_WIDTH+margin_top);
            buttonMap[i][j]->resize(MAP_ITEM_WIDTH,MAP_ITEM_WIDTH);
            buttonMap[i][j]->setFlat(true);
            buttonMap[i][j]->setCheckable(true);
            buttonMap[i][j]->setAutoExclusive(true);
            buttonMap[i][j]->setProperty("i",i);
            buttonMap[i][j]->setProperty("j",j);
            buttonMap[i][j]->connect(buttonMap[i][j],SIGNAL(clicked()),this,SLOT(OnLButtonUp()));
        }
    }

}

void GameDialog::closeEvent(QCloseEvent *)
{
    if(autoThread) autoThread->requestInterruption();
    emit ExitWin();
}

int GameDialog::getMapLen() const
{
    return mapCol;
}

void GameDialog::setMapLen(const int &value)
{
    mapCol = value;
}

void GameDialog::on_btnHelp_clicked()
{
    new HelpDialog(this);
}


GameDialog::~GameDialog()
{
    // 释放动态数组空间
    for (int i=0;i<mapRow;i++)
    {
        for (int j=0;j<mapCol;j++)
        {
            if(buttonMap[i][j]!=nullptr)
            {
                delete buttonMap[i][j];
            }
        }
    }
    if (buttonMap!=nullptr)
    {
        delete [] buttonMap;
    }
    if(qtimer!=nullptr)
    {
        delete qtimer;
    }
    if(gameControl!=nullptr)
    {
        delete gameControl;
    }
    delete ui;
}
