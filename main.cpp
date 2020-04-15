//
// Created by jacke on 14/04/2020.
//

#include <QApplication>
#include <Qt/SVMTMainGui.h>

int main(int argc, char **argv) {
    QApplication SVMTApp(argc, argv);
    SVMTMainGui svmtMainGui;
    svmtMainGui.show();

    return SVMTApp.exec();
}