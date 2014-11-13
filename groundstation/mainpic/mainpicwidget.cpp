#include "mainpicwidget.h"

MainPicWidget::MainPicWidget(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout();
    setLayout(layout);

    scrollArea = new QScrollArea();
    layout->addWidget(scrollArea);

    picDisplay = new MainPicDisplay();
    scrollArea->setWidget(picDisplay);
    picDisplay->displayPicture("C:/Users/wesley/git/groundstation/groundstation/580.jpg");

    picDisplay->zoomIn();

    QPushButton *zoomInButton = new QPushButton("Zoom in");
    layout->addWidget(zoomInButton);

    QPushButton *zoomOutButton = new QPushButton("Zoom out");
    layout->addWidget(zoomOutButton);
}
