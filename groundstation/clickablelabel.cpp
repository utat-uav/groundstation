#include "clickablelabel.h"

ClickableLabel::ClickableLabel(QWidget *parent) :
    id(-1), QLabel(parent)
{
}

ClickableLabel::ClickableLabel(int id, QWidget *parent) :
    id(id), QLabel(parent)
{
}

ClickableLabel::~ClickableLabel(){
}

void ClickableLabel::mousePressEvent ( QMouseEvent * event )

{
    emit clicked(id);
}
