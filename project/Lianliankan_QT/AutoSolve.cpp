#include "AutoSolve.h"

AutoSolve::AutoSolve(GameControl *gameControl)
{
    this->gameControl = gameControl;
}

AutoSolve::~AutoSolve()
{
    // 请求终止
    requestInterruption();
    quit();
    wait();
}

void AutoSolve::run()
{
    int *path = new int[256];
    int num = 0;
    while (!isInterruptionRequested())
    {
        while(!gameControl->IsWin()){
            if(gameControl->ProLink(path, num))
                emit(shouldPainer(path, num));
            sleep(2);
        }
    }
}
