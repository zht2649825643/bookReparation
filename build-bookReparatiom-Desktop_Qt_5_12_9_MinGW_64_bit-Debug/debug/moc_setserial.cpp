/****************************************************************************
** Meta object code from reading C++ file 'setserial.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bookReparatiom_Qt/setserial.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setserial.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_setSerial_t {
    QByteArrayData data[10];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_setSerial_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_setSerial_t qt_meta_stringdata_setSerial = {
    {
QT_MOC_LITERAL(0, 0, 9), // "setSerial"
QT_MOC_LITERAL(1, 10, 5), // "Sleep"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 4), // "msec"
QT_MOC_LITERAL(4, 22, 24), // "serialPortReadyRead_Slot"
QT_MOC_LITERAL(5, 47, 17), // "on_openBt_clicked"
QT_MOC_LITERAL(6, 65, 19), // "on_close_Bt_clicked"
QT_MOC_LITERAL(7, 85, 17), // "on_end_Bt_clicked"
QT_MOC_LITERAL(8, 103, 19), // "on_begin_Bt_clicked"
QT_MOC_LITERAL(9, 123, 21) // "on_sendSym_Bt_clicked"

    },
    "setSerial\0Sleep\0\0msec\0serialPortReadyRead_Slot\0"
    "on_openBt_clicked\0on_close_Bt_clicked\0"
    "on_end_Bt_clicked\0on_begin_Bt_clicked\0"
    "on_sendSym_Bt_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_setSerial[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    0,   55,    2, 0x08 /* Private */,
       8,    0,   56,    2, 0x08 /* Private */,
       9,    0,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void setSerial::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<setSerial *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Sleep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->serialPortReadyRead_Slot(); break;
        case 2: _t->on_openBt_clicked(); break;
        case 3: _t->on_close_Bt_clicked(); break;
        case 4: _t->on_end_Bt_clicked(); break;
        case 5: _t->on_begin_Bt_clicked(); break;
        case 6: _t->on_sendSym_Bt_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject setSerial::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_setSerial.data,
    qt_meta_data_setSerial,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *setSerial::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *setSerial::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_setSerial.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int setSerial::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
