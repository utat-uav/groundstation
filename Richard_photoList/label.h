#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <QMenu>
#include <QMouseEvent>
#include <stdio.h>

class Label : public QLabel
{
public:
    Label(QWidget* pParent=0, Qt::WindowFlags f=0) : QLabel(pParent, f) {};
    Label(const QString& text, QWidget* pParent = 0, Qt::WindowFlags f = 0) : QLabel(text, pParent, f){};

protected :
    virtual void mouseReleaseEvent ( QMouseEvent * ev ) {
        //fprintf(stderr, "%d\n", ev->globalX());
        //fprintf(stderr, "%d\n\n", ev->globalY());

        QMenu MyMenu(this);
        MyMenu.addActions(this->actions());
        MyMenu.exec(ev->globalPos());
    }
};

#endif // LABEL_H
