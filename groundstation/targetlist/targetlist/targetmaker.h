#ifndef TARGETMAKER_H
#define TARGETMAKER_H

#include <QDialog>

namespace Ui {
class TargetMaker;
}

class TargetMaker : public QDialog
{
    Q_OBJECT

public:
    explicit TargetMaker(QWidget *parent = 0);
    ~TargetMaker();

private:
    Ui::TargetMaker *ui;
};

#endif // TARGETMAKER_H
