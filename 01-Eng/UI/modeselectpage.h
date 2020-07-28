#ifndef MODESELECTPAGE_H
#define MODESELECTPAGE_H

#include "BasePage.h"

class ModeSelectPage : public BasePage
{
    Q_OBJECT
public:
    ModeSelectPage(QWidget* parent=nullptr);

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

#endif // MODESELECTPAGE_H
