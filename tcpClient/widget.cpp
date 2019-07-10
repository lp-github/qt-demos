#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpSocket=new QTcpSocket(this);
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError))
            ,this,SLOT(displayError(QAbstractSocket::SocketError)));

}

Widget::~Widget()
{
    delete ui;
}


void Widget::newConnect()
{
    blockSize=0;
    tcpSocket->abort();
    tcpSocket->connectToHost(ui->HostlineEdit->text(),ui->portlineEdit->text().toInt());

}


void Widget::readMessage()
{
    QDataStream in(tcpSocket);
    in.setVersion(QDataStream::Qt_4_6);

    if(blockSize==0)
    {
        if(tcpSocket->bytesAvailable()<(int)sizeof(qint16))
            return;
        in>>blockSize;
    }
    if(tcpSocket->bytesAvailable()<blockSize)
        return;
    in>>message;
    ui->messagelabel->setText(message);
}


void Widget::displayError(QAbstractSocket::SocketError)
{
    qDebug()<<tcpSocket->errorString();
}



void Widget::on_pushButton_clicked()
{
    newConnect();
}
