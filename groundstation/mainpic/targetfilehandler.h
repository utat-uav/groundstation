#ifndef TARGETFILEHANDLER_H
#define TARGETFILEHANDLER_H

#include <QVector>
#include <QString>
#include <QFile>
#include <QIODevice>
#include <QMessageBox>
#include <QTextStream>

#include "target.h"

using namespace std;

class TargetFileHandler
{
public:
    static const QString fileExtension;
    class FileReadException : public exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "File Read Exception";
        }
    };
    class FileWriteException : public exception
    {
    public:
        virtual const char* what() const throw()
        {
            return "File Write Exception";
        }
    };

public:
    TargetFileHandler();

    void saveFile(const QVector<Target>&, const QString&);
    QVector<Target> readFile(const QString&);
};

#endif // TARGETFILEHANDLER_H
