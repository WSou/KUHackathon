#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    QPen pointpen(Qt::black);
    pointpen.setWidth(6);

    QPen linepen(Qt::red);
    linepen.setWidth(2);

    QPen rectpen(Qt::blue);
    rectpen.setWidth(5);

    QPoint points[9];

    painter.setPen(rectpen);
    points[0].setX(10);
    points[0].setY(10);

    points[1].setX(100);
    points[1].setY(100);

    points[2].setX(200);
    points[2].setY(100);

    points[3].setX(150);
    points[3].setY(100 - 50*sqrt(3));


    painter.setPen(linepen);
  //  painter.drawLine(points[0],points[1]);
    painter.drawLine(points[1],points[2]);
    painter.drawLine(points[3],points[2]);
    painter.drawLine(points[3],points[1]);

    painter.setPen(pointpen);
  //  painter.drawPoint(points[0]);
    painter.drawPoint(points[1]);
    painter.drawPoint(points[2]);
    painter.drawPoint(points[3]);

    painter.setPen(rectpen);
    painter.drawRect(10, 10, 500, 500);


}

