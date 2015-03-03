#ifndef IMAGE_H
#define IMAGE_H

#include <QtCore>
#include "target.h"

/**
 * @brief The image class is the target class for images.
 */

// Not to be confused with QImage

class Target;

class Image
{
    //Q_OBJECT
private:
    QString path; // Name of image...
    QString description; // Description of image, if applicable
    QPair<double, double> coords; // GPS coords of image center
    QMap<QString, Target*> targets; // List of targets in image
    //QVector<QPair<int,int>> targetcoords; // Image coords of each target

public:
    explicit Image(QWidget *parent = 0);
    Image(QString path, double x, double y);

    QString getPath();// Gets name
    QString getDesc(); // Gets description
    QPair<double, double> getCoords(); // Gets GPS coordinates
    Target* getTarget(QString name);

    void setPath(QString path);
    void setDesc(QString desc);
    void setCoords(double x, double y);
    void addTarget(Target& t);

signals:

public slots:

};

#endif // IMAGE_H

/**
 * THINGS THAT ARE NEEDED HERE FOR STUFF TO WORK WELL
 *
 * * Using compvision or basic math:
 *  -> If a target is found on one image, it should also be located on 'nearby' images if present in field of view.
 *
 * * Need a way to store this more efficiently. Map? Set? Graph? If a graph could have many datatypes that'd be nice...
 * **/
