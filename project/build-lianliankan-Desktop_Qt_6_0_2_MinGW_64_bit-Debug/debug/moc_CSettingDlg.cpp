/****************************************************************************
** Meta object code from reading C++ file 'CSettingDlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lianliankan/CSettingDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSettingDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CSettingDlg_t {
    const uint offsetsAndSize[12];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CSettingDlg_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CSettingDlg_t qt_meta_stringdata_CSettingDlg = {
    {
QT_MOC_LITERAL(0, 11), // "CSettingDlg"
QT_MOC_LITERAL(12, 11), // "changeStyle"
QT_MOC_LITERAL(24, 0), // ""
QT_MOC_LITERAL(25, 22), // "on_rbtnDefautl_clicked"
QT_MOC_LITERAL(48, 7), // "checked"
QT_MOC_LITERAL(56, 19) // "on_rbtnThin_clicked"

    },
    "CSettingDlg\0changeStyle\0\0"
    "on_rbtnDefautl_clicked\0checked\0"
    "on_rbtnThin_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSettingDlg[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   33,    2, 0x08,    1 /* Private */,
       5,    1,   36,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,

       0        // eod
};

void CSettingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CSettingDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeStyle(); break;
        case 1: _t->on_rbtnDefautl_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_rbtnThin_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CSettingDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CSettingDlg::changeStyle)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CSettingDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CSettingDlg.offsetsAndSize,
    qt_meta_data_CSettingDlg,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CSettingDlg_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>


>,
    nullptr
} };


const QMetaObject *CSettingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSettingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CSettingDlg.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CSettingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void CSettingDlg::changeStyle()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
