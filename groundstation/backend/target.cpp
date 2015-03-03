#include "target.h"

/*
Target::Target(QWidget *parent) :
    QMap(parent)
{
}
*/

QString Target::getName()
{
    return name;
}

QString Target::getImgPath()
{
    return imgpath;
}

QString Target::getDesc()
{
    return description;
}

QPair<double, double> Target::getCoords()
{
    return coords;
}

void Target::setName(QString name)
{
    this->name = name;
}

void Target::setImgPath(QString path)
{
    this->imgpath = path;
}

void Target::setDesc(QString desc)
{
    this->description = desc;
}

void Target::setCoords(double x, double y)
{
    this->coords = qMakePair(x, y);
}

void Target::addImage(Image& i)
{
    this->images.insert(i.getPath(), &i);
}
