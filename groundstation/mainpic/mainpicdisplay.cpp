#include "MainPicDisplay.h"
using namespace std;

MainPicDisplay::MainPicDisplay(QWidget *parent) :
    QLabel(parent)
{
    setScaledContents(true);

    width = 0;
    aspectRatio = 0;
    maxWidth = 1000;
    maxHeight = 1000;
    setFixedWidth(width);
    setFixedHeight(width * aspectRatio);
}

MainPicDisplay::~MainPicDisplay(){
}

void MainPicDisplay::setMaxSize(const int& iwidth, const int& iheight){
    maxWidth = iwidth;
    maxHeight = iheight;
}

void MainPicDisplay::zoomIn(){
    if (width < 1000 && width * aspectRatio < 1000){
        width = width * 1.2;
    }
    setFixedWidth(width);
    setFixedHeight(width * aspectRatio);
}

void MainPicDisplay::zoomOut(){
    if(width > maxWidth && width * aspectRatio > maxHeight){
        width /= 1.2;
    } else {
        // Maxxed zoom out
        if (maxHeight / maxWidth < aspectRatio){
            width = maxHeight / aspectRatio;
        } else {
            width = maxWidth;
        }
    }
    setFixedWidth(width);
    setFixedHeight(width * aspectRatio);
}


void MainPicDisplay::zoomToFit(){
    if (maxHeight / maxWidth < aspectRatio){
        width = maxHeight / aspectRatio;
    } else {
        width = maxWidth;
    }
    setFixedWidth(width);
    setFixedHeight(width * aspectRatio);
}

void MainPicDisplay::displayPicture(QString source){
    QImage image = QImage(source);
    setPixmap(QPixmap::fromImage(image));
    aspectRatio = image.width() / image.height();
    zoomToFit();
}
