/****************************************************************************
** Meta object code from reading C++ file 'Scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Scene_t {
    QByteArrayData data[16];
    char stringdata[216];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_t qt_meta_stringdata_Scene = {
    {
QT_MOC_LITERAL(0, 0, 5),
QT_MOC_LITERAL(1, 6, 15),
QT_MOC_LITERAL(2, 22, 0),
QT_MOC_LITERAL(3, 23, 10),
QT_MOC_LITERAL(4, 34, 5),
QT_MOC_LITERAL(5, 40, 15),
QT_MOC_LITERAL(6, 56, 12),
QT_MOC_LITERAL(7, 69, 11),
QT_MOC_LITERAL(8, 81, 16),
QT_MOC_LITERAL(9, 98, 17),
QT_MOC_LITERAL(10, 116, 8),
QT_MOC_LITERAL(11, 125, 19),
QT_MOC_LITERAL(12, 145, 19),
QT_MOC_LITERAL(13, 165, 10),
QT_MOC_LITERAL(14, 176, 19),
QT_MOC_LITERAL(15, 196, 19)
    },
    "Scene\0renderCycleDone\0\0toggleFill\0"
    "state\0toggleWireframe\0togglePoints\0"
    "togglePhong\0toggleBlinnPhong\0"
    "toggleRimLighting\0toggleAA\0"
    "showLoadModelDialog\0resetToDefaultScene\0"
    "clearScene\0showOpenSceneDialog\0"
    "showSaveSceneDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       5,    1,   83,    2, 0x0a /* Public */,
       6,    1,   86,    2, 0x0a /* Public */,
       7,    1,   89,    2, 0x0a /* Public */,
       8,    1,   92,    2, 0x0a /* Public */,
       9,    1,   95,    2, 0x0a /* Public */,
      10,    1,   98,    2, 0x0a /* Public */,
      11,    0,  101,    2, 0x0a /* Public */,
      12,    0,  102,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    0,  104,    2, 0x0a /* Public */,
      15,    0,  105,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene *_t = static_cast<Scene *>(_o);
        switch (_id) {
        case 0: _t->renderCycleDone(); break;
        case 1: _t->toggleFill((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->toggleWireframe((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->togglePoints((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->togglePhong((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->toggleBlinnPhong((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->toggleRimLighting((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->toggleAA((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->showLoadModelDialog(); break;
        case 9: _t->resetToDefaultScene(); break;
        case 10: _t->clearScene(); break;
        case 11: _t->showOpenSceneDialog(); break;
        case 12: _t->showSaveSceneDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene::renderCycleDone)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Scene::staticMetaObject = {
    { &AbstractScene::staticMetaObject, qt_meta_stringdata_Scene.data,
      qt_meta_data_Scene,  qt_static_metacall, 0, 0}
};


const QMetaObject *Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Scene.stringdata))
        return static_cast<void*>(const_cast< Scene*>(this));
    return AbstractScene::qt_metacast(_clname);
}

int Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Scene::renderCycleDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE