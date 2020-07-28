#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "UI/BasePage.h"
#include "Logic/ProcessingUint.h"
#include "Logic/SoundManager.h"
#include "Logic/threadobject.h"
#include "component/titlebar.h"
#include "mainwidget.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void InitSystem();
    void InitUI();
    void InitLogic();

private:
    Ui::MainWindow *ui;

    QVector<ThreadObject*> m_module_list;
    ProcessingUint*        m_engine;

    MainWidget*  m_main_widget;
    TitleBar*    m_title_bar;
};

#endif // MAINWINDOW_H
