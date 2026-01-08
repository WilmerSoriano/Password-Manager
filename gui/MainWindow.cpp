#include "MainWindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) : QWidget(parent){
    //centralWidget(parent);

    QPushButton *Enter_button = new QPushButton("Enter", this);
    Enter_button->setFixedSize(150,35);
    //Enter_button->set
}