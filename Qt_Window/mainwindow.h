#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT  //调用信号槽的宏

public:
    MainWindow(QWidget *parent = 0);//构造函数
    ~MainWindow();
};

#endif // MAINWINDOW_H
