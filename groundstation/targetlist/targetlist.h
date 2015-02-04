#ifndef TARGETLIST_H
#define TARGETLIST_H

#include "targetlistitem.h"

class TargetList
{
public:
    TargetList(QTableWidget *targetListTable = 0);
    ~TargetList();
    QList<TargetListItem *> *rows; //= new QList<TargetListItem *>;
    QTableWidget *table;
    QString defaultImagePath; // = ":/files/Untitled.png";
    void addNewRow(QString fileName, QString name, QString coordinates, QString description);
    void refreshTable();
    void editRow(int row, QString fileName, QString name, QString coordinates, QString description);
    void deleteRow(int row);
    void moveUp(int row);
    void moveDown(int row);
    void sortName(int low, int high);
};

#endif // TARGETLIST_H
