/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Nov 17 20:22:01 2012
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
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *messagelabel;
    QLineEdit *HostlineEdit;
    QLineEdit *portlineEdit;
    QPushButton *pushButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 71, 21));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 100, 41, 17));
        messagelabel = new QLabel(Widget);
        messagelabel->setObjectName(QString::fromUtf8("messagelabel"));
        messagelabel->setGeometry(QRect(10, 160, 181, 17));
        HostlineEdit = new QLineEdit(Widget);
        HostlineEdit->setObjectName(QString::fromUtf8("HostlineEdit"));
        HostlineEdit->setGeometry(QRect(70, 50, 251, 27));
        portlineEdit = new QLineEdit(Widget);
        portlineEdit->setObjectName(QString::fromUtf8("portlineEdit"));
        portlineEdit->setGeometry(QRect(70, 100, 251, 27));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(250, 240, 98, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "port:", 0, QApplication::UnicodeUTF8));
        messagelabel->setText(QApplication::translate("Widget", "the received message:", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Widget", "connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
