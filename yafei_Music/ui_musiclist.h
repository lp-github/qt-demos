/********************************************************************************
** Form generated from reading ui file 'musiclist.ui'
**
** Created: Thu Jul 1 23:24:41 2010
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MUSICLIST_H
#define UI_MUSICLIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_musicList
{
public:
    QGridLayout *gridLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *musicList)
    {
    if (musicList->objectName().isEmpty())
        musicList->setObjectName(QString::fromUtf8("musicList"));
    musicList->resize(300, 320);
    gridLayout = new QGridLayout(musicList);
    gridLayout->setMargin(1);
    gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
    tableWidget = new QTableWidget(musicList);
    if (tableWidget->columnCount() < 2)
        tableWidget->setColumnCount(2);
    QTableWidgetItem *__colItem = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(0, __colItem);
    QTableWidgetItem *__colItem1 = new QTableWidgetItem();
    tableWidget->setHorizontalHeaderItem(1, __colItem1);
    tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
    tableWidget->setMinimumSize(QSize(298, 0));
    tableWidget->setMaximumSize(QSize(298, 16777215));
    QPalette palette;
    QBrush brush(QColor(0, 0, 255, 255));
    brush.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Active, QPalette::Text, brush);
    palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
    QBrush brush1(QColor(120, 120, 120, 255));
    brush1.setStyle(Qt::SolidPattern);
    palette.setBrush(QPalette::Disabled, QPalette::Text, brush1);
    tableWidget->setPalette(palette);
    tableWidget->setAcceptDrops(true);
    tableWidget->setAutoFillBackground(true);
    tableWidget->setStyleSheet(QString::fromUtf8(""));
    tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    tableWidget->setShowGrid(false);

    gridLayout->addWidget(tableWidget, 0, 0, 1, 1);


    retranslateUi(musicList);

    QMetaObject::connectSlotsByName(musicList);
    } // setupUi

    void retranslateUi(QWidget *musicList)
    {
    musicList->setWindowTitle(QApplication::translate("musicList", "\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(0)->setText(QApplication::translate("musicList", "\346\240\207\351\242\230", 0, QApplication::UnicodeUTF8));
    tableWidget->horizontalHeaderItem(1)->setText(QApplication::translate("musicList", "\350\211\272\346\234\257\345\256\266", 0, QApplication::UnicodeUTF8));

#ifndef QT_NO_TOOLTIP
    tableWidget->setToolTip(QApplication::translate("musicList", "\346\222\255\346\224\276\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP

    Q_UNUSED(musicList);
    } // retranslateUi

};

namespace Ui {
    class musicList: public Ui_musicList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICLIST_H
