#ifndef HOMEPAGE_H
#define HOMEPAGE_H

#include "BasePage.h"

class HomePage : public BasePage
{
    Q_OBJECT
public:
    HomePage(QWidget* parent=nullptr);
    HomePage(){}

public slots:
    virtual void HandleBack();
    virtual void HandleTab();
    virtual void HandleNext();
    void SetWhiteTheme();
    void SetBlackTheme();

private:
    void InitUI();
    void InitLogic();

private:

};

#endif // HOMEPAGE_H
