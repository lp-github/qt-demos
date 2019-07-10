/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Sat Nov 17 01:59:28 2012
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
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *ftpserverlineEdit;
    QLabel *label_3;
    QLineEdit *userNamelineEdit;
    QLineEdit *pswlineEdit;
    QLabel *label_4;
    QTreeWidget *fileList;
    QProgressBar *progressBar;
    QPushButton *cdToParentButton;
    QPushButton *downloadButton;
    QPushButton *connectButton;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 300);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 230, 371, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 0, 81, 21));
        ftpserverlineEdit = new QLineEdit(Widget);
        ftpserverlineEdit->setObjectName(QString::fromUtf8("ftpserverlineEdit"));
        ftpserverlineEdit->setGeometry(QRect(100, 0, 291, 27));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 40, 41, 16));
        userNamelineEdit = new QLineEdit(Widget);
        userNamelineEdit->setObjectName(QString::fromUtf8("userNamelineEdit"));
        userNamelineEdit->setGeometry(QRect(50, 40, 113, 27));
        pswlineEdit = new QLineEdit(Widget);
        pswlineEdit->setObjectName(QString::fromUtf8("pswlineEdit"));
        pswlineEdit->setGeometry(QRect(210, 40, 81, 27));
        pswlineEdit->setEchoMode(QLineEdit::Password);
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(170, 40, 41, 20));
        fileList = new QTreeWidget(Widget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        fileList->setGeometry(QRect(50, 70, 256, 161));
        progressBar = new QProgressBar(Widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(50, 270, 241, 23));
        progressBar->setValue(24);
        cdToParentButton = new QPushButton(Widget);
        cdToParentButton->setObjectName(QString::fromUtf8("cdToParentButton"));
        cdToParentButton->setGeometry(QRect(300, 230, 98, 27));
        downloadButton = new QPushButton(Widget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(300, 260, 98, 27));
        connectButton = new QPushButton(Widget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(300, 40, 98, 27));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Widget", "FTP server:", 0, QApplication::UnicodeUTF8));
        ftpserverlineEdit->setText(QApplication::translate("Widget", "ftp.qt.nokia.com", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Widget", "user:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        userNamelineEdit->setToolTip(QApplication::translate("Widget", "the default username is anonmous, the psw is any", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        userNamelineEdit->setText(QApplication::translate("Widget", "anonymous", 0, QApplication::UnicodeUTF8));
        pswlineEdit->setText(QApplication::translate("Widget", "123456", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget", "psw:", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = fileList->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("Widget", "modify", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(3, QApplication::translate("Widget", "group", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(2, QApplication::translate("Widget", "owner", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(1, QApplication::translate("Widget", "size", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("Widget", "file", 0, QApplication::UnicodeUTF8));
        cdToParentButton->setText(QApplication::translate("Widget", "cd to parent", 0, QApplication::UnicodeUTF8));
        downloadButton->setText(QApplication::translate("Widget", "download", 0, QApplication::UnicodeUTF8));
        connectButton->setText(QApplication::translate("Widget", "connect", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
