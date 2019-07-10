#include "widget.h"
#include "ui_widget.h"
#include<QtNetwork>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    manager=new QNetworkAccessManager(this);
   // connect(manager,SIGNAL(finished(QNetworkReply*)),this,SLOT(replyFinished(QNetworkReply*)));
   //manager->get(QNetworkRequest(QUrl("http://yafeilinux.com")));
    ui->progressBar->hide();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::replyFinished(QNetworkReply *reply)
{
    QTextCodec *codec=QTextCodec::codecForName("utf8");
    QString all=codec->toUnicode(reply->readAll());
    ui->textBrowser->setText(all);
    reply->deleteLater();
}

void Widget::on_pushButton_clicked()
{
    url=ui->lineEdit->text();
    QFileInfo info(url->path());
    QString fileName(info.fileName());
    if(fileName.isEmpty())  fileName="index.html";
    file=new file(fileName);
    if(!file->open(QIODevice::WriteOnly))
    {
        qDebug()<<"open file error";
        delete file;
        file=0;
        return;
    }
    startRequest(url);
    ui->progressBar->setValue(0);
    ui->progressBar->show();

}

void Widget::startRequest(QUrl url)
{
    reply=manager->get(QNetworkRequest(url));
    connect(reply,SIGNAL(finished()),this,SLOT(httpFinish()));
    connect(reply,SIGNAL(readyRead()),this,SLOT(httpReadyRead()));
    connect(reply,SIGNAL(downloadProgress(qint64,qint64)),this,SLOT(UpdateDataReadProgress(qint64,qint64)));

}

void Widget::httpReadyRead()
{
    if(file)  file->write(reply->readAll());
}

void Widget::UpdateDataReadProgress(qint64,qint64)
{
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(bytesRead);
}

void Widget::httpFinish()
{
    ui->progressBar->hide();
    file->flush();
    file->close();
    reply->deleteLater();
    reply=0;
    delete file;
    file=0;

}
