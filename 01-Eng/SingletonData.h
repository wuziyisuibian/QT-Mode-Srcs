#ifndef SINGLETONDATA_H
#define SINGLETONDATA_H

#include "IncludeHeader.h"

const uint kMarkerCharLen=1280*720;

struct WorkState{
    QString m_task_name="";
};

struct PostureManager{
};

struct ResultManager{
};

class SingletonData
{
public:
    static SingletonData* instance();
private:
    SingletonData();

private:
    static SingletonData m_instance;

public:
    WorkState       *m_current_state;
    PostureManager  *m_pos_mag;
    ResultManager   *m_res_mag;
};

#endif // SINGLETONDATA_H
