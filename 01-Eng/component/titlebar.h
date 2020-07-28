#ifndef TITLEBAR_H
#define TITLEBAR_H

#include "../IncludeHeader.h"
#include "component/boxlayout.h"

class TitleBar : public QFrame
{
    Q_OBJECT

public:
    TitleBar(QWidget *parent = nullptr);
    ~TitleBar();

    void SetWhiteTheme();
    void SetBlackTheme();

public slots:
    void ThemeChanged(int type);

protected:
    //双击标题栏进行界面的最大化/还原
    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    //进行界面的拖动
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    //设置界面标题与图标
//    virtual bool eventFilter(QObject *obj, QEvent *event);

private slots:
    //进行最小化、最大化/还原、关闭操作
    void onClicked();

private:
    //最大化/还原
    void updateMaximize();

private:
    QLabel *m_pIconLabel; //标题栏图标
    QLabel *m_pTitleLabel; //标题栏标题
    QPushButton *m_pMinimizeButton; //最小化按钮
    QPushButton *m_pMaximizeButton; //最大化/还原按钮
    QPushButton *m_pCloseButton; //关闭按钮

    bool m_isPressed;
    QPoint m_startMovePos;
};

#endif // TITLEBAR_H
