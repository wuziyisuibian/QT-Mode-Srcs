#ifndef PROCESSINGUNIT_H
#define PROCESSINGUNIT_H

#include "../IncludeHeader.h"
#include <QMetaType>
#include <QVariant>
#include "../SingletonData.h"

struct TaskProcessDS{
    int m_progress_value;
    int m_disc_percent[6];    /*圆盘６个区域的百分比*/
    int m_cup_position[4];    /*实时显示髋臼的外展角　前倾角*/
};

Q_DECLARE_METATYPE(struct TaskProcessDS*);

class ProcessingUint : public QObject
{
    Q_OBJECT
public:
    ProcessingUint(QWidget*parent=nullptr);
    ~ProcessingUint();

public slots:
    void NewTask();

signals:
    void TaskStop();
    void TaskProcessing(QVariant);
    void SetPage();
    void ThemeChanged(int);
    void LoadRecord();

public:
    int flag=0;
    int m_stop_flag=0;
    int *m_cup_position;
    bool m_is_deduplication;    //是否数据去重 true-去 false-不去重
};

#endif // PROCESSINGUNIT_H
