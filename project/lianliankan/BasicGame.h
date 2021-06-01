#ifndef BASICGAME_H
#define BASICGAME_H
#include "GameControl.h"

class BasicGame:public GameControl
{
public:
    BasicGame();

    BasicGame(qint16 Col,qint16 Row);

    virtual void StartGame(void)  override;
};

#endif // BASICGAME_H
