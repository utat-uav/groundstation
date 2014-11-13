#ifndef CLICKABLELABEL_H
#define CLICKABLELABEL_H

#include <QLabel>

class ClickableLabel : public QLabel
{
    Q_OBJECT
public:
    explicit ClickableLabel(int id, QWidget *parent = 0);
    explicit ClickableLabel(QWidget *parent = 0);
    ClickableLabel::~ClickableLabel();
private:
    const int id;
signals:
    void clicked(int id);
public slots:

protected:
    void mousePressEvent( QMouseEvent * event ) ;
};

#endif // CLICKABLELABEL_H
