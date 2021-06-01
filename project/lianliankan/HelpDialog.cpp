#include "HelpDialog.h"
#include "ui_CHelpDialog.h"

HelpDialog::HelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDialog)
{
    ui->setupUi(this);
    show();
}

HelpDialog::~HelpDialog()
{
    delete ui;
}
