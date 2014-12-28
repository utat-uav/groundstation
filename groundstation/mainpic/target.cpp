#include "target.h"

Target::Target(){
}

Target::Target(const QString& iname, const int& ix, const int& iy)
{
    name = iname;
    x = ix;
    y = iy;
}

Target::~Target(){
}
