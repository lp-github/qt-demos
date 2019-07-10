#include "widget.h"
#include "ui_widget.h"
#include<QFileDialog>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    loadSize=4*1024;
    totalBytes=0;
    bytesWritten=0;
    bytesToWrite=0;
    tcpClient=new QTcpSocket(this);
    connect(tcpClient,SIGNAL(connected()),this,SLOT(startTransfer()));
    connect(tcpClient,SIGNAL(bytesWritten(qint64)),this,SLOT(updateClientProgress(qint64)));
    connect(tcpClient,SIGNAL(error(QAbstractSocket::SocketError))
            ,this,SLOT(displayError(QAbstractSocket::SocketError)));
    ui->sendpushButton->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::openFile()
{
    fileName=QFileDialog::getOpenFileName(this);
    if(!fileName.isEmpty())
    {
        ui->sendpushButton->setEnabled(true);
        ui->ClientStatuslabel->setText(tr("open %1 successfully!").arg(fileName));
    }
}



void Widget::send()
{
    ui->sendpushButton->setEnabled(false);
    bytesWritten=0;

    ui->ClientStatuslabel->setText(tr("connecting......"));
    tcpClient->connectToHost(ui->hostlineEdit->text(),ui->portlineEdit->text().toInt());

}



void Widget::startTransfer()
{
    localFile = new QFile(fileName);
    if(!localFile->open(QFile::ReadOnly))
    {
        qDebug()<<"open file error";
        return;
    }
    totalBytes=localFile->size();
    QDataStream sendOut(&outBlock,QIODevice::WriteOnly);
    sendOut.setVersion(QDataStream::Qt_4_6);
    QString currentFileName=fileName.right(fileName.size()-fileName.lastIndexOf('/')-1);
    sendOut<<qint64(0)<<qint64(0)<<currentFileName;
    totalBytes+=outBlock.size();
    sendOut.device()->seek(0);
    sendOut<<totalBytes<<(qint64(outBlock.size()-sizeof(qint64)*2));
    bytesToWrite=totalBytes-tcpClient->write(outBlock);
    ui->ClientStatuslabel->setText(tr("connect successfully!"));
    outBlock.resize(0);
}




void Widget::updateClientProgress(qint64 numBytes)
{
    bytesWritten+=(int)numBytes;
    if(bytesWritten>0)
    {
        outBlock=localFile->read(qMin(bytesToWrite,loadSize));
        bytesToWrite-=(int)tcpClient->write(outBlock);
        outBlock.resize(0);

    }
    else
        localFile->close();
    ui->ClientprogressBar->setMaximum(totalBytes);
    ui->ClientprogressBar->setValue(bytesWritten);
    if(bytesWritten==totalBytes)
    {
        ui->ClientStatuslabel->setText(tr("send successfully!"));
        localFile->close();
        tcpClient->close();
    }
}



void Widget::displayError(QAbstractSocket::SocketError)
{
    qDebug()<<tcpClient->errorString();
    tcpClient->close();
    ui->ClientprogressBar->reset();
    ui->ClientStatuslabel->setText(tr("ready..."));
    ui->sendpushButton->setEnabled(true);
}

void Widget::on_openpushButton_clicked()
{
    openFile();
}

void Widget::on_sendpushButton_clicked()
{
    send();
}
