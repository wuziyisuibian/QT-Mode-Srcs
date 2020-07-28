#ifndef THREADOBJECT_H
#define THREADOBJECT_H

#include "../IncludeHeader.h"

class ThreadObject : public QObject
{
    Q_OBJECT

public:
    ThreadObject(QObject *parent, QObject* obj = nullptr);
    ~ThreadObject();
    QObject* inst(){ return m_instance; }
    void finalize();
private:
    QObject* m_instance;
    QThread* m_work_thread;
};

#endif // THREADOBJECT_H
