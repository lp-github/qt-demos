#ifndef MUSICLIST_H
#define MUSICLIST_H

#include <QWidget>

namespace Ui {
    class musicList;
}

class musicList : public QWidget
{
    Q_OBJECT
public:
    musicList(QWidget *parent = 0);
    ~musicList();
    Ui::musicList *ui;

    void listReadSettings();
    void listWriteSettings();



protected:
    void changeEvent(QEvent *e);
    void closeEvent(QCloseEvent *);
    void moveEvent(QMoveEvent *);

signals:
    void listClose();

private:

};

#endif // MUSICLIST_H
