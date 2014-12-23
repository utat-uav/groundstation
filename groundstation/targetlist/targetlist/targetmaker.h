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
    bool accepted; // = false;
    QString defaultNameInput; // = "";
    QString defaultCoordInput; // = "";
    QString defaultDescInput; // = "";
    QString defaultFileInput; // = "";
    QString getName();
    QString getDesc();
    QString getCoord();
    QString getImageFilePath();
    void setDefaultInputs();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_toolButton_clicked();

private:
    Ui::TargetMaker *ui;
};

#endif // TARGETMAKER_H
