#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QLabel>
#include <QMessageBox>
#include <QTextStream>
#include <string>

using namespace std;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    std::vector<QLabel *> imageLabels;
    for (int i = 0; i < 3; i++){
        imageLabels.push_back(new QLabel(ui->scrollAreaWidgetContents));
        ui->scrollAreaGridLayout->addWidget(imageLabels[i], i,1,1,1);
        imageLabels[i]->setScaledContents(true);
        QImage image =  QImage("C:/Users/wesley/Dropbox/Fun Pictures/580.jpg").scaledToWidth(100);
        imageLabels[i]->setPixmap(QPixmap::fromImage(image));
    }
}

MainWindow::~MainWindow()
{
    delete ui;
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
