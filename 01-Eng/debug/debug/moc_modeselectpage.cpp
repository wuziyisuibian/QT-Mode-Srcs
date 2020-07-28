/****************************************************************************
** Meta object code from reading C++ file 'modeselectpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UI/modeselectpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'modeselectpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModeSelectPage_t {
    QByteArrayData data[7];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModeSelectPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModeSelectPage_t qt_meta_stringdata_ModeSelectPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ModeSelectPage"
QT_MOC_LITERAL(1, 15, 10), // "HandleBack"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "HandleTab"
QT_MOC_LITERAL(4, 37, 10), // "HandleNext"
QT_MOC_LITERAL(5, 48, 13), // "SetWhiteTheme"
QT_MOC_LITERAL(6, 62, 13) // "SetBlackTheme"

    },
    "ModeSelectPage\0HandleBack\0\0HandleTab\0"
    "HandleNext\0SetWhiteTheme\0SetBlackTheme"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModeSelectPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ModeSelectPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ModeSelectPage *_t = static_cast<ModeSelectPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->HandleBack(); break;
        case 1: _t->HandleTab(); break;
        case 2: _t->HandleNext(); break;
        case 3: _t->SetWhiteTheme(); break;
        case 4: _t->SetBlackTheme(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ModeSelectPage::staticMetaObject = {
    { &BasePage::staticMetaObject, qt_meta_stringdata_ModeSelectPage.data,
      qt_meta_data_ModeSelectPage,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *ModeSelectPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModeSelectPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModeSelectPage.stringdata0))
        return static_cast<void*>(this);
    return BasePage::qt_metacast(_clname);
}

int ModeSelectPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BasePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
