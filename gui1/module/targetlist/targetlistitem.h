#ifndef TARGETLISTITEM_H
#define TARGETLISTITEM_H
#include <QTableWidgetItem>
#include <QLabel>
#include <QWidget>

class TargetListItem
{
public:
    TargetListItem(QTableWidgetItem *i, QTableWidgetItem *n, QTableWidgetItem *c, QTableWidgetItem *d);
    QString imageFilePath; //= "";
    QTableWidgetItem *image;
    QTableWidgetItem *name;
    QTableWidgetItem *coord;
    QTableWidgetItem *desc;
    ~TargetListItem();
};

#endif // TARGETLISTITEM_H
