#include "mainpicwidget.h"

MainPicWidget::MainPicWidget(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout();
    setLayout(layout);

    scrollArea = new QScrollArea();
    layout->addWidget(scrollArea);

    // The pic display area
    picDisplay = new MainPicDisplay(&targets, this);
    scrollArea->setWidget(picDisplay);
    QObject::connect(picDisplay, SIGNAL(clicked(QMouseEvent*)), this, SLOT(onPictureClicked(QMouseEvent*)));

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
    targetTable = new QTableWidget();
    cpLayout->addWidget(targetTable, 3, 1);
    targetTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    targetTable->setColumnCount(4);
    QStringList tableHeader;
    tableHeader<<"Target"<<"X"<<"Y"<<"Colour";
    targetTable->setHorizontalHeaderLabels(tableHeader);
    sideBarLayout->addWidget(targetTable);
}

MainPicWidget::~MainPicWidget(){

}

void MainPicWidget::toggleMode(){

}

void MainPicWidget::mainWindowResized(){
    picDisplay->setMaxSize(scrollArea->width() - 2, scrollArea->height() - 2);
}

void MainPicWidget::setPicture(QString picturePath){
    currentPicture = picturePath;

    // Load the targets
    try{
        targets = targetFileHandler.readFile(currentPicture + TargetFileHandler::fileExtension);
    }catch(TargetFileHandler::FileReadException e){
        qDebug() << e.what();
        // TODO actual error handling
    }
    // Change display pic
    picDisplay->displayPicture(currentPicture);
    // Add targets to table
    for (int row = 0; row < targets.size(); row++){
        targetTable->insertRow(row);
        targetTable->setItem(row, 0, new QTableWidgetItem(targets[row].name));
        targetTable->setItem(row, 1, new QTableWidgetItem(QString::number(targets[row].x)));
        targetTable->setItem(row, 2, new QTableWidgetItem(QString::number(targets[row].y)));
        targetTable->setItem(row, 3, new QTableWidgetItem("Placeholder"));
    }
}


void MainPicWidget::onPictureClicked(QMouseEvent* event){
    addTarget("Unnamed", event->x(), event->y());
}

void MainPicWidget::addTarget(const QString& name, const int& x, const int& y){
    // Add to list
    targets.append(Target(name, x, y));
    // Draw dot
    picDisplay->update();
    // Add to table
    int row = targetTable->rowCount();
    targetTable->insertRow(row);
    targetTable->setItem(row, 0, new QTableWidgetItem(name));
    targetTable->setItem(row, 1, new QTableWidgetItem(QString::number(x)));
    targetTable->setItem(row, 2, new QTableWidgetItem(QString::number(y)));
    targetTable->setItem(row, 3, new QTableWidgetItem("Placeholder"));

    // Save the new targets into the file
    try{
        targetFileHandler.saveFile(targets, currentPicture + TargetFileHandler::fileExtension);
    }catch(TargetFileHandler::FileWriteException e){
        qDebug() <<  e.what();
        // TODO actual error handling
    }
}
