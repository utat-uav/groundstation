#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class MainPicDisplay: public QLabel
{
    Q_OBJECT
public:
    explicit MainPicDisplay(QWidget *parent = 0);
    MainPicDisplay::~MainPicDisplay();

    void displayPicture(QString source);

    void zoomIn();

private:
    int width;
    int height;

signals:
public slots:

protected:
};

#endif // CLICKABLELABEL_H
