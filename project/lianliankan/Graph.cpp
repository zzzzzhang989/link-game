#include "Graph.h"

Graph::Graph()
{

}


void Graph::InitGraph(void)
{
    m_nVexnum=0;
    m_nArcnum=0;
    for(int i=0;i<MAX_VERTEX_NUM;i++)
    {
        for (int j=0;j<MAX_VERTEX_NUM;j++) {
            m_AdjMatrix[i][j]=false;
        }
        m_Vertices[i]=BLANK;
    }
}

void Graph::setMapLen(int len)
{
    m_mapLen=len;
}

int Graph::getMapLen()
{
    return  m_mapLen;
}

int Graph::AddVertex(int info)
{
    m_Vertices[m_nVexnum]=info;
    m_nVexnum++;

    return info;
}

void Graph::UpdateVertex(int nIndex,int info)
{
    m_Vertices[nIndex]=info;
}

int Graph::GetVertex(int nIndex)
{
    if(nIndex<0||nIndex>=m_nVexnum)
    {
        return -1;
    }
    return m_Vertices[nIndex];
}

bool Graph::GetArc(int nV1Index, int nV2Index)
{
    return m_AdjMatrix[nV1Index][nV2Index];
}

// 添加关系矩阵中,nV1Index与nV2Index的关系
void Graph::AddArc(int nV1Index,int nV2Index)
{
    if(m_AdjMatrix[nV1Index][nV2Index]==true)
    {
        return;
    }
    m_AdjMatrix[nV1Index][nV2Index]=true;
    m_AdjMatrix[nV2Index][nV1Index]=true;

    m_nArcnum++;
}

// 交换两个点的值，并且刷新关系
void Graph::Exchange(int v1, int v2)
{
    int temp=m_Vertices[v1];
    m_Vertices[v1]=m_Vertices[v2];
    m_Vertices[v2]=temp;
}

void Graph::ClearGraph()
{
    InitGraph();
}

int Graph::GetVexnum(void)
{
    return m_nVexnum;
}

Graph::~Graph()
{

}
