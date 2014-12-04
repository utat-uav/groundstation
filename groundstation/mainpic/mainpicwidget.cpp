#include "mainpicwidget.h"

MainPicWidget::MainPicWidget(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout();
    setLayout(layout);

    scrollArea = new QScrollArea();
    layout->addWidget(scrollArea);

    // The pic display area
    picDisplay = new MainPicDisplay(this);
    scrollArea->setWidget(picDisplay);

    QWidget *sideBar = new QWidget();
    QVBoxLayout *sideBarLayout = new QVBoxLayout();
    sideBar->setLayout(sideBarLayout);
    layout->addWidget(sideBar);

    // Control Panel
    QWidget *controlPanel = new QWidget();
    QGridLayout *cpLayout = new QGridLayout();
    controlPanel->setLayout(cpLayout);
    sideBarLayout->addWidget(controlPanel);
    // Zoom in
    QPushButton *zoomInButton = new QPushButton("Zoom in");
    connect(zoomInButton, SIGNAL(pressed()), picDisplay, SLOT(zoomIn()));
    cpLayout->addWidget(zoomInButton, 1, 1);
    // Zoom out
    QPushButton *zoomOutButton = new QPushButton("Zoom out");
    connect(zoomOutButton, SIGNAL(pressed()), picDisplay, SLOT(zoomOut()));
    cpLayout->addWidget(zoomOutButton, 1, 2);
    // Zoom to fit
    QPushButton *zoomToFit = new QPushButton("Zoom to fit");
    connect(zoomToFit, SIGNAL(pressed()), picDisplay, SLOT(zoomToFit()));
    cpLayout->addWidget(zoomToFit, 2, 1);
    // Select targets
    QPushButton *toggleMode = new QPushButton("Select targets");
    connect(toggleMode, SIGNAL(pressed()), this, SLOT(toggleMode()));
    cpLayout->addWidget(toggleMode, 2, 2);

    // Target Table
    QTableWidget *targetTable = new QTableWidget();
    cpLayout->addWidget(targetTable, 3, 1);
    targetTable->setColumnCount(2);
    QStringList tableHeader;
    tableHeader<<"Target"<<"Position";
    targetTable->setHorizontalHeaderLabels(tableHeader);
    sideBarLayout->addWidget(targetTable);

    // Insert some dummy data into the table
    targetTable->setRowCount(2);
    targetTable->setItem(0, 0, new QTableWidgetItem("Pool"));
    targetTable->setItem(0, 1, new QTableWidgetItem("(231, 483)"));
    targetTable->setItem(1, 0, new QTableWidgetItem("House"));
    targetTable->setItem(1, 1, new QTableWidgetItem("(545, 323)"));

}

MainPicWidget::~MainPicWidget(){

}

void MainPicWidget::toggleMode(){

}

void MainPicWidget::mainWindowResized(){
    picDisplay->setMaxSize(scrollArea->width() - 2, scrollArea->height() - 2);
}

void MainPicWidget::setPicture(QString picturePath){
    // Change display pic
    picDisplay->displayPicture(picturePath);
}
