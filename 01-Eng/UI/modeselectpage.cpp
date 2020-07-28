#include "modeselectpage.h"

ModeSelectPage::ModeSelectPage(QWidget *parent)
    :BasePage (parent)
{
    InitUI();
    InitLogic();
}

void ModeSelectPage::HandleBack()
{

}

void ModeSelectPage::HandleTab()
{

}

void ModeSelectPage::HandleNext()
{

}

void ModeSelectPage::SetWhiteTheme()
{

}

void ModeSelectPage::SetBlackTheme()
{

}

void ModeSelectPage::InitUI()
{
    HBoxLayout *h_main=new HBoxLayout(this);
    HBoxLayout *h_left=new HBoxLayout();
    HBoxLayout *h_right=new HBoxLayout();
    VBoxLayout *v_btn=new VBoxLayout(this);

    QLabel *center_line=new QLabel(this);
    center_line->setFixedWidth(16);
    center_line->setStyleSheet("background-color: #23375D;");

    QLabel *title_txt=new QLabel("Eng",this);
    title_txt->setProperty("txt",1);

    QLabel *model_txt=new QLabel("等级选择",this);
    model_txt->setProperty("txt",2);

    ButtonBase *btn_1=new ButtonBase("高中",this);
    btn_1->setFixedSize(430,90);
    ButtonBase *btn_2=new ButtonBase("大学四级",this);
    btn_2->setFixedSize(430,90);
    ButtonBase *btn_3=new ButtonBase("大学六级",this);
    btn_3->setFixedSize(430,90);
    ButtonBase *btn_4=new ButtonBase("研究生",this);
    btn_4->setFixedSize(430,90);

    h_main->addLayout(h_left);
    h_main->addWidget(center_line);
    h_main->addLayout(h_right);

    h_left->addStretch();
    h_left->addWidget(title_txt);
    h_left->addStretch();

    h_right->addStretch();
    h_right->addLayout(v_btn);
    h_right->addStretch();

    v_btn->addSpacing(193);
    v_btn->addWidget(model_txt);
    v_btn->addSpacing(61);
    v_btn->addWidget(btn_1);
    v_btn->addSpacing(50);
    v_btn->addWidget(btn_2);
    v_btn->addSpacing(50);
    v_btn->addWidget(btn_3);
    v_btn->addSpacing(50);
    v_btn->addWidget(btn_4);
    v_btn->addStretch();

    setLayout(h_main);
    setProperty("page",1);
}

void ModeSelectPage::InitLogic()
{

}
