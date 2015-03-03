#ifndef TARGET_H
#define TARGET_H

#include <QTextStream>
#include <QList>
#include <QString>
#include <QMap>
#include <QVariant>

// Might have to remove this

using namespace std;

class Target
{
public:
    static const QString SER_SEP;
    static const QList<QString> FIELD_NAMES;

private:
    QMap<QString, QVariant> fields;

public:
    Target();
    Target(const QMap<QString, QVariant>& init);
    Target(const QList<QVariant>& init);
    virtual ~Target();

    QVariant& operator[](const QString& fieldName);
    const QVariant& operator[](const QString& fieldName) const;

private:
    friend QTextStream& operator<<(QTextStream&, const Target &);
    friend QTextStream& operator>>(QTextStream&, Target &);
};

#endif // TARGET_H
