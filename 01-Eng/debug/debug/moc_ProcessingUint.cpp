/****************************************************************************
** Meta object code from reading C++ file 'ProcessingUint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Logic/ProcessingUint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProcessingUint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessingUint_t {
    QByteArrayData data[8];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessingUint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessingUint_t qt_meta_stringdata_ProcessingUint = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProcessingUint"
QT_MOC_LITERAL(1, 15, 8), // "TaskStop"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "TaskProcessing"
QT_MOC_LITERAL(4, 40, 7), // "SetPage"
QT_MOC_LITERAL(5, 48, 12), // "ThemeChanged"
QT_MOC_LITERAL(6, 61, 10), // "LoadRecord"
QT_MOC_LITERAL(7, 72, 7) // "NewTask"

    },
    "ProcessingUint\0TaskStop\0\0TaskProcessing\0"
    "SetPage\0ThemeChanged\0LoadRecord\0NewTask"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessingUint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       4,    0,   48,    2, 0x06 /* Public */,
       5,    1,   49,    2, 0x06 /* Public */,
       6,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ProcessingUint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessingUint *_t = static_cast<ProcessingUint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TaskStop(); break;
        case 1: _t->TaskProcessing((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->SetPage(); break;
        case 3: _t->ThemeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->LoadRecord(); break;
        case 5: _t->NewTask(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (ProcessingUint::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingUint::TaskStop)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProcessingUint::*_t)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingUint::TaskProcessing)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProcessingUint::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingUint::SetPage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ProcessingUint::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingUint::ThemeChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ProcessingUint::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProcessingUint::LoadRecord)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject ProcessingUint::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ProcessingUint.data,
      qt_meta_data_ProcessingUint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ProcessingUint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessingUint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessingUint.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ProcessingUint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ProcessingUint::TaskStop()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ProcessingUint::TaskProcessing(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessingUint::SetPage()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProcessingUint::ThemeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ProcessingUint::LoadRecord()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
