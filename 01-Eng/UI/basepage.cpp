#include "BasePage.h"

BasePage::BasePage(QWidget* parent)
    :QFrame(parent)
    , m_pre_page(nullptr)
    , m_next_page(nullptr)
//    , m_Btn_continue(nullptr)
//    , m_Btn_return(nullptr)
//    ,m_title_line(nullptr)
    , m_cur_theme(1)
{

}

BasePage::~BasePage()
{

}

void BasePage::SetNeighbours(BasePage *pre, BasePage *next)
{
    m_pre_page = pre;
    m_next_page = next;
}


void BasePage::HandleBack()
{

}

void BasePage::HandleTab()
{

}

void BasePage::HandleNext()
{

}

void BasePage::TaskProcessing(struct TaskProcessDS *)
{

}

void BasePage::SetWhiteTheme()
{

}

void BasePage::SetBlackTheme()
{

}

void BasePage::ThemeChanged(int type)
{
    if(0==type){
        SetWhiteTheme();
    }
    else{
        SetBlackTheme();
    }
    QFile file(":/qss/qss/main.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    file.close();
}


