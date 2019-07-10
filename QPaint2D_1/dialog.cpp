#include "dialog.h"
#include "ui_dialog.h"
#include<QPainter>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
/*the part of graphics
    QLinearGradient linearGradient(100,150,300,150);
    linearGradient.setColorAt(0,Qt::red);
    linearGradient.setColorAt(0.2,Qt::yellow);
    linearGradient.setColorAt(0.4,Qt::blue);
    linearGradient.setColorAt(0.6,Qt::white);
    linearGradient.setColorAt(0.8,Qt::green);
    linearGradient.setColorAt(1.0,Qt::black);
    painter.setBrush(linearGradient);
    painter.drawRect(80,60,200,100);

    QRadialGradient radiaGradient(200,100,100,200,100);
    radiaGradient.setColorAt(0,Qt::black);
    radiaGradient.setColorAt(0.5,Qt::green);
    radiaGradient.setColorAt(1,Qt::white);
    painter.setBrush(radiaGradient);
    painter.drawEllipse(120,20,160,160);

    QConicalGradient conicalGradient(50,50,30);
    conicalGradient.setColorAt(0,Qt::red);
    conicalGradient.setColorAt(1,Qt::black);
    painter.setBrush(conicalGradient);
    painter.drawEllipse(0,0,100,100);

    QPen pen;
    pen.setColor(QColor(255,0,0));
    pen.setStyle(Qt::DotLine);
    QBrush brush(Qt::red);
    brush.setStyle(Qt::HorPattern);
    painter.setPen(pen);
    painter.setBrush(brush);
    painter.drawRect(100,100,100,100);

    QRectF rectangle(10.0,20.0,60.0,80.0);
    int startAngle=30*16;
    int spanAngle=120*16;
    painter.drawArc(rectangle,startAngle,spanAngle);
*/

/*the part of text
    QRect ff(100,100,200,100);
    painter.setPen(Qt::yellow);
    painter.drawRect(ff);
    painter.setPen(Qt::red);
    QFont font("Arial",20,QFont::Bold,true);
    font.setUnderline(true);
    font.setOverline(true);
    font.setCapitalization(QFont::SmallCaps);
    font.setLetterSpacing(QFont::AbsoluteSpacing,5);
    painter.setFont(font);
    painter.drawText(ff,Qt::AlignCenter,"hello");
*/

//the part of path
    QPainterPath path;
    painter.setPen(Qt::green);
    painter.setBrush(Qt::yellow);
    path.addEllipse(100,100,50,50);
    path.lineTo(100,200);
    painter.drawPath(path);
    QPainterPath path2(path);
    path2.translate(100,30);
    painter.drawPath(path2);

}
