#include "imagewidget.h"
#include "ui_imagewidget.h"

ImageWidget::ImageWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageWidget)
{
    path = "";
    title = "";
    ui->setupUi(this);

    // Initialize imageLabel
    setImage(":/images/Untitled.png");
}

ImageWidget::~ImageWidget()
{
    delete ui;
}

void ImageWidget::setTitle(QString name)
{
    ui->imageCaption->setText(name);
    title = name;
}

void ImageWidget::setImage(QString filePath)
{
    if (filePath != "") {
        QPixmap pix(filePath);
        ui->imageLabel->setPixmap(pix);
        path = filePath;
    }
}
