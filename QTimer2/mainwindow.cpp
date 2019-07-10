#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    startTimer(1000);
    startTimer(5000);
    startTimer(10000);
    qsrand(time(0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *t)
{
    qDebug() << "Timer ID:" <<t->timerId();
    switch(t->timerId())
    {
    case 67108865:
       // qDebug("le");
        ui->label_1->setText(tr("produce a random every second :%1").arg(qrand()%10));
        break;
    case 83886082:
        ui->label_2->setText(tr("the process will be close 5 seconds later"));
        break;
    case 100663299:
        qApp->quit();break;
    }
}
