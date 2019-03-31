#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include<QDebug>
#include<QMessageBox>
#include<sys/timeb.h>
#include <QTime>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->Model=new model;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clearUIAll()
{
    this->ui->le_string->setText("");
    this->ui->lbl_ans->setText("");
    this->ui->le_x->setText("");
    this->ui->le_mostN->setText("");
    this->ui->le_string->setText("");
    this->ui->lbl_real_x_str->setText("");
    this->ui->lbl_new_str->setText("");
    this->ui->lbl_newTime->setText("");
    this->ui->lbl_realTime->setText("");
    this->ui->lbl_effiTime->setText("");
}
void MainWindow::clearUIShow()
{
    this->ui->lbl_ans->setText("");
    this->ui->lbl_real_x_str->setText("");
    this->ui->lbl_new_str->setText("");
}
void MainWindow::setRealStr()
{
    QString str;
    //从最高项开始
    QVector<double> t_list=Model->getList();
    int k=t_list.size()-1;
    for(int i=0;i<t_list.size();i++)
    {
        if(i!=0)
        {
            if(t_list[i]>=0) str+="+";
            else str+="-";
        }
        str+=QString::number(abs(t_list[i]))+"*x^"+QString::number(k--)+"";
    }
    ui->lbl_real_x_str->setText(str);

}

void MainWindow::setNewStr()
{
    QVector<double> t_list=Model->getList();
    //最高幂
    int N=t_list.size()-1;
    //最高的第一个系数不为0的数
    int rN=0;
    int index=0;
    for(int i=0;i<t_list.size();i++)
    {
        if(t_list[i]!=0)
        {
            index=i;
            rN=t_list.size()-1-i;
            break;
        }
    }
    QString New_str;
    for(int i=0;i<rN-1;i++)
    {
        New_str+="x(";
    }
    New_str+=QString::number(t_list[index])+"x";
    for(int i=1;i<=N;i++)
    {
        if(t_list[i]>=0) New_str+="+";
        else New_str+="-";
        New_str+=QString::number(abs(t_list[i]));
        if(i!=N) New_str+=")";
    }
    ui->lbl_new_str->setText(New_str);
}
void MainWindow::originalCal()
{
    clock_t time_start=clock();
    QStringList strL=this->ui->le_string->text().split(" ");
    int num=this->ui->le_mostN->text().toInt();
    //x的值
    double X=this->ui->le_x->text().toDouble();
    double sum=0;
    Model->setList_n(strL);
    Model->SetNum(num);
    Model->SetX(X);
    QVector<double> dvt=Model->getList();
    for(int i=0;i<dvt.size();i++)
    {
        sum+=pow(dvt[i]*X,dvt.size()-i);
    }
    clock_t time_end=clock();
    double time_ans=(double)(time_end-time_start)/1000.0;
    this->ui->lbl_realTime->setText(QString::number(time_ans));
}
void MainWindow::on_btn_do_clicked()
{


    Model->clearNum();
    clearUIShow();
    QStringList strL=this->ui->le_string->text().split(" ");
    int num=this->ui->le_mostN->text().toInt();
    double X=this->ui->le_x->text().toDouble();
    Model->setList_n(strL);
    Model->SetNum(num);
    Model->SetX(X);
    QVector<double> t_list=Model->getList();
    if(num==0&&X==0) return;
    if(num!=t_list.size()-1)
    {
        QMessageBox::information(this,"提示","请依次输入从最高项到第0项的系数，用空格分隔,"
                                 "末尾不要输入多余空格 ");
        return ;
    }
    //显示多项式
    setRealStr();
    //显示操作后的多项式
    setNewStr();
    clock_t time_start=clock();
    //计算结果 调用秦九韶算法
    this->ui->lbl_ans->setText(QString::number(Model->cal()));
    clock_t time_end=clock();
    double time_ans=(double)(time_end-time_start)/1000.0;
    //    qDebug()<<time_end<<endl;
    //    qDebug()<<time_start<<endl;
    //    qDebug()<<(time_ans)<<endl;
    this->ui->lbl_newTime->setText(QString::number(time_ans));
    originalCal();
    double rTime=ui->lbl_realTime->text().toDouble();
    double nTime=ui->lbl_newTime->text().toDouble();
    //    qDebug()<<(rTime)<<endl;
    //    qDebug()<<(nTime)<<endl;
    if(nTime!=0)
    {
        this->ui->lbl_effiTime->setText(QString::number(rTime/nTime));
    }
}

void MainWindow::on_btn_clear_clicked()
{

    clearUIAll();
    Model->clearNum();
}

void MainWindow::on_btn_help_clicked()
{
    QMessageBox::information(this,"帮助手册","本软件使用秦九韶算法求解多项式的结果\n"
                                         "请输入多项式的最高项系数，然后依次输入从最高项到第0项的系数\n"
                                         "例如最高项 3 则系数为1 2 3 4\n"
                                         "最后输入x值，计算即可得出结果");
}
