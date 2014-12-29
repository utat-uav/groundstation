#include "target.h"

// Init the serialization seperator character(s)
const QString Target::SER_SEP = "\t";

Target::Target(){
}

Target::Target(const QString& iname, const int& ix, const int& iy){
    name = iname;
    x = ix;
    y = iy;
}

Target::~Target(){
}

QTextStream& operator<<(QTextStream&strm, const Target &t) {
    return strm << t.name << Target::SER_SEP << t.x << Target::SER_SEP << t.y;
}

QTextStream& operator>>(QTextStream& strm, Target &t){
    QString s = strm.readLine();
    QStringList sl = s.split(Target::SER_SEP);
    // Decode the string
    QString name = sl[0];
    int x = sl[1].toInt();
    int y = sl[2].toInt();
    // Make the object
    t = Target(name, x, y);
    return strm;
}
