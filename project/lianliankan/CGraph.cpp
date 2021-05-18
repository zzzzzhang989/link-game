#include "CGraph.h"

CGraph::CGraph()
{

}

//初始化顶点数组和关系矩阵
void CGraph::InitGraph(void)
{
    nVexnum=0;
    nArcnum=0;
    for(int i=0;i<MAX_VERTEX_NUM;i++)
    {
        for (int j=0;j<MAX_VERTEX_NUM;j++)
        {
            adjMatrix[i][j]=false;
        }
        vertices[i]=BLANK;    //空白值，-1
    }
}

//返回点是否被消去
int CGraph::GetVertex(int nIndex)
{
    if(nIndex<0||nIndex>=nVexnum)
    {
        return -1;
    }
    return vertices[nIndex];
}

void CGraph::setMapLen(int len)
{
    mapLen=len;
}

int CGraph::getMapLen()
{
    return  mapLen;
}

int CGraph::AddVertex(int info)
{
    vertices[nVexnum]=info;
    nVexnum++;

    return info;
}

void CGraph::UpdateVertex(int nIndex,int info)
{
    vertices[nIndex]=info;
}


bool CGraph::GetArc(int nV1Index, int nV2Index)
{
    return adjMatrix[nV1Index][nV2Index];
}

// 添加关系矩阵中,nV1Index与nV2Index的关系
void CGraph::AddArc(int nV1Index,int nV2Index)
{
    if(adjMatrix[nV1Index][nV2Index]==true)
    {
        return;
    }
    adjMatrix[nV1Index][nV2Index]=true;
    adjMatrix[nV2Index][nV1Index]=true;

    nArcnum++;
}

// 交换两个点的值，并且刷新关系
void CGraph::Exchange(int v1, int v2)
{
    int temp=vertices[v1];
    vertices[v1]=vertices[v2];
    vertices[v2]=temp;
}

void CGraph::ClearGraph()
{
    InitGraph();
}

int CGraph::GetVexnum(void)
{
    return nVexnum;
}

CGraph::~CGraph()
{

}
