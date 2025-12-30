#include "MainWindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent){
    QPushButton *button = new QPushButton("This works!", this);
}