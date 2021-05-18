#ifndef CBASICGAME_H
#define CBASICGAME_H
#include "CGameControl.h"

class CBasicGame:public CGameControl
{
public:
    CBasicGame();

    CBasicGame(int Col,int Row);

    virtual void StartGame(void)  override;
};

#endif // CBASICGAME_H
