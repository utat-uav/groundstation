#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include <QVBoxLayout>
#include <QMenu>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = 0);
    ~Widget();

public slots:
    void customMenuRequested(QPoint pos);

private:
    QLabel *label;
};
#endif
