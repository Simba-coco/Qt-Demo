/****************************************************************************
** Meta object code from reading C++ file 'MainViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../MainViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainViewer_t {
    QByteArrayData data[13];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainViewer_t qt_meta_stringdata_MainViewer = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainViewer"
QT_MOC_LITERAL(1, 11, 8), // "OpenFile"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "SaveFile"
QT_MOC_LITERAL(4, 30, 9), // "CloseFile"
QT_MOC_LITERAL(5, 40, 7), // "NewFile"
QT_MOC_LITERAL(6, 48, 6), // "ZoomIn"
QT_MOC_LITERAL(7, 55, 7), // "ZoomOut"
QT_MOC_LITERAL(8, 63, 9), // "ZoomReset"
QT_MOC_LITERAL(9, 73, 12), // "PreviousPage"
QT_MOC_LITERAL(10, 86, 8), // "NextPage"
QT_MOC_LITERAL(11, 95, 13), // "UpdataPageNum"
QT_MOC_LITERAL(12, 109, 8) // "GotoPage"

    },
    "MainViewer\0OpenFile\0\0SaveFile\0CloseFile\0"
    "NewFile\0ZoomIn\0ZoomOut\0ZoomReset\0"
    "PreviousPage\0NextPage\0UpdataPageNum\0"
    "GotoPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    0,   79,    2, 0x0a /* Public */,

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

       0        // eod
};

void MainViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainViewer *_t = static_cast<MainViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OpenFile(); break;
        case 1: _t->SaveFile(); break;
        case 2: _t->CloseFile(); break;
        case 3: _t->NewFile(); break;
        case 4: _t->ZoomIn(); break;
        case 5: _t->ZoomOut(); break;
        case 6: _t->ZoomReset(); break;
        case 7: _t->PreviousPage(); break;
        case 8: _t->NextPage(); break;
        case 9: _t->UpdataPageNum(); break;
        case 10: _t->GotoPage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MainViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainViewer.data,
      qt_meta_data_MainViewer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainViewer.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IMainViewer"))
        return static_cast< IMainViewer*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
