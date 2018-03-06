/****************************************************************************
** Meta object code from reading C++ file 'mynetwork.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mynetwork.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mynetwork.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MyNetWork_t {
    QByteArrayData data[17];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyNetWork_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyNetWork_t qt_meta_stringdata_MyNetWork = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MyNetWork"
QT_MOC_LITERAL(1, 10, 14), // "doworkfinished"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 17), // "dolrcworkfinished"
QT_MOC_LITERAL(4, 44, 6), // "setpic"
QT_MOC_LITERAL(5, 51, 12), // "downprogress"
QT_MOC_LITERAL(6, 64, 12), // "getfistalbum"
QT_MOC_LITERAL(7, 77, 14), // "QNetworkReply*"
QT_MOC_LITERAL(8, 92, 6), // "getpic"
QT_MOC_LITERAL(9, 99, 9), // "getpic302"
QT_MOC_LITERAL(10, 109, 14), // "getdownsong302"
QT_MOC_LITERAL(11, 124, 14), // "progressbarget"
QT_MOC_LITERAL(12, 139, 16), // "downsongfinished"
QT_MOC_LITERAL(13, 156, 12), // "workfinished"
QT_MOC_LITERAL(14, 169, 11), // "analyieslrc"
QT_MOC_LITERAL(15, 181, 19), // "analyieslrcfinished"
QT_MOC_LITERAL(16, 201, 9) // "timerslot"

    },
    "MyNetWork\0doworkfinished\0\0dolrcworkfinished\0"
    "setpic\0downprogress\0getfistalbum\0"
    "QNetworkReply*\0getpic\0getpic302\0"
    "getdownsong302\0progressbarget\0"
    "downsongfinished\0workfinished\0analyieslrc\0"
    "analyieslrcfinished\0timerslot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyNetWork[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    1,   90,    2, 0x06 /* Public */,
       5,    2,   93,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   98,    2, 0x0a /* Public */,
       8,    1,  101,    2, 0x0a /* Public */,
       9,    1,  104,    2, 0x0a /* Public */,
      10,    1,  107,    2, 0x0a /* Public */,
      11,    2,  110,    2, 0x0a /* Public */,
      12,    1,  115,    2, 0x0a /* Public */,
      13,    1,  118,    2, 0x0a /* Public */,
      14,    1,  121,    2, 0x0a /* Public */,
      15,    1,  124,    2, 0x0a /* Public */,
      16,    0,  127,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void,

       0        // eod
};

void MyNetWork::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyNetWork *_t = static_cast<MyNetWork *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doworkfinished((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->dolrcworkfinished((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->setpic((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->downprogress((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 4: _t->getfistalbum((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 5: _t->getpic((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 6: _t->getpic302((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 7: _t->getdownsong302((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 8: _t->progressbarget((*reinterpret_cast< qint64(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 9: _t->downsongfinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 10: _t->workfinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 11: _t->analyieslrc((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 12: _t->analyieslrcfinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 13: _t->timerslot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        case 12:
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
            typedef void (MyNetWork::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyNetWork::doworkfinished)) {
                *result = 0;
            }
        }
        {
            typedef void (MyNetWork::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyNetWork::dolrcworkfinished)) {
                *result = 1;
            }
        }
        {
            typedef void (MyNetWork::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyNetWork::setpic)) {
                *result = 2;
            }
        }
        {
            typedef void (MyNetWork::*_t)(qint64 , qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MyNetWork::downprogress)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MyNetWork::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_MyNetWork.data,
      qt_meta_data_MyNetWork,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MyNetWork::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyNetWork::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MyNetWork.stringdata0))
        return static_cast<void*>(const_cast< MyNetWork*>(this));
    return QObject::qt_metacast(_clname);
}

int MyNetWork::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void MyNetWork::doworkfinished(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyNetWork::dolrcworkfinished(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyNetWork::setpic(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyNetWork::downprogress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
