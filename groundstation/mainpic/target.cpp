#include "target.h"
#include <stdexcept>

// Init some static variables
// Init the serialization seperator character(s)
const QString Target::SER_SEP = "\t";
// Init the field names
const QList<QString> Target::FIELD_NAMES = QList<QString>() << "Name" << "x" << "y";

Target::Target(){
}

Target::Target(const QMap<QString, QVariant>& init){
    // TODO Do some error checking
    fields = init;
}

Target::Target(const QList<QVariant>& init){
    // TODO Do some error checking
    for (int i = 0; i < FIELD_NAMES.size(); i++){
        fields[FIELD_NAMES[i]] = init[i];
    }
}

Target::~Target(){
}

QTextStream& operator<<(QTextStream&strm, const Target &t) {
    foreach(QString fieldName, Target::FIELD_NAMES){
        strm << (t[fieldName]).toString() << Target::SER_SEP;
    }
    return strm;
}

QTextStream& operator>>(QTextStream& strm, Target &t){
    // Read the line into a QList<QVariant>
    QString s = strm.readLine();
    QList<QString> sl = s.split(Target::SER_SEP);
    QList<QVariant> vl;
    foreach (QString s, sl){
        vl.append(s);
    }

    // Make the object
    t = Target(vl);

    return strm;
}

QVariant& Target::operator[](const QString& fieldName){
    if (FIELD_NAMES.contains(fieldName)){
        return fields[fieldName];
    }
    // Error!
    throw out_of_range((QString(fieldName) + " is not a valid field for Target.").toStdString());
}

const QVariant& Target::operator[](const QString& fieldName) const{
    return const_cast<Target&>(*this)[fieldName];
}
