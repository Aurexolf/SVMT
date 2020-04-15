/********************************************************************************
** Form generated from reading UI file 'gui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef SVMTGUI_H
#define SVMTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SVMT_Gui {
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionPalceholde;
    QWidget *centralwidget;
    QLabel *title;
    QFrame *frame;
    QLabel *passTextLabel;
    QCheckBox *compressCheck;
    QCheckBox *combineCheck;
    QLabel *userTextLabel;
    QLineEdit *passText;
    QLabel *portTextLabel;
    QLineEdit *hostText;
    QLineEdit *portText;
    QLineEdit *userText;
    QLabel *hostTextLabel;
    QLabel *tunlTitle;
    QTabWidget *tunlTabs;
    QWidget *machine1;
    QLabel *destPortTextLabel_1;
    QLineEdit *tunlHostText_1;
    QLineEdit *destPortText_1;
    QLabel *tunlHostTextLabel_1;
    QLineEdit *localPortText_1;
    QLabel *localPortTextLabel_1;
    QWidget *machine2;
    QLineEdit *destPortText_2;
    QLineEdit *localPortText_2;
    QLabel *localPortTextLabel_2;
    QLabel *destPortTextLabel_2;
    QLabel *tunlHostTextLabel_2;
    QLineEdit *tunlHostText_2;
    QWidget *machine3;
    QLineEdit *destPortText_3;
    QLineEdit *localPortText_3;
    QLabel *localPortTextLabel_3;
    QLabel *destPortTextLabel_3;
    QLabel *tunlHostTextLabel_3;
    QLineEdit *tunlHostText_3;
    QPushButton *connectButton;
    QPushButton *nebulaButton;
    QPushButton *viewerButton;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SVMT_Gui) {
        if (SVMT_Gui->objectName().isEmpty())
            SVMT_Gui->setObjectName(QString::fromUtf8("SVMT_Gui"));
        SVMT_Gui->resize(408, 499);
        actionOpen = new QAction(SVMT_Gui);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(SVMT_Gui);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(SVMT_Gui);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionPrint = new QAction(SVMT_Gui);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        actionCopy = new QAction(SVMT_Gui);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionPaste = new QAction(SVMT_Gui);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionPalceholde = new QAction(SVMT_Gui);
        actionPalceholde->setObjectName(QString::fromUtf8("actionPalceholde"));
        centralwidget = new QWidget(SVMT_Gui);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        title = new QLabel(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(20, 10, 101, 16));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 30, 391, 161));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        passTextLabel = new QLabel(frame);
        passTextLabel->setObjectName(QString::fromUtf8("passTextLabel"));
        passTextLabel->setGeometry(QRect(20, 110, 61, 21));
        compressCheck = new QCheckBox(frame);
        compressCheck->setObjectName(QString::fromUtf8("compressCheck"));
        compressCheck->setGeometry(QRect(260, 20, 91, 17));
        compressCheck->setChecked(true);
        combineCheck = new QCheckBox(frame);
        combineCheck->setObjectName(QString::fromUtf8("combineCheck"));
        combineCheck->setEnabled(false);
        combineCheck->setGeometry(QRect(260, 40, 131, 17));
        userTextLabel = new QLabel(frame);
        userTextLabel->setObjectName(QString::fromUtf8("userTextLabel"));
        userTextLabel->setGeometry(QRect(20, 80, 61, 21));
        passText = new QLineEdit(frame);
        passText->setObjectName(QString::fromUtf8("passText"));
        passText->setGeometry(QRect(90, 110, 113, 20));
        passText->setEchoMode(QLineEdit::Password);
        portTextLabel = new QLabel(frame);
        portTextLabel->setObjectName(QString::fromUtf8("portTextLabel"));
        portTextLabel->setGeometry(QRect(20, 50, 61, 21));
        hostText = new QLineEdit(frame);
        hostText->setObjectName(QString::fromUtf8("hostText"));
        hostText->setGeometry(QRect(90, 20, 113, 20));
        portText = new QLineEdit(frame);
        portText->setObjectName(QString::fromUtf8("portText"));
        portText->setGeometry(QRect(152, 50, 51, 20));
        userText = new QLineEdit(frame);
        userText->setObjectName(QString::fromUtf8("userText"));
        userText->setGeometry(QRect(90, 80, 113, 20));
        hostTextLabel = new QLabel(frame);
        hostTextLabel->setObjectName(QString::fromUtf8("hostTextLabel"));
        hostTextLabel->setGeometry(QRect(20, 20, 61, 21));
        tunlTitle = new QLabel(centralwidget);
        tunlTitle->setObjectName(QString::fromUtf8("tunlTitle"));
        tunlTitle->setGeometry(QRect(10, 210, 101, 16));
        tunlTabs = new QTabWidget(centralwidget);
        tunlTabs->setObjectName(QString::fromUtf8("tunlTabs"));
        tunlTabs->setGeometry(QRect(10, 240, 391, 131));
        tunlTabs->setTabBarAutoHide(false);
        machine1 = new QWidget();
        machine1->setObjectName(QString::fromUtf8("machine1"));
        destPortTextLabel_1 = new QLabel(machine1);
        destPortTextLabel_1->setObjectName(QString::fromUtf8("destPortTextLabel_1"));
        destPortTextLabel_1->setGeometry(QRect(10, 70, 91, 21));
        tunlHostText_1 = new QLineEdit(machine1);
        tunlHostText_1->setObjectName(QString::fromUtf8("tunlHostText_1"));
        tunlHostText_1->setGeometry(QRect(80, 40, 113, 20));
        destPortText_1 = new QLineEdit(machine1);
        destPortText_1->setObjectName(QString::fromUtf8("destPortText_1"));
        destPortText_1->setGeometry(QRect(142, 70, 51, 20));
        tunlHostTextLabel_1 = new QLabel(machine1);
        tunlHostTextLabel_1->setObjectName(QString::fromUtf8("tunlHostTextLabel_1"));
        tunlHostTextLabel_1->setGeometry(QRect(10, 40, 61, 21));
        localPortText_1 = new QLineEdit(machine1);
        localPortText_1->setObjectName(QString::fromUtf8("localPortText_1"));
        localPortText_1->setGeometry(QRect(142, 10, 51, 20));
        localPortTextLabel_1 = new QLabel(machine1);
        localPortTextLabel_1->setObjectName(QString::fromUtf8("localPortTextLabel_1"));
        localPortTextLabel_1->setGeometry(QRect(10, 10, 61, 21));
        tunlTabs->addTab(machine1, QString());
        machine2 = new QWidget();
        machine2->setObjectName(QString::fromUtf8("machine2"));
        destPortText_2 = new QLineEdit(machine2);
        destPortText_2->setObjectName(QString::fromUtf8("destPortText_2"));
        destPortText_2->setGeometry(QRect(142, 70, 51, 20));
        localPortText_2 = new QLineEdit(machine2);
        localPortText_2->setObjectName(QString::fromUtf8("localPortText_2"));
        localPortText_2->setGeometry(QRect(142, 10, 51, 20));
        localPortTextLabel_2 = new QLabel(machine2);
        localPortTextLabel_2->setObjectName(QString::fromUtf8("localPortTextLabel_2"));
        localPortTextLabel_2->setGeometry(QRect(10, 10, 61, 21));
        destPortTextLabel_2 = new QLabel(machine2);
        destPortTextLabel_2->setObjectName(QString::fromUtf8("destPortTextLabel_2"));
        destPortTextLabel_2->setGeometry(QRect(10, 70, 91, 21));
        tunlHostTextLabel_2 = new QLabel(machine2);
        tunlHostTextLabel_2->setObjectName(QString::fromUtf8("tunlHostTextLabel_2"));
        tunlHostTextLabel_2->setGeometry(QRect(10, 40, 61, 21));
        tunlHostText_2 = new QLineEdit(machine2);
        tunlHostText_2->setObjectName(QString::fromUtf8("tunlHostText_2"));
        tunlHostText_2->setGeometry(QRect(80, 40, 113, 20));
        tunlTabs->addTab(machine2, QString());
        machine3 = new QWidget();
        machine3->setObjectName(QString::fromUtf8("machine3"));
        destPortText_3 = new QLineEdit(machine3);
        destPortText_3->setObjectName(QString::fromUtf8("destPortText_3"));
        destPortText_3->setGeometry(QRect(142, 70, 51, 20));
        localPortText_3 = new QLineEdit(machine3);
        localPortText_3->setObjectName(QString::fromUtf8("localPortText_3"));
        localPortText_3->setGeometry(QRect(142, 10, 51, 20));
        localPortTextLabel_3 = new QLabel(machine3);
        localPortTextLabel_3->setObjectName(QString::fromUtf8("localPortTextLabel_3"));
        localPortTextLabel_3->setGeometry(QRect(10, 10, 61, 21));
        destPortTextLabel_3 = new QLabel(machine3);
        destPortTextLabel_3->setObjectName(QString::fromUtf8("destPortTextLabel_3"));
        destPortTextLabel_3->setGeometry(QRect(10, 70, 91, 21));
        tunlHostTextLabel_3 = new QLabel(machine3);
        tunlHostTextLabel_3->setObjectName(QString::fromUtf8("tunlHostTextLabel_3"));
        tunlHostTextLabel_3->setGeometry(QRect(10, 40, 61, 21));
        tunlHostText_3 = new QLineEdit(machine3);
        tunlHostText_3->setObjectName(QString::fromUtf8("tunlHostText_3"));
        tunlHostText_3->setGeometry(QRect(80, 40, 113, 20));
        tunlTabs->addTab(machine3, QString());
        connectButton = new QPushButton(centralwidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(30, 410, 101, 23));
        nebulaButton = new QPushButton(centralwidget);
        nebulaButton->setObjectName(QString::fromUtf8("nebulaButton"));
        nebulaButton->setGeometry(QRect(140, 410, 141, 23));
        viewerButton = new QPushButton(centralwidget);
        viewerButton->setObjectName(QString::fromUtf8("viewerButton"));
        viewerButton->setGeometry(QRect(290, 410, 91, 23));
        SVMT_Gui->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SVMT_Gui);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 408, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        SVMT_Gui->setMenuBar(menubar);
        statusbar = new QStatusBar(SVMT_Gui);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SVMT_Gui->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionPalceholde);

        retranslateUi(SVMT_Gui);

        tunlTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SVMT_Gui);
    } // setupUi

    void retranslateUi(QMainWindow *SVMT_Gui) {
        SVMT_Gui->setWindowTitle(QCoreApplication::translate("SVMT_Gui", "MainWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("SVMT_Gui", "Open...", nullptr));
        actionSave->setText(QCoreApplication::translate("SVMT_Gui", "Save", nullptr));
        actionSave_As->setText(QCoreApplication::translate("SVMT_Gui", "Save As...", nullptr));
        actionPrint->setText(QCoreApplication::translate("SVMT_Gui", "Print...", nullptr));
        actionCopy->setText(QCoreApplication::translate("SVMT_Gui", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("SVMT_Gui", "Paste", nullptr));
        actionPalceholde->setText(QCoreApplication::translate("SVMT_Gui", "Palceholde", nullptr));
        title->setText(QCoreApplication::translate("SVMT_Gui", "Connection Settings", nullptr));
        passTextLabel->setText(QCoreApplication::translate("SVMT_Gui", "Password:", nullptr));
        compressCheck->setText(QCoreApplication::translate("SVMT_Gui", "Compression", nullptr));
        combineCheck->setText(QCoreApplication::translate("SVMT_Gui", "Combine Connections", nullptr));
        userTextLabel->setText(QCoreApplication::translate("SVMT_Gui", "Username:", nullptr));
        portTextLabel->setText(QCoreApplication::translate("SVMT_Gui", "Port:", nullptr));
        portText->setText(QString());
        hostTextLabel->setText(QCoreApplication::translate("SVMT_Gui", "Hostname:", nullptr));
        tunlTitle->setText(QCoreApplication::translate("SVMT_Gui", "Tunnel Settings", nullptr));
        destPortTextLabel_1->setText(QCoreApplication::translate("SVMT_Gui", "Destination Port:", nullptr));
        destPortText_1->setText(QString());
        tunlHostTextLabel_1->setText(QCoreApplication::translate("SVMT_Gui", "Hostname:", nullptr));
        localPortText_1->setText(QString());
        localPortTextLabel_1->setText(QCoreApplication::translate("SVMT_Gui", "Local Port:", nullptr));
        tunlTabs->setTabText(tunlTabs->indexOf(machine1),
                             QCoreApplication::translate("SVMT_Gui", "Machine 1", nullptr));
        destPortText_2->setText(QString());
        localPortText_2->setText(QString());
        localPortTextLabel_2->setText(QCoreApplication::translate("SVMT_Gui", "Local Port:", nullptr));
        destPortTextLabel_2->setText(QCoreApplication::translate("SVMT_Gui", "Destination Port:", nullptr));
        tunlHostTextLabel_2->setText(QCoreApplication::translate("SVMT_Gui", "Hostname:", nullptr));
        tunlTabs->setTabText(tunlTabs->indexOf(machine2),
                             QCoreApplication::translate("SVMT_Gui", "Machine 2", nullptr));
        destPortText_3->setText(QString());
        localPortText_3->setText(QString());
        localPortTextLabel_3->setText(QCoreApplication::translate("SVMT_Gui", "Local Port:", nullptr));
        destPortTextLabel_3->setText(QCoreApplication::translate("SVMT_Gui", "Destination Port:", nullptr));
        tunlHostTextLabel_3->setText(QCoreApplication::translate("SVMT_Gui", "Hostname:", nullptr));
        tunlTabs->setTabText(tunlTabs->indexOf(machine3),
                             QCoreApplication::translate("SVMT_Gui", "Machine 3", nullptr));
        connectButton->setText(QCoreApplication::translate("SVMT_Gui", "Make Connection", nullptr));
        nebulaButton->setText(QCoreApplication::translate("SVMT_Gui", "OpenNebula Control Panel", nullptr));
        viewerButton->setText(QCoreApplication::translate("SVMT_Gui", "Remote Viewer", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("SVMT_Gui", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SVMT_Gui : public Ui_SVMT_Gui {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // SVMTGUI_H
