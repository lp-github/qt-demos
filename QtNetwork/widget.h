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
    void startRequest(QUrl url);

    ~Widget();
protected:
    changeEvent(QEvent *e);

private slots:
    void replyFinished(QNetworkReply *);
    void on_pushButton_clicked();
    void httpFinish();
    void httpReadyRead();
    void UpdateDataReadProgress(qint64,qint64);

private:
    Ui::Widget *ui;
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QUrl *url;
    QFile *file;

};

#endif // WIDGET_H
