#include "mylabel.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *l=new QVBoxLayout(this);
    label= new QLabel(this);
    label->setContextMenuPolicy(Qt::CustomContextMenu);
    connect(label, SIGNAL(customContextMenuRequested(QPoint)),
            SLOT(customMenuRequested(QPoint)));
    l->addWidget(label);
}

Widget::~Widget(){}

void Widget::customMenuRequested(QPoint pos){
    //QModelIndex index=label->indexAt(pos);

    QMenu *menu=new QMenu(this);
    menu->addAction(new QAction("Action 1", this));
    menu->addAction(new QAction("Action 2", this));
    menu->addAction(new QAction("Action 3", this));
    menu->popup(label->pos());
}
