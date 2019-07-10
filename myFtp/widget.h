#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QFtp>
#include<QtGui>

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
    void ftpCommandStarted(int );
    void ftpCommandFinished(int,bool);

    void on_connectButton_clicked();

    void on_cdToParentButton_clicked();

    void on_downloadButton_clicked();

    void updateDataTransferProgress(qint64,qint64);
    void addToList(const QUrlInfo &urlInfo);
    void processItem(QTreeWidgetItem*,int);

private:
    Ui::Widget *ui;
    QFtp *ftp;
    QHash<QString,bool> isDirectory;
    QString currentPath;
    QFile *file;
    int i;

};

#endif // WIDGET_H
