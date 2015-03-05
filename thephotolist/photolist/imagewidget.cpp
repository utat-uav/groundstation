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
    //setImage(":/images/Untitled.png");

    //ui->imageLabel->setScaledContents(true);
    ui->imageLabel->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );
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
        QPixmap *pix = new QPixmap();
        pix->load(filePath);
        image = pix->scaled(240, 240, Qt::KeepAspectRatioByExpanding, Qt::FastTransformation);
        ui->imageLabel->setPixmap(image);
        path = filePath;
        delete pix;
    }
}

void ImageWidget::setImage(QPixmap resizedImage)
{
    ui->imageLabel->setPixmap(resizedImage);
    image = resizedImage;
}
