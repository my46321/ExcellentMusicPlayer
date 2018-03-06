/****************************************************************************
** Meta object code from reading C++ file 'searchlrcdlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../searchlrcdlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchlrcdlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_searchlrcdlg_t {
    QByteArrayData data[13];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_searchlrcdlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_searchlrcdlg_t qt_meta_stringdata_searchlrcdlg = {
    {
QT_MOC_LITERAL(0, 0, 12), // "searchlrcdlg"
QT_MOC_LITERAL(1, 13, 10), // "getlrcshow"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 26), // "on_pushButton_exit_clicked"
QT_MOC_LITERAL(4, 52, 7), // "slotbtn"
QT_MOC_LITERAL(5, 60, 11), // "analyieslrc"
QT_MOC_LITERAL(6, 72, 14), // "QNetworkReply*"
QT_MOC_LITERAL(7, 87, 11), // "lrcsearslot"
QT_MOC_LITERAL(8, 99, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(9, 131, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 148, 4), // "item"
QT_MOC_LITERAL(11, 153, 11), // "returnpress"
QT_MOC_LITERAL(12, 165, 5) // "setBk"

    },
    "searchlrcdlg\0getlrcshow\0\0"
    "on_pushButton_exit_clicked\0slotbtn\0"
    "analyieslrc\0QNetworkReply*\0lrcsearslot\0"
    "on_listWidget_itemDoubleClicked\0"
    "QListWidgetItem*\0item\0returnpress\0"
    "setBk"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_searchlrcdlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   57,    2, 0x08 /* Private */,
       4,    0,   58,    2, 0x08 /* Private */,
       5,    1,   59,    2, 0x08 /* Private */,
       7,    1,   62,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
      11,    0,   68,    2, 0x08 /* Private */,
      12,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void searchlrcdlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        searchlrcdlg *_t = static_cast<searchlrcdlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->getlrcshow((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_exit_clicked(); break;
        case 2: _t->slotbtn(); break;
        case 3: _t->analyieslrc((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->lrcsearslot((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: _t->returnpress(); break;
        case 7: _t->setBk((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (searchlrcdlg::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&searchlrcdlg::getlrcshow)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject searchlrcdlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_searchlrcdlg.data,
      qt_meta_data_searchlrcdlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *searchlrcdlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *searchlrcdlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_searchlrcdlg.stringdata0))
        return static_cast<void*>(const_cast< searchlrcdlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int searchlrcdlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void searchlrcdlg::getlrcshow(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
