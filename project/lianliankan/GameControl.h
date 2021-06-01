#ifndef GAMECONTROL_H
#define GAMECONTROL_H
#include "QDateTime"
#include"global.h"
#include"GameLogic.h"
#include"Graph.h"
#include"ScoreLogic.h"

#include <iostream>
class GameControl
{
protected:
    GameLogic gameLogic;
    int mapCol;     //地图行数
    int mapRow;     //地图列数
    Graph graph;    //地图对象

    Vertex firstPoint;  //第一个选中的点
    Vertex secondPoint;  //第二个选中的点
    FLAG flag;  //判断标志

    int grade;    //得分

public:
    GameControl();

    GameControl(int Col,int Row);

    // 开始游戏
    virtual void StartGame(void)=0;

    // 获取得分
    virtual int GetGrade();

    // 判断是否存在可达路径
    bool ProLink(int *path, int &num);

    // 获取某行某列的元素
    int GetElement(int nRow,int nCol);

    // 设置第一个选中的点
    void SetFirstPoint(int nRow,int nCol);

    // 设置第二个选中的点
    void SetSecPoint(int nRow,int nCol);

    // 判断两点是否相连
    virtual bool Link(Vertex v1,Vertex v2);

    // 获取相连两点间的路径
    void Way(int* anPath,int &anNum);

    virtual bool DeleteRandomLink(Vertex &v1, Vertex &v2){return false;};

    virtual bool SaveScore(){return false;};

    // 提示
    virtual bool Help(int* avPath,int &nVexnum);

    // 重置
    virtual void Reset();

    // 判断是否获胜
    bool IsWin();

    // 判断是否僵局
    bool IsDraw();

    // 获取游戏标志
    FLAG GetGameFlag();

    // 设置游戏标志
    void SetGameFlag(FLAG tFlag);

    virtual ~GameControl();
};

#endif // GAMECONTROL_H
