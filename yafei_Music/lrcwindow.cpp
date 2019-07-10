#include "lrcwindow.h"
#include <QMouseEvent>
#include <QMenu>
#include <QTimer>
#include <QPainter>
#include <QDebug>

lrcWindow::lrcWindow(QWidget *parent):
      QLabel(parent)
{
    this->setWindowFlags(Qt::SubWindow |Qt::FramelessWindowHint| Qt::WindowStaysOnTopHint);
    this->resize(1024,60);
    this->setText(tr("Music ..."));
    this->setAttribute(Qt::WA_TranslucentBackground);//����͸��

    this->setCursor(Qt::OpenHandCursor);

    exit = new QAction(tr("����(&D)"),this);
    connect(exit,SIGNAL(triggered()),this,SLOT(close()));

    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timeout()));

    this->move(400,700);

    lrcWidth = 0;
}

void lrcWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        dragPosition = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
    else if(event->button() == Qt::MidButton)//���������
        close();
}

void lrcWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons() & Qt::LeftButton)
    {
        move(e->globalPos() - dragPosition);
        e->accept();
    }
}

void lrcWindow::contextMenuEvent(QContextMenuEvent *ev)
{
    QMenu menu;
    menu.addAction(exit);
    menu.exec(ev->globalPos());
}

void lrcWindow::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    QFont font(tr("Times New Roman"),30,QFont::Bold);
    painter.setFont(font);
    QLinearGradient lg(0,20,0,50);
    lg.setColorAt(0,QColor(0,170,255,255));
    lg.setColorAt(0.2,QColor(61,214,191,250));
    lg.setColorAt(0.5,QColor(85,255,255,255));
    lg.setColorAt(0.8,QColor(61,214,191,250));
    lg.setColorAt(1,QColor(0,170,255,255));
    painter.setBrush(lg);
    painter.setPen(Qt::NoPen);
    QPainterPath textPath;
    textPath.addText(0,50,font,this->text());
    painter.drawPath(textPath);

    length = textPath.currentPosition().x();

    painter.setPen(Qt::yellow);
    painter.drawText(0,14,lrcWidth,50,Qt::AlignLeft,this->text());

}

void lrcWindow::timeout()
{
    lrcWidth += length/85;
    this->update();
}

void lrcWindow::setLrcWidth()
{
    lrcWidth = 0;
}

