/****************************************************************************
** Meta object code from reading C++ file 'dialog_trapezoid.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BFP_END/BFP/dialog_trapezoid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_trapezoid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_trapezoid_t {
    const uint offsetsAndSize[20];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dialog_trapezoid_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dialog_trapezoid_t qt_meta_stringdata_Dialog_trapezoid = {
    {
QT_MOC_LITERAL(0, 16), // "Dialog_trapezoid"
QT_MOC_LITERAL(17, 24), // "slot_arbitrary_trapezoid"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 9), // "left_side"
QT_MOC_LITERAL(53, 10), // "right_side"
QT_MOC_LITERAL(64, 8), // "top_side"
QT_MOC_LITERAL(73, 11), // "bottom_side"
QT_MOC_LITERAL(85, 24), // "slot_isosceles_trapezoid"
QT_MOC_LITERAL(110, 5), // "hight"
QT_MOC_LITERAL(116, 26) // "slot_rectangular_trapezoid"

    },
    "Dialog_trapezoid\0slot_arbitrary_trapezoid\0"
    "\0left_side\0right_side\0top_side\0"
    "bottom_side\0slot_isosceles_trapezoid\0"
    "hight\0slot_rectangular_trapezoid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_trapezoid[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   32,    2, 0x0a,    1 /* Public */,
       7,    3,   41,    2, 0x0a,    6 /* Public */,
       9,    3,   48,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,    6,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    5,    6,    3,

       0        // eod
};

void Dialog_trapezoid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog_trapezoid *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_arbitrary_trapezoid((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[4]))); break;
        case 1: _t->slot_isosceles_trapezoid((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 2: _t->slot_rectangular_trapezoid((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog_trapezoid::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog_trapezoid.offsetsAndSize,
    qt_meta_data_Dialog_trapezoid,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_trapezoid_t
, QtPrivate::TypeAndForceComplete<Dialog_trapezoid, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dialog_trapezoid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_trapezoid::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_trapezoid.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog_trapezoid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
