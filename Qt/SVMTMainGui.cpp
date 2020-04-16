//
// Created by jacke on 15/04/2020.
//

#include "SVMTMainGui.h"

#include <iostream>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <Util.h>

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
    qDebug() << "Hostname: " << ui->hostText->text();
    qDebug() << "Port: " << ui->portText->text().toInt();
    qDebug() << "Username: " << ui->userText->text();
}

void SVMTMainGui::clickNebula() {
    Util::openURL("https://localhost:8080");
}

void SVMTMainGui::clickViewer() {
    qDebug() << "Pressed Viewer";
}
