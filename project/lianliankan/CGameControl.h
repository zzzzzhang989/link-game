#ifndef CGAMECONTROL_H
#define CGAMECONTROL_H
#include "QDateTime"
#include"global.h"
#include"CGameLogic.h"
#include"CGraph.h"

class CGameControl
{
protected:
    CGameLogic gameLogic;
    int mapCol;      // 地图的宽度
    int mapRow;      // 地图的高度
    CGraph graph;     // 游戏地图

    Vertex SelFir;  // 选中的第一个点
    Vertex SelSec;  // 选中的第二个点

    int nGrade;    // 当前积分

public:
    CGameControl();

    CGameControl(int Col,int Row);

    // 开始游戏函数,初始化了地图数据
    virtual void StartGame(void)=0;

    // 使用道具
    virtual bool ProLink(){return true;};

    // 获取某行列的图片编号
    int GetElement(int nRow,int nCol);

    // 连接判断函数
    virtual bool Link(Vertex m_svSelFst,Vertex m_svSelSec);

    virtual bool SaveScore(){return false;};

    // 是否获胜，如果所有的顶点为空则获胜
    bool IsWin();

    virtual ~CGameControl();
};

#endif // CGAMECONTROL_H
