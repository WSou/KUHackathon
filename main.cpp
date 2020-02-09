#include <iostream>
#include <string>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include "mapClass.hpp"
#include "dialog.h"
//creating Map
//double money;

void buttonPress(int number);

int xCoord, yCoord;
QPushButton *buttons[9][9];
QPushButton *dpad[4];



int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  Dialog window;
  layout map;

  window.setFixedSize(1260, 630);


  int y = 5;

  int x = 1;

  for (int i = 0; i < 10; i++)
  {
      for(int k = 0; k < 10; k++)
      {
        if (k != y || i != y)
        {
         buttons[k][i] = new QPushButton("?", &window);
         buttons[k][i]->setGeometry((5+70*(k-1)), (5+70*(i-1)), 60, 60);
         x++;
        }
        else
        {
         buttons[k][i] = new QPushButton("-", &window);
         buttons[k][i]->setGeometry((5+70*(k-1)), (5+70*(i-1)), 60, 60);
         xCoord = k, yCoord = i;
        }
      }
  }

  dpad[0] = new QPushButton("^", &window);
  dpad[1] = new QPushButton(">", &window);
  dpad[2] = new QPushButton("v", &window);
  dpad[3] = new QPushButton("<", &window);

  dpad[0]->setGeometry(935,405,20,50);
  dpad[1]->setGeometry(975,473,50,20);
  dpad[2]->setGeometry(935,515,20,50);
  dpad[3]->setGeometry(865,473,50,20);

  /*
  QLabel *label = new QLabel;
  QObject::connect(dpad[0], SIGNAL (released(dpad[0])),label, SLOT(std::cout << "Hi" << std::endl));
  */

  /*map.mapGen();
  map.mapDraw();
*/

  window.show();
  return a.exec();


/*
  string stringArray[10][10];

  string word;
  word = "Empty space ";

cout << "Testing",  cout <<money;
money = 1000;


//Declaring User Stats
string userName, stats;

cout << "\n";
cout << "Welcome to the Finit!...\n" <<endl;
cout << "A game where your life is at stake and you'll be eating steak \n" <<endl;
cout << "Insert Objective here";
cout << "Now go on! Choose your character... Pick your character wisely because it will not affect anything in the game\n" <<endl;

cout << "[1] Karen" <<endl;
cout << "[2] Boomber" <<endl;
cout << "[3] Evil Kermit" <<endl;
cout << "[4] Harambe" <<endl;
cout << "Type in the number for your character:  ";

int chooseChar;
cin >> chooseChar;

switch(chooseChar)
{
case 1 :
  userName = "Karen";
  stats = "After a long day of talking to managers and driving her kids around she sits down\n"
  "with her mom friends at book club and drinks lots and LOTS of wine\n"
  "Fight with manager = 10"
  "Driving sill = 2";
  break;
case 2 :
  userName = "Derp";
  stats = "The master who started all the memes\n"
  "Making meme = 9\n"
  "Making your Day = 10\n"
  "Sunshine Power = 7\n";
  break;
  case 3 :
  userName = "Evil Kermit";
  stats = "Lovable green frog of the Muppets gang; Is also a pretty sick nasty pirate. \n"
  "Killing power = 4\n"
  "Sipping tea = 9\n"
  "Hi-Ho Power = 10\n";
  break;
  case 4 :
  userName = "Harambe";
  stats = "The glue that help the world together. The one and only gorilla that could solve\n"
  "everything but was brutally murdered in cold blood because someone couldn't control their kid. \n"
  "Luck = 2\n"
  "Tree climbing = 10\n"
  "Respect = 10\n";
  break;
default:
cout <<"Please don't break me :( I'm a noob on this\n";
break;
}
if (userName != ""){
cout << "You have chose " <<userName << "! \n";
cout << stats;
cout <<endl <<endl;
}

//Character starting location



cout << endl <<endl;

  return 0;
  */
}
