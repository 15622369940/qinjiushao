#ifndef MODEL_H
#define MODEL_H
// 用vector总是报错 改成Qvector就行了
#include<QVector>
#include<QStringList>
class model
{
public:
    model();
    void SetX(double x);
    void SetNum(int num);
    void setList_n(QStringList strL);
    double cal();
    void clearNum();
    QVector<double> getList();

private:
    //val for x
    double x;
    int num;
    QVector<double> list_n;

};
#endif // MODEL_H
