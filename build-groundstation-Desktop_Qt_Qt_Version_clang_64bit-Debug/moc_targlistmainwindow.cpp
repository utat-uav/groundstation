/****************************************************************************
** Meta object code from reading C++ file 'targlistmainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../groundstation/targetlist/targlistmainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'targlistmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_TargListMainWindow_t {
    QByteArrayData data[9];
    char stringdata[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TargListMainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TargListMainWindow_t qt_meta_stringdata_TargListMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TargListMainWindow"
QT_MOC_LITERAL(1, 19, 18), // "on_newItem_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 23), // "on_deleteButton_clicked"
QT_MOC_LITERAL(4, 63, 15), // "on_edit_clicked"
QT_MOC_LITERAL(5, 79, 19), // "on_upButton_clicked"
QT_MOC_LITERAL(6, 99, 21), // "on_downButton_clicked"
QT_MOC_LITERAL(7, 121, 4), // "sort"
QT_MOC_LITERAL(8, 126, 3) // "col"

    },
    "TargListMainWindow\0on_newItem_clicked\0"
    "\0on_deleteButton_clicked\0on_edit_clicked\0"
    "on_upButton_clicked\0on_downButton_clicked\0"
    "sort\0col"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TargListMainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    1,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void TargListMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TargListMainWindow *_t = static_cast<TargListMainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_newItem_clicked(); break;
        case 1: _t->on_deleteButton_clicked(); break;
        case 2: _t->on_edit_clicked(); break;
        case 3: _t->on_upButton_clicked(); break;
        case 4: _t->on_downButton_clicked(); break;
        case 5: _t->sort((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject TargListMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TargListMainWindow.data,
      qt_meta_data_TargListMainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *TargListMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TargListMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_TargListMainWindow.stringdata))
        return static_cast<void*>(const_cast< TargListMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int TargListMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
