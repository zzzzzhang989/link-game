#include "CGameControl.h"

CGameControl::CGameControl()
{

}

CGameControl::CGameControl(int Col,int Row)
{
    mapCol=Col;
    mapRow=Row;
    graph.InitGraph();
    nGrade=0;
}

int CGameControl::GetElement(int nRow, int nCol)
{
    return graph.GetVertex(nRow*mapCol+nCol);
}

bool CGameControl::Link(Vertex SelFir,Vertex SelSec)
{
    this->SelFir=SelFir;
    this->SelSec=SelSec;

    int v1Index=SelFir.row*mapCol+SelFir.col;

    int v2Index=SelSec.row*mapCol+SelSec.col;

    // 判断两点的图像是否相同，如果不相同则判断无法消除
    if(graph.GetVertex(v1Index)!=graph.GetVertex(v2Index)|| v1Index==v2Index)
    {
        return false;
    }

    // 判断两点是否相连
    if(gameLogic.IsLink(graph,SelFir,SelSec))
    {
        gameLogic.Clear(graph,SelFir,SelSec);
        return true;
    }

    return false;
}

// 判断胜利
bool CGameControl::IsWin()
{
    if(gameLogic.IsBlank(graph))
    {
        graph.ClearGraph();
        return true;
    }
    return false;
}

CGameControl::~CGameControl()
{

}

