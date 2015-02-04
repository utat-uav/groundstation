#include "targetlistitem.h"

TargetListItem::TargetListItem(QTableWidgetItem *i, QTableWidgetItem *n, QTableWidgetItem *c, QTableWidgetItem *d)
{
    image = i;
    name = n;
    coord = c;
    desc = d;

    imageFilePath = "";
}

TargetListItem::~TargetListItem()
{
    delete image;
    delete name;
    delete coord;
    delete desc;
}
