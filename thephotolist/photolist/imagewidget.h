#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>

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
    void setTitle(QString name);
    void setImage(QString filePath);
    ~ImageWidget();

private:
    Ui::ImageWidget *ui;
};

#endif // IMAGEWIDGET_H
