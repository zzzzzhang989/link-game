#ifndef AUTOSOLVE_H
#define AUTOSOLVE_H

#include <QThread>
#include "GameControl.h"
class AutoSolve : public QThread
{
    Q_OBJECT
public:
    AutoSolve(GameControl *gameControl);

    ~AutoSolve();

protected:

    void run();

signals:
    void shouldPainer(int *path, int num);

public slots:

private:
    GameControl *gameControl;
};


#endif // AUTOSOLVE_H
