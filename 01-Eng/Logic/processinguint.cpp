#include "ProcessingUint.h"

ProcessingUint::ProcessingUint(QWidget*parent)
    : QObject (parent)
{
    qRegisterMetaType<QVariant>("QVariant");
}

ProcessingUint::~ProcessingUint()
{

}

void ProcessingUint::NewTask()
{
    if(SingletonData::instance()->m_current_state->m_task_name.compare("")==0){
        return;
    }
    m_stop_flag=1;

    SingletonData::instance()->m_current_state->m_task_name="";
}
