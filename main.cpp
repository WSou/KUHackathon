#include <iostream>
#include <string>
#include "mapClass.hpp"
using namespace std;

//creating Map
double money;


int main()
{

  layout map;
  map.mapGen();
  map.mapDraw();
  return 0;

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
