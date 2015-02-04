#ifndef TARGDATA_H
#define TARGDATA_H

#include <QtCore>
#include "target.h"

class targdata : public QVector<target>
{
private:
    //stuff
public:
    targdata();
    ~targdata();
};

#endif // TARGDATA_H
