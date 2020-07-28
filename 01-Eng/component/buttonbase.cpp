#include "buttonbase.h"

ButtonBase::ButtonBase(QString s,QWidget *parent)
    : QPushButton (parent)
{
    setText(s);
    InitButton();
}

void ButtonBase::InitButton()
{
    this->setProperty("btn",1);
}
