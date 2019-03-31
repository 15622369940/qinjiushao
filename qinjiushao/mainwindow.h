#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//一定要包含自己写的类 不然无法使用类指针
#include<model.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void clearUIAll();
    void clearUIShow();
    void setRealStr();
    void setNewStr();
    void originalCal();
private slots:
    void on_btn_do_clicked();
    void on_btn_clear_clicked();

    void on_btn_help_clicked();

private:
    Ui::MainWindow *ui;
    model* Model;
};

#endif // MAINWINDOW_H
