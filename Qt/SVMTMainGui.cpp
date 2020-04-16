//
// Created by jacke on 15/04/2020.
//

#include "SVMTMainGui.h"

#include <iostream>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

SVMTMainGui::SVMTMainGui(QWidget *parent) : QMainWindow{parent}, ui{new Ui::SVMT_Gui} {
    ui->setupUi(this);

    connect(ui->connectButton, SIGNAL(released()), this, SLOT(clickConnect()));
    connect(ui->nebulaButton, SIGNAL(released()), this, SLOT(clickNebula()));
    connect(ui->viewerButton, SIGNAL(released()), this, SLOT(clickViewer()));

}

SVMTMainGui::~SVMTMainGui() {
    delete ui;
}

void SVMTMainGui::clickConnect() {
    std::cout << "Pressed Connect" << std::endl;
}

void SVMTMainGui::clickNebula() {
    std::cout << "Pressed Nebula" << std::endl;
}

void SVMTMainGui::clickViewer() {
    std::cout << "Pressed Viewer" << std::endl;
}
