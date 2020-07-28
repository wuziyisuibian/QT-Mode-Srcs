#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <QObject>
#include <QtMultimedia/QSound>
#include <QtMultimedia/QMediaPlayer>

enum SoundType
{
    F_INIT_EYE=0,       //探头初始化失败
    F_INIT_ROBOT,       //机械臂初始化失败
    F_VIEW_BLOCKED,     //视野被阻挡
    F_PROBE_NOT_VISIBLE,//探针不可见
    F_REF_NOT_VISIBLE,  //参考架不可见
    F_NO_TARGET,        //目标位资未选定

    I_INIT,             //连接中
    I_READY,            //就绪

    I_CONFIRM_POS,      //已选定位点方向

    I_NEAR,             //接近目标位置
    I_ADJUST_DIRECTION, //调整方向

    I_LOCKED,           //已锁定
    I_LOCKED_MOVE,      //已锁定，请自动对位
    I_START_MOVE,       //自动对位
    I_MOVE_DONE,        //对位完毕
    I_DRAG_NEARBY,      //请手动拖动至附近位置

    I_CONFIRM_FORCE,
    I_OUT_WP,           //工作区外，自有驱动至工作区内
    I_START_HG,         //hand guide模式
    I_START_DRILL,      //钻孔模式
    I_START_TRACKER,    //跟踪模式
    I_CONTINUE,          //恢复工作
    I_COLLISION,
    I_DO_PLAN,
    I_DEPTH_REACH

};

class SoundManager : public QObject
{
    Q_OBJECT
public:
    static SoundManager* instance();
    ~SoundManager();
    void initResources();
    void play(SoundType);
private:
    SoundManager(QObject *parent = 0);
    QString getSoundName(SoundType);
private:
    static SoundManager* m_instance;
    QSound* m_sounder;
//    QMediaPlayer* m_player;
};

#endif // SOUNDMANAGER_H
