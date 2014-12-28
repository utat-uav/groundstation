#ifndef TARGET_H
#define TARGET_H

#include <QString>

class Target
{
public:
    QString name;
    int x;
    int y;

public:
    Target();
    Target(const QString& iname, const int& ix, const int& iy);
    ~Target();
};

#endif // TARGET_H
