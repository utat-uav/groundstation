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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *hideImage;
    QPushButton *showImage;
    QPushButton *deleteImage;
    QPushButton *renameImage;
    QPushButton *hello;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        hideImage = new QPushButton(centralWidget);
        hideImage->setObjectName(QStringLiteral("hideImage"));
        hideImage->setGeometry(QRect(20, 20, 113, 32));
        hideImage->setMaximumSize(QSize(300, 50));
        showImage = new QPushButton(centralWidget);
        showImage->setObjectName(QStringLiteral("showImage"));
        showImage->setGeometry(QRect(140, 40, 113, 32));
        showImage->setMaximumSize(QSize(300, 50));
        deleteImage = new QPushButton(centralWidget);
        deleteImage->setObjectName(QStringLiteral("deleteImage"));
        deleteImage->setGeometry(QRect(260, 20, 113, 32));
        deleteImage->setMaximumSize(QSize(300, 50));
        renameImage = new QPushButton(centralWidget);
        renameImage->setObjectName(QStringLiteral("renameImage"));
        renameImage->setGeometry(QRect(120, 90, 113, 32));
        renameImage->setMaximumSize(QSize(300, 50));
        hello = new QPushButton(centralWidget);
        hello->setObjectName(QStringLiteral("hello"));
        hello->setGeometry(QRect(160, 150, 113, 32));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainWindow->setMenuBar(menuBar);
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
        hideImage->setText(QApplication::translate("MainWindow", "Hide Image", 0));
        showImage->setText(QApplication::translate("MainWindow", "Show Image", 0));
        deleteImage->setText(QApplication::translate("MainWindow", "Delete", 0));
        renameImage->setText(QApplication::translate("MainWindow", "Rename", 0));
        hello->setText(QApplication::translate("MainWindow", "Hello", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
