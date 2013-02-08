/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu 31. Jan 22:50:14 2013
**      by: Qt User Interface Compiler version 5.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionContents;
    QAction *actionAbout;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionTerminal;
    QAction *actionConstructor;
    QAction *actionZoom;
    QAction *actionOptions;
    QAction *actionSave_As;
    QAction *actionPrint;
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionFind;
    QAction *actionAdvanced;
    QAction *actionUpdate;
    QAction *actionFull_Screen;
    QAction *actionLog_Data;
    QAction *actionHistory;
    QAction *actionUSB_comms;
    QAction *actionBluetooth;
    QAction *actionWifi;
    QAction *actionLAN;
    QAction *actionConfigure;
    QAction *actionCalibration;
    QAction *actionSettings;
    QAction *actionOverview;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QTableWidget *tableWidget;
    QDialogButtonBox *buttonBox_2;
    QWidget *tab;
    QLabel *label;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;
    QTextEdit *textEdit;
    QWidget *tab_5;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuOptions;
    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *menuCommunicate;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(655, 482);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionSave->setMenuRole(QAction::ApplicationSpecificRole);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        actionClose->setMenuRole(QAction::ApplicationSpecificRole);
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QStringLiteral("actionContents"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionAbout->setMenuRole(QAction::AboutRole);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        actionUndo->setMenuRole(QAction::ApplicationSpecificRole);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        actionRedo->setMenuRole(QAction::ApplicationSpecificRole);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setMenuRole(QAction::ApplicationSpecificRole);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setMenuRole(QAction::ApplicationSpecificRole);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        actionTerminal = new QAction(MainWindow);
        actionTerminal->setObjectName(QStringLiteral("actionTerminal"));
        actionConstructor = new QAction(MainWindow);
        actionConstructor->setObjectName(QStringLiteral("actionConstructor"));
        actionZoom = new QAction(MainWindow);
        actionZoom->setObjectName(QStringLiteral("actionZoom"));
        actionZoom->setMenuRole(QAction::ApplicationSpecificRole);
        actionOptions = new QAction(MainWindow);
        actionOptions->setObjectName(QStringLiteral("actionOptions"));
        actionOptions->setMenuRole(QAction::ApplicationSpecificRole);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        actionSave_As->setMenuRole(QAction::ApplicationSpecificRole);
        actionPrint = new QAction(MainWindow);
        actionPrint->setObjectName(QStringLiteral("actionPrint"));
        actionPrint->setMenuRole(QAction::ApplicationSpecificRole);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        actionNew->setMenuRole(QAction::ApplicationSpecificRole);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionOpen->setMenuRole(QAction::ApplicationSpecificRole);
        actionFind = new QAction(MainWindow);
        actionFind->setObjectName(QStringLiteral("actionFind"));
        actionAdvanced = new QAction(MainWindow);
        actionAdvanced->setObjectName(QStringLiteral("actionAdvanced"));
        actionUpdate = new QAction(MainWindow);
        actionUpdate->setObjectName(QStringLiteral("actionUpdate"));
        actionFull_Screen = new QAction(MainWindow);
        actionFull_Screen->setObjectName(QStringLiteral("actionFull_Screen"));
        actionFull_Screen->setMenuRole(QAction::ApplicationSpecificRole);
        actionLog_Data = new QAction(MainWindow);
        actionLog_Data->setObjectName(QStringLiteral("actionLog_Data"));
        actionHistory = new QAction(MainWindow);
        actionHistory->setObjectName(QStringLiteral("actionHistory"));
        actionUSB_comms = new QAction(MainWindow);
        actionUSB_comms->setObjectName(QStringLiteral("actionUSB_comms"));
        actionBluetooth = new QAction(MainWindow);
        actionBluetooth->setObjectName(QStringLiteral("actionBluetooth"));
        actionWifi = new QAction(MainWindow);
        actionWifi->setObjectName(QStringLiteral("actionWifi"));
        actionLAN = new QAction(MainWindow);
        actionLAN->setObjectName(QStringLiteral("actionLAN"));
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QStringLiteral("actionConfigure"));
        actionCalibration = new QAction(MainWindow);
        actionCalibration->setObjectName(QStringLiteral("actionCalibration"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        actionOverview = new QAction(MainWindow);
        actionOverview->setObjectName(QStringLiteral("actionOverview"));
        actionOverview->setMenuRole(QAction::ApplicationSpecificRole);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 661, 471));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 14)
            tableWidget->setRowCount(14);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 651, 381));
        buttonBox_2 = new QDialogButtonBox(tab_2);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(470, 400, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 50, 81, 41));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 180, 69, 22));
        buttonBox = new QDialogButtonBox(tab);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(450, 390, 156, 23));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(150, 250, 104, 71));
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 655, 21));
        menuBar->setContextMenuPolicy(Qt::DefaultContextMenu);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QStringLiteral("menuOptions"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QStringLiteral("menuTools"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuCommunicate = new QMenu(menuBar);
        menuCommunicate->setObjectName(QStringLiteral("menuCommunicate"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuCommunicate->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionPrint);
        menuFile->addAction(actionClose);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionAdvanced);
        menuView->addAction(actionZoom);
        menuView->addAction(actionFull_Screen);
        menuView->addAction(actionOverview);
        menuOptions->addAction(actionCalibration);
        menuOptions->addAction(actionSettings);
        menuTools->addAction(actionTerminal);
        menuTools->addAction(actionLog_Data);
        menuTools->addAction(actionHistory);
        menuHelp->addAction(actionUpdate);
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionAbout);
        menuCommunicate->addAction(actionUSB_comms);
        menuCommunicate->addAction(actionBluetooth);
        menuCommunicate->addAction(actionWifi);
        menuCommunicate->addAction(actionLAN);
        menuCommunicate->addAction(actionConfigure);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sensor Terminal", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionClose->setText(QApplication::translate("MainWindow", "Close", 0));
        actionContents->setText(QApplication::translate("MainWindow", "Contents", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About...", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionTerminal->setText(QApplication::translate("MainWindow", "Terminal", 0));
        actionConstructor->setText(QApplication::translate("MainWindow", "Constructor", 0));
        actionZoom->setText(QApplication::translate("MainWindow", "Zoom", 0));
        actionOptions->setText(QApplication::translate("MainWindow", "Options..", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionPrint->setText(QApplication::translate("MainWindow", "Print..", 0));
        actionNew->setText(QApplication::translate("MainWindow", "New Sensor..", 0));
        actionOpen->setText(QApplication::translate("MainWindow", "Open..", 0));
        actionFind->setText(QApplication::translate("MainWindow", "Find", 0));
        actionAdvanced->setText(QApplication::translate("MainWindow", "Advanced..", 0));
        actionUpdate->setText(QApplication::translate("MainWindow", "Update", 0));
        actionFull_Screen->setText(QApplication::translate("MainWindow", "Full Screen", 0));
        actionLog_Data->setText(QApplication::translate("MainWindow", "Log Data", 0));
        actionHistory->setText(QApplication::translate("MainWindow", "History", 0));
        actionUSB_comms->setText(QApplication::translate("MainWindow", "USB comms", 0));
        actionBluetooth->setText(QApplication::translate("MainWindow", "Bluetooth", 0));
        actionWifi->setText(QApplication::translate("MainWindow", "Wifi", 0));
        actionLAN->setText(QApplication::translate("MainWindow", "LAN", 0));
        actionConfigure->setText(QApplication::translate("MainWindow", "Configure..", 0));
        actionCalibration->setText(QApplication::translate("MainWindow", "Calibration", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        actionOverview->setText(QApplication::translate("MainWindow", "Overview", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "New Column", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Units", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "11", 0));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "12", 0));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "13", 0));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "14", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Overview", 0));
        label->setText(QApplication::translate("MainWindow", "Reading:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Options", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Communication", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuView->setTitle(QApplication::translate("MainWindow", "View", 0));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0));
        menuTools->setTitle(QApplication::translate("MainWindow", "Tools", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuCommunicate->setTitle(QApplication::translate("MainWindow", "Communicate", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
