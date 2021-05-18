#ifndef CGRAPH_H
#define CGRAPH_H
#include <Qt>
#include "global.h"

class CGraph
{
protected:
    // 顶点的数据类型
    typedef int Vertices[MAX_VERTEX_NUM];

    // 边的数据类型
    typedef bool AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

    Vertices vertices;    // 顶点数组
    AdjMatrix adjMatrix;  // 关系矩阵

    int nVexnum;  // 顶点数量
    int nArcnum;  // 边的数量
    int mapLen;   // 地图宽度

public:
    CGraph();

    ~CGraph();

    // 初始化图的顶点和关系
    void InitGraph(void);

    // 获取地图宽度
    int getMapLen();

    // 设置地图宽度
    void setMapLen(int len);

    // 将顶点info添加到数组中
    int AddVertex(int info);

    // 将图数组中索引号为nIndex的顶点更新为info
    void UpdateVertex(int nIndex,int info);

    // 获取顶点数组中索引为nIndex的顶点
    int GetVertex(int nIndex);

    // 获取两个点是否相邻
    bool GetArc(int nV1Index,int nV2Index);

    // 添加关系矩阵中,nV1Index与nV2Index的关系
    void AddArc(int nV1Index,int nV2Index);

    // 交换两个点的值，并且刷新关系
    void Exchange(int v1,int v2);

    // 还原顶点和边
    void ClearGraph();

    // 获取顶点数组中的顶点数
    int GetVexnum(void);
};

#endif // CGRAPH_H
