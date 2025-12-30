#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class MainWindow : public QWidget
{
    Q_OBJECT //enables Qt magic for GUI, without it, some Qt features wont work, and you get errors when compiling.

public:
    MainWindow(QWidget *parent = nullptr);
};
#endif