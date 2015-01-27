#include "targetmaker.h"
#include "ui_targetmaker.h"
#include "targlistmainwindow.h"
#include <QFileDialog>
#include <QDialog>

TargetMaker::TargetMaker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TargetMaker)
{
    ui->setupUi(this);

    accepted = false;
    defaultNameInput = "";
    defaultCoordInput = "";
    defaultDescInput = "";
    defaultFileInput = "";
}

TargetMaker::~TargetMaker()
{
    delete ui;
}

void TargetMaker::on_buttonBox_accepted()
{
    accepted = true;
}

QString TargetMaker::getImageFilePath()
{
    return ui->fileInput->text();
}

QString TargetMaker::getName()
{
    return ui->nameInput->text();
}

QString TargetMaker::getDesc()
{
    return ui->descriptionInput->toPlainText();
}

QString TargetMaker::getCoord()
{
    return ui->coordinateInput->text();
}


void TargetMaker::on_buttonBox_rejected()
{
    accepted = false;
}

void TargetMaker::setDefaultInputs()
{
    ui->fileInput->setText(defaultFileInput);
    ui->nameInput->setText(defaultNameInput);
    ui->coordinateInput->setText(defaultCoordInput);
    ui->descriptionInput->setText(defaultDescInput);
}

void TargetMaker::on_toolButton_clicked()
{
    // Creates file selection dialog
    QFileDialog fileDialog(NULL, tr("Select Preview Image"));
    fileDialog.setNameFilter(tr("Images (*.png *.bmp *.jpg)"));
    fileDialog.setModal(true);
    QString fileName = "";
    fileDialog.exec();

    // Sets text
    if (fileDialog.selectedFiles().length() > 0)
        fileName = fileDialog.selectedFiles().at(0);
    ui->fileInput->setText(fileName);
}
