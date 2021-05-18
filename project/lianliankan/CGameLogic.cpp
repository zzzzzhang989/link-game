#include "CGameLogic.h"
#include "iostream"
CGameLogic::CGameLogic()
{
    mapRow=DEFAULT_MAP_COL;
}

void CGameLogic::SetMapLen(int Col,int Row)
{
    mapCol=Col;
    mapRow=Row;
}

void CGameLogic::InitMap(CGraph &graph)
{
    graph.InitGraph();

    QRandomGenerator random;
    random.seed(quint32(time(nullptr)));
    //int anTemp[16]={2,0,1,3,2,2,1,3,2,1,0,0,1,3,0,3};
    int anTemp[16]={2,0,1,3,5,5,6,3,2,1,0,0,6,4,0,4};

    int r1,r2,temp;

    random.bounded(16);

    graph.setMapLen(mapCol);
    for (int i=0;i<DEFAULT_MAP_ROW;i++)
    {
        for(int j=0;j<DEFAULT_RANDOM_TIMES;j++)
        {
            r1 = random.bounded(mapCol);
            r2 = random.bounded(mapCol);
            temp=anTemp[r1];
            anTemp[r1]=anTemp[r2];
            anTemp[r2]=temp;
        }

        for (int j=0;j<DEFAULT_MAP_COL;j++)
        {
            graph.AddVertex(anTemp[j]);
            UpdateArc(graph,i,j);
        }
    }
}

// 判断是否可消
bool CGameLogic::IsLink(CGraph &graph,Vertex v1,Vertex v2)
{
    Num=0;
    Corner=0;

    int v1Index=v1.row*mapCol+v1.col;
    int v2Index=v2.row*mapCol+v2.col;

    if(SearchPath(graph,v1Index,v2Index))
    {
        return true;
    }

    return false;
}

// 深度优先搜索Depth-First-Search，判断V1，V2是否联通,联通返回true
bool CGameLogic::SearchPath(CGraph &g, int V0, int V1)
{
    PushVertex(V0);

    if(Corner>2)
    {
        return false;
    }

    if(V0==V1)
    {
        if(Corner<3)
        {
            return true;
        }
    }
    else
    {
        int VexNum=g.GetVexnum();
        for (int i=0;i<VexNum;i++)
        {
            if(IsExsit(i))  //已在路径中
            {
                continue;
            }
            else if(g.GetArc(V0,i))   // 判断是否联通,如果联通才进入下一层
            {
                // 判断联通方式是否为同色联通
                if(i!=V1&&g.GetVertex(i)!=-1)
                {
                    continue;
                }

                //是同色联通，向下递归
                if(SearchPath(g,i,V1)) return true;
                else PopVertex();    //回退
            }
        }
    }
    return false;
}

void CGameLogic::PushVertex(int nV)
{
    // 将索引号为nV的顶点压入m_anPath,并判断是否形成拐点，如果是，则拐点+1
    Path[Num++]=nV;
    if(IsCornor())
    {
        Corner++;
    }
}

void CGameLogic::PopVertex()
{
    // 从栈m_anPath中，取出一个顶点并判断取出前
    // 是否构成一个拐点，如果构成，则拐点减一
    if(IsCornor())
    {
        Corner--;
    }
    Num--;
}

// 判断数组m_anPath中，连续三个顶点是否构成一个顶点
bool CGameLogic::IsCornor()
{

    if(Num < 3)
    {
        return false;
    }
    else
    {
        int anNum=Num-1;
        int item[3][2]={{0}};

        for (int i=0;i<3;i++)
        {
            item[i][0]=Path[anNum-i]%mapCol;
            item[i][1]=Path[anNum-i]/mapCol;
        }
        // 如果1,2列相等;2，3行相等
        if(item[0][1]==item[1][1]&&item[1][0]==item[2][0])
        {
            return true;
        }
        // 如果1,2行相等;2,3列相等
        if(item[0][0]==item[1][0]&&item[1][1]==item[2][1])
        {
            return true;
        }
        return false;
    }

}

// 判断nVi点是否保存到联通数组m_anPath中
bool CGameLogic::IsExsit(int nVi)
{
    for (int i=0;i<Num;i++)
    {
        if(Path[i]==nVi)
        {
            return true;
        }
    }
    return false;
}

// 判断某个点是否和周围的点相邻，如果有边，则更新图结构
void CGameLogic::UpdateArc(CGraph &graph,int nRow,int nCol)
{
    qint16 nIndex=nRow*mapCol+nCol;
    qint16 selfType=graph.GetVertex(nIndex);

    if(nRow>0)
    {
        // 判断上方
        if(selfType==graph.GetVertex(nIndex-mapCol)||selfType==-1)
        {
            graph.AddArc(nIndex,nIndex-mapCol);
        }
    }

    if(nRow<mapCol-1)
    {
        // 判断下方
        if(selfType==graph.GetVertex(nIndex+mapCol)||selfType==-1)
        {
            graph.AddArc(nIndex,nIndex+mapCol);
        }
    }

    if(nCol>0)
    {
        // 判断左边
        if(selfType==graph.GetVertex(nIndex-1)||selfType==-1)
        {
            graph.AddArc(nIndex,nIndex-1);
        }
    }

    if(nCol<mapCol-1)
    {
        // 判断右边
        if(selfType==graph.GetVertex(nIndex+1)||selfType==-1)
        {
            graph.AddArc(nIndex,nIndex+1);
        }
    }
}

// 消子函数
void CGameLogic::Clear(CGraph &graph,Vertex v1,Vertex v2)
{
    int v1Index=v1.row*mapCol+v1.col;
    int v2Index=v2.row*mapCol+v2.col;
    graph.UpdateVertex(v1Index,-1);
    graph.UpdateVertex(v2Index,-1);

    UpdateArc(graph,v1.row,v1.col);
    UpdateArc(graph,v2.row,v2.col);
}

// 图中顶点是否为空，为空则返回true
bool CGameLogic::IsBlank(CGraph &g)
{
    for (int i=0;i<g.GetVexnum();i++)
    {
        if(g.GetVertex(i)!=BLANK)
        {
            return false;
        }
    }
    return true;
}



