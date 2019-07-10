/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun Nov 18 22:42:18 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *receiverStatuslabel;
    QProgressBar *progressBar;
    QPushButton *listenerPushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        receiverStatuslabel = new QLabel(Widget);
        receiverStatuslabel->setObjectName(QString::fromUtf8("receiverStatuslabel"));
        receiverStatuslabel->setGeometry(QRect(120, 90, 131, 17));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(30, 130, 331, 23));
        progressBar->setValue(0);
        listenerPushButton = new QPushButton(Widget);
        listenerPushButton->setObjectName(QString::fromUtf8("listenerPushButton"));
        listenerPushButton->setGeometry(QRect(170, 180, 111, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        receiverStatuslabel->setText(QApplication::translate("Widget", "the port of server", 0, QApplication::UnicodeUTF8));
        listenerPushButton->setText(QApplication::translate("Widget", "start to listen", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
