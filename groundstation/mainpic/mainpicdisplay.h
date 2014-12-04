#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class MainPicDisplay: public QLabel
{
    Q_OBJECT
public:
    explicit MainPicDisplay(QWidget *parent = 0);
    ~MainPicDisplay();

    void setMaxSize(const int&, const int&);
    void displayPicture(QString source);


private:
    int width;
    // Height:Width ratio
    double aspectRatio;
    // The dimensions of the container holding this display
    int maxWidth;
    int maxHeight;

signals:
public slots:
    void zoomIn();
    void zoomOut();
    void zoomToFit();

protected:
};

#endif // CLICKABLELABEL_H
