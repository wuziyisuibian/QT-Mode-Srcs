#ifndef BOXLAYOUT_H
#define BOXLAYOUT_H

#include "../IncludeHeader.h"

class HBoxLayout : public QHBoxLayout
{
    Q_OBJECT
public:
    HBoxLayout(QWidget*parent=nullptr):
        QHBoxLayout (parent)
    {
        this->setMargin(0);
        this->setSpacing(0);
        this->setContentsMargins(0,0,0,0);
    }
    ~HBoxLayout()
    {
    }
};

class VBoxLayout : public QVBoxLayout
{
    Q_OBJECT
public:
    VBoxLayout(QWidget*parent=nullptr):
        QVBoxLayout (parent)
    {
        this->setMargin(0);
        this->setSpacing(0);
        this->setContentsMargins(0,0,0,0);
    }
    ~VBoxLayout()
    {
    }
};
#endif // BOXLAYOUT_H
