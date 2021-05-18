#include "CGameDlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CGameDlg w(nullptr,DEFAULT_MAP_COL,DEFAULT_MAP_ROW);
    w.show();
    return a.exec();
}
