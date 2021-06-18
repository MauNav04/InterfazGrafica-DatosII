/****************************************************************************
** Meta object code from reading C++ file 'BoardManger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Headers/BoardManger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BoardManger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoardManger_t {
    QByteArrayData data[16];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoardManger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoardManger_t qt_meta_stringdata_BoardManger = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BoardManger"
QT_MOC_LITERAL(1, 12, 12), // "btnClicked_N"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "btnClicked_E"
QT_MOC_LITERAL(4, 39, 12), // "btnClicked_S"
QT_MOC_LITERAL(5, 52, 12), // "btnClicked_W"
QT_MOC_LITERAL(6, 65, 13), // "btnClicked_NW"
QT_MOC_LITERAL(7, 79, 13), // "btnClicked_NE"
QT_MOC_LITERAL(8, 93, 13), // "btnClicked_SE"
QT_MOC_LITERAL(9, 107, 13), // "btnClicked_SW"
QT_MOC_LITERAL(10, 121, 15), // "btnClicked_Weak"
QT_MOC_LITERAL(11, 137, 17), // "btnClicked_Normal"
QT_MOC_LITERAL(12, 155, 17), // "btnClicked_Strong"
QT_MOC_LITERAL(13, 173, 16), // "btnClicked_Shoot"
QT_MOC_LITERAL(14, 190, 16), // "btnClicked_PathF"
QT_MOC_LITERAL(15, 207, 21) // "btnClicked_CenterBall"

    },
    "BoardManger\0btnClicked_N\0\0btnClicked_E\0"
    "btnClicked_S\0btnClicked_W\0btnClicked_NW\0"
    "btnClicked_NE\0btnClicked_SE\0btnClicked_SW\0"
    "btnClicked_Weak\0btnClicked_Normal\0"
    "btnClicked_Strong\0btnClicked_Shoot\0"
    "btnClicked_PathF\0btnClicked_CenterBall"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoardManger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    0,   94,    2, 0x0a /* Public */,
      13,    0,   95,    2, 0x0a /* Public */,
      14,    0,   96,    2, 0x0a /* Public */,
      15,    0,   97,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BoardManger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoardManger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->btnClicked_N(); break;
        case 1: _t->btnClicked_E(); break;
        case 2: _t->btnClicked_S(); break;
        case 3: _t->btnClicked_W(); break;
        case 4: _t->btnClicked_NW(); break;
        case 5: _t->btnClicked_NE(); break;
        case 6: _t->btnClicked_SE(); break;
        case 7: _t->btnClicked_SW(); break;
        case 8: _t->btnClicked_Weak(); break;
        case 9: _t->btnClicked_Normal(); break;
        case 10: _t->btnClicked_Strong(); break;
        case 11: _t->btnClicked_Shoot(); break;
        case 12: _t->btnClicked_PathF(); break;
        case 13: _t->btnClicked_CenterBall(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BoardManger::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_BoardManger.data,
    qt_meta_data_BoardManger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoardManger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoardManger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoardManger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BoardManger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
