#ifndef EASYGAME_H
#define EASYGAME_H
#include "GameControl.h"

class EasyGame:public GameControl
{
protected:
    int numberOfTools;  //道具数
public:
    EasyGame();

    EasyGame(int Col,int Row);

    virtual void StartGame() override;

    // 抽象方法 判断两点是否可以消去
    virtual bool Link(Vertex m_svSelFst,Vertex m_svSelSec) override;

    // 提示
    virtual bool Help(int* avPath,int &nVexnum) override;

    // 重置
    virtual void Reset() override;

    virtual bool DeleteRandomLink(Vertex &v1, Vertex &v2) override;

    // 保存得分
    virtual bool SaveScore() override;
};

#endif // EASYGAME_H
