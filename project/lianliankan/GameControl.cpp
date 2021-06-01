#include "GameControl.h"

GameControl::GameControl()
{
    mapCol=DEFAULT_MAP_COL;
    mapRow=DEFAULT_MAP_ROW;
    grade=0;
}

GameControl::GameControl(int Col,int Row)
{
    mapCol=Col;
    mapRow=Row;
    graph.InitGraph();
    grade=0;
}

int GameControl::GetGrade()
{
    return grade;
}

int GameControl::GetElement(int nRow, int nCol)
{
    return graph.GetVertex(nRow*mapCol+nCol);
}

void GameControl::SetFirstPoint(int nRow, int nCol)
{
    firstPoint.row=nRow;
    firstPoint.col=nCol;
}

void GameControl::SetSecPoint(int nRow, int nCol)
{
    secondPoint.row=nRow;
    secondPoint.col=nCol;
}

bool GameControl::Link(Vertex svSelFst,Vertex svSelSec)
{
    firstPoint=svSelFst;
    secondPoint=svSelSec;

    int v1Index=firstPoint.row*mapCol+firstPoint.col;

    int v2Index=secondPoint.row*mapCol+secondPoint.col;

    // 判断两点的图像是否相同，如果不相同则判断无法消除
    if(graph.GetVertex(v1Index)!=graph.GetVertex(v2Index)|| v1Index==v2Index)
    {
        std::cout << "different icon!" << "\n";
        return false;
    }

    // 判断两点是否相连
    if(gameLogic.IsLink(graph,firstPoint,secondPoint))
    {
        gameLogic.Clear(graph,firstPoint,secondPoint);
        return true;
    }

    std::cout << "not linked!" << "\n";
    return false;
}

bool GameControl::ProLink(int *path, int &num)
{
      if(gameLogic.SearchValidPath(graph)){
        gameLogic.GetWay(path, num);

        graph.UpdateVertex(path[0],BLANK);
        graph.UpdateVertex(path[num-1],BLANK);

        gameLogic.UpdateArc(graph,path[0]/mapCol,path[0]%mapCol);
        gameLogic.UpdateArc(graph,path[num-1]/mapCol,path[num-1]%mapCol);
        return true;
    }
    return false;
}


bool GameControl::Help(int *avPath, int &nVexnum)
{
    if(gameLogic.IsBlank(graph))
    {
        return false;
    }else if(gameLogic.SearchValidPath(graph))
    {
        gameLogic.GetWay(avPath,nVexnum);
        return true;
    }
    return false;
}

void GameControl::Reset()
{
    gameLogic.ResetGraph(graph);
}

void GameControl::Way(int *anPath, int &anNum)
{
    gameLogic.GetWay(anPath,anNum);
}

bool GameControl::IsWin()
{
    if(gameLogic.IsBlank(graph))
    {
        graph.ClearGraph();
        return true;
    }
    return false;
}

bool GameControl::IsDraw()
{
    if(!gameLogic.SearchValidPath(graph))
    {
        graph.ClearGraph();
        return true;
    }
    return false;
}


FLAG GameControl::GetGameFlag()
{
    return flag;
}

void GameControl::SetGameFlag(FLAG tFlag)
{
    flag=tFlag;
}

GameControl::~GameControl()
{
    // 释放动态数组空间
}



