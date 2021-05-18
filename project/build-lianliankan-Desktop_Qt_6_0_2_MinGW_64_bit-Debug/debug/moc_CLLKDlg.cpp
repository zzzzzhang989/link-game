/****************************************************************************
** Meta object code from reading C++ file 'CLLKDlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lianliankan/CLLKDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CLLKDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CLLKDlg_t {
    const uint offsetsAndSize[20];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CLLKDlg_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CLLKDlg_t qt_meta_stringdata_CLLKDlg = {
    {
QT_MOC_LITERAL(0, 7), // "CLLKDlg"
QT_MOC_LITERAL(8, 23), // "on_startBaseBtn_clicked"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 23), // "on_startEasyBtn_clicked"
QT_MOC_LITERAL(57, 21), // "on_startGKBtn_clicked"
QT_MOC_LITERAL(79, 18), // "on_btnHelp_clicked"
QT_MOC_LITERAL(98, 18), // "on_btnQuit_clicked"
QT_MOC_LITERAL(117, 18), // "on_btnRank_clicked"
QT_MOC_LITERAL(136, 21), // "on_btnSetting_clicked"
QT_MOC_LITERAL(158, 11) // "changeStyle"

    },
    "CLLKDlg\0on_startBaseBtn_clicked\0\0"
    "on_startEasyBtn_clicked\0on_startGKBtn_clicked\0"
    "on_btnHelp_clicked\0on_btnQuit_clicked\0"
    "on_btnRank_clicked\0on_btnSetting_clicked\0"
    "changeStyle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CLLKDlg[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    0 /* Private */,
       3,    0,   63,    2, 0x08,    1 /* Private */,
       4,    0,   64,    2, 0x08,    2 /* Private */,
       5,    0,   65,    2, 0x08,    3 /* Private */,
       6,    0,   66,    2, 0x08,    4 /* Private */,
       7,    0,   67,    2, 0x08,    5 /* Private */,
       8,    0,   68,    2, 0x08,    6 /* Private */,
       9,    0,   69,    2, 0x08,    7 /* Private */,

 // slots: parameters
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

void CLLKDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CLLKDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_startBaseBtn_clicked(); break;
        case 1: _t->on_startEasyBtn_clicked(); break;
        case 2: _t->on_startGKBtn_clicked(); break;
        case 3: _t->on_btnHelp_clicked(); break;
        case 4: _t->on_btnQuit_clicked(); break;
        case 5: _t->on_btnRank_clicked(); break;
        case 6: _t->on_btnSetting_clicked(); break;
        case 7: _t->changeStyle(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject CLLKDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLLKDlg.offsetsAndSize,
    qt_meta_data_CLLKDlg,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CLLKDlg_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CLLKDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CLLKDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLLKDlg.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CLLKDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
