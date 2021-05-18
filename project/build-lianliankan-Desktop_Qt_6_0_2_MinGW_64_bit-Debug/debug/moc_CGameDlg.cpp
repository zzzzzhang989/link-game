/****************************************************************************
** Meta object code from reading C++ file 'CGameDlg.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lianliankan/CGameDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CGameDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CGameDlg_t {
    const uint offsetsAndSize[30];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CGameDlg_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CGameDlg_t qt_meta_stringdata_CGameDlg = {
    {
QT_MOC_LITERAL(0, 8), // "CGameDlg"
QT_MOC_LITERAL(9, 7), // "ExitWin"
QT_MOC_LITERAL(17, 0), // ""
QT_MOC_LITERAL(18, 11), // "changeStyle"
QT_MOC_LITERAL(30, 19), // "on_btnStart_clicked"
QT_MOC_LITERAL(50, 11), // "OnLButtonUp"
QT_MOC_LITERAL(62, 19), // "on_btnReset_clicked"
QT_MOC_LITERAL(82, 19), // "on_btnPause_clicked"
QT_MOC_LITERAL(102, 18), // "on_btnTips_clicked"
QT_MOC_LITERAL(121, 8), // "time_out"
QT_MOC_LITERAL(130, 10), // "closeEvent"
QT_MOC_LITERAL(141, 12), // "QCloseEvent*"
QT_MOC_LITERAL(154, 18), // "on_btnHelp_clicked"
QT_MOC_LITERAL(173, 18), // "on_btnTool_clicked"
QT_MOC_LITERAL(192, 21) // "on_btnSetting_clicked"

    },
    "CGameDlg\0ExitWin\0\0changeStyle\0"
    "on_btnStart_clicked\0OnLButtonUp\0"
    "on_btnReset_clicked\0on_btnPause_clicked\0"
    "on_btnTips_clicked\0time_out\0closeEvent\0"
    "QCloseEvent*\0on_btnHelp_clicked\0"
    "on_btnTool_clicked\0on_btnSetting_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGameDlg[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   87,    2, 0x08,    1 /* Private */,
       4,    0,   88,    2, 0x08,    2 /* Private */,
       5,    0,   89,    2, 0x08,    3 /* Private */,
       6,    0,   90,    2, 0x08,    4 /* Private */,
       7,    0,   91,    2, 0x08,    5 /* Private */,
       8,    0,   92,    2, 0x08,    6 /* Private */,
       9,    0,   93,    2, 0x08,    7 /* Private */,
      10,    1,   94,    2, 0x08,    8 /* Private */,
      12,    0,   97,    2, 0x08,   10 /* Private */,
      13,    0,   98,    2, 0x08,   11 /* Private */,
      14,    0,   99,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CGameDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CGameDlg *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ExitWin(); break;
        case 1: _t->changeStyle(); break;
        case 2: _t->on_btnStart_clicked(); break;
        case 3: _t->OnLButtonUp(); break;
        case 4: _t->on_btnReset_clicked(); break;
        case 5: _t->on_btnPause_clicked(); break;
        case 6: _t->on_btnTips_clicked(); break;
        case 7: _t->time_out(); break;
        case 8: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 9: _t->on_btnHelp_clicked(); break;
        case 10: _t->on_btnTool_clicked(); break;
        case 11: _t->on_btnSetting_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CGameDlg::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CGameDlg::ExitWin)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CGameDlg::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CGameDlg.offsetsAndSize,
    qt_meta_data_CGameDlg,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CGameDlg_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QCloseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *CGameDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGameDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CGameDlg.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CGameDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CGameDlg::ExitWin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
