#ifndef CLICKMENU_H
#define CLICKMENU_H

#include <QAction>


class clickMenu
{
public:
    clickMenu();
    ~clickMenu();
    // Copy Constructors and Assignment Operator not defined
    // They only create shallow copies
    QAction** actionList;
};

#endif // CLICKMENU_H
