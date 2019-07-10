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
    void send();
    void startTransfer();
    void updateClientProgress(qint64);
    void displayError(QAbstractSocket::SocketError);
    void openFile();

    void on_openpushButton_clicked();

    void on_sendpushButton_clicked();

private:
    Ui::Widget *ui;
    QTcpSocket* tcpClient;
    QFile *localFile;
    qint64 totalBytes;
    qint64 bytesWritten;
    qint64 bytesToWrite;
    qint64 loadSize;
    QString fileName;
    QByteArray outBlock;

};

#endif // WIDGET_H
