/****************************************************************************
** Meta object code from reading C++ file 'livraison_veichule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projetQT/livraison_veichule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'livraison_veichule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Livraison_veichule_t {
    QByteArrayData data[12];
    char stringdata0[271];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Livraison_veichule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Livraison_veichule_t qt_meta_stringdata_Livraison_veichule = {
    {
QT_MOC_LITERAL(0, 0, 18), // "Livraison_veichule"
QT_MOC_LITERAL(1, 19, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(4, 68, 26), // "on_pushButton_trie_clicked"
QT_MOC_LITERAL(5, 95, 22), // "on_ajouter_liv_clicked"
QT_MOC_LITERAL(6, 118, 21), // "on_modifier_2_clicked"
QT_MOC_LITERAL(7, 140, 22), // "on_supprimer_2_clicked"
QT_MOC_LITERAL(8, 163, 27), // "on_ajouter_vehicule_clicked"
QT_MOC_LITERAL(9, 191, 22), // "on_modifierveh_clicked"
QT_MOC_LITERAL(10, 214, 23), // "on_supprimerveh_clicked"
QT_MOC_LITERAL(11, 238, 32) // "on_pushButton_search_liv_clicked"

    },
    "Livraison_veichule\0on_pushButton_8_clicked\0"
    "\0on_pushButton_9_clicked\0"
    "on_pushButton_trie_clicked\0"
    "on_ajouter_liv_clicked\0on_modifier_2_clicked\0"
    "on_supprimer_2_clicked\0"
    "on_ajouter_vehicule_clicked\0"
    "on_modifierveh_clicked\0on_supprimerveh_clicked\0"
    "on_pushButton_search_liv_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Livraison_veichule[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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

       0        // eod
};

void Livraison_veichule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Livraison_veichule *_t = static_cast<Livraison_veichule *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_8_clicked(); break;
        case 1: _t->on_pushButton_9_clicked(); break;
        case 2: _t->on_pushButton_trie_clicked(); break;
        case 3: _t->on_ajouter_liv_clicked(); break;
        case 4: _t->on_modifier_2_clicked(); break;
        case 5: _t->on_supprimer_2_clicked(); break;
        case 6: _t->on_ajouter_vehicule_clicked(); break;
        case 7: _t->on_modifierveh_clicked(); break;
        case 8: _t->on_supprimerveh_clicked(); break;
        case 9: _t->on_pushButton_search_liv_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Livraison_veichule::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Livraison_veichule.data,
      qt_meta_data_Livraison_veichule,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Livraison_veichule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Livraison_veichule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Livraison_veichule.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Livraison_veichule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
