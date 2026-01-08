#include <QApplication>
#include "MainWindow.h"

int main(int argc, char **argv){
    QApplication app(argc, argv);
    MainWindow w;

    w.show();

    printf("=== Program Exited Succesfully! ===\n");
    return app.exec();
}