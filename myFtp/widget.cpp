#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    i=0;
    ui->progressBar->setValue(0);
    ui->progressBar->hide();
    connect(ui->fileList,SIGNAL(itemActivated(QTreeWidgetItem*,int)),this,SLOT(processItem(QTreeWidgetItem*,int)));
 /*   ftp=new QFtp(this);
    ftp->connectToHost("ftp.qt.nokia.com");
    ftp->login();
    ftp->cd("qt");
    ftp->get("INSTALL");
    ftp->close();

    connect(ftp,SIGNAL(commandStarted(int)),this,SLOT(ftpCommandStarted(int)));
    connect(ftp,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinished(int,bool)));
*/
}

Widget::~Widget()
{
    delete ui;
}

void Widget::ftpCommandStarted(int )
{
    if(ftp->currentCommand()==QFtp::ConnectToHost)
    {
        ui->label->setText(tr("connecting....."));
    }
    if(ftp->currentCommand()==QFtp::Login)
    {
        ui->label->setText(tr("Logining......"));
    }
    if(ftp->currentCommand()==QFtp::Get)
    {
        ui->label->setText(tr("Geting......"));
    }
    else if(ftp->currentCommand()==QFtp::Close)
    {
        ui->label->setText(tr("closing......"));
    }
}

void Widget::ftpCommandFinished(int,bool error)
{
    if(ftp->currentCommand()==QFtp::ConnectToHost)
        if(error) ui->label->setText(tr("connectToHost error: %1").arg(ftp->errorString()));
        else ui->label->setText(tr("connect to host succefully!"));
    if(ftp->currentCommand()==QFtp::Login)
        if(error) ui->label->setText(tr("login error: %1").arg(ftp->errorString()));
        else {
            ui->label->setText(tr("Login succefully!"));
            ftp->list();
        }
    if(ftp->currentCommand()==QFtp::Get)
        if(error) ui->label->setText(tr("get error: %1").arg(ftp->errorString()));
        else
        {
            ui->label->setText(tr("get succefully!"));
            //ui->textBrowser->setText(ftp->readAll());
            ui->downloadButton->setEnabled(true);
            file->close();
        }
    if(ftp->currentCommand()==QFtp::List)
    {
        if(isDirectory.isEmpty())
        {
            ui->fileList->addTopLevelItem(new QTreeWidgetItem(QStringList()<<tr("<empty>")));
            ui->fileList->setEnabled(false);
            ui->label->setText(tr("the directory is empty"));
        }
    }
    else if(ftp->currentCommand()==QFtp::Close)
        ui->label->setText(tr("close succefully!"));
}

void Widget::on_connectButton_clicked()
{
    ui->fileList->clear();
    currentPath.clear();
    isDirectory.clear();
    ftp=new QFtp(this);
    connect(ftp,SIGNAL(commandStarted(int)),this,SLOT(ftpCommandStarted(int)));
    connect(ftp,SIGNAL(commandFinished(int,bool)),this,SLOT(ftpCommandFinished(int,bool)));
    connect(ftp,SIGNAL(listInfo(QUrlInfo)),this,SLOT(addToList(QUrlInfo)));
    connect(ftp,SIGNAL(dataTransferProgress(qint64,qint64)),this,SLOT(updateDataTransferProgress(qint64,qint64)));
    QString ftpServer=ui->ftpserverlineEdit->text();
    QString userName=ui->userNamelineEdit->text();
    QString psw=ui->pswlineEdit->text();
    ftp->connectToHost(ftpServer,21);
    ftp->login(userName,psw);

}

void Widget::on_cdToParentButton_clicked()
{
    qDebug()<<("on_cdToParentButton_clicked");
    ui->fileList->clear();
    isDirectory.clear();
    currentPath=currentPath.left(currentPath.indexOf('/'));
    if(currentPath.isEmpty())
    {
        ui->cdToParentButton->setEnabled(false);
        ftp->cd("/");
    }
    else{
        ftp->cd(currentPath);
    }
    ftp->list();
}

void Widget::on_downloadButton_clicked()
{
    qDebug()<<("on_downloadButton_clicked");
    QString fileName=ui->fileList->currentItem()->text(0);
    file=new QFile(fileName);
    if(!file->open(QIODevice::WriteOnly))
    {
        delete file;
       // ui->progressBar->hide();
        return;
    }
    ui->progressBar->show();
    //qDebug()<<"download";
    ui->downloadButton->setEnabled(false);
    ftp->get(ui->fileList->currentItem()->text(0),file);
}

void Widget::updateDataTransferProgress(qint64 readBytes,qint64 totalBytes)
{
    qDebug()<<("updateDataTransferProgress");
    ui->progressBar->setMaximum(totalBytes);
    ui->progressBar->setValue(readBytes);
}

void Widget::addToList(const QUrlInfo &urlInfo)
{
    //i++;
   // qDebug()<<("addToList:")<<i;
    QTreeWidgetItem *item=new QTreeWidgetItem;
    item->setText(0,urlInfo.name());
    item->setText(1,QString::number(urlInfo.size()));
    item->setText(2,urlInfo.owner());
    item->setText(3,urlInfo.group());
    item->setText(4,urlInfo.lastModified().toString("MMM dd yyyy"));
    QPixmap pixmap(urlInfo.isDir()?"../lrc.png":"../list.png");
    item->setIcon(0,pixmap);
    isDirectory[urlInfo.name()]=urlInfo.isDir();

    ui->fileList->addTopLevelItem(item);
    if(!ui->fileList->currentItem())
    {
        ui->fileList->setCurrentItem(ui->fileList->topLevelItem(0));
        ui->fileList->setEnabled(true);
    }

}

void Widget::processItem(QTreeWidgetItem *item,int)
{
  //  qDebug()<<("processItem");
    QString name=item->text(0);
    if(isDirectory.value(name))
    {
        ui->fileList->clear();
        isDirectory.clear();
        currentPath+='/';
        currentPath+=name;
        ftp->cd(name);
        ftp->list();
        ui->cdToParentButton->setEnabled(true);
    }

}


