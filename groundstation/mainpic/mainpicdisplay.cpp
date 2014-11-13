#include "MainPicDisplay.h"
using namespace std;

MainPicDisplay::MainPicDisplay(QWidget *parent) :
    QLabel(parent)
{
    setScaledContents(true);

    width = 100;
    height = 100;
    setMinimumSize(width, height);
}

MainPicDisplay::~MainPicDisplay(){
}

void MainPicDisplay::zoomIn(){
    width = width * 0.8;
    height = height * 0.8;
    setMinimumSize(width, height);
}

void MainPicDisplay::displayPicture(QString source){
    QImage image =  QImage(source);
    setPixmap(QPixmap::fromImage(image));
}
