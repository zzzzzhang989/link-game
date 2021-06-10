#include "EasyGame.h"

EasyGame::EasyGame():GameControl()
{

}


EasyGame::EasyGame(int Col,int Row):GameControl(Col,Row)
{

}

void EasyGame::StartGame()
{
    gameLogic.SetMapLen(mapCol,mapRow);
    gameLogic.InitMap(graph);

    numberOfTools=0;
}

// 连接判断函数
bool EasyGame::Link(Vertex m_svSelFst,Vertex m_svSelSec)
{
    if(GameControl::Link(m_svSelFst,m_svSelSec))
    {
        grade+=10;
        if(grade%100==0)
        {
            numberOfTools++;
        }
        return TRUE;
    }else
    {
        return FALSE;
    }
}

bool EasyGame::Help(int *avPath, int &nVexnum)
{
    if(grade>20)
    {
        grade-=20;
        return GameControl::Help(avPath,nVexnum);
    }
    return false;
}

void EasyGame::Reset()
{
    if(grade>=50)
    {
        grade-=50;
        GameControl::Reset();
    }
}

bool EasyGame::DeleteRandomLink(Vertex &v1, Vertex &v2){
    if(numberOfTools<1)
       {
           numberOfTools=0;
           return false;
       }
       qint16 nInfo1=0,nInfo2=0,vexNum = graph.GetVexnum();

       for (qint16 i=0;i<vexNum;i++)
       {
           if(graph.GetVertex(i)!=BLANK)
           {
               nInfo1=i;
           }
       }
       for (qint16 i=0;i<vexNum;i++)
       {
           if(graph.GetVertex(i)==graph.GetVertex(nInfo1)&&i!=nInfo1)
           {
               nInfo2=i;
           }
       }

       if(graph.GetVertex(nInfo1)==graph.GetVertex(nInfo2)&&graph.GetVertex(nInfo1)!=BLANK)
       {
           v1.row = nInfo1/mapCol;
           v1.col = nInfo1%mapCol;
           v2.row = nInfo2/mapCol;
           v2.col = nInfo2%mapCol;

           graph.UpdateVertex(nInfo1,BLANK);
           graph.UpdateVertex(nInfo2,BLANK);

           gameLogic.UpdateArc(graph,v1.row,v1.col);
           gameLogic.UpdateArc(graph,v2.row,v2.col);
           grade+=10;
           numberOfTools--;
           return true;
       }

       return false;
}

bool EasyGame::SaveScore()
{
    SCORE CScore;
    QDateTime curDateTime=QDateTime::currentDateTime();
    CScore.nMode=1;
    CScore.strName = curDateTime.toString("yyyymmddhhmmss");
    CScore.nGrade = grade;

    // 调用CScoreLogic保存积分
    if(ScoreLogic::SaveScore(CScore))
    {
        // 保存积分成功
        return true;
    }

    return false;
}


