#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    totalBytes=0;
    bytesReceived=0;
    fileNameSize=0;
    connect(&tcpServer,SIGNAL(newConnection()),this,SLOT(acceptConnection()));
}

Widget::~Widget()
{
    delete ui;
}


void Widget::start()
{
    ui->listenerPushButton->setEnabled(false);
    bytesReceived=0;
    if(!tcpServer.listen(QHostAddress::LocalHost,6666))
    {
        qDebug()<<tcpServer.errorString();
        close();
        return;
    }
    ui->receiverStatuslabel->setText(tr("linstener"));
}

void Widget::acceptConnection()
{
    tcpServerconnection=tcpServer.nextPendingConnection();
    connect(tcpServerconnection,SIGNAL(readyRead()),this,SLOT(updateServerProgress()));
    connect(tcpServerconnection,SIGNAL(error(QAbstractSocket::SocketError))
            ,this,SLOT(DisplayError(QAbstractSocket::SocketError)));
            ui->receiverStatuslabel->setText(tr("accept connection"));
    tcpServer.close();
}



void Widget::updateServerProgress()
{
    QDataStream in(tcpServerconnection);
    in.setVersion(QDataStream::Qt_4_6);
    if(bytesReceived<=sizeof(qint64)*2)
    {
        if((tcpServerconnection->bytesAvailable()>=sizeof(qint64)*2)&&(fileNameSize==0))
        {
            in>>totalBytes>>fileNameSize;
            bytesReceived+=sizeof(qint64)*2;
        }
        if((tcpServerconnection->bytesAvailable()>=fileNameSize)&&(fileNameSize!=0))
        {
            in>>totalBytes>>fileName;
            ui->receiverStatuslabel->setText(tr("receive file:%1").arg(fileName));
            bytesReceived+=fileNameSize;

            localFile=new QFile(fileName);
            if(!localFile->open(QIODevice::WriteOnly))
            {
                qDebug()<<"open error!";
                return;
            }
        }
        else
            return;
    }
    if(bytesReceived<totalBytes)
    {
        bytesReceived+=tcpServerconnection->bytesAvailable();
        inBlock=tcpServerconnection->readAll();
        localFile->write(inBlock);
        inBlock.resize(0);
    }

    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesReceived);

    if(bytesReceived==totalBytes)
    {
        tcpServerconnection->close();
        localFile->close();
        ui->listenerPushButton->setEnabled(true);
        ui->receiverStatuslabel->setText(tr("receive all!"));
    }
}


void Widget::DisplayError(QAbstractSocket::SocketError)
{
    qDebug()<<tcpServerconnection->errorString();
    tcpServerconnection->close();
    ui->progressBar->reset();
    ui->receiverStatuslabel->setText(tr("server is ready"));
    ui->listenerPushButton->setEnabled(true);
}

void Widget::on_listenerPushButton_clicked()
{
    start();
}
