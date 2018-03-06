/****************************************************************************
** Meta object code from reading C++ file 'qtweather.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qtweather.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qtweather.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtWeather_t {
    QByteArrayData data[15];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QtWeather_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QtWeather_t qt_meta_stringdata_QtWeather = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QtWeather"
QT_MOC_LITERAL(1, 10, 10), // "dataChange"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "theTextChangSignal"
QT_MOC_LITERAL(4, 41, 4), // "city"
QT_MOC_LITERAL(5, 46, 11), // "eventFilter"
QT_MOC_LITERAL(6, 58, 7), // "QEvent*"
QT_MOC_LITERAL(7, 66, 13), // "replyFinished"
QT_MOC_LITERAL(8, 80, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 95, 5), // "reply"
QT_MOC_LITERAL(10, 101, 20), // "on_searchBtn_clicked"
QT_MOC_LITERAL(11, 122, 8), // "timeSlot"
QT_MOC_LITERAL(12, 131, 12), // "readDataSlot"
QT_MOC_LITERAL(13, 144, 15), // "writeConfigSlot"
QT_MOC_LITERAL(14, 160, 8) // "cityName"

    },
    "QtWeather\0dataChange\0\0theTextChangSignal\0"
    "city\0eventFilter\0QEvent*\0replyFinished\0"
    "QNetworkReply*\0reply\0on_searchBtn_clicked\0"
    "timeSlot\0readDataSlot\0writeConfigSlot\0"
    "cityName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtWeather[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   58,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x08 /* Private */,
      10,    0,   66,    2, 0x08 /* Private */,
      11,    0,   67,    2, 0x08 /* Private */,
      12,    0,   68,    2, 0x08 /* Private */,
      13,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Bool, QMetaType::QObjectStar, 0x80000000 | 6,    2,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void QtWeather::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QtWeather *_t = static_cast<QtWeather *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->dataChange(); break;
        case 1: _t->theTextChangSignal((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: { bool _r = _t->eventFilter((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QEvent*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: _t->replyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        case 4: _t->on_searchBtn_clicked(); break;
        case 5: _t->timeSlot(); break;
        case 6: _t->readDataSlot(); break;
        case 7: _t->writeConfigSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
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
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QtWeather::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtWeather::dataChange)) {
                *result = 0;
            }
        }
        {
            typedef void (QtWeather::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QtWeather::theTextChangSignal)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject QtWeather::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtWeather.data,
      qt_meta_data_QtWeather,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QtWeather::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtWeather::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QtWeather.stringdata0))
        return static_cast<void*>(const_cast< QtWeather*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtWeather::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void QtWeather::dataChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QtWeather::theTextChangSignal(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
