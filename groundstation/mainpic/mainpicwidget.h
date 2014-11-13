#ifndef MAINPICWIDGET_H
#define MAINPICWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include "mainpicdisplay.h"
#include <QPushButton>
#include <QScrollArea>

class MainPicWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainPicWidget(QWidget *parent = 0);
private:
    QScrollArea* scrollArea;
    MainPicDisplay* picDisplay;
signals:

public slots:

};

#endif // MAINPICWIDGET_H
