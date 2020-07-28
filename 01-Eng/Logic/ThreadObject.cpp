#include "threadobject.h"

ThreadObject::ThreadObject(QObject*parent, QObject*obj)
    :QObject (parent)
    ,m_instance(obj)
    ,m_work_thread(new QThread(parent))
{
    m_instance->moveToThread(m_work_thread);
    m_work_thread->start();
}

ThreadObject::~ThreadObject()
{

}

void ThreadObject::finalize()
{
    m_work_thread->terminate();
    delete m_instance;
}
