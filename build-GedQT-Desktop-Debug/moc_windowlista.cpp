/****************************************************************************
** Meta object code from reading C++ file 'windowlista.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../GedQT/windowlista.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowlista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_windowlista_t {
    QByteArrayData data[9];
    char stringdata0[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windowlista_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windowlista_t qt_meta_stringdata_windowlista = {
    {
QT_MOC_LITERAL(0, 0, 11), // "windowlista"
QT_MOC_LITERAL(1, 12, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 22), // "on_InsertFront_clicked"
QT_MOC_LITERAL(4, 60, 22), // "on_insertAfter_clicked"
QT_MOC_LITERAL(5, 83, 18), // "on_insertN_clicked"
QT_MOC_LITERAL(6, 102, 18), // "on_removeN_clicked"
QT_MOC_LITERAL(7, 121, 22), // "on_removeAfter_clicked"
QT_MOC_LITERAL(8, 144, 22) // "on_removeFront_clicked"

    },
    "windowlista\0on_pushButton_2_clicked\0"
    "\0on_InsertFront_clicked\0on_insertAfter_clicked\0"
    "on_insertN_clicked\0on_removeN_clicked\0"
    "on_removeAfter_clicked\0on_removeFront_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowlista[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void windowlista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        windowlista *_t = static_cast<windowlista *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_2_clicked(); break;
        case 1: _t->on_InsertFront_clicked(); break;
        case 2: _t->on_insertAfter_clicked(); break;
        case 3: _t->on_insertN_clicked(); break;
        case 4: _t->on_removeN_clicked(); break;
        case 5: _t->on_removeAfter_clicked(); break;
        case 6: _t->on_removeFront_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject windowlista::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_windowlista.data,
      qt_meta_data_windowlista,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *windowlista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowlista::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_windowlista.stringdata0))
        return static_cast<void*>(const_cast< windowlista*>(this));
    return QDialog::qt_metacast(_clname);
}

int windowlista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
