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

#include "mainpicdisplay.h"
#include "target.h"

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
    QScrollArea* scrollArea;
    MainPicDisplay* picDisplay;
    QTableWidget *targetTable;
signals:

public slots:
    void toggleMode();
    void onPictureClicked(QMouseEvent* event);
};

#endif // MAINPICWIDGET_H
