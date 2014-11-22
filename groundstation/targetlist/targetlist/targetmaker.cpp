#include "targetmaker.h"
#include "ui_targetmaker.h"

TargetMaker::TargetMaker(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TargetMaker)
{
    ui->setupUi(this);
}

TargetMaker::~TargetMaker()
{
    delete ui;
}
