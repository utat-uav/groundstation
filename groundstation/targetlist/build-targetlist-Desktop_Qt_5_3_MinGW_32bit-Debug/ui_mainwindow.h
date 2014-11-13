/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExport;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QCommandLinkButton *commandLinkButton_4;
    QCommandLinkButton *commandLinkButton_5;
    QCommandLinkButton *commandLinkButton_6;
    QCommandLinkButton *commandLinkButton_7;
    QMenuBar *menuBar;
    QMenu *menuHello;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 341);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 40, 601, 251));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 0, 121, 41));
        commandLinkButton_2 = new QCommandLinkButton(centralWidget);
        commandLinkButton_2->setObjectName(QStringLiteral("commandLinkButton_2"));
        commandLinkButton_2->setGeometry(QRect(120, 0, 71, 41));
        commandLinkButton_3 = new QCommandLinkButton(centralWidget);
        commandLinkButton_3->setObjectName(QStringLiteral("commandLinkButton_3"));
        commandLinkButton_3->setGeometry(QRect(190, 0, 81, 41));
        commandLinkButton_4 = new QCommandLinkButton(centralWidget);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));
        commandLinkButton_4->setGeometry(QRect(270, 0, 81, 41));
        commandLinkButton_5 = new QCommandLinkButton(centralWidget);
        commandLinkButton_5->setObjectName(QStringLiteral("commandLinkButton_5"));
        commandLinkButton_5->setGeometry(QRect(350, 0, 61, 41));
        commandLinkButton_6 = new QCommandLinkButton(centralWidget);
        commandLinkButton_6->setObjectName(QStringLiteral("commandLinkButton_6"));
        commandLinkButton_6->setGeometry(QRect(410, 0, 61, 41));
        commandLinkButton_7 = new QCommandLinkButton(centralWidget);
        commandLinkButton_7->setObjectName(QStringLiteral("commandLinkButton_7"));
        commandLinkButton_7->setGeometry(QRect(470, 0, 131, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        menuHello = new QMenu(menuBar);
        menuHello->setObjectName(QStringLiteral("menuHello"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHello->menuAction());
        menuHello->addAction(actionExport);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Category", 0));
        commandLinkButton->setText(QApplication::translate("MainWindow", "Create Target", 0));
        commandLinkButton_2->setText(QApplication::translate("MainWindow", "Edit", 0));
        commandLinkButton_3->setText(QApplication::translate("MainWindow", "Delete", 0));
        commandLinkButton_4->setText(QApplication::translate("MainWindow", "Export", 0));
        commandLinkButton_5->setText(QApplication::translate("MainWindow", "UP", 0));
        commandLinkButton_6->setText(QApplication::translate("MainWindow", "DOWN", 0));
        commandLinkButton_7->setText(QApplication::translate("MainWindow", "Edit Categories", 0));
        menuHello->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
