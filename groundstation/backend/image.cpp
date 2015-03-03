#include "image.h"

Image::Image(QWidget *parent) :
    QMap(parent)
{
}

Image::Image(QString path, double x, double y)
{
    this->path = path;
    this->coords = make_pair(x, y);
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

void setPath(QString path)
{
    this->path = path;
}

void setDesc(QString desc)
{
    this->description = desc;
}

void setCoords(double x, double y)
{
    this->coords = make_pair(x, y);
}

void addTarget(Target* target)
{
    this->targets.insert(target);
}
