#include "model.h"

//自定义的类一定要有构造函数的实现 否则会出现 LNK2019!!
model::model()
{
    this->x=0;
    this->num=0;
}
void model::SetX(double x)
{
    this->x=x;
}

void model::SetNum(int num)
{
    this->num=num;
}

void model::setList_n(QStringList strL)
{
    //设置
    for(int i=0;i<strL.size();i++)
    {
        this->list_n.push_back(strL[i].toDouble());
    }
}

double model::cal()
{

    double ans=this->list_n[0];
    for(int i=1;i<list_n.size();i++)
    {
        ans=ans*this->x+list_n[i];
    }
    return ans;
}

QVector<double> model::getList()
{
    return this->list_n;
}

void model::clearNum()
{
    this->x=0;
    this->num=0;
    this->list_n.clear();
}
