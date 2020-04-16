//
// Created by jacke on 15/04/2020.
//

#ifndef SVMT_SVMTMAINGUI_H
#define SVMT_SVMTMAINGUI_H

#include <QMainWindow>
#include "SVMTGui.h"

class SVMTMainGui : public QMainWindow {

Q_OBJECT

public:
    explicit SVMTMainGui(QWidget *parent = nullptr);

    ~SVMTMainGui();

private slots:

    void clickConnect();

    void clickNebula();

    void clickViewer();

private:
    Ui::SVMT_Gui *ui;
    QString curFile;
};


#endif //SVMT_SVMTMAINGUI_H
