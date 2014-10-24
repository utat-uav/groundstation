#include "mainwindow.h"
#include <QDebug>
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QLabel>
#include <QMessageBox>
#include <QTextStream>
#include <string>
#include "clickablelabel.h"

#include "clickablelabel.cpp"
using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->scrollAreaWidgetContents->setLayout(ui->scrollAreaGridLayout);

    std::vector<std::vector<ClickableLabel *>> imageLabels;
    for (int i = 0; i < 5; i++){
        imageLabels.push_back(std::vector<ClickableLabel *>());
        for (int j = 0; j < 3; j++){
            imageLabels[i].push_back(new ClickableLabel(i*3 + j,ui->scrollAreaWidgetContents));
            ui->scrollAreaGridLayout->addWidget(imageLabels[i][j], i,j,1,1);
            imageLabels[i][j]->setScaledContents(true);
            QImage image =  QImage("C:/Users/wesley/Dropbox/Fun Stuff/580.jpg");
            imageLabels[i][j]->setPixmap(QPixmap::fromImage(image).scaledToWidth(100));
            QObject::connect(imageLabels[i][j], SIGNAL(clicked(int)),
                             this, SLOT(label_clicked(int)));
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::label_clicked(int id){
    qDebug() << id;
}

void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), QString(),
                                                    tr("Text Files (*.txt);;C++ Files (*.cpp *.h)"));

    if (!fileName.isEmpty()) {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
        // Open the file
        QTextStream in(&file);
        // Read the file
        in.readAll();
        file.close();
    }
}
