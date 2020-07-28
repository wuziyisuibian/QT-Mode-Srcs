#include "SoundManager.h"

#include <QUrl>

SoundManager* SoundManager::m_instance = NULL;

SoundManager::SoundManager(QObject *parent) : QObject(parent)
{
    m_sounder = new QSound("",this);
//    m_player = new QMediaPlayer(this);
}

SoundManager::~SoundManager()
{

}

SoundManager* SoundManager::instance()
{
    if(m_instance==NULL)
        m_instance = new SoundManager();
    return m_instance;
}

void SoundManager::initResources()
{
//do nothing
}

#include <QDebug>
void SoundManager::play(SoundType type)
{
    QString path = getSoundName(type);
//    m_player->setMedia(QUrl::fromLocalFile(path));
//    m_player->play();
//    m_sounder->setLoops(2);
//    m_sounder->play(path);

    QSound::play(path);
}

QString SoundManager::getSoundName(SoundType type)
{
    QString path = "./sounds/default.wav";

    switch(type)
    {
    case F_INIT_EYE:
        path = "./sounds/F_init_eye.wav";
        break;
    case F_INIT_ROBOT:
        path = "./sounds/F_init_robot.wav";
        break;
    case F_VIEW_BLOCKED:
        path = "./sounds/F_view_block.wav";
        break;
    case F_PROBE_NOT_VISIBLE:
        path = "./sounds/F_probe_out.wav";
        break;
    case F_REF_NOT_VISIBLE:
        path = "./sounds/F_ref_out.wav";
        break;
    case F_NO_TARGET:
        path = "./sounds/F_no_target.wav";
        break;
    case I_INIT:
        path = "./sounds/I_init.wav";
        break;
    case I_READY:
        path = "./sounds/I_ready.wav";
        break;
    case I_CONFIRM_POS:
        path = "./sounds/I_pos_confirm.wav";
        break;
    case I_NEAR:
        path = "./sounds/I_near.wav";
        break;
    case I_ADJUST_DIRECTION:
        path = "./sounds/I_adjust_dir.wav";
        break;
    case I_LOCKED:
        path = "./sounds/I_locked.wav";
        break;
    case I_LOCKED_MOVE:
        path = "./sounds/I_locked_move.wav";
        break;
    case I_START_MOVE:
        path = "./sounds/I_start_slite_move.wav";
        break;
    case I_MOVE_DONE:
        path = "./sounds/I_move_done.wav";
        break;
    case I_DRAG_NEARBY:
        path = "./sounds/I_drag_near.wav";
        break;
    case I_OUT_WP:
        path = "./sounds/I_freedrive.wav";
        break;
    case I_CONFIRM_FORCE:
        path = "./sounds/I_confirm_force.wav";
        break;
    case I_START_HG:
        path = "./sounds/I_start_hg.wav";
        break;
    case I_START_DRILL:
        path = "./sounds/I_start_drill.wav";
        break;
    case I_START_TRACKER:
        path = "./sounds/I_start_tracker.wav";
        break;
    case I_CONTINUE:
        path = "./sounds/I_continue.wav";
        break;
    case I_COLLISION:
        path = "./sounds/I_collision.wav";
        break;
    case I_DO_PLAN:
        path = "./sounds/I_do_plan.wav";
        break;
    case I_DEPTH_REACH:
        path="./sounds/I_depth_reach.wav";
        break;
    default:
        break;
    }
    return path;
}
