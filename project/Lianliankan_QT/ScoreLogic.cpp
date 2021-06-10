#include "ScoreLogic.h"

ScoreLogic::ScoreLogic()
{
}

bool ScoreLogic::SaveScore(SCORE &score)
{

    QString strPath=QString("");
    // 根据积分，计算积分等级
    if(score.nGrade<500)
    {
        score.nLevel=1;
    }else if(score.nGrade<1000)
    {
        score.nLevel=2;
    }else{
        score.nLevel=3;
    }


    // 调用ScoreDialog.Save保存积分
    if(ScoreDialog::Save(strPath,score))
    {
        return true;
    }
    return false;
}

QString ScoreLogic::getPath()
{
    return QString("");
}
