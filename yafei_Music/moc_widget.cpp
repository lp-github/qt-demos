/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created: Fri Jul 23 16:02:22 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "widget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      27,   19,    7,    7, 0x08,
      71,   60,    7,    7, 0x08,
     110,   19,    7,    7, 0x08,
     143,    7,    7,    7, 0x08,
     172,    7,    7,    7, 0x08,
     201,    7,    7,    7, 0x08,
     235,    7,    7,    7, 0x08,
     268,    7,    7,    7, 0x08,
     297,    7,    7,    7, 0x08,
     314,    7,    7,    7, 0x08,
     326,  324,    7,    7, 0x08,
     384,  324,    7,    7, 0x08,
     437,    7,    7,    7, 0x08,
     458,    7,    7,    7, 0x08,
     505,    7,    7,    7, 0x08,
     518,    7,    7,    7, 0x08,
     536,  529,    7,    7, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Widget[] = {
    "Widget\0\0mySignal()\0checked\0"
    "on_toolButton_List_clicked(bool)\0"
    "row,column\0tableWidget_cellDoubleClicked(int,int)\0"
    "on_toolButton_lrcD_clicked(bool)\0"
    "on_toolButton_next_clicked()\0"
    "on_toolButton_stop_clicked()\0"
    "on_toolButton_playpause_clicked()\0"
    "on_toolButton_previous_clicked()\0"
    "on_toolButton_open_clicked()\0"
    "showTime(qint64)\0Timeout()\0,\0"
    "musicInformationStateChanged(Phonon::State,Phonon::State)\0"
    "mediaObjectStateChanged(Phonon::State,Phonon::State)\0"
    "musicAboutToFinish()\0"
    "currentMusicSourceChanged(Phonon::MediaSource)\0"
    "removeSlot()\0exitSlot()\0reason\0"
    "iconActivated(QSystemTrayIcon::ActivationReason)\0"
};

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget,
      qt_meta_data_Widget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: mySignal(); break;
        case 1: on_toolButton_List_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: tableWidget_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: on_toolButton_lrcD_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: on_toolButton_next_clicked(); break;
        case 5: on_toolButton_stop_clicked(); break;
        case 6: on_toolButton_playpause_clicked(); break;
        case 7: on_toolButton_previous_clicked(); break;
        case 8: on_toolButton_open_clicked(); break;
        case 9: showTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: Timeout(); break;
        case 11: musicInformationStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 12: mediaObjectStateChanged((*reinterpret_cast< Phonon::State(*)>(_a[1])),(*reinterpret_cast< Phonon::State(*)>(_a[2]))); break;
        case 13: musicAboutToFinish(); break;
        case 14: currentMusicSourceChanged((*reinterpret_cast< Phonon::MediaSource(*)>(_a[1]))); break;
        case 15: removeSlot(); break;
        case 16: exitSlot(); break;
        case 17: iconActivated((*reinterpret_cast< QSystemTrayIcon::ActivationReason(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void Widget::mySignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
