#include "mainpicwidget.h"

MainPicWidget::MainPicWidget(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout* layout = new QHBoxLayout();
    setLayout(layout);

    scrollArea = new QScrollArea();
    layout->addWidget(scrollArea);

    picDisplay = new MainPicDisplay(this, scrollArea->width(), scrollArea->height());
    scrollArea->setWidget(picDisplay);
    //change display pic and stuff
    picDisplay->displayPicture("C:/Users/Harry/Desktop/Images folder usually me trolling/lol.png");

    QPushButton *zoomInButton = new QPushButton("Zoom in");
    connect(zoomInButton, SIGNAL(pressed()), picDisplay, SLOT(zoomIn()));
    layout->addWidget(zoomInButton);

    QPushButton *zoomOutButton = new QPushButton("Zoom out");
    connect(zoomOutButton, SIGNAL(pressed()), picDisplay, SLOT(zoomOut()));
    layout->addWidget(zoomOutButton);
}
