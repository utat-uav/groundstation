#include "image.h"

/*
Image::Image(QWidget *parent) :
    QMap(parent)
{
}
*/

Image::Image(QString path, double x, double y)
{
    this->path = path;
    this->coords = qMakePair(x, y);
}

QString Image::getPath()
{
    return this->path;
}

QString Image::getDesc()
{
    return this->description;
}

QPair<double, double> Image::getCoords()
{
    return this->coords;
}

Target* Image::getTarget(QString name)
{
    return this->targets[name];
}

void Image::setPath(QString dir)
{
    this->path = dir;
}

void Image::setDesc(QString desc)
{
    this->description = desc;
}

void Image::setCoords(double x, double y)
{
    this->coords = qMakePair(x, y);
}

void Image::addTarget(Target& target)
{
    this->targets.insert(/*target.getName()*/"A", &target);
}
