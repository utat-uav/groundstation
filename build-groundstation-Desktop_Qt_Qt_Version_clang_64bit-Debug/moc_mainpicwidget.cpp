/****************************************************************************
** Meta object code from reading C++ file 'mainpicwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../groundstation/mainpic/mainpicwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainpicwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainPicWidget_t {
    QByteArrayData data[10];
    char stringdata[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainPicWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainPicWidget_t qt_meta_stringdata_MainPicWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "MainPicWidget"
QT_MOC_LITERAL(1, 14, 10), // "toggleMode"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "deleteTarget"
QT_MOC_LITERAL(4, 39, 16), // "onPictureClicked"
QT_MOC_LITERAL(5, 56, 1), // "x"
QT_MOC_LITERAL(6, 58, 1), // "y"
QT_MOC_LITERAL(7, 60, 20), // "onTargetTableChanged"
QT_MOC_LITERAL(8, 81, 3), // "row"
QT_MOC_LITERAL(9, 85, 6) // "column"

    },
    "MainPicWidget\0toggleMode\0\0deleteTarget\0"
    "onPictureClicked\0x\0y\0onTargetTableChanged\0"
    "row\0column"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainPicWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    2,   36,    2, 0x0a /* Public */,
       7,    2,   41,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,

       0        // eod
};

void MainPicWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainPicWidget *_t = static_cast<MainPicWidget *>(_o);
        switch (_id) {
        case 0: _t->toggleMode(); break;
        case 1: _t->deleteTarget(); break;
        case 2: _t->onPictureClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->onTargetTableChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MainPicWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainPicWidget.data,
      qt_meta_data_MainPicWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainPicWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainPicWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainPicWidget.stringdata))
        return static_cast<void*>(const_cast< MainPicWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int MainPicWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
