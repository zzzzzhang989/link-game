#include "waitthread.h"

WaitThread::WaitThread():num(0)
{

}

WaitThread::~WaitThread()
{

}

void WaitThread::initNum(int num){
    this->num = num;
}

void WaitThread::run()
{
    sleep(num);
    emit isDone();
}
