#ifndef MENUDIALOG_H
#define MENUDIALOG_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPainter>
#include "GameDialog.h"
#include "HelpDialog.h"
#include "RankDialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MenuDialog; }
QT_END_NAMESPACE

class MenuDialog : public QMainWindow
{
    Q_OBJECT
private:
    int mapCol;
    int mapRow;
    QString gameName;

public:
    MenuDialog(QWidget *parent = nullptr);

    void paintEvent(QPaintEvent *event);



    ~MenuDialog();

private slots:

    void on_startBaseBtn_clicked();

    void on_startEasyBtn_clicked();

    void on_startGKBtn_clicked();

    void on_btnHelp_clicked();

    void on_btnQuit_clicked();

    void on_btnRank_clicked();

private:
    Ui::MenuDialog *ui;
};
#endif // MENUDIALOG_H
