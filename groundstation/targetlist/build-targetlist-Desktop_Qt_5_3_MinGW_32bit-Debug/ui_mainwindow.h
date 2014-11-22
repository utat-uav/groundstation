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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExport;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QCommandLinkButton *newItem;
    QCommandLinkButton *edit;
    QCommandLinkButton *deleteButton;
    QCommandLinkButton *commandLinkButton_4;
    QTableWidget *targetList;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(692, 442);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionExport = new QAction(MainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        newItem = new QCommandLinkButton(centralWidget);
        newItem->setObjectName(QStringLiteral("newItem"));

        horizontalLayout_4->addWidget(newItem);

        edit = new QCommandLinkButton(centralWidget);
        edit->setObjectName(QStringLiteral("edit"));

        horizontalLayout_4->addWidget(edit);

        deleteButton = new QCommandLinkButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        horizontalLayout_4->addWidget(deleteButton);

        commandLinkButton_4 = new QCommandLinkButton(centralWidget);
        commandLinkButton_4->setObjectName(QStringLiteral("commandLinkButton_4"));

        horizontalLayout_4->addWidget(commandLinkButton_4);


        verticalLayout->addLayout(horizontalLayout_4);

        targetList = new QTableWidget(centralWidget);
        if (targetList->columnCount() < 5)
            targetList->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        targetList->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        targetList->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        targetList->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        targetList->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        targetList->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        targetList->setObjectName(QStringLiteral("targetList"));
        QFont font;
        font.setPointSize(11);
        targetList->setFont(font);
        targetList->horizontalHeader()->setCascadingSectionResizes(true);
        targetList->horizontalHeader()->setDefaultSectionSize(120);
        targetList->horizontalHeader()->setHighlightSections(false);
        targetList->horizontalHeader()->setMinimumSectionSize(40);
        targetList->horizontalHeader()->setStretchLastSection(false);
        targetList->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(targetList);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionExport->setText(QApplication::translate("MainWindow", "Export", 0));
        newItem->setText(QApplication::translate("MainWindow", "New Item", 0));
        edit->setText(QApplication::translate("MainWindow", "Edit", 0));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        commandLinkButton_4->setText(QApplication::translate("MainWindow", "CommandLinkButton", 0));
        QTableWidgetItem *___qtablewidgetitem = targetList->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = targetList->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Description", 0));
        QTableWidgetItem *___qtablewidgetitem2 = targetList->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem3 = targetList->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Category", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
