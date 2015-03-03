#ifndef TARGET_H
#define TARGET_H

#include <QtCore>
#include "image.h"

/**
 * @brief The target class acts as the actual information storage thing for targets. Well, ideally.
 */

class Image;

class Target
{
    //Q_OBJECT
private:
    QString name;
    QString imgpath; // path of target's (thumbnail) image
    QString description;
    QPair<double, double> coords;
    QMap<QString, Image*> images;
    // No need for image coordinates since that's already in image
public:
    explicit Target(QWidget *parent = 0);
    Target(QString name, QString desc, double x, double y);

    QString getName();
    QString getImgPath();
    QString getDesc();
    QPair<double, double> getCoords();

    void setName(QString name);
    void setImgPath(QString path);
    void setDesc(QString desc);
    void setCoords(double x, double y);
    void addImage(Image& i);
signals:

public slots:

};

#endif // TARGET_H
