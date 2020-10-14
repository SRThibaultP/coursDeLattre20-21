/****************************************************************************
** Meta object code from reading C++ file 'testesdig.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TestESDIg/testesdig.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testesdig.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TestESDIg_t {
    QByteArrayData data[13];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TestESDIg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TestESDIg_t qt_meta_stringdata_TestESDIg = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TestESDIg"
QT_MOC_LITERAL(1, 10, 33), // "on_presenceVehiculeEntree_cli..."
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 18), // "on_etatBPS_clicked"
QT_MOC_LITERAL(4, 64, 18), // "on_etatBPE_clicked"
QT_MOC_LITERAL(5, 83, 33), // "on_presenceVehiculeSortie_cli..."
QT_MOC_LITERAL(6, 117, 28), // "on_modifierAfficheur_clicked"
QT_MOC_LITERAL(7, 146, 21), // "on_DescenteBE_clicked"
QT_MOC_LITERAL(8, 168, 19), // "on_MonteeBE_clicked"
QT_MOC_LITERAL(9, 188, 18), // "on_ArretBE_clicked"
QT_MOC_LITERAL(10, 207, 21), // "on_DescenteBS_clicked"
QT_MOC_LITERAL(11, 229, 19), // "on_MonteeBS_clicked"
QT_MOC_LITERAL(12, 249, 18) // "on_ArretBS_clicked"

    },
    "TestESDIg\0on_presenceVehiculeEntree_clicked\0"
    "\0on_etatBPS_clicked\0on_etatBPE_clicked\0"
    "on_presenceVehiculeSortie_clicked\0"
    "on_modifierAfficheur_clicked\0"
    "on_DescenteBE_clicked\0on_MonteeBE_clicked\0"
    "on_ArretBE_clicked\0on_DescenteBS_clicked\0"
    "on_MonteeBS_clicked\0on_ArretBS_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TestESDIg[] = {

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
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void TestESDIg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TestESDIg *_t = static_cast<TestESDIg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_presenceVehiculeEntree_clicked(); break;
        case 1: _t->on_etatBPS_clicked(); break;
        case 2: _t->on_etatBPE_clicked(); break;
        case 3: _t->on_presenceVehiculeSortie_clicked(); break;
        case 4: _t->on_modifierAfficheur_clicked(); break;
        case 5: _t->on_DescenteBE_clicked(); break;
        case 6: _t->on_MonteeBE_clicked(); break;
        case 7: _t->on_ArretBE_clicked(); break;
        case 8: _t->on_DescenteBS_clicked(); break;
        case 9: _t->on_MonteeBS_clicked(); break;
        case 10: _t->on_ArretBS_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject TestESDIg::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_TestESDIg.data,
      qt_meta_data_TestESDIg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TestESDIg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestESDIg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TestESDIg.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TestESDIg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
