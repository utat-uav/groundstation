#ifndef MAINPICWIDGET_H
#define MAINPICWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScrollArea>
#include <QTableWidget>
#include <QVector>
#include <QString>
#include <QHeaderView>
#include <QDebug>

#include "mainpicdisplay.h"
#include "target.h"
#include "targetfilehandler.h"

class MainPicWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainPicWidget(QWidget *parent = 0);
    ~MainPicWidget();

    QVector<Target> targets;

    void mainWindowResized();
    void setPicture(QString);
    void addTarget(const QString& name, const int& x, const int& y);
private:
    QString currentPicture;

    QScrollArea* scrollArea;
    MainPicDisplay* picDisplay;
    QTableWidget* targetTable;
    TargetFileHandler targetFileHandler;
signals:

public slots:
    void toggleMode();
    void onPictureClicked(QMouseEvent* event);
};

#endif // MAINPICWIDGET_H
