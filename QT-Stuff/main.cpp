#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
 QApplication app(argc, argv);

 QWidget window;
 window.setFixedSize(630,630);

 QPushButton buttons[9][9];

 for (int i = 0; i < 10; i++)
 {
     for(int k = 0; k < 10; k++)
     {
       buttons[i][k] = new QPushButton("",)k
       buttons[i][k]->setGeometry(0, 0, 65, 65);
     }
 }

 window.show();
 return app.exec();
}

