#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    tcpServer=new QTcpServer(this);
    if(!tcpServer->listen(QHostAddress::LocalHost,6666))
    {
        qDebug()<<tcpServer->errorString();
        close();
    }
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(sendMessage()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::sendMessage()
{
    QByteArray block;
    QDataStream out(&block,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_4_6);

    out<<(quint16)0;

    out<<tr("Hello TCP!!!");

    out.device()->seek(0);
    out<<(quint16)(block.size()-sizeof(quint16));

    QTcpSocket* clientConnection=tcpServer->nextPendingConnection();
    connect(clientConnection,SIGNAL(disconnected()),this,SLOT(deleteLater()));
    clientConnection->write(block);
    clientConnection->disconnectFromHost();
    ui->statuslabel->setText("send the message successfully!!");


}
