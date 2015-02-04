#include "targetfilehandler.h"

const QString TargetFileHandler::fileExtension = ".targets";

TargetFileHandler::TargetFileHandler()
{
}

void TargetFileHandler::saveFile(const QVector<Target>& targets, const QString& fileName){
    QFile file(fileName);
    // Open the file
    if (!file.open(QIODevice::WriteOnly)) {
        // TODO throw different errors depending on why
        throw FileWriteException();
    }
    // Write targets out
    QTextStream out(&file);
    for (int i = 0; i < targets.size(); i++){
        out << targets[i] << "\n";
    }
    file.close();
}

QVector<Target> TargetFileHandler::readFile(const QString& fileName){
    QFile file(fileName);
    // Open the file
    if (!file.open(QIODevice::ReadOnly)) {
        // TODO throw different errors depending on why
        // ie. file doesn't exist
        throw FileReadException();
    }
    // Read the file
    QVector<Target> targets;
    QTextStream in(&file);
    while(!in.atEnd()) {
        Target t;
        in >> t;
        targets.append(t);
    }
    file.close();
    return targets;
}
