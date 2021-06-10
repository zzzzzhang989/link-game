#ifndef SCORELOGIC_H
#define SCORELOGIC_H
#include <Qt>
#include "global.h"
#include "ScoreDialog.h"

class ScoreLogic
{
public:
    ScoreLogic();

    static bool SaveScore(SCORE &score);

    static QString getPath();
};

#endif // SCORELOGIC_H
