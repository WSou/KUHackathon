#include <iostream>
#include <string>
using namespace std;

void map();


int main()
{

//creating Map
double money;
string stringArray[10][10];

 string word;
  word = "Empty space ";

  for (int i = 0; i < 10; i++)
  for (int j = 0; j < 10; j++)
  {
      stringArray[i][j] = string(word);
      
  }

//condition
stringArray [2][2] = "Bad spot", money = -100;
stringArray [1][2] = "Bad spot", money = -50;
stringArray [2][5] = "Bad spot", money = -60;
stringArray [2][6] = "Bad spot", money = -20;
stringArray [7][2] = "Bad spot", money = -20;
stringArray [2][3] = "Bad spot", money = -40;
stringArray [6][2] = "Bad spot", money = -50;
stringArray [2][2] = "Bad spot", money = -20;
cout << stringArray [2][2];

  for (int i = 0; i < 10; i++)
  for (int j = 0; j < 10; j++)
  {
   cout << stringArray[i][j];
      
  }
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
int luck;
cin >> chooseChar;

switch(chooseChar)
{
case 1 :
  userName = "Karen";
  stats = "after a long day of talking to managers and driving her kids around she sits down\n"
  "with her mom friends at book club and drinks lots and LOTS of wine\n" ;
  break;
case 2 :
  userName = "Derp";
  luck  = 3;
  stats = "The master who started all the memes\n"
  "Killing power = 2\n"
  "Sipping tea = 10\n"
  "Singing Power = 5\n";
  break;
  case 3 :
  userName = "Evil Kermit";
  stats = "Lovable green frog of the Muppets gang; Is also a pretty sick nasty pirate. \n"
  "Killing power = 2\n"
  "Sipping tea = 10\n"
  "Singing power = 5\n";
  break;
  case 4 :
  userName = "Harambe";
  stats = "The glue that help the world together. The one and only gorilla that could solve\n"
  "everything but was brutally murdered in cold blood because someone couldn't control their kid. \n"
  "Killing power = 2\n"
  "Sipping tea = 10\n"
  "Singing ower = 5\n";
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
}
