#include "MainPicDisplay.h"
using namespace std;

MainPicDisplay::MainPicDisplay(QWidget *parent, int initWidth, int initHeight) :
    QLabel(parent)
{
    setScaledContents(true);

    width = 0;
    maxWidth = 1000;
    height = 0;
    maxHeight = 1000;
    setFixedWidth(width);
    setFixedHeight(height);
}

MainPicDisplay::~MainPicDisplay(){
}

void MainPicDisplay::setMaxSize(const int& iwidth, const int& iheight){
    maxWidth = iwidth;
    maxHeight = iheight;

    while (width > maxWidth || height > maxHeight){
        zoomOut();
    }
}

void MainPicDisplay::zoomIn(){
    if (width < 1000 || height < 1000){
        width = width * 1.2;
        height = height * 1.2;
        setFixedWidth(width);
        setFixedHeight(height);
    }
}

void MainPicDisplay::zoomOut(){
    if(width > maxWidth || height > maxHeight){
        width /= 1.2;
        height /= 1.2;
        setFixedWidth(width);
        setFixedHeight(height);
    }
}


void MainPicDisplay::zoomToFit(){
    width = maxWidth;
    height = maxHeight;
    setFixedWidth(width);
    setFixedHeight(height);
}

void MainPicDisplay::displayPicture(QString source){
    QImage image = QImage(source);
    setPixmap(QPixmap::fromImage(image));
}
