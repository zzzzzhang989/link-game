#ifndef WAITTHREAD_H
#define WAITTHREAD_H

#include <QThread>

class WaitThread : public QThread
{
    Q_OBJECT
public:
    WaitThread();

    void initNum(int num);
    ~WaitThread();

protected:
    void run();

signals:
    void isDone();  //处理完成信号

public slots:

private:
    int num;
};

#endif // WAITTHREAD_H
