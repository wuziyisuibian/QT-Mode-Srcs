/****************************************************************************
** Meta object code from reading C++ file 'BasePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/BasePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BasePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BasePage_t {
    QByteArrayData data[7];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BasePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BasePage_t qt_meta_stringdata_BasePage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "BasePage"
QT_MOC_LITERAL(1, 9, 7), // "NewTask"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 10), // "ChangePage"
QT_MOC_LITERAL(4, 29, 9), // "BasePage*"
QT_MOC_LITERAL(5, 39, 14), // "StopProcessing"
QT_MOC_LITERAL(6, 54, 12) // "ThemeChanged"

    },
    "BasePage\0NewTask\0\0ChangePage\0BasePage*\0"
    "StopProcessing\0ThemeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BasePage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,
       5,    0,   38,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void BasePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BasePage *_t = static_cast<BasePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NewTask(); break;
        case 1: _t->ChangePage((*reinterpret_cast< BasePage*(*)>(_a[1]))); break;
        case 2: _t->StopProcessing(); break;
        case 3: _t->ThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< BasePage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BasePage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasePage::NewTask)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BasePage::*_t)(BasePage * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasePage::ChangePage)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BasePage::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BasePage::StopProcessing)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BasePage::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_BasePage.data,
      qt_meta_data_BasePage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *BasePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BasePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BasePage.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int BasePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BasePage::NewTask()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BasePage::ChangePage(BasePage * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BasePage::StopProcessing()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
