#include "CBasicGame.h"
#include "iostream"
using namespace std;

CBasicGame::CBasicGame():CGameControl()
{

}

CBasicGame::CBasicGame(int Col,int Row):CGameControl(Col,Row)
{

}

void CBasicGame::StartGame()
{
    gameLogic.SetMapLen(mapCol,mapRow);
    gameLogic.InitMap(graph);
}
