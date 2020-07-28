#ifndef BASEPAGE_H
#define BASEPAGE_H

#include "../IncludeHeader.h"
#include "../SingletonData.h"
#include "../component/boxlayout.h"
#include "../component/buttonbase.h"

class MainWidget;
class BasePage : public QFrame
{
    Q_OBJECT

public:
    BasePage(QWidget* parent=nullptr);
    ~BasePage();

    void SetNeighbours(BasePage*,BasePage*);

    virtual void HandleBack();
    virtual void HandleTab();
    virtual void HandleNext();
    virtual void TaskProcessing(struct TaskProcessDS *);

    virtual void SetWhiteTheme();
    virtual void SetBlackTheme();

public slots:
    virtual void ThemeChanged(int);

signals:
    void NewTask();
    void ChangePage(BasePage*);
    void StopProcessing();

protected:
    void InitUI();
    void InitLogic();


protected:
    BasePage* m_pre_page;
    BasePage* m_next_page;

//    ButtonBase *m_Btn_continue;
//    ButtonBase *m_Btn_return;

//    TitleLine *m_title_line;

    int m_cur_theme;    //1-white 2-black

    friend class MainWidget;
};

#endif // BASEPAGE_H
