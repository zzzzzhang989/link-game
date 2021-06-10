#include "MenuDialog.h"
#include "GameDialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuDialog menuDialog;
    menuDialog.show();
    return a.exec();
}
