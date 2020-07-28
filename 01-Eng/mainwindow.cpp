#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    :QMainWindow(parent)
    ,ui(new Ui::MainWindow)
    ,m_engine(nullptr)
{
    ui->setupUi(this);

    InitUI();
    InitLogic();
    InitSystem();

    QFile file(":/qss/qss/main.qss");
    file.open(QFile::ReadOnly);
    QTextStream filetext(&file);
    QString stylesheet = filetext.readAll();
    this->setStyleSheet(stylesheet);
    file.close();

    this->setWindowFlags(Qt::FramelessWindowHint);
    setFocusPolicy(Qt::StrongFocus);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::InitSystem()
{

}

void MainWindow::InitUI()
{
    QWidget *main_widget=new QWidget();
    VBoxLayout *h_layout=new VBoxLayout();

    m_main_widget = new MainWidget();

    m_title_bar=new TitleBar(main_widget);
    installEventFilter(m_title_bar);

    h_layout->addWidget(m_title_bar);
    h_layout->addWidget(m_main_widget);
    main_widget->setLayout(h_layout);

    this->setCentralWidget(main_widget);

    this->setMinimumSize(1760,1050 );
}

void MainWindow::InitLogic()
{

}
