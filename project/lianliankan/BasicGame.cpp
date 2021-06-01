#include "BasicGame.h"

BasicGame::BasicGame():GameControl()
{

}

BasicGame::BasicGame(qint16 Col,qint16 Row):GameControl(Col,Row)
{

}

void BasicGame::StartGame()
{
    gameLogic.SetMapLen(mapCol,mapRow);
    gameLogic.InitMap(graph);
}


