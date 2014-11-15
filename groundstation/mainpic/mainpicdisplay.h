#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class MainPicDisplay: public QLabel
{
    Q_OBJECT
public:
    explicit MainPicDisplay(QWidget *parent = 0, int = 0, int = 0);
    ~MainPicDisplay();

    void displayPicture(QString source);


private:
    int width;
    int height;

signals:
public slots:
    void zoomIn();
    void zoomOut();

protected:
};

#endif // CLICKABLELABEL_H
