#include "SingletonData.h"

SingletonData SingletonData::m_instance;

SingletonData *SingletonData::instance()
{
    return &m_instance;
}

SingletonData::SingletonData()
{
    m_current_state = new WorkState();
    m_pos_mag = new PostureManager();
    m_res_mag = new ResultManager();
}
