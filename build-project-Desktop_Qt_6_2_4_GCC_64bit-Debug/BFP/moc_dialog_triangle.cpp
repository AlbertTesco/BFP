/****************************************************************************
** Meta object code from reading C++ file 'dialog_triangle.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../BFP_END/BFP/dialog_triangle.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog_triangle.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dialog_triangle_t {
    const uint offsetsAndSize[28];
    char stringdata0[216];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Dialog_triangle_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Dialog_triangle_t qt_meta_stringdata_Dialog_triangle = {
    {
QT_MOC_LITERAL(0, 15), // "Dialog_triangle"
QT_MOC_LITERAL(16, 24), // "slot_angel_side_triangle"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 11), // "bottom_side"
QT_MOC_LITERAL(54, 17), // "angel_bottom_left"
QT_MOC_LITERAL(72, 18), // "angel_bottom_right"
QT_MOC_LITERAL(91, 23), // "slot_isosceles_triangle"
QT_MOC_LITERAL(115, 5), // "hight"
QT_MOC_LITERAL(121, 23), // "slot_arbitrary_triangle"
QT_MOC_LITERAL(145, 9), // "left_side"
QT_MOC_LITERAL(155, 10), // "right_side"
QT_MOC_LITERAL(166, 25), // "slot_rectangular_triangle"
QT_MOC_LITERAL(192, 12), // "input_cathet"
QT_MOC_LITERAL(205, 10) // "hypotenuse"

    },
    "Dialog_triangle\0slot_angel_side_triangle\0"
    "\0bottom_side\0angel_bottom_left\0"
    "angel_bottom_right\0slot_isosceles_triangle\0"
    "hight\0slot_arbitrary_triangle\0left_side\0"
    "right_side\0slot_rectangular_triangle\0"
    "input_cathet\0hypotenuse"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog_triangle[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x0a,    1 /* Public */,
       6,    2,   45,    2, 0x0a,    5 /* Public */,
       8,    3,   50,    2, 0x0a,    8 /* Public */,
      11,    2,   57,    2, 0x0a,   12 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    3,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    9,   10,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,   12,   13,

       0        // eod
};

void Dialog_triangle::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dialog_triangle *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_angel_side_triangle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 1: _t->slot_isosceles_triangle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        case 2: _t->slot_arbitrary_triangle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        case 3: _t->slot_rectangular_triangle((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject Dialog_triangle::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dialog_triangle.offsetsAndSize,
    qt_meta_data_Dialog_triangle,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Dialog_triangle_t
, QtPrivate::TypeAndForceComplete<Dialog_triangle, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>


>,
    nullptr
} };


const QMetaObject *Dialog_triangle::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog_triangle::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog_triangle.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dialog_triangle::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
