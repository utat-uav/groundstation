#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>
#include <QSize>

namespace Ui {
class ImageWidget;
}

class ImageWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageWidget(QWidget *parent = 0);
    QString title;
    QString path;
    QPixmap image;
    void setTitle(QString name);
    void setImage(QString filePath);
    void setImage(QPixmap resizedImage);
    ~ImageWidget();

private:
    Ui::ImageWidget *ui;
};

#endif // IMAGEWIDGET_H
