/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
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
    QCommandLinkButton *upButton;
    QCommandLinkButton *downButton;
    QTableWidget *targetListTable;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 500);
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
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        newItem = new QCommandLinkButton(centralWidget);
        newItem->setObjectName(QStringLiteral("newItem"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/round75.png"), QSize(), QIcon::Normal, QIcon::Off);
        newItem->setIcon(icon);
        newItem->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(newItem);

        edit = new QCommandLinkButton(centralWidget);
        edit->setObjectName(QStringLiteral("edit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/clasic.png"), QSize(), QIcon::Normal, QIcon::Off);
        edit->setIcon(icon1);
        edit->setIconSize(QSize(30, 40));

        horizontalLayout_4->addWidget(edit);

        deleteButton = new QCommandLinkButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/delete85.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(deleteButton);

        upButton = new QCommandLinkButton(centralWidget);
        upButton->setObjectName(QStringLiteral("upButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon3);
        upButton->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(upButton);

        downButton = new QCommandLinkButton(centralWidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon4);
        downButton->setIconSize(QSize(30, 30));

        horizontalLayout_4->addWidget(downButton);


        verticalLayout->addLayout(horizontalLayout_4);

        targetListTable = new QTableWidget(centralWidget);
        if (targetListTable->columnCount() < 4)
            targetListTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        targetListTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(11);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        targetListTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        targetListTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        targetListTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        targetListTable->setObjectName(QStringLiteral("targetListTable"));
        QFont font1;
        font1.setPointSize(11);
        targetListTable->setFont(font1);
        targetListTable->setAlternatingRowColors(false);
        targetListTable->setSelectionMode(QAbstractItemView::ExtendedSelection);
        targetListTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        targetListTable->setIconSize(QSize(0, 0));
        targetListTable->setSortingEnabled(false);
        targetListTable->horizontalHeader()->setCascadingSectionResizes(false);
        targetListTable->horizontalHeader()->setHighlightSections(false);
        targetListTable->horizontalHeader()->setStretchLastSection(true);
        targetListTable->verticalHeader()->setVisible(false);
        targetListTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(targetListTable);

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
#ifndef QT_NO_TOOLTIP
        newItem->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+n</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        newItem->setText(QApplication::translate("MainWindow", "New Item", 0));
        newItem->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
#ifndef QT_NO_TOOLTIP
        edit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+e</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        edit->setText(QApplication::translate("MainWindow", "Edit", 0));
        edit->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">del</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", 0));
        deleteButton->setShortcut(QApplication::translate("MainWindow", "Del", 0));
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Up Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        upButton->setText(QApplication::translate("MainWindow", "Up", 0));
        upButton->setShortcut(QApplication::translate("MainWindow", "Up", 0));
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Down Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        downButton->setText(QApplication::translate("MainWindow", "Down", 0));
        downButton->setShortcut(QApplication::translate("MainWindow", "Down", 0));
        QTableWidgetItem *___qtablewidgetitem = targetListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = targetListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem2 = targetListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
