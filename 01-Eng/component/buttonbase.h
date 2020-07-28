#ifndef BUTTONBASE_H
#define BUTTONBASE_H

#include "../IncludeHeader.h"

class ButtonBase : public QPushButton
{
    Q_OBJECT
public:
    ButtonBase(QString s,QWidget*parent=nullptr);
    ~ButtonBase(){}

    void InitButton();
};

#endif // BUTTONBASE_H
