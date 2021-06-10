#ifndef RANKDIALOG_H
#define RANKDIALOG_H

#include <QDialog>
#include <QFile>
#include "global.h"

#include "ScoreLogic.h"

namespace Ui {
class RankDialog;
}

class RankDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RankDialog(QWidget *parent = nullptr);
    ~RankDialog();

private slots:
    void on_rbtnEasy_clicked(bool checked);

    void on_rbtnGrade_clicked(bool checked);

private:
    Ui::RankDialog *ui;
};

#endif // RANKDIALOG_H
