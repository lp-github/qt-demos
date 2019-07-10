#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QtNetwork>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    
private slots:
    void on_listenerPushButton_clicked();
    void start();
    void acceptConnection();
    void updateServerProgress();
    void DisplayError(QAbstractSocket::SocketError );

private:
    Ui::Widget *ui;
    QTcpServer tcpServer;
    QTcpSocket* tcpServerconnection;
    qint64 totalBytes;
    qint64 bytesReceived;
    qint64 fileNameSize;
    QString fileName;
    QFile *localFile;
    QByteArray inBlock;


};

#endif // WIDGET_H
