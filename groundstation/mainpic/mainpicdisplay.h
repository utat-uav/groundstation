#ifndef MAINPICDISPLAY_H
#define MAINPICDISPLAY_H

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QVector>

#include "target.h"

class MainPicDisplay: public QLabel
{
    Q_OBJECT
public:
    explicit MainPicDisplay(const QVector<Target>*, QWidget *parent = 0);
    ~MainPicDisplay();

    void setMaxSize(const int&, const int&);
    void displayPicture(QString source);

protected:
    virtual void paintEvent(QPaintEvent*);

private:
    // The original width of the image, in pixels
    int originalWidth;
    // The current width, in pixels
    int width;
    // The current height, in pixels
    int getHeight();
    // Height:Width ratio
    double aspectRatio;
    // Get the ratio by which we are zoomed in by
    double getZoomFactor();
    // The dimensions of the container holding this display
    int maxWidth;
    int maxHeight;

    int TARGET_DRAW_SIZE;
    const QVector<Target>* targets;

signals:
    void clicked(int x, int y);
public slots:
    void zoomIn();
    void zoomOut();
    void zoomToFit();

protected slots:
    // Mouse listener
    void mousePressEvent(QMouseEvent* event);
};

#endif // CLICKABLELABEL_H
