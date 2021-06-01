#ifndef SCOREDIALOG_H
#define SCOREDIALOG_H
#include <Qt>
#include "global.h"

class ScoreDialog
{
public:
    ScoreDialog();

    static bool Save(QString& strPath,SCORE& score);
};

#endif // SCOREDIALOG_H
