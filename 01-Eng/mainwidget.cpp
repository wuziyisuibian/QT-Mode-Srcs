#include "mainwidget.h"
#include "UI/homepage.h"
#include "UI/modeselectpage.h"

const int kPageNum=2;

MainWidget::MainWidget(QWidget *parent)
    :QStackedWidget (parent)
{
    InitUI();
    //    tabBar()->hide();
//    setStyleSheet("background-color: ;");

    setFocusPolicy(Qt::StrongFocus);

    m_timer_btn_coninue=new QTimer(this);
    m_timer_btn_coninue->setInterval(100);
    m_timer_btn_coninue->setSingleShot(true);
    connect(m_timer_btn_coninue,SIGNAL(timeout()), this, SLOT(TimeOutContinue()));
    m_timer_btn_return=new QTimer(this);
    m_timer_btn_return->setInterval(100);
    m_timer_btn_return->setSingleShot(true);
    connect(m_timer_btn_return,SIGNAL(timeout()), this, SLOT(TimeOutReturn()));
}

MainWidget::~MainWidget()
{

}

void MainWidget::InitUI()
{
    BasePage* m_subpage[kPageNum];

    m_subpage[0]=new HomePage(this);
    m_subpage[1]=new ModeSelectPage(this);

    addWidget(m_subpage[0]);

    m_subpage[0]->SetNeighbours(nullptr,m_subpage[1]);
    m_subpage[1]->SetNeighbours(m_subpage[0],nullptr);


    for(int i=0;i<kPageNum;i++)
    {
        m_page_map[i] = m_subpage[i];
        connect(m_subpage[i],SIGNAL(ChangePage(BasePage*)),this,SLOT(ChangePage(BasePage*)));
    }

    setCurrentWidget(m_subpage[0]);
    m_active_page = m_page_map[0];
//    this->setFixedSize(1920,1016);
}

void MainWidget::HandleBack()
{
//    if(m_active_page->m_Btn_return){
//        m_active_page->m_Btn_return->setDown(true);
//    }
    m_timer_btn_return->start();
}

void MainWidget::HandleTab()
{
    m_active_page->HandleTab();
}

void MainWidget::HandleNext()
{
//    if(m_active_page->m_Btn_continue){
//        m_active_page->m_Btn_continue->setDown(true);
//    }
    m_timer_btn_coninue->start();
    SoundManager::instance()->play(I_DEPTH_REACH);
}

void MainWidget::ChangePage(BasePage *newPage)
{
    if(newPage==nullptr)
        return;
    setCurrentWidget(newPage);
    m_active_page = newPage;
}

void MainWidget::TimeOutContinue()
{
//    if(m_active_page->m_Btn_continue){
//        m_active_page->m_Btn_continue->setDown(false);
//    }
    m_active_page->HandleNext();
}

void MainWidget::TimeOutReturn()
{
//    if(m_active_page->m_Btn_return){
//        m_active_page->m_Btn_return->setDown(false);
//    }
    m_active_page->HandleBack();
}


void MainWidget::TaskProcessing(QVariant DataVar)
{
    struct TaskProcessDS *v=DataVar.value<struct TaskProcessDS *>();
    m_active_page->TaskProcessing(v);
}

void MainWidget::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_A)
    {
        HandleBack();
    }
    else if(e->key()==Qt::Key_D)
    {
        HandleNext();
    }
    else
    {
        HandleTab();
    }
}

void MainWidget::keyReleaseEvent(QKeyEvent *e)
{

}



