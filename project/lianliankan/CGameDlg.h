#ifndef CGAMEDLG_H
#define CGAMEDLG_H
#define DEAFULT_MAP_SIZE 4
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QPainter>
#include <QTimer>
#include <QRandomGenerator>
#include <QtWidgets/QHBoxLayout>

#include "CBasicGame.h"

#include "global.h"

namespace Ui {
class CGameDlg;
}

class CGameDlg : public QMainWindow
{
    Q_OBJECT

private:

    Ui::CGameDlg *ui;     // 指针指向真实的UI


protected:
    CGameControl* GameC;

    QTimer* qtimer;        // Qt倒计时
    QPushButton*** btnMap;   // 游戏地图
    QWidget *GameMap;

    int Path[MAX_VERTEX_NUM];   // 保存连通图的顶点索引
    int Num;                    // Path中的数

    bool FirstPoint;     // 是否为第一次选中
    Vertex SelFir;  // 选中的第一个点
    Vertex SelSec;  // 选中的第二个点

    int marginToLeft; // 地图离左边的距离
    int marginToTop;  // 地图离右边的距离

    bool  isPlaying;          // 游戏是否开始

    bool isPause;             // 游戏是否暂停

    bool isTips;                // 是否是提示

    int gameMode;             //设置游戏模式
    // 0-基本模式,1-休闲模式，2-关卡模式

    int lastTime;            // 剩余时间

    int mapCol;       // 地图的大小
    int mapRow;      // 地图的高度

    bool shouldPainer;  // 是否应该画图

    bool eventFilter(QObject *watched, QEvent *event);

    void painterLine();

public:
    //explicit CGameDlg(QWidget *parent = nullptr,qint16 mapCol=DEFAULT_MAP_COL,qint16 mapRow=DEFAULT_MAP_ROW);
    CGameDlg(QWidget *parent = nullptr,int mapCol=DEFAULT_MAP_COL,int mapRow=DEFAULT_MAP_ROW);

    void setGameMode(int i=0);    // 设置游戏模式

    void initMap();             // 初始化地图界面

    void initGameMap(void);    // 更新游戏窗口大小

    void DrawGameGrade();   //绘制游戏积分

    void CalculateGameGrade();  // 根据游戏积分控制按钮状态

    void JudgeWin();    // 判断游戏是否胜利并执行相关函数

    ~CGameDlg();

    qint16 getMapLen() const;
    void setMapLen(const qint16 &value);

private slots:

    void on_btnStart_clicked();    // 点击开始游戏

    void OnLButtonUp();       // 按下图片后的响应函数,更新游戏地图

signals:
    void ExitWin(); //新建一个关闭信号槽


};

#endif // CGAMEDLG_H
