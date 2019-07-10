/********************************************************************************
** Form generated from reading ui file 'widget.ui'
**
** Created: Thu Jul 1 23:24:41 2010
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QLabel>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label_lrc;
    QLabel *label_time;
    QTextEdit *textEdit;
    QToolButton *toolButton_lrcD;
    QLabel *label_palyname;
    QToolButton *toolButton_List;
    QToolButton *toolButton_open;
    QToolButton *toolButton_next;
    QToolButton *toolButton_stop;
    QToolButton *toolButton_playpause;
    QToolButton *toolButton_previous;

    void setupUi(QWidget *Widget)
    {
    if (Widget->objectName().isEmpty())
        Widget->setObjectName(QString::fromUtf8("Widget"));
    Widget->resize(300, 150);
    QFont font;
    font.setFamily(QString::fromUtf8("Terminal"));
    Widget->setFont(font);
    Widget->setStyleSheet(QString::fromUtf8("QWidget{background:qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(0,170,255,255), stop:0.2 rgba(61,214,191,250),stop:0.495 rgba(85,255,255,255), stop:0.8 rgba(61,214,191,250), stop:1 rgba(0,170,255,255))}\n"
"\n"
""));
    label_lrc = new QLabel(Widget);
    label_lrc->setObjectName(QString::fromUtf8("label_lrc"));
    label_lrc->setGeometry(QRect(0, 0, 301, 21));
    label_lrc->setAutoFillBackground(false);
    label_lrc->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
    label_lrc->setAlignment(Qt::AlignCenter);
    label_time = new QLabel(Widget);
    label_time->setObjectName(QString::fromUtf8("label_time"));
    label_time->setGeometry(QRect(200, 35, 91, 21));
    QFont font1;
    font1.setFamily(QString::fromUtf8("Times New Roman"));
    font1.setPointSize(12);
    font1.setBold(true);
    font1.setWeight(75);
    label_time->setFont(font1);
    label_time->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
    textEdit = new QTextEdit(Widget);
    textEdit->setObjectName(QString::fromUtf8("textEdit"));
    textEdit->setEnabled(true);
    textEdit->setGeometry(QRect(280, 40, 16, 16));
    textEdit->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
    toolButton_lrcD = new QToolButton(Widget);
    toolButton_lrcD->setObjectName(QString::fromUtf8("toolButton_lrcD"));
    toolButton_lrcD->setGeometry(QRect(260, 120, 30, 25));
    toolButton_lrcD->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    toolButton_lrcD->setIconSize(QSize(20, 20));
    toolButton_lrcD->setCheckable(true);
    toolButton_lrcD->setAutoRaise(true);
    label_palyname = new QLabel(Widget);
    label_palyname->setObjectName(QString::fromUtf8("label_palyname"));
    label_palyname->setGeometry(QRect(10, 120, 211, 20));
    QPalette palette;
    QBrush brush(QColor(0, 0, 255, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
    QBrush brush1(QColor(0, 0, 0, 0));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Button, brush1);
    QBrush brush2(QColor(0, 0, 0, 255));
    brush2.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Text, brush2);
    palette.setBrush(QPalette::Active, QPalette::Base, brush1);
    palette.setBrush(QPalette::Active, QPalette::Window, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
    palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
    palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
    QBrush brush3(QColor(120, 120, 120, 255));
    brush3.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
    palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
    palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
    palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
    label_palyname->setPalette(palette);
    label_palyname->setStyleSheet(QString::fromUtf8("background:rgb(0,0,0,0,)"));
    toolButton_List = new QToolButton(Widget);
    toolButton_List->setObjectName(QString::fromUtf8("toolButton_List"));
    toolButton_List->setGeometry(QRect(220, 120, 30, 25));
    toolButton_List->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    toolButton_List->setIconSize(QSize(20, 20));
    toolButton_List->setCheckable(true);
    toolButton_List->setAutoRaise(true);
    toolButton_open = new QToolButton(Widget);
    toolButton_open->setObjectName(QString::fromUtf8("toolButton_open"));
    toolButton_open->setGeometry(QRect(180, 120, 30, 25));
    QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(toolButton_open->sizePolicy().hasHeightForWidth());
    toolButton_open->setSizePolicy(sizePolicy);
    toolButton_open->setMinimumSize(QSize(0, 0));
    toolButton_open->setMaximumSize(QSize(35, 34));
    toolButton_open->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    toolButton_open->setIconSize(QSize(20, 20));
    toolButton_open->setAutoRaise(true);
    toolButton_next = new QToolButton(Widget);
    toolButton_next->setObjectName(QString::fromUtf8("toolButton_next"));
    toolButton_next->setGeometry(QRect(144, 71, 35, 34));
    toolButton_next->setMinimumSize(QSize(34, 28));
    toolButton_next->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8(":/images/gtk-media-next-ltr.png")), QIcon::Normal, QIcon::Off);
    toolButton_next->setIcon(icon);
    toolButton_next->setIconSize(QSize(28, 28));
    toolButton_next->setAutoRaise(true);
    toolButton_stop = new QToolButton(Widget);
    toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
    toolButton_stop->setGeometry(QRect(103, 71, 35, 34));
    toolButton_stop->setMinimumSize(QSize(34, 28));
    toolButton_stop->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8(":/images/gtk-media-stop.png")), QIcon::Normal, QIcon::Off);
    toolButton_stop->setIcon(icon1);
    toolButton_stop->setIconSize(QSize(28, 28));
    toolButton_stop->setAutoRaise(true);
    toolButton_playpause = new QToolButton(Widget);
    toolButton_playpause->setObjectName(QString::fromUtf8("toolButton_playpause"));
    toolButton_playpause->setGeometry(QRect(62, 71, 35, 34));
    toolButton_playpause->setMinimumSize(QSize(34, 28));
    toolButton_playpause->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    QIcon icon2;
    icon2.addPixmap(QPixmap(QString::fromUtf8(":/images/gtk-media-play-ltr.png")), QIcon::Normal, QIcon::Off);
    toolButton_playpause->setIcon(icon2);
    toolButton_playpause->setIconSize(QSize(28, 28));
    toolButton_playpause->setAutoRaise(true);
    toolButton_previous = new QToolButton(Widget);
    toolButton_previous->setObjectName(QString::fromUtf8("toolButton_previous"));
    toolButton_previous->setGeometry(QRect(21, 71, 35, 34));
    toolButton_previous->setMinimumSize(QSize(34, 28));
    toolButton_previous->setStyleSheet(QString::fromUtf8("background:rgb(255,255,255,100,)"));
    QIcon icon3;
    icon3.addPixmap(QPixmap(QString::fromUtf8(":/images/gtk-media-next-rtl.png")), QIcon::Normal, QIcon::Off);
    toolButton_previous->setIcon(icon3);
    toolButton_previous->setIconSize(QSize(28, 28));
    toolButton_previous->setAutoRaise(true);

    retranslateUi(Widget);

    QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
    Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    label_lrc->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    label_lrc->setText(QApplication::translate("Widget", "www.yafeilinux.com", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    label_time->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    label_time->setText(QApplication::translate("Widget", "00:00/00:00", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_lrcD->setToolTip(QApplication::translate("Widget", "\346\241\214\351\235\242\346\255\214\350\257\215", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_lrcD->setText(QApplication::translate("Widget", "LRC", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    label_palyname->setToolTip(QString());
#endif // QT_NO_TOOLTIP

    label_palyname->setText(QApplication::translate("Widget", "\345\274\200\346\272\220\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_List->setToolTip(QApplication::translate("Widget", "\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_List->setText(QApplication::translate("Widget", "List", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_open->setToolTip(QApplication::translate("Widget", "\346\211\223\345\274\200\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_open->setText(QApplication::translate("Widget", "Open", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_next->setToolTip(QApplication::translate("Widget", "\344\270\213\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_next->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_stop->setToolTip(QApplication::translate("Widget", "\345\201\234\346\255\242", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_stop->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_playpause->setToolTip(QApplication::translate("Widget", "\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_playpause->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    toolButton_previous->setToolTip(QApplication::translate("Widget", "\344\270\212\344\270\200\351\246\226", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    toolButton_previous->setText(QApplication::translate("Widget", "...", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Widget);
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
