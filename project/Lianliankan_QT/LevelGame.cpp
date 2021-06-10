#include "LevelGame.h"

LevelGame::LevelGame():GameControl()
{
}


LevelGame::LevelGame(qint16 Col,qint16 Row):GameControl(Col,Row)
{
}


void LevelGame::StartGame()
{
    gameLogic.SetMapLen(mapCol,mapRow);
    gameLogic.InitMap(graph);
}

// 连接判断函数
bool LevelGame::Link(Vertex m_svSelFst,Vertex m_svSelSec)
{
    if(GameControl::Link(m_svSelFst,m_svSelSec))
    {
        grade+=10;

        return TRUE;
    }else
    {
        return FALSE;
    }
}

bool LevelGame::SaveScore()
{
    SCORE CScore;
    QDateTime curDateTime=QDateTime::currentDateTime();
    CScore.nMode=2;
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
