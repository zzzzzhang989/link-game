#include "MenuDialog.h"
#include "ui_MenuDialog.h"


MenuDialog::MenuDialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuDialog)
{
    ui->setupUi(this);

    gameName=QString::fromUtf8("Emoji连连看");

    this->setWindowTitle(gameName);
    this->ui->labelTitle->setText(gameName);

    // 设置icon图标
    QIcon icon;
    icon.addFile(QString::fromUtf8(":/source/images/res/LLK.ico"), QSize(), QIcon::Normal, QIcon::On);
    this->setWindowIcon(icon);

    // 固定页面大小
    this->setFixedSize(800,600);

    // 初始化默认地图大小
    mapCol=DEFAULT_MAP_COL;
    mapRow=DEFAULT_MAP_ROW;
}

void MenuDialog::paintEvent(QPaintEvent *event)
{
    //绘制窗口背景图片
    Q_UNUSED(event);
    QPainter painter(this);
    painter.drawPixmap(0,0,800,600,QPixmap(":/source/images/res/main.jpg"));
}

void MenuDialog::on_startBaseBtn_clicked()
{
    GameDialog* game = new GameDialog(nullptr,mapCol,mapRow);

    game->setAttribute(Qt::WA_DeleteOnClose);
    this->setHidden(true);
    game->setGameMode(0);
    game->show();

    // 通过信号槽实现子窗口关闭时，父窗口显示
    connect(game,SIGNAL(ExitWin()),this,SLOT(show()));
}

void MenuDialog::on_startEasyBtn_clicked()
{
    GameDialog* game = new GameDialog(nullptr,mapCol,mapRow);

    game->setAttribute(Qt::WA_DeleteOnClose);

    this->setHidden(true);
    game->setGameMode(1);
    game->show();

    // 通过信号槽实现子窗口关闭时，父窗口显示
    connect(game,SIGNAL(ExitWin()),this,SLOT(show()));
}

void MenuDialog::on_startGKBtn_clicked()
{
    GameDialog* game = new GameDialog(nullptr,mapCol,mapRow);

    game->setAttribute(Qt::WA_DeleteOnClose);

    this->setHidden(true);
    game->setGameMode(2);
    game->show();

    // 通过信号槽实现子窗口关闭时，父窗口显示
    connect(game,SIGNAL(ExitWin()),this,SLOT(show()));
}


void MenuDialog::on_btnHelp_clicked()
{
    new HelpDialog(this);
}

void MenuDialog::on_btnRank_clicked()
{
    new RankDialog(this);
}

void MenuDialog::on_btnQuit_clicked()
{
    this->close();
}

MenuDialog::~MenuDialog()
{
    delete ui;
}




