#ifndef GRAPH_H
#define GRAPH_H
#include <Qt>
#include "global.h"

class Graph
{
protected:
    // 定点表
    typedef int Vertices[MAX_VERTEX_NUM];

    // 邻接矩阵
    typedef bool AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

    Vertices m_Vertices;
    AdjMatrix m_AdjMatrix;

    int m_nVexnum;
    int m_nArcnum;
    int m_mapLen;

public:
    Graph();

    ~Graph();

    // 初始化图
    void InitGraph(void);

    // 获取大小
    int getMapLen();

    // 设置大小
    void setMapLen(int len);

    // 添加结点
    int AddVertex(int info);

    // 更新结点
    void UpdateVertex(int nIndex,int info);

    // 获取节点信息
    int GetVertex(int nIndex);

    // 判断是否存在该边
    bool GetArc(int nV1Index,int nV2Index);

    // 添加边
    void AddArc(int nV1Index,int nV2Index);

    // 交换
    void Exchange(int v1,int v2);

    // 清除图
    void ClearGraph();

    // 获取结点个数
    int GetVexnum(void);
};

#endif // GRAPH_H
