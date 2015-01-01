#ifndef TARGET_H
#define TARGET_H

#include <QTextStream>
#include <QVector>
#include <QString>
#include <QStringList>
#include <QMap>
#include <QList>

using namespace std;

class Target
{
public:
    static const QString SER_SEP;
    static const QVector<QString> FIELD_NAMES;

public:
    QString name;
    int x;
    int y;

public:
    Target();
    Target(const QString& iname, const int& ix, const int& iy);
    virtual ~Target();

    QString getFieldByNumber(const int& fieldID);
    void setFieldByNumber(const int& fieldID, const QString& value);

private:
    friend QTextStream& operator<<(QTextStream&, const Target &);
    friend QTextStream& operator>>(QTextStream&, Target &);
};

#endif // TARGET_H
