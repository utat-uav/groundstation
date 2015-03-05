/********************************************************************************
** Form generated from reading UI file 'targlistmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGLISTMAINWINDOW_H
#define UI_TARGLISTMAINWINDOW_H

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

class Ui_TargListMainWindow
{
public:
    QAction *actionExport;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *newButton;
    QCommandLinkButton *editButton;
    QCommandLinkButton *deleteButton;
    QCommandLinkButton *upButton;
    QCommandLinkButton *downButton;
    QTableWidget *targetListTable;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TargListMainWindow)
    {
        if (TargListMainWindow->objectName().isEmpty())
            TargListMainWindow->setObjectName(QStringLiteral("TargListMainWindow"));
        TargListMainWindow->resize(930, 500);
        TargListMainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionExport = new QAction(TargListMainWindow);
        actionExport->setObjectName(QStringLiteral("actionExport"));
        centralWidget = new QWidget(TargListMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));

        horizontalLayout->addWidget(commandLinkButton);

        newButton = new QCommandLinkButton(centralWidget);
        newButton->setObjectName(QStringLiteral("newButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/files/round75.png"), QSize(), QIcon::Normal, QIcon::Off);
        newButton->setIcon(icon);
        newButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(newButton);

        editButton = new QCommandLinkButton(centralWidget);
        editButton->setObjectName(QStringLiteral("editButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/files/clasic.png"), QSize(), QIcon::Normal, QIcon::Off);
        editButton->setIcon(icon1);
        editButton->setIconSize(QSize(30, 40));

        horizontalLayout->addWidget(editButton);

        deleteButton = new QCommandLinkButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/files/delete85.png"), QSize(), QIcon::Normal, QIcon::Off);
        deleteButton->setIcon(icon2);
        deleteButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(deleteButton);

        upButton = new QCommandLinkButton(centralWidget);
        upButton->setObjectName(QStringLiteral("upButton"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/files/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        upButton->setIcon(icon3);
        upButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(upButton);

        downButton = new QCommandLinkButton(centralWidget);
        downButton->setObjectName(QStringLiteral("downButton"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/files/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        downButton->setIcon(icon4);
        downButton->setIconSize(QSize(30, 30));

        horizontalLayout->addWidget(downButton);


        verticalLayout->addLayout(horizontalLayout);

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
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(targetListTable->sizePolicy().hasHeightForWidth());
        targetListTable->setSizePolicy(sizePolicy);
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

        TargListMainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(TargListMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        TargListMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TargListMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TargListMainWindow->setStatusBar(statusBar);

        retranslateUi(TargListMainWindow);

        QMetaObject::connectSlotsByName(TargListMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TargListMainWindow)
    {
        TargListMainWindow->setWindowTitle(QApplication::translate("TargListMainWindow", "MainWindow", 0));
        actionExport->setText(QApplication::translate("TargListMainWindow", "Export", 0));
        commandLinkButton->setText(QApplication::translate("TargListMainWindow", "PushButton", 0));
#ifndef QT_NO_TOOLTIP
        newButton->setToolTip(QApplication::translate("TargListMainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+n</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        newButton->setText(QApplication::translate("TargListMainWindow", "New", 0));
        newButton->setShortcut(QApplication::translate("TargListMainWindow", "Ctrl+N", 0));
#ifndef QT_NO_TOOLTIP
        editButton->setToolTip(QApplication::translate("TargListMainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">ctrl+e</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        editButton->setText(QApplication::translate("TargListMainWindow", "Edit", 0));
        editButton->setShortcut(QApplication::translate("TargListMainWindow", "Ctrl+E", 0));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("TargListMainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">del</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("TargListMainWindow", "Delete", 0));
        deleteButton->setShortcut(QApplication::translate("TargListMainWindow", "Del", 0));
#ifndef QT_NO_TOOLTIP
        upButton->setToolTip(QApplication::translate("TargListMainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Up Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        upButton->setText(QApplication::translate("TargListMainWindow", "Up", 0));
        upButton->setShortcut(QApplication::translate("TargListMainWindow", "Up", 0));
#ifndef QT_NO_TOOLTIP
        downButton->setToolTip(QApplication::translate("TargListMainWindow", "<html><head/><body><p>Shortcut: <span style=\" font-weight:600;\">Down Key</span></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
        downButton->setText(QApplication::translate("TargListMainWindow", "Down", 0));
        downButton->setShortcut(QApplication::translate("TargListMainWindow", "Down", 0));
        QTableWidgetItem *___qtablewidgetitem = targetListTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("TargListMainWindow", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem1 = targetListTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("TargListMainWindow", "Coordinates", 0));
        QTableWidgetItem *___qtablewidgetitem2 = targetListTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("TargListMainWindow", "Description", 0));
    } // retranslateUi

};

namespace Ui {
    class TargListMainWindow: public Ui_TargListMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGLISTMAINWINDOW_H
