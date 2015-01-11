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
private:
    QString currentPicture;

    QScrollArea* scrollArea;
    MainPicDisplay* picDisplay;
    QTableWidget* targetTable;
    TargetFileHandler targetFileHandler;

public:
    void mainWindowResized();
    void setPicture(QString);
    void addTarget(QMap<QString, QVariant>);
private:
    void addTargetToTable(const Target& target);

signals:

public slots:
    void toggleMode();
    void deleteTarget();
    void onPictureClicked(int x, int y);
    void onTargetTableChanged(int row, int column);
};

#endif // MAINPICWIDGET_H
