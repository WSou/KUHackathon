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
    //QRect rect1 = QRect(560,60,50,50);
    QPainter painter(this);
    QPen pointpen(Qt::white);
    pointpen.setWidth(5);

    QPen linepen(Qt::red);
    linepen.setWidth(5);

    QPen rectpen(Qt::blue);
    rectpen.setWidth(5);

    painter.setPen(linepen);
    painter.drawRect(3, 3, 624, 624);
    painter.drawRect(632,3,1277,624);
    painter.fillRect(3, 3, 624, 624, Qt::white);
    painter.fillRect(632,3,1277,624, Qt::black);
    //painter.drawRect(rect1);


}
