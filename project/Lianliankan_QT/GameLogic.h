#ifndef GAMELOGIC_H
#define GAMELOGIC_H
#include <QRandomGenerator>
#include"global.h"
#include"Graph.h"

class GameLogic
{
private:
    int mapCol;      // 地图列数
    int mapRow;      // 地图行数
protected:
    int path[MAX_VERTEX_NUM];// 路径
    int numberOfVertexs;     // 路径结点数
    int numberOfCorners;     // 拐角数

    // DFS思想进行两点间的路径搜索，若存在拐角数小于3的路径则返回true
    bool SearchPath(Graph &g,int nV0,int nV1);

    // 判断路径上该结点是否已经存在
    bool IsExsit(int nVi);

    // 判断是否是拐角
    bool IsCornor(void);

    // 将结点存入路径
    void PushVertex(int nV);

    // 将结点弹出路径
    void PopVertex();

public:
    GameLogic();

    // 设置地图大小
    void SetMapLen(int Col,int Row);

    // 初始化逻辑地图
    void InitMap(Graph &graph);

    // 更新（添加）边
    void UpdateArc(Graph &graph,int nRow,int nCol);

    // 判断两点是否能消去
    bool IsLink(Graph &graph,Vertex v1,Vertex v2);

    // 清除地图元素
    void Clear(Graph &graph,Vertex v1,Vertex v2);

    // 判断地图是否为空（用于判断获胜）
    bool IsBlank(Graph &g);

    // 获取两点间的路径
    void GetWay(int* anPath,int &anNum);

    // 判断地图中是否存在两个可消去的点，存在则返回true（用于判断僵局）
    bool SearchValidPath(Graph graph);

    // 重置地图
    void ResetGraph(Graph &g);
};

#endif // GAMELOGIC_H
