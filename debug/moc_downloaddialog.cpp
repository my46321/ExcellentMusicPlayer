/****************************************************************************
** Meta object code from reading C++ file 'downloaddialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../downloaddialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'downloaddialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_downloadDialog_t {
    QByteArrayData data[15];
    char stringdata0[252];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_downloadDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_downloadDialog_t qt_meta_stringdata_downloadDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "downloadDialog"
QT_MOC_LITERAL(1, 15, 14), // "replyFinished1"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 14), // "QNetworkReply*"
QT_MOC_LITERAL(4, 46, 14), // "replyFinished2"
QT_MOC_LITERAL(5, 61, 14), // "replyFinished3"
QT_MOC_LITERAL(6, 76, 14), // "updataProgress"
QT_MOC_LITERAL(7, 91, 9), // "parseJson"
QT_MOC_LITERAL(8, 101, 25), // "on_downloadButton_clicked"
QT_MOC_LITERAL(9, 127, 26), // "on_downloadButton1_clicked"
QT_MOC_LITERAL(10, 154, 26), // "on_downloadButton2_clicked"
QT_MOC_LITERAL(11, 181, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(12, 203, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 227, 16), // "SlotSetNameValue"
QT_MOC_LITERAL(14, 244, 7) // "strText"

    },
    "downloadDialog\0replyFinished1\0\0"
    "QNetworkReply*\0replyFinished2\0"
    "replyFinished3\0updataProgress\0parseJson\0"
    "on_downloadButton_clicked\0"
    "on_downloadButton1_clicked\0"
    "on_downloadButton2_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "SlotSetNameValue\0strText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_downloadDialog[] = {

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
       1,    1,   69,    2, 0x08 /* Private */,
       4,    1,   72,    2, 0x08 /* Private */,
       5,    1,   75,    2, 0x08 /* Private */,
       6,    2,   78,    2, 0x08 /* Private */,
       7,    1,   83,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void downloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        downloadDialog *_t = static_cast<downloadDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replyFinished1((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 1: _t->replyFinished2((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 2: _t->replyFinished3((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 3: _t->updataProgress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->parseJson((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->on_downloadButton_clicked(); break;
        case 6: _t->on_downloadButton1_clicked(); break;
        case 7: _t->on_downloadButton2_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_2_clicked(); break;
        case 10: _t->SlotSetNameValue((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject downloadDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_downloadDialog.data,
      qt_meta_data_downloadDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *downloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *downloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_downloadDialog.stringdata0))
        return static_cast<void*>(const_cast< downloadDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int downloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
