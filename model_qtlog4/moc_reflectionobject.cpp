/****************************************************************************
** Meta object code from reading C++ file 'reflectionobject.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "reflectionobject.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reflectionobject.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReflectionObject_t {
    QByteArrayData data[19];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReflectionObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReflectionObject_t qt_meta_stringdata_ReflectionObject = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ReflectionObject"
QT_MOC_LITERAL(1, 17, 2), // "Id"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "Name"
QT_MOC_LITERAL(4, 26, 7), // "Address"
QT_MOC_LITERAL(5, 34, 8), // "Priority"
QT_MOC_LITERAL(6, 43, 12), // "PriorityType"
QT_MOC_LITERAL(7, 56, 5), // "setId"
QT_MOC_LITERAL(8, 62, 2), // "id"
QT_MOC_LITERAL(9, 65, 7), // "setName"
QT_MOC_LITERAL(10, 73, 4), // "name"
QT_MOC_LITERAL(11, 78, 10), // "setAddress"
QT_MOC_LITERAL(12, 89, 7), // "address"
QT_MOC_LITERAL(13, 97, 11), // "setPriority"
QT_MOC_LITERAL(14, 109, 8), // "priority"
QT_MOC_LITERAL(15, 118, 4), // "High"
QT_MOC_LITERAL(16, 123, 3), // "Low"
QT_MOC_LITERAL(17, 127, 8), // "VeryHigh"
QT_MOC_LITERAL(18, 136, 7) // "VeryLow"

    },
    "ReflectionObject\0Id\0\0Name\0Address\0"
    "Priority\0PriorityType\0setId\0id\0setName\0"
    "name\0setAddress\0address\0setPriority\0"
    "priority\0High\0Low\0VeryHigh\0VeryLow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReflectionObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   70, // properties
       1,   82, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x02 /* Public */,
       3,    0,   55,    2, 0x02 /* Public */,
       4,    0,   56,    2, 0x02 /* Public */,
       5,    0,   57,    2, 0x02 /* Public */,
       7,    1,   58,    2, 0x02 /* Public */,
       9,    1,   61,    2, 0x02 /* Public */,
      11,    1,   64,    2, 0x02 /* Public */,
      13,    1,   67,    2, 0x02 /* Public */,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::QString,
    0x80000000 | 6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 6,   14,

 // properties: name, type, flags
       1, QMetaType::Int, 0x00095103,
       3, QMetaType::QString, 0x00095103,
       4, QMetaType::QString, 0x00095103,
       5, 0x80000000 | 6, 0x0009510b,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    4,   87,

 // enum data: key, value
      15, uint(ReflectionObject::High),
      16, uint(ReflectionObject::Low),
      17, uint(ReflectionObject::VeryHigh),
      18, uint(ReflectionObject::VeryLow),

       0        // eod
};

void ReflectionObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReflectionObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->Id();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->Name();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { QString _r = _t->Address();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 3: { PriorityType _r = _t->Priority();
            if (_a[0]) *reinterpret_cast< PriorityType*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->setId((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 5: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->setAddress((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->setPriority((*reinterpret_cast< PriorityType(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ReflectionObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->Id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->Name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->Address(); break;
        case 3: *reinterpret_cast< PriorityType*>(_v) = _t->Priority(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ReflectionObject *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPriority(*reinterpret_cast< PriorityType*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ReflectionObject::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ReflectionObject.data,
    qt_meta_data_ReflectionObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ReflectionObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReflectionObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ReflectionObject.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ReflectionObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
