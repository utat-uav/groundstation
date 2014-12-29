#ifndef TARGET_H
#define TARGET_H

#include <QTextStream>
#include <QString>
#include <QStringList>

using namespace std;

class Target
{
public:
    static const QString SER_SEP;

public:
    QString name;
    int x;
    int y;

public:
    Target();
    Target(const QString& iname, const int& ix, const int& iy);
    virtual ~Target();

private:
  friend QTextStream& operator<<(QTextStream&, const Target &);
  friend QTextStream& operator>>(QTextStream&, Target &);
};

#endif // TARGET_H
