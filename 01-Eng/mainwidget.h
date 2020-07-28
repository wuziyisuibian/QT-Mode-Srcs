#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include "UI/BasePage.h"
#include "Logic/SoundManager.h"
#include "Logic/ProcessingUint.h"

class MainWidget : public /*QTabWidget*/QStackedWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

signals:
    void NewTask();
    void StopProcessing();
    void ThemeChanged(int);

public slots:
    void HandleBack();
    void HandleTab();
    void HandleNext();
    void TaskProcessing(QVariant);

    void ChangePage(BasePage*);
    void TimeOutContinue();
    void TimeOutReturn();

private:
    void InitUI();

public:
    QMap<int,BasePage*> m_page_map;

private:
    BasePage* m_active_page;
    QTimer *m_timer_btn_coninue;
    QTimer *m_timer_btn_return;

protected:
    void keyPressEvent(QKeyEvent *e);
    void keyReleaseEvent(QKeyEvent *e);

};


#endif // MAINWIDGET_H
