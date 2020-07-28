#include "titlebar.h"

TitleBar::TitleBar(QWidget *parent)
    : QFrame (parent)
    , m_isPressed(false)
{
    //给成员变量申请内存
    m_pIconLabel = new QLabel(/*this*/);
    m_pTitleLabel = new QLabel(this);
    m_pMinimizeButton = new QPushButton(this);
    m_pMaximizeButton = new QPushButton(this);
    m_pCloseButton = new QPushButton(this);

    //初始化图标Label
    m_pIconLabel->setFixedSize(39, 34);
    m_pIconLabel->setScaledContents(true);
    QPixmap myPix_0_1(":/icon/images/icon/icon_1.png");
    m_pIconLabel->setPixmap(myPix_0_1);

//    m_pTitleLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    m_pTitleLabel->setText("英语学习");
    m_pTitleLabel->setProperty("title",1);

    //设置按钮的固定大小、图片、取消边框
    m_pMinimizeButton->setFlat(true);
    m_pMinimizeButton->setFixedSize(44,44);

    m_pMaximizeButton->setFlat(true);
    m_pMaximizeButton->setFixedSize(44,44);

//    m_pCloseButton->setIconSize(QSize(31,30));
//    m_pCloseButton->setIcon(QIcon(":/image/images/icon/close.png"));
    m_pCloseButton->setFlat(true);
    m_pCloseButton->setFixedSize(44,44);

    //给按钮设置静态tooltip，当鼠标移上去时显示tooltip
    m_pMinimizeButton->setToolTip("Minimize");
    m_pMaximizeButton->setToolTip("Maximize");
    m_pCloseButton->setToolTip("Close");

    //标题栏布局
    HBoxLayout *pLayout = new HBoxLayout(this);
//    pLayout->setAlignment(Qt::AlignCenter);
    pLayout->addSpacing(21);
    pLayout->addWidget(m_pIconLabel);
    pLayout->addSpacing(11);
    pLayout->addWidget(m_pTitleLabel);
    pLayout->addStretch();
    pLayout->addWidget(m_pMinimizeButton);
    pLayout->addSpacing(29);
    pLayout->addWidget(m_pMaximizeButton);
    pLayout->addSpacing(29);
    pLayout->addWidget(m_pCloseButton);
    pLayout->addSpacing(38);
    setLayout(pLayout);

    //连接三个按钮的信号槽
    connect(m_pMinimizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    connect(m_pMaximizeButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));
    connect(m_pCloseButton, SIGNAL(clicked(bool)), this, SLOT(onClicked()));

    this->setFixedHeight(64);
    SetWhiteTheme();
}

TitleBar::~TitleBar()
{

}

void TitleBar::SetWhiteTheme()
{
    this->setProperty("title",1);
    m_pTitleLabel->setProperty("title",1);

    m_pMinimizeButton->setProperty("btn_Min_white",true);
    m_pMaximizeButton->setProperty("btn_Max_white",true);
    m_pCloseButton->setProperty("btn_Close_white",true);
}

void TitleBar::SetBlackTheme()
{
    this->setProperty("title",2);
    m_pTitleLabel->setProperty("title",2);

//    m_pMinimizeButton->setProperty("btn_title_black",true);
//    m_pMaximizeButton->setProperty("btn_title_black",true);
//    m_pCloseButton->setProperty("btn_title_black",true);
}

void TitleBar::ThemeChanged(int type)
{
    if(0==type){
        SetWhiteTheme();
    }else{
        SetBlackTheme();
    }

    QFile file(":/qss/qss/main.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    file.close();
}

//双击标题栏进行界面的最大化/还原
void TitleBar::mouseDoubleClickEvent(QMouseEvent *event)
{
    Q_UNUSED(event); //没有实质性的作用，只是用来允许event可以不使用，用来避免编译器警告

    emit m_pMaximizeButton->clicked();
}

//进行界面的拖动  [一般情况下，是界面随着标题栏的移动而移动，所以我们将事件写在标题栏中比较合理]
void TitleBar::mousePressEvent(QMouseEvent *event)
{
    m_isPressed = true;
    m_startMovePos = event->globalPos();
    return QFrame::mousePressEvent(event);
}

void TitleBar::mouseMoveEvent(QMouseEvent *event)
{
    if (m_isPressed)
    {
        QPoint movePoint = event->globalPos() - m_startMovePos;

        if(parentWidget()->parentWidget())
        {
            QPoint widgetPos = this->parentWidget()->parentWidget()->pos();
            m_startMovePos = event->globalPos();
            parentWidget()->parentWidget()->move(widgetPos.x() + movePoint.x(), widgetPos.y() + movePoint.y());
        }
    }
}

void TitleBar::mouseReleaseEvent(QMouseEvent *event)
{
    m_isPressed = false;

    return QFrame::mouseReleaseEvent(event);
}

//使用事件过滤器监听标题栏所在的窗体，所以当窗体标题、图标等信息发生改变时，标题栏也应该随之改变
/*bool TitleBar::eventFilter(QObject *obj, QEvent *event)
{
    switch ( event->type() ) //判断发生事件的类型
    {
        case QEvent::WindowTitleChange: //窗口标题改变事件
        {
            QWidget *pWidget = qobject_cast<QWidget *>(obj); //获得发生事件的窗口对象
            if (pWidget)
            {
                //窗体标题改变，则标题栏标题也随之改变
                m_pTitleLabel->setText(pWidget->windowTitle());
                return true;
            }
        }
        break;

        case QEvent::WindowIconChange: //窗口图标改变事件
        {
            QWidget *pWidget = qobject_cast<QWidget *>(obj);
            if (pWidget)
            {
                //窗体图标改变，则标题栏图标也随之改变
                QIcon icon = pWidget->windowIcon();
//                m_pIconLabel->setPixmap(icon.pixmap(m_pIconLabel->size()));
                return true;
            }
        }
        break;

        case QEvent::Resize:
            updateMaximize(); //最大化/还原
            return true;

        default:
        return QWidget::eventFilter(obj, event);
    }

    return QWidget::eventFilter(obj, event);
}
*/

//进行最小化、最大化/还原、关闭操作
void TitleBar::onClicked()
{
    //QObject::Sender()返回发送信号的对象的指针，返回类型为QObject *
    QPushButton *pButton = qobject_cast<QPushButton *>(sender());

    QWidget *pWindow = this->window(); //获得标题栏所在的窗口

    if (pWindow->isTopLevel())
    {
        //判断发送信号的对象使哪个按钮
        if (pButton == m_pMinimizeButton)
        {
            pWindow->showMinimized(); //窗口最小化显示
        }
        else if (pButton == m_pMaximizeButton)
        {
//            pWindow->isMaximized() ? pWindow->showNormal() : pWindow->showMaximized();  //窗口最大化/还原显示
            pWindow->isFullScreen() ? pWindow->showNormal() : pWindow->showFullScreen();
        }
        else if (pButton == m_pCloseButton)
        {
            pWindow->close(); //窗口关闭
        }
    }
}

//最大化/还原
void TitleBar::updateMaximize()
{
    QWidget *pWindow = this->window(); //获得标题栏所在的窗口

    if (pWindow->isTopLevel())
    {
        bool bMaximize = pWindow->isFullScreen(); //判断窗口是不是最大化状态，是则返回true，否则返回false
        if (bMaximize)
        {
            //目前窗口是最大化状态，则最大化/还原的toolTip设置为"Restore"
            m_pMaximizeButton->setToolTip(tr("Restore"));
            //设置按钮的属性名为"maximizeProperty"
            m_pMaximizeButton->setProperty("maximizeProperty", "restore");
        }
        else
        {
            //目前窗口是还原状态，则最大化/还原的toolTip设置为"Maximize"
            m_pMaximizeButton->setToolTip(tr("Maximize"));
            //设置按钮的属性名为"maximizeProperty"
            m_pMaximizeButton->setProperty("maximizeProperty", "maximize");
        }

        m_pMaximizeButton->setStyle(QApplication::style());
    }
}
