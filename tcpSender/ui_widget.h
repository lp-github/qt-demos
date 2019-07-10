/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sun Nov 18 21:31:13 2012
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
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *ClientStatuslabel;
    QPushButton *openpushButton;
    QPushButton *sendpushButton;
    QProgressBar *ClientprogressBar;
    QLineEdit *hostlineEdit;
    QLineEdit *portlineEdit;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 66, 17));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 66, 17));
        ClientStatuslabel = new QLabel(Widget);
        ClientStatuslabel->setObjectName(QString::fromUtf8("ClientStatuslabel"));
        ClientStatuslabel->setGeometry(QRect(20, 180, 311, 17));
        openpushButton = new QPushButton(Widget);
        openpushButton->setObjectName(QString::fromUtf8("openpushButton"));
        openpushButton->setGeometry(QRect(40, 240, 98, 27));
        sendpushButton = new QPushButton(Widget);
        sendpushButton->setObjectName(QString::fromUtf8("sendpushButton"));
        sendpushButton->setGeometry(QRect(220, 240, 98, 27));
        ClientprogressBar = new QProgressBar(Widget);
        ClientprogressBar->setObjectName(QString::fromUtf8("ClientprogressBar"));
        ClientprogressBar->setGeometry(QRect(40, 140, 311, 23));
        ClientprogressBar->setValue(0);
        hostlineEdit = new QLineEdit(Widget);
        hostlineEdit->setObjectName(QString::fromUtf8("hostlineEdit"));
        hostlineEdit->setGeometry(QRect(100, 40, 211, 27));
        portlineEdit = new QLineEdit(Widget);
        portlineEdit->setObjectName(QString::fromUtf8("portlineEdit"));
        portlineEdit->setGeometry(QRect(100, 90, 211, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "Host:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "port:", 0, QApplication::UnicodeUTF8));
        ClientStatuslabel->setText(QApplication::translate("Widget", "state:Wating for open file!", 0, QApplication::UnicodeUTF8));
        openpushButton->setText(QApplication::translate("Widget", "open", 0, QApplication::UnicodeUTF8));
        sendpushButton->setText(QApplication::translate("Widget", "send", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
