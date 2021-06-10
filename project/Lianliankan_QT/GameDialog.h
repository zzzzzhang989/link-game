#ifndef GAMEDIALOG_H
#define GAMEDIALOG_H
#define DEAFULT_MAP_SIZE 4
#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QPainter>
#include <QTimer>
#include <QRandomGenerator>
#include <QtWidgets/QHBoxLayout>

#include "LevelGame.h"
#include "BasicGame.h"
#include "EasyGame.h"

#include "HelpDialog.h"
#include "global.h"
#include "AutoSolve.h"
namespace Ui {
class GameDialog;
}

class GameDialog : public QMainWindow
{
    Q_OBJECT

private:

    Ui::GameDialog *ui;


protected:
    GameControl* gameControl;

    QTimer* qtimer;        // 计时器
    QPushButton*** buttonMap;   // 按钮数组
    QWidget *GameMap;           // 地图控件

    int *path;   // 两点间的路径
    int numberOfVertexs;        // 路径上的结点数
    bool isFirstChoose;     // 是否第一次选择
    Vertex firstPoint;      // 第一个选中的点
    Vertex secondPoint;     // 第二个选中的点
    int margin_left; // 左边的空白
    int margin_top;  // 右边的空白

    bool isPlaying;  // 游戏进行标志
    bool isPausing;  // 游戏暂停标志

    bool isTips;     // 提示
    int gameMode;    // 游戏模式

    int lastTime;       // 鍓╀綑鏃堕棿

    int mapCol;         // 地图列数
    int mapRow;         // 地图行数
    FLAG flag;          // 标志

    bool shouldPainer;  // 绘画标志

    AutoSolve *autoThread; // 自动解题线程

    bool eventFilter(QObject *watched, QEvent *event);

    void painterLine();

public:
    explicit GameDialog(QWidget *parent = nullptr,int mapCol=DEFAULT_MAP_COL,int mapRow=DEFAULT_MAP_ROW);

    void setGameMode(int i=0);    // 设置游戏模式（默认0）

    void initMap();             // 初始化地图控件
    void initGameMap(void);     // 初始化地图

    void CalculateGameGrade();  // 计算得分
    void DrawGameGrade();       // 绘制得分

    bool JudgeWin();            // 判断获胜

    bool JudgeDraw();            // 判断僵局
    ~GameDialog();

    int getMapLen() const;
    void setMapLen(const int &value);

private slots:

    void on_btnStart_clicked();    // 开始游戏

    void OnLButtonUp();             // 玩家按下图片，进行响应

    void on_btnReset_clicked();     // 重置

    void on_btnPause_clicked();     // 暂停

    void on_btnTips_clicked();      // 提示

    void time_out();                // 超时

    void on_btnHelp_clicked();      // 帮助

    void on_btnTool_clicked();      // 道具

    void on_btnAuto_clicked();      // 自动解题

    void receivePath(int *path, int num);   // 接受自动解题线程传回的路径信息

    void receiveToDraw();           // 接受线程开始绘画的信号

    void on_btnReview_clicked();    // 过程回放

    void closeEvent(QCloseEvent *); // 关闭事件
signals:
    void ExitWin(); // 胜利退出
};

#endif // GAMEDIALOG_H
