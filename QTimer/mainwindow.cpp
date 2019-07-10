#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtCore>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerUpDate()));
    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerUpDate()
{
    QDateTime date=QDateTime::currentDateTime();
    QString tr=date.toString("yyyy-MM-dd hh:mm:ss");
    ui->label->setText(tr);
}
