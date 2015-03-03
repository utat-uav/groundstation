#include "MainPicDisplay.h"

//using namespace std;

MainPicDisplay::MainPicDisplay(const QVector<Target>& itargets, QWidget *parent) :
    QLabel(parent), TARGET_DRAW_SIZE(10), targets(itargets)
{
    setScaledContents(true);

    originalWidth = 0;
    width = 0;
    aspectRatio = 0;
    maxWidth = 1000;
    maxHeight = 1000;
    setFixedWidth(0);
    setFixedHeight(0);
}

MainPicDisplay::~MainPicDisplay(){
}

int MainPicDisplay::getHeight(){
    return width * aspectRatio;
}

double MainPicDisplay::getZoomFactor(){
    return (double) originalWidth / width;
}

void MainPicDisplay::setMaxSize(const int& iwidth, const int& iheight){
    maxWidth = iwidth;
    maxHeight = iheight;
}

void MainPicDisplay::zoomIn(){
    if (width < 1000 && getHeight() < 1000){
        width = width * 1.2;
    }
    setFixedWidth(width);
    setFixedHeight(width * aspectRatio);
}

void MainPicDisplay::zoomOut(){
    if(width > maxWidth && getHeight() > maxHeight){
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
    setFixedHeight(getHeight());
}


void MainPicDisplay::zoomToFit(){
    if (maxHeight / maxWidth < aspectRatio){
        width = maxHeight / aspectRatio;
    } else {
        width = maxWidth;
    }
    setFixedWidth(width);
    setFixedHeight(getHeight());
}

void MainPicDisplay::displayPicture(QString source){
    QImage image = QImage(source);
    setPixmap(QPixmap::fromImage(image));
    aspectRatio = image.width() / image.height();
    originalWidth = image.width();
    zoomToFit();
}

void MainPicDisplay::mousePressEvent(QMouseEvent* event){
    // Convert the coordinates to unzoomed image coordinates before continuing
    emit clicked(event->x() * getZoomFactor(), event->y() * getZoomFactor());
}

void MainPicDisplay::paintEvent(QPaintEvent *event){
    QLabel::paintEvent(event);
    QPainter painter(this);
    // Line
    painter.setPen(Qt::blue);
    // Fill
    QRadialGradient gradient(TARGET_DRAW_SIZE/2, TARGET_DRAW_SIZE/2, TARGET_DRAW_SIZE/2);
    gradient.setColorAt(0, QColor(0, 0, 255, 255));
    gradient.setColorAt(1, QColor(0, 0, 255, 0));
    painter.setBrush(QBrush(gradient));

    // Draw all targets
    foreach (Target t, targets){
        int x = t["x"].toInt() / getZoomFactor() - TARGET_DRAW_SIZE/2;
        int y = t["y"].toInt() / getZoomFactor() - TARGET_DRAW_SIZE/2;
        painter.setBrushOrigin(x, y);
        painter.drawEllipse(x, y, TARGET_DRAW_SIZE, TARGET_DRAW_SIZE);
    }
}
