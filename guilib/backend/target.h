#ifndef TARGET_H
#define TARGET_H

#include <QtCore>

class target
{
private:
    QString name;
    QString desc;
    QPair<double, double> coord;
    QVector<QPair<QString, QPair<int, int>>> image; // ...
public:
    target();
    ~target();

    QDataStream& operator<<(target& next);
    QDataStream& operator>>(target& next);
};

#endif // TARGET_H
