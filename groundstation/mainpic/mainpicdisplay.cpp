#include "MainPicDisplay.h"
using namespace std;

MainPicDisplay::MainPicDisplay(QWidget *parent, int initWidth, int initHeight) :
    QLabel(parent)
{
    setScaledContents(true);

    width = initWidth;
    height = initHeight;
    setFixedWidth(width);
    setFixedHeight(height);
}

MainPicDisplay::~MainPicDisplay(){
}

void MainPicDisplay::zoomIn(){
    width = width * 1.2;
    height = height * 1.2;
    setFixedWidth(width);
    setFixedHeight(height);
}

void MainPicDisplay::zoomOut(){
    if(width>100&&height>100){      //mini dimensions
        width /= 1.2;
        height /= 1.2;
        setFixedWidth(width);
        setFixedHeight(height);
    }
}

void MainPicDisplay::displayPicture(QString source){
    QImage image =  QImage(source);
    setPixmap(QPixmap::fromImage(image));
}
