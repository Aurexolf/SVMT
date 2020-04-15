//
// Created by jacke on 15/04/2020.
//

#include "SVMTMainGui.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>

SVMTMainGui::SVMTMainGui(QWidget *parent) : QMainWindow{parent}, ui{new Ui::SVMT_Gui} {
    ui->setupUi(this);

#if !defined(QT_PRINTSUPPORT_LIB) || !QT_CONFIG(printer)
    ui->actionPrint->setEnabled(false);
#endif

#if !QT_CONFIG(clipboard)
    ui->actionCopy->setEnabled(false);
    ui->actionPaste->setEnabled(false);
#endif

}

SVMTMainGui::~SVMTMainGui() {
    delete ui;
}
