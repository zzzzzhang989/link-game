#ifndef LEVELGAME_H
#define LEVELGAME_H
#include "GameControl.h"

class LevelGame:public GameControl
{
public:
    LevelGame();

    LevelGame(qint16 Col,qint16 Row);

    virtual void StartGame() override;

    virtual bool Link(Vertex m_svSelFst, Vertex m_svSelSec) override;

    virtual bool SaveScore() override;
};

#endif // LEVELGAME_H
