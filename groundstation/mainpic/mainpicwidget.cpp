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
    connect(picDisplay, SIGNAL(clicked(QMouseEvent*)), this, SLOT(onPictureClicked(QMouseEvent*)));

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
    connect(targetTable, SIGNAL(cellChanged(int,int)), this, SLOT(onTargetTableChanged(int,int)));
    targetTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    targetTable->setColumnCount(Target::FIELD_NAMES.size());
    targetTable->setHorizontalHeaderLabels(Target::FIELD_NAMES);
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
    // Change display pic - this updates so targets will draw too
    picDisplay->displayPicture(currentPicture);
    // Add targets to table
    for (int row = 0; row < targets.size(); row++){
        addTargetToTable(targets[row]);
    }
}


void MainPicWidget::onPictureClicked(QMouseEvent* event){
    std::map<QString, QVariant> map = std::map<QString, QVariant>();
    map[QString("x")] = event->x();
    map[QString("y")] = event->y();
    addTarget(QMap<QString, QVariant>(map));
    // Try to save the new targets into the file
    try{
        targetFileHandler.saveFile(targets, currentPicture + TargetFileHandler::fileExtension);
    }catch(TargetFileHandler::FileWriteException e){
        qDebug() <<  e.what();
        // TODO actual error handling
    }
}

void MainPicWidget::onTargetTableChanged(int row, int column){
    // Update the data structure from the table
    targets[row][Target::FIELD_NAMES[column]] = targetTable->item(row, column)->text();
    // Try to save the new targets into the file
    try{
        targetFileHandler.saveFile(targets, currentPicture + TargetFileHandler::fileExtension);
    }catch(TargetFileHandler::FileWriteException e){
        qDebug() <<  e.what();
        // TODO actual error handling
    }
}

void MainPicWidget::addTarget(QMap<QString, QVariant> init){
    // Construct and add target to data structure
    targets.append(Target(init));
    // Draw dot
    picDisplay->update();
    // Add to table
    addTargetToTable(targets.back());
}

void MainPicWidget::addTargetToTable(const Target& target){
    int row = targetTable->rowCount();
    targetTable->insertRow(row);
    for (int column = 0; column < Target::FIELD_NAMES.size(); column++){
        targetTable->setItem(row, column, new QTableWidgetItem(target[Target::FIELD_NAMES[column]].toString()));
    }
}
